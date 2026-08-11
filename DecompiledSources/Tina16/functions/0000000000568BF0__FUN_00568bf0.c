/* Ghidra address: 00568bf0 */
/* Ghidra symbol: FUN_00568bf0 */


void FUN_00568bf0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00568d50;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00568bd0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

