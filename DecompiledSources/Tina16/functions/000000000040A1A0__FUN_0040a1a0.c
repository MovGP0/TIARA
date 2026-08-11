/* Ghidra address: 0040a1a0 */
/* Ghidra symbol: FUN_0040a1a0 */


void FUN_0040a1a0(longlong param_1,ushort param_2)

{
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0x800f | (param_2 & 0x7ff) << 4;
  return;
}

