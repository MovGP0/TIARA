/* Ghidra address: 0054b4c0 */
/* Ghidra symbol: FUN_0054b4c0 */


int FUN_0054b4c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x59) == '\0') {
    FUN_0054abe0(param_1);
  }
  return (uint)*(ushort *)(param_1 + 0x40) * 8 + 200;
}

