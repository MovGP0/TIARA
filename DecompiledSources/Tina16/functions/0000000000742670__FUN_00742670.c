/* Ghidra address: 00742670 */
/* Ghidra symbol: FUN_00742670 */


void FUN_00742670(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x319)) {
    *(char *)((longlong)param_1 + 0x319) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

