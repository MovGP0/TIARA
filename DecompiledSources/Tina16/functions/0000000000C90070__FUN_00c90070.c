/* Ghidra address: 00c90070 */
/* Ghidra symbol: FUN_00c90070 */


void FUN_00c90070(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x61) != param_2) {
    *(char *)(param_1 + 0x61) = param_2;
    FUN_00c8fff0();
  }
  return;
}

