/* Ghidra address: 00bb4ef0 */
/* Ghidra symbol: FUN_00bb4ef0 */


void FUN_00bb4ef0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00bb5050;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00bb4ed0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

