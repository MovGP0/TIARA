/* Ghidra address: 00bc5e20 */
/* Ghidra symbol: FUN_00bc5e20 */


void FUN_00bc5e20(longlong param_1,undefined2 param_2)

{
  if (*(undefined2 **)(param_1 + 0x160) == (undefined2 *)(param_1 + 0x15c)) {
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 3;
  }
  else {
    **(undefined2 **)(param_1 + 0x160) = param_2;
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 2;
    **(undefined4 **)(param_1 + 0x160) = 0;
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 4;
  }
  return;
}

