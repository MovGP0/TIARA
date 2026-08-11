/* Ghidra address: 00aaadb0 */
/* Ghidra symbol: FUN_00aaadb0 */


void FUN_00aaadb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x200) + 0x7c) != '\0') {
    if (*(int *)(param_2 + 0x1ac) == 1) {
      uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x208));
      thunk_FUN_039bba01(uVar1,*(undefined8 *)(param_2 + 0x1a0));
    }
    else {
      uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x208));
      thunk_FUN_039bba01(uVar1,0);
    }
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x198));
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x1a0));
  }
  return;
}

