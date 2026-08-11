/* Ghidra address: 00f60d90 */
/* Ghidra symbol: FUN_00f60d90 */


ulonglong FUN_00f60d90(undefined8 param_1,byte param_2)

{
  return CONCAT71((int7)((ulonglong)param_1 >> 8),(1 << (param_2 & 0x1f) & (uint)param_1) != 0) &
         0xffffffff;
}

