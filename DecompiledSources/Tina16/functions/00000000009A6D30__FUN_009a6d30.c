/* Ghidra address: 009a6d30 */
/* Ghidra symbol: FUN_009a6d30 */


void FUN_009a6d30(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009a6e90;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009a6d10;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

