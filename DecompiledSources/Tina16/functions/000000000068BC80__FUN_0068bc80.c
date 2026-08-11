/* Ghidra address: 0068bc80 */
/* Ghidra symbol: FUN_0068bc80 */


void FUN_0068bc80(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x490) != param_2) {
    *(char *)(param_1 + 0x490) = param_2;
    FUN_00655b90();
  }
  return;
}

