/* Ghidra address: 00c32ff0 */
/* Ghidra symbol: FUN_00c32ff0 */


void FUN_00c32ff0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x4a)) {
    FUN_00c35490(param_1);
    *(char *)((longlong)param_1 + 0x4a) = param_2;
    FUN_00c34390(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

