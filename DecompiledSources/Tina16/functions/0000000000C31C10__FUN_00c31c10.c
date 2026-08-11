/* Ghidra address: 00c31c10 */
/* Ghidra symbol: FUN_00c31c10 */


void FUN_00c31c10(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 9)) {
    *(char *)((longlong)param_1 + 9) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

