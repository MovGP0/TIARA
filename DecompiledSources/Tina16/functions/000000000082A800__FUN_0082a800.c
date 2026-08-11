/* Ghidra address: 0082a800 */
/* Ghidra symbol: FUN_0082a800 */


void FUN_0082a800(longlong *param_1,int param_2)

{
  if (param_2 != *(int *)((longlong)param_1 + 0x32c)) {
    *(int *)((longlong)param_1 + 0x32c) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

