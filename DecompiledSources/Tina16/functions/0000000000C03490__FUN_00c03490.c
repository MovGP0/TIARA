/* Ghidra address: 00c03490 */
/* Ghidra symbol: FUN_00c03490 */


void FUN_00c03490(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5c1) != param_2) {
    *(char *)(param_1 + 0x5c1) = param_2;
    FUN_00bf3bb0();
  }
  return;
}

