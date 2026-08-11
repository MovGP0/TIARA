/* Ghidra address: 004e0dc0 */
/* Ghidra symbol: FUN_004e0dc0 */


void FUN_004e0dc0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004e0f20;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004e0da0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

