/* Ghidra address: 0079dd20 */
/* Ghidra symbol: FUN_0079dd20 */


undefined8 FUN_0079dd20(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_1 + 8) + 0x10));
}

