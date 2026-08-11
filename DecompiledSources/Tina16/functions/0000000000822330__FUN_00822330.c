/* Ghidra address: 00822330 */
/* Ghidra symbol: FUN_00822330 */


void FUN_00822330(longlong *param_1,int param_2)

{
  if (param_2 != *(int *)((longlong)param_1 + 0x56c)) {
    *(int *)((longlong)param_1 + 0x56c) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

