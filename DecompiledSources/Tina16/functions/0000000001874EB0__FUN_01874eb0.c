/* Ghidra address: 01874eb0 */
/* Ghidra symbol: FUN_01874eb0 */


uint FUN_01874eb0(undefined8 param_1,uint param_2,byte param_3)

{
  return param_2 << (param_3 & 0x1f) | param_2 >> (0x20 - param_3 & 0x1f);
}

