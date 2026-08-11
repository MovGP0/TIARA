/* Ghidra address: 01d694a0 */
/* Ghidra symbol: FUN_01d694a0 */


void FUN_01d694a0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01d69600;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01d69480;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

