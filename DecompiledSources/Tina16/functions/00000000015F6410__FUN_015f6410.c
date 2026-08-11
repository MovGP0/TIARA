/* Ghidra address: 015f6410 */
/* Ghidra symbol: FUN_015f6410 */


void FUN_015f6410(byte param_1,byte *param_2)

{
  *param_2 = *param_2 | (byte)(1 << (param_1 & 0x1f));
  return;
}

