/* Ghidra address: 0083df50 */
/* Ghidra symbol: FUN_0083df50 */


undefined2 FUN_0083df50(longlong param_1)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0x50) >> 8),(*(ushort *)(param_1 + 0x50) & 4) != 0);
}

