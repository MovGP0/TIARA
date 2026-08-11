/* Ghidra address: 00680480 */
/* Ghidra symbol: FUN_00680480 */


void FUN_00680480(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x490) != param_2) {
    *(char *)(param_1 + 0x490) = param_2;
    FUN_00655b90();
  }
  return;
}

