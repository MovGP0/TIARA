/* Ghidra address: 0040a0f0 */
/* Ghidra symbol: FUN_0040a0f0 */


void FUN_0040a0f0(uint param_1)

{
  DAT_01db904c = param_1 & 0xffc0;
  MXCSR = param_1 & 0xffc0;
  return;
}

