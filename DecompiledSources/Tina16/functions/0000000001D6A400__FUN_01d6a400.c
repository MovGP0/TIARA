/* Ghidra address: 01d6a400 */
/* Ghidra symbol: FUN_01d6a400 */


undefined8 FUN_01d6a400(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_1 + 8) + 0x10));
}

