/* Ghidra address: 01bfd690 */
/* Ghidra symbol: FUN_01bfd690 */


void FUN_01bfd690(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_01bfa7a0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
  if (cVar1 != '\0') {
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    uVar2 = FUN_01bfd980(param_2);
    FUN_01bfde30(param_1,uVar2);
    FUN_01bfd990(param_2,&local_38);
    FUN_01bfdfd0(param_1,local_38);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    FUN_01bfe1b0(param_1,*(undefined4 *)(param_2 + 0xa0));
    FUN_01bfe260(param_1,*(undefined4 *)(param_2 + 0x90));
    FUN_01bfe240(param_1,*(undefined4 *)(param_2 + 0xa4));
    FUN_01bfe480(param_1,*(undefined1 *)(param_2 + 0x95));
    FUN_01bfe6d0(param_1,*(undefined1 *)(param_2 + 0xa9));
    FUN_01bfe500(param_1,*(undefined1 *)(param_2 + 0x96));
    FUN_01bfe3e0(param_1,*(undefined2 *)(param_2 + 0x8c));
    FUN_01bfe550(param_1,*(undefined4 *)(param_2 + 0x88));
    FUN_01bfe120(param_1,*(undefined1 *)(param_2 + 0xb0));
    FUN_00414ad0(param_1 + 0xb8,*(undefined8 *)(param_2 + 0xb8));
    FUN_01bfe340(param_1,*(undefined1 *)(param_2 + 0xc1));
    FUN_01bfe390(param_1,*(undefined1 *)(param_2 + 0xc0));
    FUN_01bfe870(param_1,*(undefined1 *)(param_2 + 0xc2));
    FUN_01bfe790(param_1,*(undefined8 *)(param_2 + 200));
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    if (*(longlong *)(param_2 + 0x50) != 0) {
      plVar3 = (longlong *)FUN_01bfaa70(param_1);
      uVar2 = FUN_01bfaa70(param_2);
      (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
    }
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x48))(plVar3);
    }
  }
  FUN_00414480(&local_38);
  return;
}

