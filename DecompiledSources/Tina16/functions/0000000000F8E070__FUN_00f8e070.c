/* Ghidra address: 00f8e070 */
/* Ghidra symbol: FUN_00f8e070 */


void FUN_00f8e070(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x33f8) == '\0') && (*(int *)(param_1 + 0x34fc) == 0)) {
    *(undefined4 *)(param_1 + 0x3490) = param_2;
    *(undefined4 *)(param_1 + 0x34f8) = 1;
  }
  else {
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x3500),0x123e,0,0);
  }
  return;
}

