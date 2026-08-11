/* Ghidra address: 00f6f9b0 */
/* Ghidra symbol: FUN_00f6f9b0 */


undefined4 FUN_00f6f9b0(longlong param_1,uint param_2)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),(param_2 & *(uint *)(param_1 + 0x10)) != 0)
  ;
}

