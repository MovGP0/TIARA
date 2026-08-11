/* Ghidra address: 006ed920 */
/* Ghidra symbol: FUN_006ed920 */


void FUN_006ed920(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x30) != param_2) {
    *(int *)(param_1 + 0x30) = param_2;
    FUN_006ed570();
  }
  return;
}

