/* Ghidra address: 01695ec0 */
/* Ghidra symbol: FUN_01695ec0 */


undefined8 FUN_01695ec0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_02001118 >> 8),
                  (*PTR_DAT_02001118 & *(byte *)(param_1 + 0x2dc)) != 0);
}

