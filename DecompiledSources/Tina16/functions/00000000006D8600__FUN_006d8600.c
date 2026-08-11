/* Ghidra address: 006d8600 */
/* Ghidra symbol: FUN_006d8600 */


void FUN_006d8600(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    FUN_004b1830(param_1,1);
  }
  return;
}

