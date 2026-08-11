/* Ghidra address: 00a0bcb0 */
/* Ghidra symbol: FUN_00a0bcb0 */


void FUN_00a0bcb0(longlong *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x6c) != param_2) {
    FUN_00a0abb0(param_1);
    *(int *)((longlong)param_1 + 0x6c) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

