/* Ghidra address: 01ca8c50 */
/* Ghidra symbol: FUN_01ca8c50 */


void FUN_01ca8c50(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01ca8da0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01ca8c30;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

