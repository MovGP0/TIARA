/* Ghidra address: 012d19f0 */
/* Ghidra symbol: FUN_012d19f0 */


void FUN_012d19f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined4 local_res20 [2];
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
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_00414610(param_1);
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0xff00);
  local_88 = 0;
  local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,1);
  FUN_00414b50(local_5c,L"Analysis result");
  FUN_00414b50(local_54,L"V1.00");
  FUN_00414b50(local_4c,L"08/08/01 17:00 CET");
  FUN_00414b50(local_44,L"Analysis result");
  FUN_00416ba0(local_3c,L"TINA ",*(undefined8 *)PTR_DAT_02004728);
  FUN_00414b50(local_34,L"(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.");
  local_2c = 0;
  FUN_01d318b0(local_20,local_5c);
  FUN_01d31180(local_20,0,0,0x10);
  FUN_01d311c0(local_20,&local_res18,8);
  FUN_01d311c0(local_20,local_res20,4);
  FUN_01d311c0(local_20,&param_5,4);
  (**(code **)(*local_res10 + 0x40))(local_res10,local_20);
  iVar1 = FUN_01d31a40(local_20);
  if (iVar1 != 0) {
    uVar2 = FUN_01d31a40(local_20);
    FUN_00b047e0(uVar2);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  FUN_00414480(&local_res8);
  return;
}

