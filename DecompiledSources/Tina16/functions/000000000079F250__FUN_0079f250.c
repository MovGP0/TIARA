/* Ghidra address: 0079f250 */
/* Ghidra symbol: FUN_0079f250 */


void FUN_0079f250(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0079f3a0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0079f230;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

