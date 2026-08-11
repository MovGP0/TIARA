/* Ghidra address: 01695ee0 */
/* Ghidra symbol: FUN_01695ee0 */


undefined8 FUN_01695ee0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_020052b0 >> 8),
                  (*PTR_DAT_020052b0 & *(byte *)(param_1 + 0x2dc)) != 0);
}

