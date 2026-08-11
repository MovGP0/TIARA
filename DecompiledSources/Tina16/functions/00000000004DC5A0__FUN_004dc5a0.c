/* Ghidra address: 004dc5a0 */
/* Ghidra symbol: FUN_004dc5a0 */


undefined4 FUN_004dc5a0(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x20) >> 8),(*(uint *)(param_1 + 0x20) & 8) != 0);
}

