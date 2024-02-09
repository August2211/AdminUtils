#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x3C0 - 0x280)
// WidgetBlueprintGeneratedClass WBP_Ingame_Compass.WBP_Ingame_Compass_C
class UWBP_Ingame_Compass_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Center;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CompassBase;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          IconCanvas;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CompassMaterial;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, class UWBP_CompassIconBase_C*> CreatedIconMap;                                    // 0x2A8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FGuid>                         VisibleIconIds;                                    // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalLocationType, class UClass*> IconWBPMap;                                        // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                WbpIconBaseClass;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_IngameCompass_DeathMark_C*> DeathMarks;                                        // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UPalLocationPoint*, struct FGuid> DeathMarkMap;                                      // 0x370(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Ingame_Compass_C* GetDefaultObj();

	void GetVisibleIcons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FGuid>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UPalLocationPoint* CallFunc_GetLocationPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ShouldDisplay_ReturnValue, const struct FVector& CallFunc_GetLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UWBP_CompassIconBase_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_UpdateVisibility_InDistance);
	void Refresh_Death_Mark(TMap<struct FGuid, class UPalLocationBase*> LocationMap, const struct FGuid& LocationId, class UPalLocationPoint* LocationPoint, bool AddNew, const struct FGuid& PlayerUId, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FVector& CallFunc_GetLocation_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FGuid& CallFunc_GetLocalPlayerUID_ReturnValue, class UPalLocationPoint_DroppedChest* K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest, bool K2Node_DynamicCast_bSuccess, class UPalLocationPoint_DroppedCharacter* K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FGuid& CallFunc_GetOwnerPlayerUId_ReturnValue, const struct FGuid& CallFunc_GetOwnerPlayerUId_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, TArray<struct FGuid>& CallFunc_Map_Keys_Keys, const struct FGuid& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPalLocationBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_IngameCompass_DeathMark_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsShowInCompass_ReturnValue, class UPalLocationPoint* CallFunc_LocationPoint_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_IngameCompass_DeathMark_C* CallFunc_Create_ReturnValue, const struct FVector& CallFunc_GetLocation_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue, TArray<class UPalLocationPoint*>& CallFunc_Map_Keys_Keys_1, TArray<struct FGuid>& CallFunc_Map_Values_Values, class UPalLocationPoint* CallFunc_Array_Get_Item_2, const struct FGuid& CallFunc_Array_Get_Item_3, const struct FVector& CallFunc_GetLocation_ReturnValue_2, bool CallFunc_EqualEqual_GuidGuid_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3);
	void Setup_Created_Icon_Widget(class UWBP_CompassIconBase_C* CreatedWidget, const struct FGuid& LocationId, const struct FPalLocationUIData& LocationUIData, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, class UWBP_IngameCompass_CustomMarker_C* K2Node_DynamicCast_AsWBP_Ingame_Compass_Custom_Marker, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Map_Contains_ReturnValue, class UPalLocationPoint* CallFunc_GetLocationPoint_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPalLocationPoint_Custom* K2Node_DynamicCast_AsPal_Location_Point_Custom, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetIconType_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, double CallFunc_SetDisplayDistance_Length_ImplicitCast);
	void UpdateIcon(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGuid& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UWBP_CompassIconBase_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_IngameCompass_DeathMark_C* CallFunc_Array_Get_Item_1, double CallFunc_Get_Offset_Value_offSetValue, bool CallFunc_UpdateVisibility_InDistance, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Get_Offset_Value_offSetValue_1, bool CallFunc_IsVisible_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPalLocationPoint* CallFunc_GetLocationPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShouldDisplay_ReturnValue, const struct FVector& CallFunc_GetLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void OnRemovedLocation(struct FGuid& LocationId, class UPalLocationBase* Location, const struct FGuid& CallFunc_GetLocalPlayerUID_ReturnValue, enum class EPalLocationType CallFunc_GetType_ReturnValue, bool CallFunc_IsRequestedPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TMap<struct FGuid, class UPalLocationBase*> CallFunc_GetLocationMap_ReturnValue, class UWBP_CompassIconBase_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
	void On_Added_Location(struct FGuid& LocationId, class UPalLocationBase* Location, enum class EPalLocationType SearchType, const struct FPalLocationUIData& LocationUIData, const struct FPalLocationUIData_TableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPalLocationType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FPalLocationUIData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FPalLocationUIData& K2Node_Copy_ReturnValue, const struct FPalLocationUIData& K2Node_SetFieldsInStruct_StructOut, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FGuid& CallFunc_GetLocalPlayerUID_ReturnValue, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, bool CallFunc_IsRequestedPlayer_ReturnValue, TMap<struct FGuid, class UPalLocationBase*> CallFunc_GetLocationMap_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, TArray<struct FGuid>& CallFunc_Map_Keys_Keys, const struct FGuid& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalLocationPoint* CallFunc_GetLocationPoint_ReturnValue, const struct FVector& CallFunc_GetLocation_ReturnValue, class UPalLocationPoint* CallFunc_LocationPoint_ReturnValue, enum class EPalLocationType CallFunc_GetType_ReturnValue_1, const struct FVector& CallFunc_GetLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, double CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalUICompassIconBase* CallFunc_Create_ReturnValue, class UWBP_CompassIconBase_C* K2Node_DynamicCast_AsWBP_Compass_Icon_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UWBP_IngameCompass_BossTower_C* K2Node_DynamicCast_AsWBP_Ingame_Compass_Boss_Tower, bool K2Node_DynamicCast_bSuccess_1, class UWBP_IngameCompass_FastTravel_C* K2Node_DynamicCast_AsWBP_Ingame_Compass_Fast_Travel, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	void Update_Rotation_From_Pawn(class APawn* TargetPawn, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_NormalizeToRange_Value_ImplicitCast, double CallFunc_NormalizeToRange_Value_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_WBP_Ingame_Compass(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TMap<struct FGuid, class UPalLocationBase*> CallFunc_GetLocationMap_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FGuid>& CallFunc_Map_Keys_Keys, const struct FGuid& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalLocationBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsShowInCompass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


