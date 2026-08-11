/* Ghidra address: 004eb5b0 */
/* Ghidra symbol: FUN_004eb5b0 */


void FUN_004eb5b0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004eb710;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004eb590;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

