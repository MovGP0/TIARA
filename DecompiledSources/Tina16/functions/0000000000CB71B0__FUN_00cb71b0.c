/* Ghidra address: 00cb71b0 */
/* Ghidra symbol: FUN_00cb71b0 */


void FUN_00cb71b0(longlong param_1)

{
  if ((byte)(*(char *)(param_1 + 0x119) - 1U) < 2) {
    FUN_00cb5ff0();
  }
  else if (*(char *)(param_1 + 0x119) == '\x03') {
    FUN_00cb6950();
  }
  return;
}

