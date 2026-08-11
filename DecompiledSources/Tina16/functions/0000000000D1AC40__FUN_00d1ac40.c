/* Ghidra address: 00d1ac40 */
/* Ghidra symbol: FUN_00d1ac40 */


void FUN_00d1ac40(longlong param_1,int param_2)

{
  if ((param_2 < 2) || (8 < param_2)) {
    param_2 = 8;
  }
  *(int *)(param_1 + 0x28) = param_2;
  return;
}

