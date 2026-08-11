/* Ghidra address: 00bf7270 */
/* Ghidra symbol: FUN_00bf7270 */


void FUN_00bf7270(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
  if (param_2 == '\0') {
    (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined4 *)(param_1 + 0xb8));
    (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined4 *)(param_1 + 0xbc));
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 0xb8));
  }
  else {
    (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined4 *)(param_1 + 0xa8));
    (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined4 *)(param_1 + 0xa4));
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 0xa8));
  }
  return;
}

