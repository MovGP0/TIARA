/* Ghidra address: 00f6f960 */
/* Ghidra symbol: FUN_00f6f960 */


undefined4 FUN_00f6f960(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),(*(uint *)(param_1 + 0x10) & 0x10) != 0);
}

