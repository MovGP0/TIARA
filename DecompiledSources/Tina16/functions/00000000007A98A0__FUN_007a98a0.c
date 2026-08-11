/* Ghidra address: 007a98a0 */
/* Ghidra symbol: FUN_007a98a0 */


void FUN_007a98a0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_007a99f0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_007a9880;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

