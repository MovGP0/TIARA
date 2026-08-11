/* Ghidra address: 004dc5b0 */
/* Ghidra symbol: FUN_004dc5b0 */


undefined4 FUN_004dc5b0(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x20) >> 8),(*(uint *)(param_1 + 0x20) & 1) != 0);
}

