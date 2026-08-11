/* Ghidra address: 005e24d0 */
/* Ghidra symbol: FUN_005e24d0 */


void FUN_005e24d0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005e2620;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005e24b0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

