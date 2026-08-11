/* Ghidra address: 00cb9d70 */
/* Ghidra symbol: FUN_00cb9d70 */


void FUN_00cb9d70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1a9) = param_2;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_00c90070(*(longlong *)(param_1 + 0x158));
  }
  return;
}

