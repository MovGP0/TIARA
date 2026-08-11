/* Ghidra address: 00a0bb50 */
/* Ghidra symbol: FUN_00a0bb50 */


void FUN_00a0bb50(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x69) != param_2) {
    FUN_00a0abb0(param_1);
    *(char *)((longlong)param_1 + 0x69) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

