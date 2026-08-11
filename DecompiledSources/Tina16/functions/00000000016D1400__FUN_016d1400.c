/* Ghidra address: 016d1400 */
/* Ghidra symbol: FUN_016d1400 */


undefined8 FUN_016d1400(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_1 + 8) + 0x10));
}

