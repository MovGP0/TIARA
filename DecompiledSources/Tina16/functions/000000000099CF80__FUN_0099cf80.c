/* Ghidra address: 0099cf80 */
/* Ghidra symbol: FUN_0099cf80 */


void FUN_0099cf80(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0099d0e0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0099cf60;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

