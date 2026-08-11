/* Ghidra address: 00834f60 */
/* Ghidra symbol: FUN_00834f60 */


void FUN_00834f60(longlong param_1,longlong param_2)

{
  FUN_00650a80(param_1,param_2);
  *(int *)(param_1 + 0x4f0) = (int)*(short *)(param_2 + 0x10);
  return;
}

