/* Ghidra address: 008107c0 */
/* Ghidra symbol: FUN_008107c0 */


void FUN_008107c0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x72) == '\0') {
    FUN_00786260(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    if (param_1[0xd] == 0) {
      FUN_008103d0(param_1);
    }
    FUN_00810830(param_1);
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}

