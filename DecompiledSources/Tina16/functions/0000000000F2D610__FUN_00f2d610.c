/* Ghidra address: 00f2d610 */
/* Ghidra symbol: FUN_00f2d610 */


void FUN_00f2d610(longlong param_1)

{
  if (0xffffffff < (*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10)) + 0x80000000U) {
    FUN_00410a90();
  }
  return;
}

