/* Ghidra address: 006ff020 */
/* Ghidra symbol: FUN_006ff020 */


void FUN_006ff020(longlong *param_1)

{
  FUN_00651370(param_1);
  if (*(char *)((longlong)param_1 + 0x4e4) != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

