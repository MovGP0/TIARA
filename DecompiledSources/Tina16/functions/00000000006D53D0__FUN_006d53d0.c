/* Ghidra address: 006d53d0 */
/* Ghidra symbol: FUN_006d53d0 */


void FUN_006d53d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b2) != param_2) {
    *(char *)(param_1 + 0x4b2) = param_2;
    FUN_00655b90();
  }
  return;
}

