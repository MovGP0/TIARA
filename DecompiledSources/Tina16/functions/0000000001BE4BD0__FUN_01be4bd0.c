/* Ghidra address: 01be4bd0 */
/* Ghidra symbol: FUN_01be4bd0 */


void FUN_01be4bd0(longlong *param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_00659870(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x592) == '\0') {
    return;
  }
  FUN_01be46f0(param_1,param_2);
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 == 0x12) {
    (**(code **)(*(longlong *)param_1[0xba] + 0x408))((longlong *)param_1[0xba]);
    return;
  }
  if (sVar1 == 0x25) {
    lVar3 = param_1[0xba];
    uVar4 = FUN_01be2d90(lVar3);
    lVar3 = FUN_01c02450(lVar3,uVar4);
    if (lVar3 == 0) {
      lVar3 = FUN_01c01230(param_1[0xba]);
    }
    if (lVar3 == 0) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x80) == 0) {
      return;
    }
    (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x268))(*(longlong **)(lVar3 + 0x80));
    return;
  }
  if (sVar1 != 0x27) {
    return;
  }
  lVar3 = FUN_01be2d90(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_01be2d90(param_1);
    cVar2 = FUN_01bfaa20(uVar4);
    if ((cVar2 != '\0') && (lVar3 = FUN_01be2d90(param_1), *(longlong *)(lVar3 + 0x30) == 0)) {
      lVar3 = FUN_01be2d90(param_1);
      cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0xf0))(*(longlong **)(lVar3 + 0x80));
      if ((cVar2 != '\0') || (cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar2 != '\0')) {
        lVar3 = FUN_01be2d90(param_1);
        (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x268))(*(longlong **)(lVar3 + 0x80));
        return;
      }
    }
    lVar3 = param_1[0xba];
    uVar4 = FUN_01be2d90(lVar3);
    lVar3 = FUN_01c01690(lVar3,uVar4);
    if (lVar3 == 0) {
      lVar3 = FUN_01c01290(param_1[0xba]);
    }
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x80) != 0)) {
      (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x268))(*(longlong **)(lVar3 + 0x80));
    }
    return;
  }
  return;
}

