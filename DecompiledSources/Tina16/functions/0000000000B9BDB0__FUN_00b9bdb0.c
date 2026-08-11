/* Ghidra address: 00b9bdb0 */
/* Ghidra symbol: FUN_00b9bdb0 */


void FUN_00b9bdb0(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

