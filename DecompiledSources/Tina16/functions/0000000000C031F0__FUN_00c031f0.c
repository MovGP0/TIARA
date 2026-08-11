/* Ghidra address: 00c031f0 */
/* Ghidra symbol: FUN_00c031f0 */


void FUN_00c031f0(longlong *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x51c) != param_2) {
    *(int *)((longlong)param_1 + 0x51c) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

