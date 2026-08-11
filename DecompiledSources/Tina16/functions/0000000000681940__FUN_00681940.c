/* Ghidra address: 00681940 */
/* Ghidra symbol: FUN_00681940 */


void FUN_00681940(longlong param_1)

{
  if ((*(char *)(param_1 + 0x49d) == '\0') || (*(char *)(param_1 + 0x498) != '\x01')) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffdff;
  }
  else {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200;
    FUN_00681990();
  }
  return;
}

