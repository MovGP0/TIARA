/* Ghidra address: 006d53b0 */
/* Ghidra symbol: FUN_006d53b0 */


void FUN_006d53b0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b1) != param_2) {
    *(char *)(param_1 + 0x4b1) = param_2;
    FUN_00655b90();
  }
  return;
}

