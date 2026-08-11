/* Ghidra address: 004df9f0 */
/* Ghidra symbol: FUN_004df9f0 */


void FUN_004df9f0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004dfb50;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004df9d0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

