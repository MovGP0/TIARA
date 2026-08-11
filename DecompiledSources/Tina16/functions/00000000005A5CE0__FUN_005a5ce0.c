/* Ghidra address: 005a5ce0 */
/* Ghidra symbol: FUN_005a5ce0 */


void FUN_005a5ce0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005a5e30;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005a5cc0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

