/* Ghidra address: 00743880 */
/* Ghidra symbol: FUN_00743880 */


void FUN_00743880(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x49b) = param_2;
  FUN_00654450(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

