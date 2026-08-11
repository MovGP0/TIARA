/* Ghidra address: 00d45130 */
/* Ghidra symbol: FUN_00d45130 */


void FUN_00d45130(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x40));
    thunk_FUN_0402759f(uVar1,*(undefined4 *)(param_2 + 0x4c));
  }
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x40),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x40));
  return;
}

