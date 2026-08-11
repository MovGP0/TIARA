/* Ghidra address: 017c2600 */
/* Ghidra symbol: FUN_017c2600 */


void FUN_017c2600(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x99) != param_2) {
    *(char *)(param_1 + 0x99) = param_2;
  }
  return;
}

