/* Ghidra address: 00eed960 */
/* Ghidra symbol: FUN_00eed960 */


void FUN_00eed960(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00eedab0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00eed940;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

