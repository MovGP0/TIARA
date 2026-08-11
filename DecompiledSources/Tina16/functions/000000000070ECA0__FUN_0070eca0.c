/* Ghidra address: 0070eca0 */
/* Ghidra symbol: FUN_0070eca0 */


void FUN_0070eca0(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43) = 0;
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}

