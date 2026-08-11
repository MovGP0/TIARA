/* Ghidra address: 009a0970 */
/* Ghidra symbol: FUN_009a0970 */


void FUN_009a0970(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009a0ad0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009a0950;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

