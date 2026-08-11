/* Ghidra address: 01145250 */
/* Ghidra symbol: FUN_01145250 */


void FUN_01145250(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_011453a0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01145230;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

