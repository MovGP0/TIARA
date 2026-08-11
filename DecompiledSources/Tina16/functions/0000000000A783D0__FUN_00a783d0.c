/* Ghidra address: 00a783d0 */
/* Ghidra symbol: FUN_00a783d0 */


void FUN_00a783d0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4d8) != param_2) {
    *(int *)(param_1 + 0x4d8) = param_2;
    FUN_00a78210();
  }
  return;
}

