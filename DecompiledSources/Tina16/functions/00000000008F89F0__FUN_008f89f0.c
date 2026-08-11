/* Ghidra address: 008f89f0 */
/* Ghidra symbol: FUN_008f89f0 */


void FUN_008f89f0(longlong *param_1)

{
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}

