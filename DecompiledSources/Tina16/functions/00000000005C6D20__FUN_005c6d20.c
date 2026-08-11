/* Ghidra address: 005c6d20 */
/* Ghidra symbol: FUN_005c6d20 */


void FUN_005c6d20(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005c6e70;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005c6d00;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

