/* Ghidra address: 006f3200 */
/* Ghidra symbol: FUN_006f3200 */


void FUN_006f3200(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x511) != param_2) {
    *(char *)(param_1 + 0x511) = param_2;
    FUN_00655b90();
  }
  return;
}

