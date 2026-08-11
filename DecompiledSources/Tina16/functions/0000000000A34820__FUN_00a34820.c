/* Ghidra address: 00a34820 */
/* Ghidra symbol: FUN_00a34820 */


undefined1 FUN_00a34820(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_29;
  undefined8 local_20;
  int local_14;
  longlong local_10;
  
  local_20 = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_00414bf0(param_1 + 0x30,&LAB_00a34a04);
  }
  uVar2 = FUN_00414df0(param_1 + 0x30);
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + -4);
  }
  cVar1 = FUN_00a33500(uVar2,uVar3,*(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x151),&local_10,
                       &local_14,&local_20);
  if (cVar1 == '\0') {
    local_29 = 0;
  }
  else {
    iVar4 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
    }
    FUN_00a33eb0(param_1,iVar4 + local_14 + 2);
    FUN_0040d200(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar2 = FUN_00414df0(param_1 + 0x28);
      iVar4 = 0;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
      }
      FUN_00409a70(uVar2,*(undefined8 *)(param_1 + 8),(longlong)iVar4);
    }
    iVar4 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 1 + (longlong)iVar4) = 0;
    if (0 < local_14) {
      iVar4 = 0;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
      }
      FUN_00409a70(local_10,*(longlong *)(param_1 + 8) + 2 + (longlong)iVar4,(longlong)local_14);
    }
    local_29 = FUN_00a34370(param_1,param_2);
  }
  if (local_10 != 0) {
    FUN_004095f0(local_10);
  }
  FUN_00414480(&local_20);
  return local_29;
}

