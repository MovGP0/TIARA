/* Ghidra address: 006f3850 */
/* Ghidra symbol: FUN_006f3850 */


void FUN_006f3850(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4f8)) {
    *(char *)(param_1 + 0x4f8) = param_2;
    FUN_00655b90();
  }
  return;
}

