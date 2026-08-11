/* Ghidra address: 00c4e740 */
/* Ghidra symbol: FUN_00c4e740 */


void FUN_00c4e740(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00c4e8a0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00c4e720;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

