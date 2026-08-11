/* Ghidra address: 00cb6420 */
/* Ghidra symbol: FUN_00cb6420 */


void FUN_00cb6420(longlong param_1)

{
  if ((byte)(*(char *)(param_1 + 0x119) - 1U) < 2) {
    FUN_00cb55f0();
  }
  else if (*(char *)(param_1 + 0x119) == '\x03') {
    FUN_00cb5a70();
  }
  return;
}

