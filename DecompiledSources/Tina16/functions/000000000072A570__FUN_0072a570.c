/* Ghidra address: 0072a570 */
/* Ghidra symbol: FUN_0072a570 */


void FUN_0072a570(longlong param_1)

{
  if (*(int *)(param_1 + 8) <
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10) + -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

