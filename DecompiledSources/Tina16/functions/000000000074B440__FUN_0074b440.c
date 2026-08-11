/* Ghidra address: 0074b440 */
/* Ghidra symbol: FUN_0074b440 */


void FUN_0074b440(longlong *param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (0x10 < param_2) {
    param_2 = 0x10;
  }
  if (*(int *)((longlong)param_1 + 0x4ac) != param_2) {
    *(int *)((longlong)param_1 + 0x4ac) = param_2;
    (**(code **)(*param_1 + 0x268))(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

