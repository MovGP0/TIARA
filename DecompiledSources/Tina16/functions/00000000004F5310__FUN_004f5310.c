/* Ghidra address: 004f5310 */
/* Ghidra symbol: FUN_004f5310 */


undefined8 FUN_004f5310(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(int *)(param_1 + 0x10) < *(int *)(*(longlong *)(param_1 + 8) + 0x10));
}

