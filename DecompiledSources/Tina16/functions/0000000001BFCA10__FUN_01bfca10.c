/* Ghidra address: 01bfca10 */
/* Ghidra symbol: FUN_01bfca10 */


void FUN_01bfca10(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x30) != param_2) {
    *(char *)(param_1 + 0x30) = param_2;
  }
  return;
}

