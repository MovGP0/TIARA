/* Ghidra address: 007e4de0 */
/* Ghidra symbol: FUN_007e4de0 */


void FUN_007e4de0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x83)) {
    *(char *)((longlong)param_1 + 0x83) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

