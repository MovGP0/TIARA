/* Ghidra address: 004b2b70 */
/* Ghidra symbol: FUN_004b2b70 */


void FUN_004b2b70(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfb;
  }
  else {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 4;
  }
  return;
}

