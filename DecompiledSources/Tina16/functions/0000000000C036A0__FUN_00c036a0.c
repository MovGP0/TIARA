/* Ghidra address: 00c036a0 */
/* Ghidra symbol: FUN_00c036a0 */


void FUN_00c036a0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5c8) != param_2) {
    *(char *)(param_1 + 0x5c8) = param_2;
    FUN_00c03500();
  }
  return;
}

