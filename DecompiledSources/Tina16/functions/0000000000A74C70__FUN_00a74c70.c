/* Ghidra address: 00a74c70 */
/* Ghidra symbol: FUN_00a74c70 */


void FUN_00a74c70(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a74da0(param_1);
  if (iVar1 <= *(int *)(param_1 + 0x14)) {
    iVar1 = FUN_00a74da0(param_1);
    FUN_00a74dc0(param_1,iVar1 + 0x32);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x14) * 2) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x14) * 4) = param_3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

