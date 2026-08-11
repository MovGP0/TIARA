/* Ghidra address: 0074b550 */
/* Ghidra symbol: FUN_0074b550 */


void FUN_0074b550(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4b2)) {
    *(char *)(param_1 + 0x4b2) = param_2;
    FUN_0074b570();
  }
  return;
}

