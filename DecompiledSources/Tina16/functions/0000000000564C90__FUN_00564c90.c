/* Ghidra address: 00564c90 */
/* Ghidra symbol: FUN_00564c90 */


void FUN_00564c90(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00564df0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00564c70;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

