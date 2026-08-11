/* Ghidra address: 0067fd80 */
/* Ghidra symbol: FUN_0067fd80 */


undefined4 FUN_0067fd80(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0xa0) >> 8),(*(uint *)(param_1 + 0xa0) & 0x40) == 0);
}

