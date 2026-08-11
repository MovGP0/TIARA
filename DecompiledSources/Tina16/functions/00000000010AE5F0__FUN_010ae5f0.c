/* Ghidra address: 010ae5f0 */
/* Ghidra symbol: FUN_010ae5f0 */


undefined4 FUN_010ae5f0(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),(*(uint *)(param_1 + 0x10) & 1) != 0);
}

