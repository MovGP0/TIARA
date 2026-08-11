/* Ghidra address: 004e87c0 */
/* Ghidra symbol: FUN_004e87c0 */


void FUN_004e87c0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004e8920;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004e87a0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

