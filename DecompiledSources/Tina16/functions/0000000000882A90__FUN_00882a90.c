/* Ghidra address: 00882a90 */
/* Ghidra symbol: FUN_00882a90 */


undefined2 FUN_00882a90(longlong param_1)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0x34) >> 8),(*(ushort *)(param_1 + 0x34) & 0x10) != 0
                 );
}

