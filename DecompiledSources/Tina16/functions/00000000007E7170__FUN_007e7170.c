/* Ghidra address: 007e7170 */
/* Ghidra symbol: FUN_007e7170 */


void FUN_007e7170(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xd0) != param_2) {
    *(char *)(param_1 + 0xd0) = param_2;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      thunk_FUN_041b2403(*(longlong *)(param_1 + 0x88),0xb015,0,0);
    }
  }
  return;
}

