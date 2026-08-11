/* Ghidra address: 01132a30 */
/* Ghidra symbol: FUN_01132a30 */


void FUN_01132a30(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01132b90;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01132a10;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

