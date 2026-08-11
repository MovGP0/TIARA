/* Ghidra address: 009a1c60 */
/* Ghidra symbol: FUN_009a1c60 */


void FUN_009a1c60(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009a1dc0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009a1c40;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

