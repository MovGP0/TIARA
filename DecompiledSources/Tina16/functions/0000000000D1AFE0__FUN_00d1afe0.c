/* Ghidra address: 00d1afe0 */
/* Ghidra symbol: FUN_00d1afe0 */


void FUN_00d1afe0(longlong param_1,int param_2)

{
  if ((param_2 < 3) || (0x20 < param_2)) {
    param_2 = 3;
  }
  *(int *)(param_1 + 0x98) = param_2;
  return;
}

