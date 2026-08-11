/* Ghidra address: 01a92c10 */
/* Ghidra symbol: FUN_01a92c10 */


void FUN_01a92c10(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01a92d60;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01a92bf0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

