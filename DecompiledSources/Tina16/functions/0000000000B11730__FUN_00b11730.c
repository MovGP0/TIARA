/* Ghidra address: 00b11730 */
/* Ghidra symbol: FUN_00b11730 */


void FUN_00b11730(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x61c) == 0) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
    FUN_0083f820(param_1);
  }
  return;
}

