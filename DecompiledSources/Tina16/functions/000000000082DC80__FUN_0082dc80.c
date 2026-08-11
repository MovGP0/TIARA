/* Ghidra address: 0082dc80 */
/* Ghidra symbol: FUN_0082dc80 */


void FUN_0082dc80(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0082ddd0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0082dc60;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

