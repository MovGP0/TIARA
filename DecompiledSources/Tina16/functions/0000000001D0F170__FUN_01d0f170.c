/* Ghidra address: 01d0f170 */
/* Ghidra symbol: FUN_01d0f170 */


void FUN_01d0f170(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)(param_2 + 1) * 8,
                 *(longlong *)(param_1 + 8) + (longlong)param_2 * 8,
                 (longlong)((*(int *)(param_1 + 0x10) - param_2) * 8));
  }
  return;
}

