/* Ghidra address: 008483e0 */
/* Ghidra symbol: FUN_008483e0 */


void FUN_008483e0(longlong *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x4a4) != param_2) {
    if (param_2 < 1) {
      param_2 = 1;
    }
    if (param_2 <= *(int *)((longlong)param_1 + 0x4bc)) {
      FUN_008486b0(param_1,param_2 + -1);
    }
    FUN_008428d0(param_1,param_2,(int)param_1[0x9c]);
    if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) != 0) {
      *(int *)(param_1 + 0x93) = *(int *)((longlong)param_1 + 0x4a4) + -1;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

