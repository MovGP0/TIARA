/* Ghidra address: 004fb540 */
/* Ghidra symbol: FUN_004fb540 */


void FUN_004fb540(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004fb6a0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004fb520;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

