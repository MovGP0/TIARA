/* Ghidra address: 005c5b70 */
/* Ghidra symbol: FUN_005c5b70 */


void FUN_005c5b70(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005c5cd0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005c5b50;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

