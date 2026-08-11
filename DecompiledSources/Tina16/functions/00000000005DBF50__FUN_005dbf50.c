/* Ghidra address: 005dbf50 */
/* Ghidra symbol: FUN_005dbf50 */


bool FUN_005dbf50(longlong param_1)

{
  return (*(byte *)(*(longlong *)(param_1 + 8) + 0x32) & 8) != 0;
}

