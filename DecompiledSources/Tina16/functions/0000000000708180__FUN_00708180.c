/* Ghidra address: 00708180 */
/* Ghidra symbol: FUN_00708180 */


void FUN_00708180(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x48) == 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) != 0)) {
    FUN_00708200();
  }
  return;
}

