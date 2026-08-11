/* Ghidra address: 00c03470 */
/* Ghidra symbol: FUN_00c03470 */


void FUN_00c03470(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5c0) != param_2) {
    *(char *)(param_1 + 0x5c0) = param_2;
    FUN_00655b90();
  }
  return;
}

