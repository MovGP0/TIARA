/* Ghidra address: 0146ab60 */
/* Ghidra symbol: FUN_0146ab60 */


void FUN_0146ab60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [4];
  
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  lVar8 = *(longlong *)(param_1 + 0x8e0);
  plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x90) + 0xa0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4d8));
  plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x90) + 0x80);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0xb8));
  if (*(char *)(*(longlong *)(param_1 + 0x848) + 0x80) == '\0') {
    *(undefined1 *)(lVar8 + 0x98) = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0x98) = 3;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x7b8) + 0x80) != '\0') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8),
     iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1), 0 < iVar2)) {
    plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar6 + 0x10))
              (plVar6,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0xa0));
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    lVar8 = FUN_007ffbe0(param_1);
    (**(code **)(**(longlong **)(lVar8 + 0x70) + 0x10))
              (*(longlong **)(lVar8 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0xb8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,0);
    iVar2 = 0;
    if (local_50[0] != 0) {
      iVar2 = *(int *)(local_50[0] + -4);
    }
    if (iVar2 < 1) {
      iVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6e8));
      uVar9 = FUN_007ffbe0(param_1);
      iVar3 = FUN_005fdff0(uVar9,L"History");
      uVar5 = FUN_0040c770(((double)iVar2 / (double)iVar3) * 7.0);
    }
    else {
      iVar3 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6e8));
      uVar9 = FUN_007ffbe0(param_1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,0);
      iVar4 = FUN_005fdff0(uVar9,local_58);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,0);
      iVar2 = 0;
      if (local_60 != 0) {
        iVar2 = *(int *)(local_60 + -4);
      }
      uVar5 = FUN_0040c770(((double)iVar3 / (double)iVar4) * (double)iVar2);
    }
    iVar2 = (**(code **)(*plVar6 + 0x28))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,iVar3);
        FUN_004511f0(&local_68,local_70,uVar5);
        uVar9 = FUN_00416740(local_68);
        (**(code **)(*plVar7 + 0x120))(plVar7,uVar9);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x88))(plVar1,plVar7);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(plVar7);
    FUN_00410f20(plVar6);
  }
  FUN_00414560(&local_70,5);
  return;
}

