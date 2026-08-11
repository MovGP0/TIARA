/* Ghidra address: 015ab310 */
/* Ghidra symbol: FUN_015ab310 */


uint FUN_015ab310(uint param_1)

{
  return (param_1 >> 0x10 & 0xff) << 8 | param_1 >> 0x18 |
         ((param_1 & 0xff) << 8 | (param_1 & 0xff00) >> 8) << 0x10;
}

