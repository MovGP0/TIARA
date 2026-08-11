/* Ghidra address: 00743850 */
/* Ghidra symbol: FUN_00743850 */


void FUN_00743850(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x49a) = param_2;
  FUN_00654450(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

