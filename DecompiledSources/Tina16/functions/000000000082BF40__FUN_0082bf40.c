/* Ghidra address: 0082bf40 */
/* Ghidra symbol: FUN_0082bf40 */


void FUN_0082bf40(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x52a) != param_2) {
    *(char *)((longlong)param_1 + 0x52a) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

