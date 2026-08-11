/* Ghidra address: 00c31c90 */
/* Ghidra symbol: FUN_00c31c90 */


void FUN_00c31c90(longlong *param_1,int param_2)

{
  if (param_2 != *(int *)((longlong)param_1 + 0x34)) {
    *(int *)((longlong)param_1 + 0x34) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

