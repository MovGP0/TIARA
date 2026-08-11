/* Ghidra address: 004b2b90 */
/* Ghidra symbol: FUN_004b2b90 */


void FUN_004b2b90(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  }
  return;
}

