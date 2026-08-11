/* Ghidra address: 007a3d30 */
/* Ghidra symbol: FUN_007a3d30 */


void FUN_007a3d30(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_007a3e80;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_007a3d10;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

