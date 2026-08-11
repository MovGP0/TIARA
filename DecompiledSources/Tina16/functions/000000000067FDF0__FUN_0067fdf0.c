/* Ghidra address: 0067fdf0 */
/* Ghidra symbol: FUN_0067fdf0 */


void FUN_0067fdf0(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x33e) != param_2) {
    *(char *)((longlong)param_1 + 0x33e) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

