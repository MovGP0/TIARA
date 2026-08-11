/* Ghidra address: 00bbfd40 */
/* Ghidra symbol: FUN_00bbfd40 */


undefined4 FUN_00bbfd40(longlong param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14));
}

