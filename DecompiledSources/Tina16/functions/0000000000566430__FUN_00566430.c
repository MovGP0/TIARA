/* Ghidra address: 00566430 */
/* Ghidra symbol: FUN_00566430 */


void FUN_00566430(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00566590;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00566410;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

