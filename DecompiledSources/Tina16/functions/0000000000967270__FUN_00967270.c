/* Ghidra address: 00967270 */
/* Ghidra symbol: FUN_00967270 */


undefined8 FUN_00967270(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x90) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x90) + 0x28) == '\0');
}

