/* Ghidra address: 00445a20 */
/* Ghidra symbol: FUN_00445a20 */


void FUN_00445a20(longlong param_1,undefined2 param_2)

{
  if (*(char *)(param_1 + 0x98) == '\0') {
    **(undefined1 **)(param_1 + 0x90) = (char)param_2;
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 1;
  }
  else {
    **(undefined2 **)(param_1 + 0x90) = param_2;
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 2;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}

