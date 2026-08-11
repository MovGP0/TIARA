/* Ghidra address: 004ae780 */
/* Ghidra symbol: FUN_004ae780 */


undefined8 FUN_004ae780(longlong param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(int *)(param_1 + 8) < *(int *)(*(longlong *)(param_1 + 0x10) + 0x10));
}

