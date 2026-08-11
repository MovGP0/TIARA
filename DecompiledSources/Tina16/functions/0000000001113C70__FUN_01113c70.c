/* Ghidra address: 01113c70 */
/* Ghidra symbol: FUN_01113c70 */


void FUN_01113c70(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x624)) {
    *(char *)(param_1 + 0x624) = param_2;
  }
  return;
}

