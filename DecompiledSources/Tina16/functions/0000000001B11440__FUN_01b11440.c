/* Ghidra address: 01b11440 */
/* Ghidra symbol: FUN_01b11440 */


void FUN_01b11440(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01b115a0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01b11420;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

