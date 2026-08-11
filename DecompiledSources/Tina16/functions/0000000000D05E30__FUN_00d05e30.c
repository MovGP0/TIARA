/* Ghidra address: 00d05e30 */
/* Ghidra symbol: FUN_00d05e30 */


void FUN_00d05e30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_00cbd0f0(param_1);
  lVar3 = FUN_00d05e00(param_1);
  if (*(longlong *)(lVar3 + 0x130) != 0) {
    lVar3 = FUN_00d05e00(param_1);
    lVar4 = FUN_00d05e00(param_1);
    iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x130) + 0x20))(*(longlong **)(lVar4 + 0x130));
    if (*(int *)(*(longlong *)(lVar3 + 0x130) + 8) == iVar2) {
      lVar3 = *(longlong *)(param_1 + 0x1f0);
      if (lVar3 != 0) {
        lVar4 = FUN_00d05e00(param_1);
        FUN_00ceb290(lVar3,*(undefined8 *)(lVar4 + 0x130),*(undefined8 *)(param_1 + 0x208));
      }
      lVar3 = FUN_00d05e00(param_1);
      FUN_00410f20(*(undefined8 *)(lVar3 + 0x130));
      lVar3 = FUN_00d05e00(param_1);
      *(undefined8 *)(lVar3 + 0x130) = 0;
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 8);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    if ((int)plVar1[1] == iVar2) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 8);
      (**(code **)(*plVar1 + 0x40))(plVar1);
    }
  }
  return;
}

