/* Ghidra address: 00c29db0 */
/* Ghidra symbol: FUN_00c29db0 */


void FUN_00c29db0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) & 0xbf;
  }
  else {
    *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) | 0x40;
  }
  return;
}

