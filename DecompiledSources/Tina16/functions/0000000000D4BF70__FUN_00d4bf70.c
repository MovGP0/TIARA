/* Ghidra address: 00d4bf70 */
/* Ghidra symbol: FUN_00d4bf70 */


void FUN_00d4bf70(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}

