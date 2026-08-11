/* Ghidra address: 00da2ba0 */
/* Ghidra symbol: FUN_00da2ba0 */


void FUN_00da2ba0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00da2d00;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00da2b80;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

