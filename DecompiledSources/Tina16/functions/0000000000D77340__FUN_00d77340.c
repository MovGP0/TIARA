/* Ghidra address: 00d77340 */
/* Ghidra symbol: FUN_00d77340 */


void FUN_00d77340(longlong param_1)

{
  if (*(char *)(param_1 + 0x79) == '\x17') {
    thunk_FUN_039bad27(*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80),
                       *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x84) + 1,
                       *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x88) + 1,
                       *(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
  }
  else {
    thunk_FUN_03976db5(*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80),
                       *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x84),
                       *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x88));
  }
  return;
}

