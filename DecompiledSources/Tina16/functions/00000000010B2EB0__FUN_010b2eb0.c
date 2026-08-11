/* Ghidra address: 010b2eb0 */
/* Ghidra symbol: FUN_010b2eb0 */


undefined8 FUN_010b2eb0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) == 0);
}

