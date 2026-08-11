/* Ghidra address: 009b3020 */
/* Ghidra symbol: FUN_009b3020 */


void FUN_009b3020(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009b3180;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009b3000;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

