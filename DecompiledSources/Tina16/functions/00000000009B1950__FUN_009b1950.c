/* Ghidra address: 009b1950 */
/* Ghidra symbol: FUN_009b1950 */


void FUN_009b1950(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009b1aa0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009b1930;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

