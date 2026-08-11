/* Ghidra address: 00c392d0 */
/* Ghidra symbol: FUN_00c392d0 */


void FUN_00c392d0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x328)) {
    *(int *)(param_1 + 0x328) = param_2;
    FUN_0064e770();
  }
  return;
}

