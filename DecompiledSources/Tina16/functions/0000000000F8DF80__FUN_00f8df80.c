/* Ghidra address: 00f8df80 */
/* Ghidra symbol: FUN_00f8df80 */


void FUN_00f8df80(longlong param_1)

{
  if ((*(int *)(param_1 + 0x3490) != 0) && (*(char *)(param_1 + 0x33f8) == '\0')) {
    *(undefined4 *)(param_1 + 0x34f8) = 2;
    *(undefined1 *)(param_1 + 0x3471) = 1;
    if (*(int *)(param_1 + 0x3490) == 1) {
      thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x3500),0x123e,0,0);
    }
    else if (*(int *)(param_1 + 0x3490) == 2) {
      *(undefined4 *)PTR_DAT_02003570 = 0;
      thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x3500),0x123f,0,0);
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x40),0x10,0,0);
    }
  }
  return;
}

