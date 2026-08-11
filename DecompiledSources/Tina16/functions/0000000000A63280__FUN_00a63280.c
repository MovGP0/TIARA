/* Ghidra address: 00a63280 */
/* Ghidra symbol: FUN_00a63280 */


void FUN_00a63280(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + -4);
  }
  if (iVar1 < 1) {
    *(undefined2 *)(param_1 + 0x86) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x86) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x88) + -2 + (longlong)iVar1 * 2);
    FUN_004169f0(param_1 + 0x88,iVar1 + -1);
  }
  return;
}

