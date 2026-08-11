/* Ghidra address: 01b13cb0 */
/* Ghidra symbol: FUN_01b13cb0 */


void FUN_01b13cb0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01b13e10;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01b13c90;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

