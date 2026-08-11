/* Ghidra address: 015fc230 */
/* Ghidra symbol: FUN_015fc230 */


undefined4 FUN_015fc230(ulonglong *param_1)

{
  return CONCAT31((int3)(*param_1 >> 0x20),(*param_1 & 0x4000000) != 0);
}

