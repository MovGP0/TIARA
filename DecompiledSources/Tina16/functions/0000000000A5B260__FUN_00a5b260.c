/* Ghidra address: 00a5b260 */
/* Ghidra symbol: FUN_00a5b260 */


void FUN_00a5b260(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  if (iVar1 < 1) {
    *(undefined2 *)(param_1 + 0x36) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x36) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x38) + -2 + (longlong)iVar1 * 2);
    FUN_004169f0(param_1 + 0x38,iVar1 + -1);
  }
  return;
}

