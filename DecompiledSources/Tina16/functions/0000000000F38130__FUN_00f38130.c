/* Ghidra address: 00f38130 */
/* Ghidra symbol: FUN_00f38130 */


void FUN_00f38130(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00f38290;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00f38110;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

