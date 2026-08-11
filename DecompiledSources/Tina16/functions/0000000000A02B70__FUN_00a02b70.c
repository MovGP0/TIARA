/* Ghidra address: 00a02b70 */
/* Ghidra symbol: FUN_00a02b70 */


void FUN_00a02b70(longlong param_1,int param_2)

{
  *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) = *(longlong *)(param_1 + 8) + (longlong)param_2;
  return;
}

