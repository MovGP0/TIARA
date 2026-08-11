/* Ghidra address: 00c392f0 */
/* Ghidra symbol: FUN_00c392f0 */


void FUN_00c392f0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x32c)) {
    *(int *)(param_1 + 0x32c) = param_2;
    FUN_0064e770();
  }
  return;
}

