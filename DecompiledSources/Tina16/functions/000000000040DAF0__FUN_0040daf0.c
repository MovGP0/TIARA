/* Ghidra address: 0040daf0 */
/* Ghidra symbol: FUN_0040daf0 */


void FUN_0040daf0(longlong param_1)

{
  if (*(char *)(param_1 + 0x2ea) < '\0') {
    *(char *)(param_1 + 0x2eb) = *(char *)(param_1 + 0x2eb) + '\x01';
    if (-(int)*(char *)(param_1 + 0x2ea) == (uint)*(byte *)(param_1 + 0x2eb)) {
      *(undefined1 *)(param_1 + 0x2ea) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
  }
  return;
}

