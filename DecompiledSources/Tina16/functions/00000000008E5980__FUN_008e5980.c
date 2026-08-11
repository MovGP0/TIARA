/* Ghidra address: 008e5980 */
/* Ghidra symbol: FUN_008e5980 */


undefined4 FUN_008e5980(uint param_1)

{
  return CONCAT22((short)((param_1 & 0xffff00ff) >> 8),
                  (ushort)((param_1 & 0xffff00ff) << 8) | (ushort)(param_1 >> 8) & 0xff);
}

