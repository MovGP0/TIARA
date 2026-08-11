/* Ghidra address: 00687b70 */
/* Ghidra symbol: FUN_00687b70 */


void FUN_00687b70(longlong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != *(int *)((longlong)param_1 + 0x14)) {
      *(int *)((longlong)param_1 + 0x14) = param_3;
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (param_2 == 1) {
    if (param_3 != (int)param_1[2]) {
      *(int *)(param_1 + 2) = param_3;
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (param_2 == 2) {
    if (param_3 != (int)param_1[1]) {
      *(int *)(param_1 + 1) = param_3;
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if ((param_2 == 3) && (param_3 != *(int *)((longlong)param_1 + 0xc))) {
    *(int *)((longlong)param_1 + 0xc) = param_3;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

