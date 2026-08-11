/* Ghidra address: 00848bd0 */
/* Ghidra symbol: FUN_00848bd0 */


void FUN_00848bd0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e4) != param_2) {
    *(char *)(param_1 + 0x4e4) = param_2;
    FUN_00655b90();
  }
  return;
}

