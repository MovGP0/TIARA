/* Ghidra address: 01a80d90 */
/* Ghidra symbol: FUN_01a80d90 */


void FUN_01a80d90(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1050) != param_2) {
    *(char *)(param_1 + 0x1050) = param_2;
    FUN_01a7fc90();
  }
  return;
}

