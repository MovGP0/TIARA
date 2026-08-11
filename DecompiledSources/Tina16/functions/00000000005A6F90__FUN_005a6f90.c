/* Ghidra address: 005a6f90 */
/* Ghidra symbol: FUN_005a6f90 */


void FUN_005a6f90(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005a70f0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005a6f70;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

