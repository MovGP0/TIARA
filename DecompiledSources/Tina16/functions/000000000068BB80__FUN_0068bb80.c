/* Ghidra address: 0068bb80 */
/* Ghidra symbol: FUN_0068bb80 */


void FUN_0068bb80(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x4cd)) {
    *(char *)((longlong)param_1 + 0x4cd) = param_2;
    FUN_00655b90(param_1);
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  return;
}

