/* Ghidra address: 019f2e60 */
/* Ghidra symbol: FUN_019f2e60 */


undefined8 FUN_019f2e60(longlong param_1,undefined8 param_2,char param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined8 local_28;
  byte local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  local_130 = 0;
  local_28 = 0;
  if (param_3 == '\0') {
    FUN_00414ad0(param_2,&DAT_019f30f8);
  }
  else {
    FUN_00414ad0(param_2,&DAT_019f30e4);
  }
  FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,local_19,&local_1a,&local_1b);
  if (local_1b < 6) {
    if (local_1b == 5) {
      FUN_00416ad0(param_2,&DAT_019f315c);
    }
    else if (local_1b == 1) {
      FUN_00416ad0(param_2,&DAT_019f3108);
    }
    else if (local_1b == 2) {
      FUN_00416ad0(param_2,&PTR_DAT_019f311c);
    }
    else if (local_1b == 3) {
      FUN_00416ad0(param_2,&PTR_DAT_019f3130);
    }
    else if (local_1b == 4) {
      FUN_00416ad0(param_2,L"4000A");
    }
  }
  else if (local_1b == 6) {
    FUN_00416ad0(param_2,&DAT_019f3170);
  }
  else if (local_1b == 7) {
    FUN_00416ad0(param_2,L"AS00");
  }
  else if (local_1b == 8) {
    FUN_00416ad0(param_2,L"ALS00");
  }
  uVar3 = FUN_0172dba0(&PTR_FUN_01729b58,1,*(undefined8 *)(param_1 + 0x58),0,
                       *(undefined8 *)PTR_DAT_02001f18,1);
  FUN_0172dfc0(uVar3,local_128);
  FUN_004169a0(&local_130,local_128);
  iVar2 = FUN_004170c0(L"Open",local_130,1);
  if (iVar2 != 0) {
    FUN_00416ad0(param_2,&DAT_019f31c8);
  }
  FUN_00410f20(uVar3);
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar1 == 0x3ee) {
    FUN_00416ad0(param_2,&LAB_019f31dc);
  }
  FUN_00414480(&local_130);
  FUN_00414480(&local_28);
  return param_2;
}

