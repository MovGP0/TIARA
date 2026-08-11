/* Ghidra address: 006fd3b0 */
/* Ghidra symbol: FUN_006fd3b0 */


void FUN_006fd3b0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x518) != param_2) {
    *(int *)(param_1 + 0x518) = param_2;
    FUN_00655b90();
  }
  return;
}

