/* Ghidra address: 00f6f900 */
/* Ghidra symbol: FUN_00f6f900 */


void FUN_00f6f900(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}

