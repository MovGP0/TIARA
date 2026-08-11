/* Ghidra address: 0175b1d0 */
/* Ghidra symbol: FUN_0175b1d0 */


void FUN_0175b1d0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0175b320;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0175b1b0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

