/* Ghidra address: 006ecbf0 */
/* Ghidra symbol: FUN_006ecbf0 */


void FUN_006ecbf0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x490) != param_2) {
    *(char *)(param_1 + 0x490) = param_2;
    FUN_006ecdf0();
  }
  return;
}

