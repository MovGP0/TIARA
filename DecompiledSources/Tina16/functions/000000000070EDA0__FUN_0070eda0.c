/* Ghidra address: 0070eda0 */
/* Ghidra symbol: FUN_0070eda0 */


void FUN_0070eda0(longlong *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}

