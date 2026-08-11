/* Ghidra address: 00614d60 */
/* Ghidra symbol: FUN_00614d60 */


void FUN_00614d60(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00614ec0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00614d40;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

