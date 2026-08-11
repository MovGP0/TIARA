/* Ghidra address: 004d3040 */
/* Ghidra symbol: FUN_004d3040 */


void FUN_004d3040(longlong param_1)

{
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
  return;
}

