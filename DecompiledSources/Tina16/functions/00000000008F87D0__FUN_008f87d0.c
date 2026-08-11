/* Ghidra address: 008f87d0 */
/* Ghidra symbol: FUN_008f87d0 */


void FUN_008f87d0(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    (**(code **)(*param_1 + 0x60))(param_1,1);
  }
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  return;
}

