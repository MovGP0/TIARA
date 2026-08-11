/* Ghidra address: 00b7d950 */
/* Ghidra symbol: FUN_00b7d950 */


ushort FUN_00b7d950(ushort param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f) | param_1 << (0x10 - param_2 & 0x1f);
}

