/* Ghidra address: 01695e20 */
/* Ghidra symbol: FUN_01695e20 */


undefined8 FUN_01695e20(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)DAT_02004b08 >> 8),
                  (*DAT_02004b08 & *(byte *)(param_1 + 0x2dc)) != 0);
}

