/* Ghidra address: 01c83d30 */
/* Ghidra symbol: FUN_01c83d30 */


void FUN_01c83d30(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0xc90),
               *(char *)(*(longlong *)(param_1 + 0xc90) + 0x80) == '\0');
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xc98),
               *(undefined1 *)(*(longlong *)(param_1 + 0xc90) + 0x80));
  return;
}

