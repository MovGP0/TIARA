/* Ghidra address: 01242250 */
/* Ghidra symbol: FUN_01242250 */


uint FUN_01242250(uint param_1)

{
  return (param_1 & 0xff) << 0x10 | 0xff000000 | (param_1 >> 8 & 0xff) << 8 | param_1 >> 0x10 & 0xff
  ;
}

