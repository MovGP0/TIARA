/* Ghidra address: 01c25e00 */
/* Ghidra symbol: FUN_01c25e00 */


void FUN_01c25e00(longlong *param_1)

{
  *(int *)(param_1 + 0x95) = ((int)param_1[0x95] + 1) % 2;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

