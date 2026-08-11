/* Ghidra address: 00692630 */
/* Ghidra symbol: FUN_00692630 */


bool FUN_00692630(longlong param_1)

{
  return (*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 4) != 0;
}

