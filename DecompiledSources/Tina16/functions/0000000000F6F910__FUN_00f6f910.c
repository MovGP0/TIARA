/* Ghidra address: 00f6f910 */
/* Ghidra symbol: FUN_00f6f910 */


void FUN_00f6f910(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2 & 0xffff;
  return;
}

