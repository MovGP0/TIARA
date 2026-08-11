/* Ghidra address: 00a7a610 */
/* Ghidra symbol: FUN_00a7a610 */


void FUN_00a7a610(longlong param_1)

{
  FUN_00a799b0(param_1,1);
  thunk_FUN_0418a669(*(undefined8 *)(param_1 + 0xb8));
  FUN_00a79870(DAT_02014718,*(undefined8 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0xb4) == '\0') {
    thunk_FUN_04178f5e(*(undefined8 *)(param_1 + 0xb8));
  }
  FUN_00a79ba0(param_1,0);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    thunk_FUN_04172795(*(longlong *)(param_1 + 200));
    thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 200));
  }
  return;
}

