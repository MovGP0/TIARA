/* Ghidra address: 01969b30 */
/* Ghidra symbol: FUN_01969b30 */


void FUN_01969b30(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x2a8) = param_2;
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x1d0) = param_1;
  }
  return;
}

