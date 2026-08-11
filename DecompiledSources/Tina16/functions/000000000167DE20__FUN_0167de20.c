/* Ghidra address: 0167de20 */
/* Ghidra symbol: FUN_0167de20 */


void FUN_0167de20(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0167df70;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0167de00;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

