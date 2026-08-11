/* Ghidra address: 010ae930 */
/* Ghidra symbol: FUN_010ae930 */


undefined4 FUN_010ae930(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),(*(uint *)(param_1 + 0x10) & 8) != 0);
}

