/* Ghidra address: 004230b0 */
/* Ghidra symbol: FUN_004230b0 */


void FUN_004230b0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4) + param_2;
  return;
}

