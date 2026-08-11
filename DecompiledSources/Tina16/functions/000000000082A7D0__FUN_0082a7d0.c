/* Ghidra address: 0082a7d0 */
/* Ghidra symbol: FUN_0082a7d0 */


void FUN_0082a7d0(longlong *param_1,int param_2)

{
  if ((param_2 != *(int *)((longlong)param_1 + 0x334)) && (-2 < param_2)) {
    *(int *)((longlong)param_1 + 0x334) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

