/* Ghidra address: 00a74a70 */
/* Ghidra symbol: FUN_00a74a70 */


void FUN_00a74a70(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  iVar1 = FUN_00a74940(param_1);
  if (iVar1 <= *(int *)(param_1 + 0x18)) {
    iVar1 = FUN_00a74940(param_1);
    FUN_00a74a20(param_1,iVar1 + 0x32);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 4) = param_3;
  lVar2 = FUN_00414de0(param_1 + 8);
  *(undefined2 *)(lVar2 + -2 + (longlong)*(int *)(param_1 + 0x18) * 2) = param_2;
  return;
}

