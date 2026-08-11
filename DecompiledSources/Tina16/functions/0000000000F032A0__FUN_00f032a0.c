/* Ghidra address: 00f032a0 */
/* Ghidra symbol: FUN_00f032a0 */


undefined2 FUN_00f032a0(longlong param_1)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0x4f) >> 8),(*(ushort *)(param_1 + 0x4f) & 4) != 0);
}

