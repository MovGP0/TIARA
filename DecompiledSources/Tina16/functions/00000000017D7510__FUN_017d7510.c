/* Ghidra address: 017d7510 */
/* Ghidra symbol: FUN_017d7510 */


void FUN_017d7510(longlong param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    FUN_017d7590(param_1,*(int *)(param_1 + 0x10) + 0x32);
  }
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)param_2 * 4,
                 *(longlong *)(param_1 + 8) + (longlong)(param_2 + 1) * 4,
                 (longlong)((*(int *)(param_1 + 0x10) - param_2) * 4));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 4) = param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

