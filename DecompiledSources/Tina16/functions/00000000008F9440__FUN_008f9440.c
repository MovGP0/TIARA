/* Ghidra address: 008f9440 */
/* Ghidra symbol: FUN_008f9440 */


void FUN_008f9440(longlong param_1,int param_2)

{
  FUN_00419260(param_1 + 0x18,&DAT_008f5030,1,(longlong)param_2);
  *(int *)(param_1 + 8) = param_2;
  return;
}

