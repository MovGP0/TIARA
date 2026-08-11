/* Ghidra address: 00729f10 */
/* Ghidra symbol: FUN_00729f10 */


undefined8 FUN_00729f10(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(longlong *)(*(longlong *)(param_1 + 8) + 0x40) == param_1);
}

