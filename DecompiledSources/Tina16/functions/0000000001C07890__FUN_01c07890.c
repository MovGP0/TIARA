/* Ghidra address: 01c07890 */
/* Ghidra symbol: FUN_01c07890 */


void FUN_01c07890(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x345) != param_2) {
    *(char *)((longlong)param_1 + 0x345) = param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  return;
}

