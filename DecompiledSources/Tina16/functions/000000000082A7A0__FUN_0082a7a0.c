/* Ghidra address: 0082a7a0 */
/* Ghidra symbol: FUN_0082a7a0 */


void FUN_0082a7a0(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x32b) != param_2) {
    *(char *)((longlong)param_1 + 0x32b) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

