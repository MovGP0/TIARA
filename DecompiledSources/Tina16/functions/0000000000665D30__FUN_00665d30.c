/* Ghidra address: 00665d30 */
/* Ghidra symbol: FUN_00665d30 */


void FUN_00665d30(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((((int)param_1[2] != param_2) || (*(int *)((longlong)param_1 + 0x14) != param_3)) ||
      ((int)param_1[3] != param_4)) || (*(int *)((longlong)param_1 + 0x1c) != param_5)) {
    *(int *)(param_1 + 2) = param_2;
    *(int *)((longlong)param_1 + 0x14) = param_3;
    *(int *)(param_1 + 3) = param_4;
    *(int *)((longlong)param_1 + 0x1c) = param_5;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

