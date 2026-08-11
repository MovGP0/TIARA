/* Ghidra address: 00a46440 */
/* Ghidra symbol: FUN_00a46440 */


void FUN_00a46440(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) < 0xff00) {
    FUN_004095f0(*(undefined8 *)(param_2 + 8),(longlong)*(int *)(param_2 + 0x10));
  }
  else {
    thunk_FUN_04172795(*(undefined8 *)(param_2 + 0x18));
    thunk_FUN_03d5bf3d(*(undefined8 *)(param_2 + 0x18));
  }
  FUN_00410f20(param_2);
  return;
}

