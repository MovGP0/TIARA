/* Ghidra address: 0080fdc0 */
/* Ghidra symbol: FUN_0080fdc0 */


void FUN_0080fdc0(longlong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if ((param_3 != *(int *)((longlong)param_1 + 0x14)) &&
       (*(int *)((longlong)param_1 + 0x14) = param_3, param_3 == -1)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  else if (param_2 == 1) {
    if ((param_3 != (int)param_1[3]) && (*(int *)(param_1 + 3) = param_3, param_3 == -1)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  else if (param_2 == 2) {
    if ((param_3 != *(int *)((longlong)param_1 + 0x1c)) &&
       (*(int *)((longlong)param_1 + 0x1c) = param_3, param_3 == -1)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if ((param_3 != (int)param_1[4]) && (*(int *)(param_1 + 4) = param_3, param_3 == -1)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

