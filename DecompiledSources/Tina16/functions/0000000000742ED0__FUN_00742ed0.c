/* Ghidra address: 00742ed0 */
/* Ghidra symbol: FUN_00742ed0 */


void FUN_00742ed0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x78)) {
    *(int *)(param_1 + 0x78) = param_2;
    FUN_00742de0();
  }
  return;
}

