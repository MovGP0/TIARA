/* Ghidra address: 01be8ae0 */
/* Ghidra symbol: FUN_01be8ae0 */


void FUN_01be8ae0(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x671) != param_2) {
    *(char *)((longlong)param_1 + 0x671) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

