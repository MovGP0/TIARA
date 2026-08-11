/* Ghidra address: 01ccde20 */
/* Ghidra symbol: FUN_01ccde20 */


void FUN_01ccde20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  FUN_00498350(local_28,*(int *)(param_1 + 0x14) + -1,*(int *)(param_1 + 0x18) + -1,
               *(int *)(param_1 + 0x1c) + 3,*(int *)(param_1 + 0x20) + 3);
  uVar1 = thunk_FUN_0411fefb(local_28);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_039bba01(uVar1,*(undefined8 *)(param_1 + 0x58));
  return;
}

