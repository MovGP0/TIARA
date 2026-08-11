/* Ghidra address: 00569f60 */
/* Ghidra symbol: FUN_00569f60 */


void FUN_00569f60(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0056a0c0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00569f40;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

