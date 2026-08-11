/* Ghidra address: 00a33eb0 */
/* Ghidra symbol: FUN_00a33eb0 */


void FUN_00a33eb0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  FUN_00409620(param_1 + 8,param_2 + 1);
  return;
}

