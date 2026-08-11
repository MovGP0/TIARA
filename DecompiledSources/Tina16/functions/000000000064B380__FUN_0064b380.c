/* Ghidra address: 0064b380 */
/* Ghidra symbol: FUN_0064b380 */


void FUN_0064b380(longlong *param_1,int param_2,uint param_3)

{
  if (param_2 == 0) {
    if ((param_3 != *(uint *)(param_1 + 2)) &&
       (*(uint *)(param_1 + 2) = param_3, *(char *)(param_1[1] + 0x2c9) == '\0')) {
      if ((param_3 != 0) && (param_3 < *(uint *)(param_1 + 3))) {
        *(uint *)(param_1 + 3) = param_3;
      }
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (param_2 == 1) {
    if ((param_3 != *(uint *)((longlong)param_1 + 0x14)) &&
       (*(uint *)((longlong)param_1 + 0x14) = param_3, *(char *)(param_1[1] + 0x2c9) == '\0')) {
      if ((param_3 != 0) && (param_3 < *(uint *)((longlong)param_1 + 0x1c))) {
        *(uint *)((longlong)param_1 + 0x1c) = param_3;
      }
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (param_2 == 2) {
    if ((param_3 != *(uint *)(param_1 + 3)) &&
       (*(uint *)(param_1 + 3) = param_3, *(char *)(param_1[1] + 0x2c9) == '\0')) {
      if ((*(uint *)(param_1 + 2) != 0) && (*(uint *)(param_1 + 2) < param_3)) {
        *(uint *)(param_1 + 2) = param_3;
      }
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else if (((param_2 == 3) && (param_3 != *(uint *)((longlong)param_1 + 0x1c))) &&
          (*(uint *)((longlong)param_1 + 0x1c) = param_3, *(char *)(param_1[1] + 0x2c9) == '\0')) {
    if ((*(uint *)((longlong)param_1 + 0x14) != 0) &&
       (*(uint *)((longlong)param_1 + 0x14) < param_3)) {
      *(uint *)((longlong)param_1 + 0x14) = param_3;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

