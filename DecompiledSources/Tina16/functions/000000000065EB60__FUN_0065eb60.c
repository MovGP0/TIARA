/* Ghidra address: 0065eb60 */
/* Ghidra symbol: FUN_0065eb60 */


undefined4 FUN_0065eb60(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0xa0) >> 8),(*(uint *)(param_1 + 0xa0) & 0x40000) != 0)
  ;
}

