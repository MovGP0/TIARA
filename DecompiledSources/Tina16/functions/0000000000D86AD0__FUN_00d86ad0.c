/* Ghidra address: 00d86ad0 */
/* Ghidra symbol: FUN_00d86ad0 */


undefined8 FUN_00d86ad0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                  *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd8) != 0);
}

