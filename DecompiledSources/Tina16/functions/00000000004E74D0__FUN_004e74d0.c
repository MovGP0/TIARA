/* Ghidra address: 004e74d0 */
/* Ghidra symbol: FUN_004e74d0 */


void FUN_004e74d0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004e7630;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004e74b0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

