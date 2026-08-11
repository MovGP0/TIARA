/* Ghidra address: 0040d780 */
/* Ghidra symbol: FUN_0040d780 */


void FUN_0040d780(longlong param_1)

{
  if (*(char *)(param_1 + 0x2ea) < '\x01') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    *(char *)(param_1 + 0x2eb) = *(char *)(param_1 + 0x2eb) + '\x01';
    if (*(char *)(param_1 + 0x2ea) == *(char *)(param_1 + 0x2eb)) {
      *(undefined1 *)(param_1 + 0x2ea) = 0;
    }
  }
  return;
}

