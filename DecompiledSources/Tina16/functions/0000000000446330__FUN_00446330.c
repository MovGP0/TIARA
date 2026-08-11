/* Ghidra address: 00446330 */
/* Ghidra symbol: FUN_00446330 */


void FUN_00446330(longlong param_1,undefined2 param_2)

{
  if (*(char *)(param_1 + 0xe8) == '\0') {
    **(undefined1 **)(param_1 + 0xc0) = (char)param_2;
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
  }
  else {
    **(undefined2 **)(param_1 + 0xc0) = param_2;
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 2;
  }
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  return;
}

