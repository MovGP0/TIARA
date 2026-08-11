/* Ghidra address: 0056cb40 */
/* Ghidra symbol: FUN_0056cb40 */


void FUN_0056cb40(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0056cca0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0056cb20;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

