/* Ghidra address: 006db020 */
/* Ghidra symbol: FUN_006db020 */


void FUN_006db020(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4ba) != param_2) {
    *(char *)(param_1 + 0x4ba) = param_2;
    FUN_00655b90();
  }
  return;
}

