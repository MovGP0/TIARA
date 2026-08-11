/* Ghidra address: 00eb2370 */
/* Ghidra symbol: FUN_00eb2370 */


void FUN_00eb2370(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00eb24d0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00eb2350;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

