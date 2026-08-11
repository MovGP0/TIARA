/* Ghidra address: 00bc0ba0 */
/* Ghidra symbol: FUN_00bc0ba0 */


void FUN_00bc0ba0(longlong *param_1,int param_2,int param_3)

{
  if (((int)param_1[2] != param_2) || ((int)param_1[1] != param_3)) {
    *(int *)(param_1 + 2) = param_2;
    *(int *)(param_1 + 1) = param_3;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

