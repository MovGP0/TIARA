/* Ghidra address: 016d04a0 */
/* Ghidra symbol: FUN_016d04a0 */


void FUN_016d04a0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_016d0600;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_016d0480;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

