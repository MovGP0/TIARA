/* Ghidra address: 01680880 */
/* Ghidra symbol: FUN_01680880 */


void FUN_01680880(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_016809d0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01680860;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

