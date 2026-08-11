/* Ghidra address: 01b129c0 */
/* Ghidra symbol: FUN_01b129c0 */


void FUN_01b129c0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01b12b20;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01b129a0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

