/* Ghidra address: 00726fe0 */
/* Ghidra symbol: FUN_00726fe0 */


void FUN_00726fe0(longlong param_1)

{
  if (*(int *)(param_1 + 8) <
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10) + -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

