/* Ghidra address: 00797d80 */
/* Ghidra symbol: FUN_00797d80 */


void FUN_00797d80(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00797ed0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00797d60;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

