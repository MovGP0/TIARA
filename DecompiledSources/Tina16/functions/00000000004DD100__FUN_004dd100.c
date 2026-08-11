/* Ghidra address: 004dd100 */
/* Ghidra symbol: FUN_004dd100 */


void FUN_004dd100(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004dd2d0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004dd0e0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

