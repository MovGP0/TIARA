/* Ghidra address: 01c849a0 */
/* Ghidra symbol: FUN_01c849a0 */


void FUN_01c849a0(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0xcd8),
               *(char *)(*(longlong *)(param_1 + 0xcd8) + 0x80) == '\0');
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xce0),
               *(undefined1 *)(*(longlong *)(param_1 + 0xcd8) + 0x80));
  return;
}

