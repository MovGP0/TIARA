/* Ghidra address: 01bfb100 */
/* Ghidra symbol: FUN_01bfb100 */


void FUN_01bfb100(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x58) != param_2) {
    *(char *)(param_1 + 0x58) = param_2;
    FUN_01bf6300(0);
  }
  return;
}

