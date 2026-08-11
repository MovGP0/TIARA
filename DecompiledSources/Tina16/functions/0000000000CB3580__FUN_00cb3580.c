/* Ghidra address: 00cb3580 */
/* Ghidra symbol: FUN_00cb3580 */


void FUN_00cb3580(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x140) = param_2;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x128) + 0x168) = param_2;
  }
  return;
}

