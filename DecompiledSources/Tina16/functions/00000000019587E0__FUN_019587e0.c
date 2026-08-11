/* Ghidra address: 019587e0 */
/* Ghidra symbol: FUN_019587e0 */


undefined8 FUN_019587e0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(double *)(param_1 + 0x18) != *(double *)(*(longlong *)(param_1 + 8) + 0x40));
}

