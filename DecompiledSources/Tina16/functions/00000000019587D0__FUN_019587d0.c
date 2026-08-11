/* Ghidra address: 019587d0 */
/* Ghidra symbol: FUN_019587d0 */


undefined8 FUN_019587d0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(char *)(param_1 + 0x14) != *(char *)(*(longlong *)(param_1 + 8) + 0x3c));
}

