/* Ghidra address: 01b75f80 */
/* Ghidra symbol: FUN_01b75f80 */


void FUN_01b75f80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x80);
  *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x88);
  lVar3 = *(longlong *)(param_1 + 0x6b0);
  *(longlong *)(lVar3 + 0x88) = param_1;
  *(code **)(lVar3 + 0x80) = FUN_01b76700;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),0,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  lVar3 = *(longlong *)(param_1 + 0x6b0);
  lVar1 = FUN_006efb70(*(undefined8 *)(lVar3 + 0x4e0));
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_38,&PTR_PTR_01b75f40);
  FUN_00b8e650(uVar2,local_30,L"d.ListEnvVars_sSettingsFolder",local_38);
  FUN_006ef050(lVar1,local_30[0]);
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x78))
            (*(longlong **)(lVar1 + 0x10),*(undefined8 *)PTR_DAT_02005010);
  lVar1 = FUN_006efb70(*(undefined8 *)(lVar3 + 0x4e0));
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_48,&PTR_PTR_01b75f50);
  FUN_00b8e650(uVar2,&local_40,L"d.ListEnvVars_sCatalogFolder",local_48);
  FUN_006ef050(lVar1,local_40);
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x78))
            (*(longlong **)(lVar1 + 0x10),*(undefined8 *)PTR_DAT_02004438);
  lVar1 = FUN_006efb70(*(undefined8 *)(lVar3 + 0x4e0));
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_58,&PTR_PTR_01b75f60);
  FUN_00b8e650(uVar2,&local_50,L"d.ListEnvVars_sCommonCatalogFolder",local_58);
  FUN_006ef050(lVar1,local_50);
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x78))
            (*(longlong **)(lVar1 + 0x10),*(undefined8 *)PTR_DAT_02001340);
  lVar3 = FUN_006efb70(*(undefined8 *)(lVar3 + 0x4e0));
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_68,&PTR_PTR_01b75f70);
  FUN_00b8e650(uVar2,&local_60,L"d.ListEnvVars_sTempFolder",local_68);
  FUN_006ef050(lVar3,local_60);
  (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x78))
            (*(longlong **)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_020030c8);
  FUN_00414560(&local_68,8);
  return;
}

