/* Ghidra address: 0065abb0 */
/* Ghidra symbol: FUN_0065abb0 */


void FUN_0065abb0(longlong *param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = FUN_0065acb0(param_1,0);
  }
  if (param_2 != *(int *)((longlong)param_1 + 0x2cc)) {
    (**(code **)(*param_1 + 0x220))(param_1,param_2);
    FUN_0064d560(param_1,param_2);
  }
  return;
}

