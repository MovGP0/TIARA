/* Ghidra address: 009abab0 */
/* Ghidra symbol: FUN_009abab0 */


undefined8 FUN_009abab0(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_1 + 8) + 0x10));
}

