/* Ghidra address: 007fa890 */
/* Ghidra symbol: FUN_007fa890 */


undefined8 FUN_007fa890(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(char *)(*(longlong *)(param_1 + 8) + 0x494) == '\0');
}

