/* Ghidra address: 004d4540 */
/* Ghidra symbol: FUN_004d4540 */


void FUN_004d4540(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfb;
  }
  else {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 4;
  }
  return;
}

