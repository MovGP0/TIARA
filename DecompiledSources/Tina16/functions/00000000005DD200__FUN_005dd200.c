/* Ghidra address: 005dd200 */
/* Ghidra symbol: FUN_005dd200 */


bool FUN_005dd200(longlong param_1)

{
  return (*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x32) & 8) != 0;
}

