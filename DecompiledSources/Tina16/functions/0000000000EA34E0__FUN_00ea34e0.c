/* Ghidra address: 00ea34e0 */
/* Ghidra symbol: FUN_00ea34e0 */


void FUN_00ea34e0(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00416e20(param_1 + 0x48,*(int *)(param_1 + 0x44) + 1,
               *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44));
  iVar2 = FUN_00ea4420(*(undefined8 *)(param_1 + 0x60));
  if ((iVar2 < param_2) ||
     (FUN_00ea46f0(*(undefined8 *)(param_1 + 0x60),&local_18,param_2), local_18 == 0))
  goto code_r0x00ea36bc;
  uVar1 = *(ushort *)(param_1 + 0x3e);
  if (uVar1 < 0x67) {
    if ((uVar1 == 0x66) || (uVar1 == 0x46)) {
      FUN_00ea2dc0(&local_30,local_18);
      FUN_00414b50(&local_18,local_30);
    }
    else {
      if (uVar1 == 0x49) goto LAB_00ea3636;
      if (uVar1 == 0x4c) goto LAB_00ea35e2;
      if (uVar1 == 0x55) goto LAB_00ea35fe;
    }
  }
  else if (uVar1 == 0x69) {
LAB_00ea3636:
    FUN_00ea2f40(&local_38,local_18);
    FUN_00414b50(&local_18,local_38);
  }
  else if (uVar1 == 0x6c) {
LAB_00ea35e2:
    FUN_0043e600(&local_20,local_18);
    FUN_00414b50(&local_18,local_20);
  }
  else if (uVar1 == 0x75) {
LAB_00ea35fe:
    FUN_0043e5a0(&local_28,local_18);
    FUN_00414b50(&local_18,local_28);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00414b50(param_1 + 0x48,local_18);
    *(undefined4 *)(param_1 + 0x44) = 0x7fffffff;
  }
  else {
    FUN_00414b50(&local_10,local_18);
    FUN_00416ea0(local_10,param_1 + 0x48,*(int *)(param_1 + 0x44) + 1);
    iVar2 = 0;
    if (local_10 != 0) {
      iVar2 = *(int *)(local_10 + -4);
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar2;
  }
code_r0x00ea36bc:
  FUN_00414560(&local_38,6);
  return;
}

