/* Ghidra address: 008276d0 */
/* Ghidra symbol: FUN_008276d0 */


undefined8 FUN_008276d0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(*(longlong *)(param_1 + 8) + 0x10) == 0);
}

