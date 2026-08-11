/* Ghidra address: 007e2f80 */
/* Ghidra symbol: FUN_007e2f80 */


void FUN_007e2f80(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x86)) {
    *(char *)((longlong)param_1 + 0x86) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

