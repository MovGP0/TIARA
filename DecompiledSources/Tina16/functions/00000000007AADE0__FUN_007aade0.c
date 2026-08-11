/* Ghidra address: 007aade0 */
/* Ghidra symbol: FUN_007aade0 */


void FUN_007aade0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_007aaf30;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_007aadc0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

