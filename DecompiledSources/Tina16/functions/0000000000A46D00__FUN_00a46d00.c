/* Ghidra address: 00a46d00 */
/* Ghidra symbol: FUN_00a46d00 */


void FUN_00a46d00(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xdc) == 1) {
    thunk_FUN_039bba01(*(undefined8 *)(param_2 + 0xd0),*(undefined8 *)(param_2 + 200));
  }
  else {
    thunk_FUN_039bba01(*(undefined8 *)(param_2 + 0xd0),0);
  }
  thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0xc0));
  thunk_FUN_0416f828(*(undefined8 *)(param_2 + 200));
  return;
}

