/* Ghidra address: 004fd0d0 */
/* Ghidra symbol: FUN_004fd0d0 */


void FUN_004fd0d0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004fd220;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004fd0b0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

