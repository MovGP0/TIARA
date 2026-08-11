/* Ghidra address: 0055ce70 */
/* Ghidra symbol: FUN_0055ce70 */


void FUN_0055ce70(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0055cfc0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0055ce50;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

