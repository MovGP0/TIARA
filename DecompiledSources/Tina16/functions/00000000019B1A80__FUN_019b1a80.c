/* Ghidra address: 019b1a80 */
/* Ghidra symbol: FUN_019b1a80 */


void FUN_019b1a80(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_019b1be0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_019b1a60;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

