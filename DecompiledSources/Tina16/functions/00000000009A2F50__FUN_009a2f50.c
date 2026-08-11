/* Ghidra address: 009a2f50 */
/* Ghidra symbol: FUN_009a2f50 */


void FUN_009a2f50(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009a30b0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009a2f30;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

