/* Ghidra address: 01143d10 */
/* Ghidra symbol: FUN_01143d10 */


void FUN_01143d10(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01143e60;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01143cf0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

