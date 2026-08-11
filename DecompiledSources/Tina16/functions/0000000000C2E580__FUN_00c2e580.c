/* Ghidra address: 00c2e580 */
/* Ghidra symbol: FUN_00c2e580 */


void FUN_00c2e580(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xe3 | (param_2 & 7) << 2;
  return;
}

