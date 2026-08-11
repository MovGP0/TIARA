/* Ghidra address: 00d21100 */
/* Ghidra symbol: FUN_00d21100 */


undefined4 FUN_00d21100(longlong param_1,byte param_2)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x70) >> 8),
                  (1 << (param_2 & 0x1f) & *(uint *)(param_1 + 0x70)) != 0);
}

