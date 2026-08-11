/* Ghidra address: 00b12990 */
/* Ghidra symbol: FUN_00b12990 */


void FUN_00b12990(longlong *param_1)

{
  FUN_00849de0(param_1);
  if (*(char *)((longlong)param_1 + 0x391) != '\0') {
    (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  return;
}

