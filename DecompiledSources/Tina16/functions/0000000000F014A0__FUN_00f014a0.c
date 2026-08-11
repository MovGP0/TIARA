/* Ghidra address: 00f014a0 */
/* Ghidra symbol: FUN_00f014a0 */


void FUN_00f014a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong **in_stack_ffffffffffffff78;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  if ((*(char *)(param_1 + 0x531) == '\0') && (*(longlong *)(param_1 + 0x528) != 0)) {
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_1 + 0x98));
    lVar7 = FUN_00f03860(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x660),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x4a8));
    FUN_0064e030(*(undefined8 *)(param_1 + 0x520),*(undefined4 *)(param_1 + 200));
    FUN_0064df10(*(undefined8 *)(param_1 + 0x520),*(undefined8 *)(param_1 + 0xb8));
    uVar8 = FUN_00f031c0(lVar7);
    FUN_0068c1b0(*(undefined8 *)(param_1 + 0x520),uVar8);
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x648) != 0) {
      local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_38 + 0x10))
                (local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0x4a0));
      lVar1 = *(longlong *)(param_1 + 0x508);
      in_stack_ffffffffffffff78 = &local_38;
      (**(code **)(lVar1 + 0x648))
                (*(undefined8 *)(lVar1 + 0x650),param_1,*(undefined4 *)(lVar1 + 0x4a8),
                 *(undefined4 *)(lVar1 + 0x4ac),in_stack_ffffffffffffff78);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x520) + 0x4a0);
      (**(code **)(*plVar2 + 0x10))(plVar2,local_38);
      FUN_00410f20(local_38);
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x520) + 0x4a0);
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if ((longlong)iVar3 < (longlong)(ulonglong)*(uint *)(lVar7 + 0x48)) {
      lVar7 = *(longlong *)(param_1 + 0x520);
      plVar2 = *(longlong **)(lVar7 + 0x4a0);
      iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      iVar5 = FUN_0068bbb0(*(undefined8 *)(param_1 + 0x520));
      FUN_0064cc50(lVar7,iVar3 * iVar5 + 4);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x520);
      iVar3 = FUN_0068bbb0(uVar8);
      FUN_0064cc50(uVar8,*(int *)(lVar7 + 0x48) * iVar3 + 4);
    }
    plVar2 = *(longlong **)(param_1 + 0x520);
    FUN_00835150(param_1,&local_40);
    uVar4 = (**(code **)(*(longlong *)plVar2[0x94] + 0xb0))((longlong *)plVar2[0x94],local_40);
    (**(code **)(*plVar2 + 0x268))(plVar2,uVar4);
    iVar3 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x520));
    iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x520) + 0x4a0) + 0x28))();
    local_54 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x520);
        plVar2 = *(longlong **)(lVar7 + 0x4a0);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,local_54);
        iVar6 = FUN_005fdff0(*(undefined8 *)(lVar7 + 0x4b8),local_48);
        if (iVar3 < iVar6) {
          iVar3 = iVar6 + 10;
        }
        local_54 = local_54 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_0064d0e0(*(undefined8 *)(param_1 + 0x520),iVar3);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x520) + 0x4a0);
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (0 < iVar3) {
      local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
      uVar9 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x78),&local_50);
      local_30._4_4_ = (int)(uVar9 >> 0x20);
      iVar3 = local_30._4_4_;
      iVar6 = local_30._4_4_ + *(int *)(param_1 + 0x9c);
      local_30 = uVar9;
      iVar5 = FUN_00807fe0(*(undefined8 *)PTR_DAT_02005950);
      if (iVar5 < iVar6 + *(int *)(*(longlong *)(param_1 + 0x528) + 0x9c)) {
        iVar6 = iVar3 - *(int *)(*(longlong *)(param_1 + 0x528) + 0x9c);
      }
      uVar8 = FUN_0065b870(*(undefined8 *)(param_1 + 0x528));
      thunk_FUN_041cc6e2(uVar8,0,local_30 & 0xffffffff,iVar6,
                         (ulonglong)in_stack_ffffffffffffff78 & 0xffffffff00000000,0,0x51);
      *(undefined1 *)(param_1 + 0x531) = 1;
      FUN_0083e5c0();
      uVar8 = FUN_0065b870(param_1);
      thunk_FUN_03c244fb(uVar8);
    }
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  return;
}

