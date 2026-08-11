/* Ghidra address: 01a99b90 */
/* Ghidra symbol: FUN_01a99b90 */


void FUN_01a99b90(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x84) != param_2) &&
     (*(char *)(param_1 + 0x84) = param_2, *(char *)(param_1 + 0x12d) == '\0')) {
    if (param_2 == '\0') {
      thunk_FUN_03f297b0(*(undefined8 *)(param_1 + 0x148),0xd);
    }
    else {
      thunk_FUN_03f297b0(*(undefined8 *)(param_1 + 0x148),7);
    }
  }
  return;
}

