/* Ghidra address: 004f5bb0 */
/* Ghidra symbol: FUN_004f5bb0 */


void FUN_004f5bb0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f5d80;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f5b90;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

