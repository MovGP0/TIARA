/* Ghidra address: 00b7f020 */
/* Ghidra symbol: FUN_00b7f020 */


uint FUN_00b7f020(uint param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f) | param_1 << (0x20 - param_2 & 0x1f);
}

