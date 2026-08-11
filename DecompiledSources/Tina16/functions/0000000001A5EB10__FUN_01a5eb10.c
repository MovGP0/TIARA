/* Ghidra address: 01a5eb10 */
/* Ghidra symbol: FUN_01a5eb10 */


void FUN_01a5eb10(longlong param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_3;
  return;
}

