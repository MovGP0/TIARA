/* Ghidra address: 004f7530 */
/* Ghidra symbol: FUN_004f7530 */


void FUN_004f7530(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f7680;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f7510;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

