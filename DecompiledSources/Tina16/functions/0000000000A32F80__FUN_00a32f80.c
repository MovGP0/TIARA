/* Ghidra address: 00a32f80 */
/* Ghidra symbol: FUN_00a32f80 */


uint FUN_00a32f80(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

