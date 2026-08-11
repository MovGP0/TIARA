/* Ghidra address: 010ee090 */
/* Ghidra symbol: FUN_010ee090 */


void FUN_010ee090(longlong param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_2;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_3;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + param_3;
  return;
}

