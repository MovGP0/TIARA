/* Ghidra address: 008b0300 */
/* Ghidra symbol: FUN_008b0300 */


uint FUN_008b0300(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}

