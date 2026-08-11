/* Ghidra address: 019b2f50 */
/* Ghidra symbol: FUN_019b2f50 */


void FUN_019b2f50(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = iVar1 * 2;
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  FUN_019b2da0(param_1,iVar1);
  return;
}

