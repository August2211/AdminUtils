#include "Header.h"

void Unload();

HMODULE Module = nullptr;

void(*process_event_original)(const SDK::UObject*, class SDK::UFunction*, void*) = nullptr;
void process_event_hook(SDK::UObject* object, SDK::UFunction* func, void* parms)
{
	static int ChatReceiveIndex = INT_MIN;

	std::string FunctionName = func->GetFullName();

	if (ToLower(func->Name.ToString()).find("spawn") != std::string::npos) std::cout << "Spawn function: " << FunctionName << std::endl;

	if (ChatReceiveIndex == INT_MIN && FunctionName == "Function Pal.PalPlayerState.EnterChat_Receive")
	{
		ChatReceiveIndex = func->Index;
	}

	if (func->Index == ChatReceiveIndex)
	{
		std::cout << "Chat message: " << std::endl;
		SDK::Params::APalPlayerState_EnterChat_Receive_Params* ChatParams = static_cast<SDK::Params::APalPlayerState_EnterChat_Receive_Params*>(parms);

		SDK::APalPlayerState* Sender = static_cast<SDK::APalPlayerState*>(object);
		std::string MessageContent = ChatParams->ChatMessage.Message.ToString();
		std::string Command = ToLower(Split(MessageContent, ' ')[0]);

		std::cout << std::format("Message: \"{}\"", MessageContent) << std::endl;

		if (MessageContent.starts_with("/"))
		{
			if (!Sender)
			{
				process_event_original(object, func, parms);
				return;
			}

			SDK::APlayerController* SenderController = Sender->GetPlayerController();
			if (!SenderController)
			{
				process_event_original(object, func, parms);
				return;
			}

			SDK::APalPlayerController* PalPlayerController = static_cast<SDK::APalPlayerController*>(SenderController);
			if (!PalPlayerController)
			{
				process_event_original(object, func, parms);
				return;
			}

			if (!PalPlayerController->bAdmin)
			{
				process_event_original(object, func, parms);
				return;
			}

			if (Command == "/addexperience")
			{
				try
				{
					std::vector<std::string> Args = Split(MessageContent, ' ');

					if (Args.size() < 2)
					{
						SendChatMessage(Sender, SDK::FString(L"Usage: /AddExperience <Experience>"), Sender->PlayerUId);
						return;
					}

					int32_t Experience = std::stoi(Args[1]);
					Sender->GrantExpForParty(Experience);
					SendChatMessage(Sender, SDK::FString(L"Added experience to your party"), Sender->PlayerUId);

					return;
				}
				catch (std::exception& e)
				{
					std::cout << "Error: " << e.what() << std::endl;
				}
			}

			if (Command == "/giveitem")
			{
				try
				{
					std::vector<std::string> Args = Split(MessageContent, ' ');
					if (Args.size() < 3)
					{
						SendChatMessage(Sender, SDK::FString(L"Usage: /GiveItem <ItemName> <Amount>"), Sender->PlayerUId);
						return;
					}

					SDK::FName ItemName = KeyToFName(Args[1]);
					int32_t Amount = std::stoi(Args[2]);

					SDK::UPalPlayerInventoryData* Inventory = Sender->InventoryData;
					if (!Inventory)
					{
						SendChatMessage(Sender, SDK::FString(L"Error: Inventory not found"), Sender->PlayerUId);
						return;
					}

					Inventory->AddItem_ServerInternal(ItemName, Amount, true);
					SendChatMessage(Sender, SDK::FString(L"Added item to your inventory"), Sender->PlayerUId);
					return;
				}
				catch (std::exception& e)
				{
					std::cout << "Error: " << e.what() << std::endl;
				}
			}

			if (Command == "/spawnpal")
			{
				try
				{
					std::vector<std::string> Args = Split(MessageContent, ' ');
					if (Args.size() < 3)
					{
						SendChatMessage(Sender, SDK::FString(L"Usage: /SpawnPal <PalName> <level>"), Sender->PlayerUId);
						return;
					}

					SDK::FName PalName = KeyToFName(Args[1]);
					int32_t Level = std::stoi(Args[2]);



					SendChatMessage(Sender, SDK::FString(L"Spawned pal"), Sender->PlayerUId);
					return;
				}
				catch (std::exception& e)
				{
					std::cout << "Error: " << e.what() << std::endl;
				}
			}
		}
	}

	process_event_original(object, func, parms);
}

void CreateHooks()
{
	MH_Initialize();

	std::cout << "Hooking functions" << std::endl;
	const auto& ProccessEvent = SDK::GetVFunction<void(*)(const SDK::UObject*, class SDK::UFunction*, void*)>(SDK::UObject::GetDefaultObj(), Offsets::ProcessEventIdx);
	process_event_original = ProccessEvent;
	std::cout << std::format("ProcessEvent address: 0x{:X}\n", reinterpret_cast<uintptr_t>(ProccessEvent));

	MH_CreateHook(ProccessEvent, &process_event_hook, reinterpret_cast<void**>(&process_event_original));
	MH_EnableHook(MH_ALL_HOOKS);
}
void UnloadHooks()
{
	MH_DisableHook(MH_ALL_HOOKS);
	MH_Uninitialize();
}

void Load()
{
	SDK::InitGObjects();

	std::cout << "AdminUtils loading" << std::endl;
	CreateHooks();
	std::cout << "AdminUtils loaded" << std::endl;
}

void Unload()
{
	UnloadHooks();
	std::cout << "AdminUtils unloaded" << std::endl;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		Module = hModule;
		Load();
		break;
	case DLL_PROCESS_DETACH:
		Unload();
		break;
	}
	return TRUE;
}