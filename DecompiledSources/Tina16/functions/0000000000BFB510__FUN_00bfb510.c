/* Ghidra address: 00bfb510 */
/* Ghidra symbol: FUN_00bfb510 */


void FUN_00bfb510(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x529) != param_2) {
    *(char *)((longlong)param_1 + 0x529) = param_2;
    FUN_00bfd160(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

