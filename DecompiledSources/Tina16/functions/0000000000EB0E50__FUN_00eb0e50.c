/* Ghidra address: 00eb0e50 */
/* Ghidra symbol: FUN_00eb0e50 */


void FUN_00eb0e50(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00eb0fa0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00eb0e30;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

