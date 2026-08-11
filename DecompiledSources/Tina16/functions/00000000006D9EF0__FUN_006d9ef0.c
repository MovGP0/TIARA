/* Ghidra address: 006d9ef0 */
/* Ghidra symbol: FUN_006d9ef0 */


void FUN_006d9ef0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x35) != param_2) {
    *(char *)(param_1 + 0x35) = param_2;
    FUN_006d9f10();
  }
  return;
}

