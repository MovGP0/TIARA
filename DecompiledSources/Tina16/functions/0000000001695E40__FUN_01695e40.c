/* Ghidra address: 01695e40 */
/* Ghidra symbol: FUN_01695e40 */


undefined8 FUN_01695e40(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_02003f70 >> 8),
                  (*PTR_DAT_02003f70 & *(byte *)(param_1 + 0x2dc)) != 0);
}

