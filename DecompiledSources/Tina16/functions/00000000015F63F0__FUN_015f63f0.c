/* Ghidra address: 015f63f0 */
/* Ghidra symbol: FUN_015f63f0 */


void FUN_015f63f0(byte param_1,byte *param_2)

{
  *param_2 = *param_2 & -(char)(1 << (param_1 & 0x1f)) - 1U;
  return;
}

