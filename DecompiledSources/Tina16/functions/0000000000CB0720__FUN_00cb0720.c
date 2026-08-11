/* Ghidra address: 00cb0720 */
/* Ghidra symbol: FUN_00cb0720 */


undefined8 FUN_00cb0720(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x108) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x108) + 0x30) == 0);
}

