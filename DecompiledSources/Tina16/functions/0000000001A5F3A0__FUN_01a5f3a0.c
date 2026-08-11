/* Ghidra address: 01a5f3a0 */
/* Ghidra symbol: FUN_01a5f3a0 */


void FUN_01a5f3a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  (**(code **)(*param_1 + 0x70))(param_1,param_3);
  return;
}

