/* Ghidra address: 00cd7290 */
/* Ghidra symbol: FUN_00cd7290 */


int FUN_00cd7290(uint param_1)

{
  return param_1 * 0x1000000 + (param_1 & 0xff00) * 0x100 + ((param_1 & 0xff0000) >> 8) +
         (param_1 >> 0x18);
}

