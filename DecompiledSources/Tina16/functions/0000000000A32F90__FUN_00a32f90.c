/* Ghidra address: 00a32f90 */
/* Ghidra symbol: FUN_00a32f90 */


uint FUN_00a32f90(uint param_1)

{
  return ((param_1 & 0xff00) << 8 | param_1 << 0x18) >> 0x10;
}

