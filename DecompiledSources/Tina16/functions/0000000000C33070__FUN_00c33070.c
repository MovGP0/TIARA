/* Ghidra address: 00c33070 */
/* Ghidra symbol: FUN_00c33070 */


void FUN_00c33070(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x49)) {
    *(char *)((longlong)param_1 + 0x49) = param_2;
    FUN_00c35490(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

