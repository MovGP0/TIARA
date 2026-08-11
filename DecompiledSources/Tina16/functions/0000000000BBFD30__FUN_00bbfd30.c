/* Ghidra address: 00bbfd30 */
/* Ghidra symbol: FUN_00bbfd30 */


undefined4 FUN_00bbfd30(longlong param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 8) != *(int *)(param_1 + 0xc));
}

