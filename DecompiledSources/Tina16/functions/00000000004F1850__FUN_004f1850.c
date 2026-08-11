/* Ghidra address: 004f1850 */
/* Ghidra symbol: FUN_004f1850 */


void FUN_004f1850(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f19b0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f1830;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

