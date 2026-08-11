/* Ghidra address: 0171ee40 */
/* Ghidra symbol: FUN_0171ee40 */


void FUN_0171ee40(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0171efa0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0171ee20;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

