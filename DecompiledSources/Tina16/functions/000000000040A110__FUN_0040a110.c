/* Ghidra address: 0040a110 */
/* Ghidra symbol: FUN_0040a110 */


void FUN_0040a110(uint param_1)

{
  MXCSR = MXCSR & 0xffc0 | param_1 & 0x3f;
  return;
}

