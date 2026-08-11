/* Ghidra address: 00d44980 */
/* Ghidra symbol: FUN_00d44980 */


void FUN_00d44980(undefined8 param_1,longlong param_2)

{
  FUN_005ffb10(*(undefined8 *)(param_2 + 0xb8),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xb8));
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    thunk_FUN_0416269d(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 8),param_2 + 0x60);
  }
  return;
}

