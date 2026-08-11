/* Ghidra address: 01bd4200 */
/* Ghidra symbol: FUN_01bd4200 */


void FUN_01bd4200(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x36c) != param_2) {
    *(char *)((longlong)param_1 + 0x36c) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

