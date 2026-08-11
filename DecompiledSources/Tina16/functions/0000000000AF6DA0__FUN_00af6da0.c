/* Ghidra address: 00af6da0 */
/* Ghidra symbol: FUN_00af6da0 */


undefined2 FUN_00af6da0(longlong param_1)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0x79a) >> 8),
                  (*(ushort *)(param_1 + 0x79a) & 0x200) == 0);
}

