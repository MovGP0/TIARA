/* Ghidra address: 00743c80 */
/* Ghidra symbol: FUN_00743c80 */


void FUN_00743c80(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x4a9) = param_2;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

