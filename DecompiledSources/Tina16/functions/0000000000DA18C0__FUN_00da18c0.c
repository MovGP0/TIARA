/* Ghidra address: 00da18c0 */
/* Ghidra symbol: FUN_00da18c0 */


void FUN_00da18c0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00da1a10;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00da18a0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

