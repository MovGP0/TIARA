/* Ghidra address: 00848390 */
/* Ghidra symbol: FUN_00848390 */


void FUN_00848390(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    FUN_00655b90();
  }
  return;
}

