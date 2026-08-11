/* Ghidra address: 01bfb4a0 */
/* Ghidra symbol: FUN_01bfb4a0 */


void FUN_01bfb4a0(longlong param_1)

{
  FUN_01bfb100(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_0064dbe0(*(longlong *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x58));
  }
  return;
}

