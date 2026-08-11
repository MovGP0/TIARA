/* Ghidra address: 01242280 */
/* Ghidra symbol: FUN_01242280 */


uint FUN_01242280(uint param_1)

{
  return (param_1 & 0xff) << 0x10 | param_1 & 0xff00 | (param_1 & 0xff0000) >> 0x10;
}

