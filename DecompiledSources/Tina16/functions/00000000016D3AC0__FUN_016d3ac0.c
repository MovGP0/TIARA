/* Ghidra address: 016d3ac0 */
/* Ghidra symbol: FUN_016d3ac0 */


void FUN_016d3ac0(longlong param_1,int param_2)

{
  if (param_2 < 0x200) {
    param_2 = 0x200;
  }
  *(int *)(param_1 + 0x49c) = param_2;
  FUN_016d3db0(param_1);
  FUN_016d4030(param_1);
  FUN_016d3ea0(param_1);
  return;
}

