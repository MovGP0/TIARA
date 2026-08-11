/* Ghidra address: 00f43920 */
/* Ghidra symbol: FUN_00f43920 */


void FUN_00f43920(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  uVar4 = FUN_0084e390(*(longlong *)(param_1 + 0x6d0),1,
                       *(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x4ac));
  cVar3 = FUN_004113d0(uVar4,&PTR_FUN_0142bf08);
  if ((cVar3 == '\0') || (*PTR_DAT_020039a8 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    plVar5 = (longlong *)
             FUN_0084e390(*(longlong *)(param_1 + 0x6d0),1,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x4ac));
    (**(code **)(*plVar5 + 0x18))(plVar5,local_30);
    dVar6 = (double)FUN_00b8f030(local_30[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_38);
    dVar7 = (double)FUN_00f436d0(local_38,*(undefined8 *)(param_1 + 0x750));
    lVar1 = *(longlong *)(param_1 + 0x6d0);
    FUN_00b8fd60(&local_40,dVar6 + dVar7,8,0,1);
    FUN_00b0b450(lVar1,1,*(undefined4 *)(lVar1 + 0x4ac),local_40);
    uVar4 = FUN_019a45d0();
    FUN_0199e310(uVar4,1,1,0);
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2d8))(*(longlong **)(param_1 + 0x740))
    ;
    if (cVar3 != '\0') {
      uVar4 = FUN_019a45d0();
      uVar4 = FUN_0198d430(uVar4);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x198);
      (**(code **)(*plVar5 + 0x68))(plVar5,uVar4);
    }
    uVar4 = FUN_019a4600();
    FUN_019af200(uVar4,*(undefined8 *)(param_1 + 0x740));
  }
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

