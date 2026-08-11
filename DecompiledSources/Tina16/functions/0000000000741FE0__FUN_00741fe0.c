/* Ghidra address: 00741fe0 */
/* Ghidra symbol: FUN_00741fe0 */


void FUN_00741fe0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x341) != param_2) {
    *(char *)(param_1 + 0x341) = param_2;
    FUN_007420c0(param_1,param_1);
  }
  return;
}

