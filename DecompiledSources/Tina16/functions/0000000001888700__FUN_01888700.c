/* Ghidra address: 01888700 */
/* Ghidra symbol: FUN_01888700 */


undefined8 FUN_01888700(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x48) + 8) != '\0');
}

