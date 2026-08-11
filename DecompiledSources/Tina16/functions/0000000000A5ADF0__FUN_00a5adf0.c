/* Ghidra address: 00a5adf0 */
/* Ghidra symbol: FUN_00a5adf0 */


void FUN_00a5adf0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                 undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_40 = param_2;
  local_38 = param_4;
  FUN_0043ea00(local_20,param_5);
  iVar1 = FUN_004170c0(&DAT_00a5b138,local_20[0],1);
  if (iVar1 < 1) {
    local_68 = param_6;
    local_60 = param_7;
    local_58 = 0;
    local_50 = param_9;
    FUN_00a59e50(auStack_88,local_40,local_38,local_20[0]);
  }
  else {
    do {
      FUN_00416dc0(&local_28,local_20[0],1,iVar1 + -1);
      local_68 = param_6;
      local_60 = param_7;
      local_58 = 0;
      local_50 = 0;
      FUN_00a59e50(auStack_88,local_40,local_38,local_28);
      FUN_00416e20(local_20,1,iVar1);
      FUN_0043ea00(&local_30,local_20[0]);
      FUN_00414b50(local_20,local_30);
      iVar1 = FUN_004170c0(&DAT_00a5b138,local_20[0],1);
    } while (0 < iVar1);
    local_68 = param_6;
    local_60 = param_7;
    local_58 = 0;
    local_50 = param_9;
    FUN_00a59e50(auStack_88,local_40,local_38,local_20[0]);
    local_68 = param_6;
    local_60 = param_7;
    local_58 = 0;
    local_50 = param_9;
    FUN_00a59e50(auStack_88,local_40,local_38,param_5);
  }
  *(undefined1 *)(param_1 + 0x31) = param_3;
  FUN_00414ad0(param_1 + 0x38,local_38);
  FUN_00414ad0(param_1 + 0x40,param_5);
  FUN_00414ad0(param_1 + 0x48,param_6);
  FUN_00414ad0(param_1 + 0x50,param_7);
  *(undefined8 *)(param_1 + 0x60) = param_9;
  if (param_8 != 0) {
    FUN_00414ad0(param_1 + 0x58,param_8);
  }
  iVar1 = FUN_00416db0(param_7,L"link");
  if (iVar1 == 0) {
    if (*(longlong *)(param_1 + 0x748) == 0) {
      uVar2 = FUN_00410e60(&DAT_00a4d720,1);
      *(undefined8 *)(param_1 + 0x748) = uVar2;
    }
    FUN_00a5be90(param_1,local_40,*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  FUN_00414560(&local_30,3);
  return;
}

