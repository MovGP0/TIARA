/* Ghidra address: 01be1d20 */
/* Ghidra symbol: FUN_01be1d20 */


void FUN_01be1d20(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_1 + 0x592) == '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar1,*param_2,0,*(undefined8 *)(param_2 + 4));
    (**(code **)(*param_1 + 0x410))(param_1);
  }
  return;
}

