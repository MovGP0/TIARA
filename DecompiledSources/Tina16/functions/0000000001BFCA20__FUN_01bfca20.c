/* Ghidra address: 01bfca20 */
/* Ghidra symbol: FUN_01bfca20 */


void FUN_01bfca20(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x34) != param_2) {
    *(int *)(param_1 + 0x34) = param_2;
    FUN_01bfc680();
  }
  return;
}

