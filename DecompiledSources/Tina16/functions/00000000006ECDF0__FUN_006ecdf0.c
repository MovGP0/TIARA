/* Ghidra address: 006ecdf0 */
/* Ghidra symbol: FUN_006ecdf0 */


void FUN_006ecdf0(longlong param_1)

{
  if (*(char *)(param_1 + 0x490) == '\0') {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffdff;
  }
  else {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200;
    FUN_006ece40();
  }
  return;
}

