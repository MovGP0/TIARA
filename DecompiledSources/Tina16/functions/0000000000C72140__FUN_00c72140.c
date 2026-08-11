/* Ghidra address: 00c72140 */
/* Ghidra symbol: FUN_00c72140 */


undefined8 FUN_00c72140(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(*(longlong *)(param_1 + 8) + 0x10) == 0);
}

