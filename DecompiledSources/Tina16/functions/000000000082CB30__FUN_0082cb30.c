/* Ghidra address: 0082cb30 */
/* Ghidra symbol: FUN_0082cb30 */


void FUN_0082cb30(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0082cc90;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0082cb10;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

