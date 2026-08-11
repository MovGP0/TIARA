/* Ghidra address: 00dd6ad0 */
/* Ghidra symbol: FUN_00dd6ad0 */


undefined4 FUN_00dd6ad0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00dd7300(*(longlong *)(param_1 + 8));
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return *(undefined4 *)(param_1 + 0x10);
}

