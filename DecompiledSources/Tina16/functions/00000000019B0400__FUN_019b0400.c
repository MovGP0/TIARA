/* Ghidra address: 019b0400 */
/* Ghidra symbol: FUN_019b0400 */


void FUN_019b0400(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_019b0550;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_019b03e0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

