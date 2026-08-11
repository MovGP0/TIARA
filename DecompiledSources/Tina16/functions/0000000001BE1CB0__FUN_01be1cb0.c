/* Ghidra address: 01be1cb0 */
/* Ghidra symbol: FUN_01be1cb0 */


void FUN_01be1cb0(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_1 + 0x592) == '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar1,*param_2,0,*(undefined8 *)(param_2 + 4));
    (**(code **)(*param_1 + 0x410))(param_1);
  }
  return;
}

