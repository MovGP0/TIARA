/* Ghidra address: 0065bb50 */
/* Ghidra symbol: FUN_0065bb50 */


void FUN_0065bb50(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x324) != param_2) {
    *(int *)(param_1 + 0x324) = param_2;
    FUN_0064fca0(param_1,0xb03b,0,0);
  }
  return;
}

