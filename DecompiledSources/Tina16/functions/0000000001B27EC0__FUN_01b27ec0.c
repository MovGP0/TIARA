/* Ghidra address: 01b27ec0 */
/* Ghidra symbol: FUN_01b27ec0 */


void FUN_01b27ec0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01b28020;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01b27ea0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

