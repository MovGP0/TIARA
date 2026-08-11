/* Ghidra address: 00c03680 */
/* Ghidra symbol: FUN_00c03680 */


void FUN_00c03680(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5c9) != param_2) {
    *(char *)(param_1 + 0x5c9) = param_2;
    FUN_00c03500();
  }
  return;
}

