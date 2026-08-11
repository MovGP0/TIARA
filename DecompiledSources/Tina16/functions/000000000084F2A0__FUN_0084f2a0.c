/* Ghidra address: 0084f2a0 */
/* Ghidra symbol: FUN_0084f2a0 */


void FUN_0084f2a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (*(char *)(param_1 + 0x538) != '\0') goto code_r0x0084f621;
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x528) == *(longlong *)(param_1 + 0x520)) {
    pcVar5 = (code *)FUN_00411550(param_1,0xffaa);
    (*pcVar5)(param_1);
    uVar6 = FUN_0084f210(param_1);
    FUN_0064e030(uVar6,*(undefined4 *)(param_1 + 200));
    uVar6 = FUN_0084f210(param_1);
    FUN_0064df10(uVar6,*(undefined8 *)(param_1 + 0xb8));
    plVar7 = (longlong *)FUN_0084f210(param_1);
    (**(code **)(*plVar7 + 0x148))(plVar7,*(undefined1 *)(param_1 + 0x2c8));
    if (*(int *)(param_1 + 0x534) < 1) {
LAB_0084f3e4:
      uVar6 = FUN_0084f210(param_1);
      lVar8 = FUN_0084f210(param_1);
      iVar1 = (**(code **)(**(longlong **)(lVar8 + 0x4a0) + 0x28))(*(longlong **)(lVar8 + 0x4a0));
      uVar9 = FUN_0084f210(param_1);
      iVar3 = FUN_0068bbb0(uVar9);
      FUN_0064cc50(uVar6,iVar1 * iVar3 + 4);
    }
    else {
      lVar8 = FUN_0084f210(param_1);
      iVar1 = (**(code **)(**(longlong **)(lVar8 + 0x4a0) + 0x28))(*(longlong **)(lVar8 + 0x4a0));
      if (iVar1 < *(int *)(param_1 + 0x534)) goto LAB_0084f3e4;
      uVar6 = FUN_0084f210(param_1);
      uVar9 = FUN_0084f210(param_1);
      iVar1 = FUN_0068bbb0(uVar9);
      FUN_0064cc50(uVar6,*(int *)(param_1 + 0x534) * iVar1 + 4);
    }
    FUN_00835150(param_1,&local_40);
    if (local_40 == 0) {
      plVar7 = (longlong *)FUN_0084f210(param_1);
      (**(code **)(*plVar7 + 0x268))(plVar7,0xffffffff);
    }
    else {
      plVar7 = (longlong *)FUN_0084f210(param_1);
      lVar8 = FUN_0084f210(param_1);
      FUN_00835150(param_1,&local_48);
      uVar2 = (**(code **)(**(longlong **)(lVar8 + 0x4a0) + 0xb0))
                        (*(longlong **)(lVar8 + 0x4a0),local_48);
      (**(code **)(*plVar7 + 0x268))(plVar7,uVar2);
    }
    uVar6 = FUN_0084f210(param_1);
    iVar1 = FUN_0064d0b0(uVar6);
    lVar8 = FUN_0084f210(param_1);
    iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x4a0) + 0x28))();
    local_54 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar8 = FUN_0084f210(param_1);
        lVar10 = FUN_0084f210(param_1);
        (**(code **)(**(longlong **)(lVar10 + 0x4a0) + 0x18))
                  (*(longlong **)(lVar10 + 0x4a0),&local_50,local_54);
        iVar4 = FUN_005fdff0(*(undefined8 *)(lVar8 + 0x4b8),local_50);
        if (iVar1 < iVar4) {
          iVar1 = iVar4;
        }
        local_54 = local_54 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar6 = FUN_0084f210(param_1);
    FUN_0064d0e0(uVar6,iVar1);
  }
  local_38 = *(undefined4 *)(param_1 + 0x90);
  local_34 = *(undefined4 *)(param_1 + 0x94);
  uVar11 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x78),&local_38);
  local_30._4_4_ = (int)(uVar11 >> 0x20);
  iVar1 = local_30._4_4_;
  iVar4 = local_30._4_4_ + *(int *)(param_1 + 0x9c);
  local_30 = uVar11;
  iVar3 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
  if (iVar3 < iVar4 + *(int *)(*(longlong *)(param_1 + 0x528) + 0x9c)) {
    iVar4 = iVar1 - *(int *)(*(longlong *)(param_1 + 0x528) + 0x9c);
  }
  uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0x528));
  thunk_FUN_041cc6e2(uVar6,0,local_30 & 0xffffffff,iVar4,0,0,0x51);
  *(undefined1 *)(param_1 + 0x538) = 1;
  FUN_0083e5c0();
  uVar6 = FUN_0065b870(param_1);
  thunk_FUN_03c244fb(uVar6);
code_r0x0084f621:
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

