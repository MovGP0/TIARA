/* Ghidra address: 005b50e0 */
/* Ghidra symbol: FUN_005b50e0 */


void FUN_005b50e0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005b5240;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005b50c0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

