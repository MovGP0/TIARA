/* Ghidra address: 01695e80 */
/* Ghidra symbol: FUN_01695e80 */


undefined8 FUN_01695e80(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_02001c98 >> 8),
                  (*PTR_DAT_02001c98 & *(byte *)(param_1 + 0x2dc)) != 0);
}

