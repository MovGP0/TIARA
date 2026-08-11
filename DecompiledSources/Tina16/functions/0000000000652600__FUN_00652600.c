/* Ghidra address: 00652600 */
/* Ghidra symbol: FUN_00652600 */


undefined4 FUN_00652600(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0xa0) >> 8),(*(uint *)(param_1 + 0xa0) & 0x100000) != 0
                 );
}

