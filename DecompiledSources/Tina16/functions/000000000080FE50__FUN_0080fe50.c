/* Ghidra address: 0080fe50 */
/* Ghidra symbol: FUN_0080fe50 */


void FUN_0080fe50(longlong *param_1,char param_2)

{
  if ((param_2 != (char)param_1[7]) &&
     (((char)param_1[7] == '\0' ||
      ((((*(int *)((longlong)param_1 + 0x14) != -1 && ((int)param_1[3] != -1)) &&
        (*(int *)((longlong)param_1 + 0x1c) != -1)) && ((int)param_1[4] != -1)))))) {
    *(char *)(param_1 + 7) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

