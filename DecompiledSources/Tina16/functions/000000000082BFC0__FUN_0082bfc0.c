/* Ghidra address: 0082bfc0 */
/* Ghidra symbol: FUN_0082bfc0 */


void FUN_0082bfc0(longlong *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x52c) != param_2) {
    *(int *)((longlong)param_1 + 0x52c) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

