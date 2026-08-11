/* Ghidra address: 00c39290 */
/* Ghidra symbol: FUN_00c39290 */


void FUN_00c39290(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x325)) {
    *(char *)(param_1 + 0x325) = param_2;
    FUN_0064e770();
  }
  return;
}

