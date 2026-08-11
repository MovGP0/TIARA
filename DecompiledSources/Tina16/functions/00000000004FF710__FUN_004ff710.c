/* Ghidra address: 004ff710 */
/* Ghidra symbol: FUN_004ff710 */


void FUN_004ff710(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004ff860;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004ff6f0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

