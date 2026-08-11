/* Ghidra address: 01789520 */
/* Ghidra symbol: FUN_01789520 */


void FUN_01789520(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01789680;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01789500;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

