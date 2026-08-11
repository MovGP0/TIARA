/* Ghidra address: 01695ea0 */
/* Ghidra symbol: FUN_01695ea0 */


undefined8 FUN_01695ea0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_02005a48 >> 8),
                  (*PTR_DAT_02005a48 & *(byte *)(param_1 + 0x2dc)) != 0);
}

