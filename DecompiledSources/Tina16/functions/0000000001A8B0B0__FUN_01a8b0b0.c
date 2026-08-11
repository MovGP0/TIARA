/* Ghidra address: 01a8b0b0 */
/* Ghidra symbol: FUN_01a8b0b0 */


void FUN_01a8b0b0(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0xbc8),
               *(char *)(*(longlong *)(param_1 + 0xbc8) + 0x80) == '\0');
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_01ae4310(*(longlong *)(param_1 + 0x798));
  }
  return;
}

