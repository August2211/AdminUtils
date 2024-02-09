#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <sstream>
#include <algorithm>

#include "SDK.hpp"
#include "MinHook/MinHook.h"

SDK::FName KeyToFName(std::string string)
{
	SDK::UKismetStringLibrary* libStr = SDK::UKismetStringLibrary::GetDefaultObj();
	std::wstring w;
	std::copy(string.c_str(), string.c_str() + strlen(string.c_str()), back_inserter(w));
	SDK::FString fString = SDK::FString(w.c_str());
	return libStr->Conv_StringToName(fString);
}

std::vector<std::string> Split(std::string str, char delimiter)
{
	std::vector<std::string> args;
	std::stringstream ss(str);
	std::string tok;

	while (std::getline(ss, tok, delimiter))
	{
		args.push_back(tok);
	}

	return args;
}

void SendChatMessage(SDK::APalPlayerState* Player, SDK::FString message, SDK::FGuid guid)
{
	if (!SDK::UPalUtility::GetDefaultObj()) return;


	SDK::UPalUtility::GetDefaultObj()->SendSystemToPlayerChat(Player, message, guid);
}

std::string ToLower(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}