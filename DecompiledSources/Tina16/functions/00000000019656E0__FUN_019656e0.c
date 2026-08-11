/* Ghidra address: 019656e0 */
/* Ghidra symbol: FUN_019656e0 */


void FUN_019656e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  if (*(char *)((longlong)param_1 + 0x2c4) == '\0') {
    if ((double)param_1[0x15] < (double)param_1[0x16] ||
        (double)param_1[0x15] == (double)param_1[0x16]) {
      (**(code **)(*param_1 + 0xd8))(param_1,0);
      *(undefined1 *)(param_1[0x38] + 0x3d) = 1;
    }
    else {
      (**(code **)(*param_1 + 0xe0))(param_1,0);
      *(undefined1 *)(param_1[0x38] + 0x3d) = 4;
    }
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)((longlong)param_1 + 0x2c4) == '\0') {
    (**(code **)(*param_1 + 0x2c0))(param_1);
    if (*(char *)((longlong)param_1 + 0x2cd) != '\0') {
      FUN_01965850(param_1,(double)(int)param_1[0x4a],(double)*(int *)((longlong)param_1 + 0x254),
                   (double)(int)param_1[0x49],(double)*(int *)((longlong)param_1 + 0x24c));
    }
    if (*(char *)((longlong)param_1 + 0x2c5) != '\0') {
      FUN_01965850(param_1,(double)(int)param_1[0x49],(double)*(int *)((longlong)param_1 + 0x24c),
                   (double)(int)param_1[0x4a],(double)*(int *)((longlong)param_1 + 0x254));
    }
  }
  else {
    FUN_01965e00(param_1);
  }
  return;
}

