/* Ghidra address: 00f6f990 */
/* Ghidra symbol: FUN_00f6f990 */


undefined4 FUN_00f6f990(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),(*(uint *)(param_1 + 0x10) & 4) != 0);
}

