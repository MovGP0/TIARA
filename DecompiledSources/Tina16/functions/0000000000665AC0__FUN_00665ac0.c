/* Ghidra address: 00665ac0 */
/* Ghidra symbol: FUN_00665ac0 */


void FUN_00665ac0(longlong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != (int)param_1[2]) {
      *(int *)(param_1 + 2) = param_3;
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (param_2 == 1) {
    if (param_3 != *(int *)((longlong)param_1 + 0x14)) {
      *(int *)((longlong)param_1 + 0x14) = param_3;
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (param_2 == 2) {
    if (param_3 != (int)param_1[3]) {
      *(int *)(param_1 + 3) = param_3;
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if ((param_2 == 3) && (param_3 != *(int *)((longlong)param_1 + 0x1c))) {
    *(int *)((longlong)param_1 + 0x1c) = param_3;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

