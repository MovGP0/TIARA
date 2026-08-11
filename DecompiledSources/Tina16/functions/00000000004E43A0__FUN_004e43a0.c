/* Ghidra address: 004e43a0 */
/* Ghidra symbol: FUN_004e43a0 */


void FUN_004e43a0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004e4500;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004e4380;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

