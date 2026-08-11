/* Ghidra address: 01c38530 */
/* Ghidra symbol: FUN_01c38530 */


void FUN_01c38530(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x6c0)) {
    *(undefined1 *)(param_1 + 0x951) = 0;
    *(undefined1 *)(param_1 + 0x908) = 0;
    FUN_00414480(param_1 + 0x910);
    FUN_00414480(param_1 + 0x918);
    if (*(longlong *)(param_1 + 0x920) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x920));
      *(undefined8 *)(param_1 + 0x920) = 0;
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x268))(*(longlong **)(param_1 + 0x7b8),1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7c8),0);
    FUN_01c3c2e0(param_1,*(undefined8 *)(param_1 + 0x7a0));
    FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6c8));
  }
  else if (param_2 == *(longlong *)(param_1 + 0x6c8)) {
    *(undefined4 *)(param_1 + 0x928) = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8));
    FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6f0));
  }
  else if (param_2 == *(longlong *)(param_1 + 0x6f0)) {
    *(undefined4 *)(param_1 + 0x92c) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x930) = 0;
    *(undefined1 *)(param_1 + 0x938) = 1;
    FUN_00414480(param_1 + 0x940);
    FUN_00414480(param_1 + 0x948);
    *(undefined1 *)(param_1 + 0x950) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x828) + 0x268))(*(longlong **)(param_1 + 0x828),1);
    FUN_01c3d610(param_1,0);
    FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6f8));
  }
  else if (param_2 == *(longlong *)(param_1 + 0x6f8)) {
    FUN_01c26980(*(undefined8 *)(param_1 + 0x900),0);
  }
  return;
}

