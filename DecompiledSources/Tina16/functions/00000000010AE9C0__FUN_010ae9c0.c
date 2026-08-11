/* Ghidra address: 010ae9c0 */
/* Ghidra symbol: FUN_010ae9c0 */


undefined4 FUN_010ae9c0(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),(*(uint *)(param_1 + 0x10) & 4) != 0);
}

