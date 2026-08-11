/* Ghidra address: 005a2130 */
/* Ghidra symbol: FUN_005a2130 */


void FUN_005a2130(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005a2280;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005a2110;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

