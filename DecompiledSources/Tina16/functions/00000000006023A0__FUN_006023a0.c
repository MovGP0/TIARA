/* Ghidra address: 006023a0 */
/* Ghidra symbol: FUN_006023a0 */


void FUN_006023a0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x39)) {
    *(char *)((longlong)param_1 + 0x39) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

