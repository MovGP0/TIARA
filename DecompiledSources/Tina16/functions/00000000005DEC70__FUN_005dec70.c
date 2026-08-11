/* Ghidra address: 005dec70 */
/* Ghidra symbol: FUN_005dec70 */


void FUN_005dec70(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005dedc0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005dec50;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

