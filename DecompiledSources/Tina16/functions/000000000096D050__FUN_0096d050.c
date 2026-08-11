/* Ghidra address: 0096d050 */
/* Ghidra symbol: FUN_0096d050 */


undefined8 FUN_0096d050(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x90) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x90) + 0x28) != '\x02');
}

