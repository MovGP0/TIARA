/* Ghidra address: 0053c6d0 */
/* Ghidra symbol: FUN_0053c6d0 */


uint FUN_0053c6d0(uint param_1,byte param_2,byte param_3)

{
  return param_1 >> (param_2 & 0x1f) & (1 << (param_3 & 0x1f)) - 1U;
}

