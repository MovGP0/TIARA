/* Ghidra address: 00f60d70 */
/* Ghidra symbol: FUN_00f60d70 */


void FUN_00f60d70(uint *param_1,byte param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0x1f);
  return;
}

