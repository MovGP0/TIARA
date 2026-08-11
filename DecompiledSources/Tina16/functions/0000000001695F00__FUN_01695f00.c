/* Ghidra address: 01695f00 */
/* Ghidra symbol: FUN_01695f00 */


undefined8 FUN_01695f00(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_020045a8 >> 8),
                  (*PTR_DAT_020045a8 & *(byte *)(param_1 + 0x2dc)) != 0);
}

