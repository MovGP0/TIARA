/* Ghidra address: 0189a000 */
/* Ghidra symbol: FUN_0189a000 */


void FUN_0189a000(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x319) = param_2;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

