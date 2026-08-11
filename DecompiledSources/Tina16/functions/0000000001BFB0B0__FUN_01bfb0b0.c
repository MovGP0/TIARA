/* Ghidra address: 01bfb0b0 */
/* Ghidra symbol: FUN_01bfb0b0 */


void FUN_01bfb0b0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x59) != param_2) {
    *(char *)(param_1 + 0x59) = param_2;
  }
  return;
}

