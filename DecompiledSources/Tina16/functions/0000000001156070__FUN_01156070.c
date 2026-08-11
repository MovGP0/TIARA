/* Ghidra address: 01156070 */
/* Ghidra symbol: FUN_01156070 */


void FUN_01156070(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 *local_70;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_a8;
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  local_88 = 0;
  local_28 = FUN_01d30b30(&DAT_01d2e8e8,1,param_1,1);
  local_20 = (longlong *)FUN_01cebb70(&PTR_FUN_01cead48,1);
  (**(code **)(*(longlong *)local_20[2] + 0x80))((longlong *)local_20[2],L"Diagram page",param_2);
  FUN_00414b50(local_5c,L"Analysis result");
  FUN_00414b50(local_54,L"V1.00");
  FUN_00414b50(local_4c,L"02/09/96 17:00 CET");
  FUN_00414b50(local_44,L"Analysis result & diagram viewer settings.");
  FUN_00416ba0(local_3c,L"TINA ",*(undefined8 *)PTR_DAT_02004728);
  FUN_00414b50(local_34,L"(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.");
  local_2c = 0;
  FUN_01d318b0(local_28,local_5c);
  (**(code **)(*local_20 + 0x40))(local_20,local_28);
  iVar1 = FUN_01d31a40(local_28);
  if (iVar1 != 0) {
    uVar2 = FUN_01d31a40(local_28);
    FUN_00b047e0(uVar2);
  }
  (**(code **)(*(longlong *)local_20[2] + 0x90))((longlong *)local_20[2]);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  return;
}

