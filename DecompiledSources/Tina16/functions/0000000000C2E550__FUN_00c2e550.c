/* Ghidra address: 00c2e550 */
/* Ghidra symbol: FUN_00c2e550 */


void FUN_00c2e550(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 2;
  }
  return;
}

