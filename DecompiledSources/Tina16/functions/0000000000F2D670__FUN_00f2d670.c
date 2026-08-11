/* Ghidra address: 00f2d670 */
/* Ghidra symbol: FUN_00f2d670 */


void FUN_00f2d670(longlong param_1)

{
  FUN_00f2e280(param_1);
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  }
  return;
}

