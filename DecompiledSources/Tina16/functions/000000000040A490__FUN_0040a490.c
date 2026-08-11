/* Ghidra address: 0040a490 */
/* Ghidra symbol: FUN_0040a490 */


void FUN_0040a490(longlong param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0x8000 | param_2 & 0x7fff;
  return;
}

