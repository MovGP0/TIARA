/* Ghidra address: 017f4250 */
/* Ghidra symbol: FUN_017f4250 */


void FUN_017f4250(longlong param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  FUN_00409a70(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 + 1) * 0x10,
               *(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x10,
               (longlong)((*(int *)(param_1 + 8) - param_2) * 0x10));
  return;
}

