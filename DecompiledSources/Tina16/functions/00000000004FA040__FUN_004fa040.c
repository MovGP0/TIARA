/* Ghidra address: 004fa040 */
/* Ghidra symbol: FUN_004fa040 */


void FUN_004fa040(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004fa190;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004fa020;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

