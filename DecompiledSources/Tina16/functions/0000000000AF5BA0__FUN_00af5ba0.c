/* Ghidra address: 00af5ba0 */
/* Ghidra symbol: FUN_00af5ba0 */


void FUN_00af5ba0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x798)) {
    *(char *)(param_1 + 0x798) = param_2;
    FUN_00afe370();
  }
  return;
}

