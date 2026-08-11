/* Ghidra address: 01695e60 */
/* Ghidra symbol: FUN_01695e60 */


undefined8 FUN_01695e60(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_02004b10 >> 8),
                  (*PTR_DAT_02004b10 & *(byte *)(param_1 + 0x2dc)) != 0);
}

