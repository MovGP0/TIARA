/* Ghidra address: 015e2c10 */
/* Ghidra symbol: FUN_015e2c10 */


void FUN_015e2c10(longlong param_1)

{
  if (*(char *)(param_1 + 0x244) == '\0') {
    *(undefined2 *)(param_1 + 0x240) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x240) = 8;
  }
  return;
}

