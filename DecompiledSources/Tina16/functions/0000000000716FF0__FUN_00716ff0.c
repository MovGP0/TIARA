/* Ghidra address: 00716ff0 */
/* Ghidra symbol: FUN_00716ff0 */


void FUN_00716ff0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00717150;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00716fd0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

