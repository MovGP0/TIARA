/* Ghidra address: 00cb3700 */
/* Ghidra symbol: FUN_00cb3700 */


void FUN_00cb3700(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_00cbd4c0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1,*(undefined2 *)(param_1 + 0x180));
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0xc0))
              (*(longlong **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x158));
    lVar2 = *(longlong *)(param_1 + 0x100);
    *(undefined4 *)(lVar2 + 0xf4) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(lVar2 + 0x130) = *(undefined4 *)(param_1 + 0x184);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x128) + 0x160,*(undefined8 *)(param_1 + 0x138));
    lVar2 = *(longlong *)(param_1 + 0x128);
    *(undefined2 *)(lVar2 + 0x168) = *(undefined2 *)(param_1 + 0x140);
    *(undefined2 *)(lVar2 + 0x16c) = *(undefined2 *)(param_1 + 0x144);
    *(undefined2 *)(lVar2 + 0x16a) = *(undefined2 *)(param_1 + 0x142);
    *(undefined1 *)(lVar2 + 0x1ab) = *(undefined1 *)(param_1 + 0x160);
    FUN_00cb9b60(lVar2,*(undefined1 *)(param_1 + 400));
    FUN_00cb9d70(*(undefined8 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x191));
    lVar2 = *(longlong *)(param_1 + 0x128);
    *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(lVar2 + 0x178) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(lVar2 + 0x188) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(lVar2 + 400) = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined8 *)(lVar2 + 0x198) = *(undefined8 *)(param_1 + 0x1c0);
  }
  return;
}

