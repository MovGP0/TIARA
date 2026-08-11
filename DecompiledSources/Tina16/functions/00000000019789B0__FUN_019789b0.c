/* Ghidra address: 019789b0 */
/* Ghidra symbol: FUN_019789b0 */


void FUN_019789b0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x28) = param_1;
  }
  return;
}

