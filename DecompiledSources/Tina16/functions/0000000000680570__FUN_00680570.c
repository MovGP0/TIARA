/* Ghidra address: 00680570 */
/* Ghidra symbol: FUN_00680570 */


void FUN_00680570(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x49f) != param_2) {
    *(char *)(param_1 + 0x49f) = param_2;
    FUN_00655b90();
  }
  return;
}

