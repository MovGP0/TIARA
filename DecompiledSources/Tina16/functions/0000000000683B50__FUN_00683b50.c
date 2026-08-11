/* Ghidra address: 00683b50 */
/* Ghidra symbol: FUN_00683b50 */


void FUN_00683b50(longlong param_1,int param_2)

{
  if (0 < param_2) {
    *(int *)(param_1 + 0x4e8) = param_2;
    FUN_00655b90();
  }
  return;
}

