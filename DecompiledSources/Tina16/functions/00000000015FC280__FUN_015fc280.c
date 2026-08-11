/* Ghidra address: 015fc280 */
/* Ghidra symbol: FUN_015fc280 */


undefined4 FUN_015fc280(ulonglong *param_1)

{
  return CONCAT31((int3)(*param_1 >> 0x20),(*param_1 & 0x8000000) != 0);
}

