/* Ghidra address: 004b2bd0 */
/* Ghidra symbol: FUN_004b2bd0 */


void FUN_004b2bd0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 2;
  }
  return;
}

