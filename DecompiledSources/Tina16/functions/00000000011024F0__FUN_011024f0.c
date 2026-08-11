/* Ghidra address: 011024f0 */
/* Ghidra symbol: FUN_011024f0 */


void FUN_011024f0(longlong param_1)

{
  if (DAT_02030108 == '\x0f') {
    *(bool *)(param_1 + 0x180) = *(char *)(param_1 + 0x180) == '\0';
  }
  else {
    *(undefined1 *)(param_1 + 0x180) = 1;
  }
  return;
}

