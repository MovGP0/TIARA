/* Ghidra address: 006f3280 */
/* Ghidra symbol: FUN_006f3280 */


void FUN_006f3280(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    FUN_00655b90();
  }
  return;
}

