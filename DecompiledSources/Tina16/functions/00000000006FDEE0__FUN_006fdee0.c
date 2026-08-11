/* Ghidra address: 006fdee0 */
/* Ghidra symbol: FUN_006fdee0 */


void FUN_006fdee0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x4e4) == '\0') {
    FUN_00658480();
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  return;
}

