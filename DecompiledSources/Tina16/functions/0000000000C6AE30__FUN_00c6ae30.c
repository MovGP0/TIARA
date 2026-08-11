/* Ghidra address: 00c6ae30 */
/* Ghidra symbol: FUN_00c6ae30 */


void FUN_00c6ae30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar12;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x348) + 0x88))
              (*(longlong **)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x98));
    (**(code **)(**(longlong **)(param_1 + 0x348) + 0x70))
              (*(longlong **)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x9c));
    lVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x348));
    FUN_005fdab0(*(undefined8 *)(lVar7 + 0x80),0xff000010);
    lVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x348));
    FUN_005fd4e0(*(undefined8 *)(lVar7 + 0x78),0xff000010);
    plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x348));
    uVar9 = CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x9c));
    FUN_00498370(local_38,0,0,*(undefined4 *)(param_1 + 0x98),uVar9);
    (**(code **)(*plVar8 + 0xa8))(plVar8,local_38);
    if (*(char *)(param_1 + 0x31a) == '\0') {
      if (*(longlong *)(param_1 + 0x370) == 0) {
        if (*(longlong *)(param_1 + 0x360) == 0) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + 0x4e8);
          if ((plVar1 != (longlong *)0x0) &&
             (iVar2 = (**(code **)(*plVar1 + 0x90))(plVar1), *(int *)(param_1 + 0x380) < iVar2)) {
            FUN_007d5d60(*(undefined8 *)(*(longlong *)(param_1 + 0x340) + 0x4e8),
                         *(undefined4 *)(param_1 + 0x380),*(undefined8 *)(param_1 + 0x350));
            plVar1 = *(longlong **)(param_1 + 0x350);
            if (plVar1 != (longlong *)0x0) {
              iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x48))
                                (*(longlong **)(param_1 + 0x350));
              FUN_0064dd90(param_1,&local_68);
              iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x310),local_68);
              (**(code **)(*plVar8 + 0x88))
                        (plVar8,*(int *)(param_1 + 0x98) / 2 - iVar2 / 2,
                         (*(int *)(param_1 + 0x9c) / 2 - iVar3 / 2) - iVar4 / 2,
                         *(undefined8 *)(param_1 + 0x350));
            }
          }
        }
        else {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x60))
                            (*(longlong **)(param_1 + 0x350));
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x48))
                            (*(longlong **)(param_1 + 0x350));
          FUN_0064dd90(param_1,&local_60);
          iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x310),local_60);
          (**(code **)(*plVar8 + 0x88))
                    (plVar8,*(int *)(param_1 + 0x98) / 2 - iVar2 / 2,
                     (*(int *)(param_1 + 0x9c) / 2 - iVar3 / 2) - iVar4 / 2,
                     *(undefined8 *)(param_1 + 0x350));
        }
      }
      else {
        iVar2 = FUN_00605610(*(longlong *)(param_1 + 0x370));
        iVar3 = FUN_00605640(*(undefined8 *)(param_1 + 0x370));
        FUN_0064dd90(param_1,&local_58);
        iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x310),local_58);
        (**(code **)(*plVar8 + 0x88))
                  (plVar8,*(int *)(param_1 + 0x98) / 2 - iVar2 / 2,
                   (*(int *)(param_1 + 0x9c) / 2 - iVar3 / 2) - iVar4 / 2,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x18));
      }
      local_70 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      lVar7 = FUN_0064acf0(&local_70,1);
      if (lVar7 == param_1) {
        FUN_005fd4e0(plVar8[0xf],0);
        (**(code **)(*plVar8 + 200))(plVar8,0,*(int *)(param_1 + 0x9c) + -1);
        (**(code **)(*plVar8 + 0xc0))
                  (plVar8,*(int *)(param_1 + 0x98) + -1,*(int *)(param_1 + 0x9c) + -1);
        (**(code **)(*plVar8 + 200))(plVar8,*(int *)(param_1 + 0x98) + -1,0);
        (**(code **)(*plVar8 + 0xc0))
                  (plVar8,*(int *)(param_1 + 0x98) + -1,*(undefined4 *)(param_1 + 0x9c));
        FUN_005fd4e0(plVar8[0xf],0xffffff);
        (**(code **)(*plVar8 + 200))(plVar8,0,0);
        (**(code **)(*plVar8 + 0xc0))(plVar8,*(int *)(param_1 + 0x98) + -1,0);
        (**(code **)(*plVar8 + 200))(plVar8,0,0);
        (**(code **)(*plVar8 + 0xc0))(plVar8,0,*(int *)(param_1 + 0x9c) + -1);
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x378) == 0) {
        if (*(longlong *)(param_1 + 0x360) == 0) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + 0x4e8);
          if ((plVar1 != (longlong *)0x0) &&
             (iVar2 = (**(code **)(*plVar1 + 0x90))(plVar1), *(int *)(param_1 + 0x380) < iVar2)) {
            FUN_007d5d60(*(undefined8 *)(*(longlong *)(param_1 + 0x340) + 0x4e8),
                         *(undefined4 *)(param_1 + 0x380),*(undefined8 *)(param_1 + 0x358));
            plVar1 = *(longlong **)(param_1 + 0x358);
            if (plVar1 != (longlong *)0x0) {
              iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x358) + 0x48))
                                (*(longlong **)(param_1 + 0x358));
              FUN_0064dd90(param_1,&local_50);
              iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x310),local_50);
              (**(code **)(*plVar8 + 0x88))
                        (plVar8,*(int *)(param_1 + 0x98) / 2 - iVar2 / 2,
                         (*(int *)(param_1 + 0x9c) / 2 - iVar3 / 2) - iVar4 / 2,
                         *(undefined8 *)(param_1 + 0x358));
            }
          }
        }
        else {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x358) + 0x60))
                            (*(longlong **)(param_1 + 0x358));
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x358) + 0x48))
                            (*(longlong **)(param_1 + 0x358));
          FUN_0064dd90(param_1,&local_48);
          iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x310),local_48);
          (**(code **)(*plVar8 + 0x88))
                    (plVar8,*(int *)(param_1 + 0x98) / 2 - iVar2 / 2,
                     (*(int *)(param_1 + 0x9c) / 2 - iVar3 / 2) - iVar4 / 2,
                     *(undefined8 *)(param_1 + 0x358));
        }
      }
      else {
        iVar2 = FUN_00605610(*(longlong *)(param_1 + 0x378));
        iVar3 = FUN_00605640(*(undefined8 *)(param_1 + 0x378));
        FUN_0064dd90(param_1,&local_40);
        iVar4 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x310),local_40);
        (**(code **)(*plVar8 + 0x88))
                  (plVar8,*(int *)(param_1 + 0x98) / 2 - iVar2 / 2,
                   (*(int *)(param_1 + 0x9c) / 2 - iVar3 / 2) - iVar4 / 2,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x378) + 0x18));
      }
      FUN_005fd4e0(plVar8[0xf],0);
      FUN_005fdab0(plVar8[0x10],0);
      (**(code **)(*plVar8 + 200))(plVar8,0,0);
      (**(code **)(*plVar8 + 0xc0))(plVar8,*(int *)(param_1 + 0x98) + -1,0);
      (**(code **)(*plVar8 + 200))(plVar8,0,0);
      (**(code **)(*plVar8 + 0xc0))(plVar8,0,*(undefined4 *)(param_1 + 0x9c));
      FUN_005fd4e0(plVar8[0xf],0xffffff);
      (**(code **)(*plVar8 + 200))(plVar8,*(int *)(param_1 + 0x98) + -1,0);
      (**(code **)(*plVar8 + 0xc0))
                (plVar8,*(int *)(param_1 + 0x98) + -1,*(undefined4 *)(param_1 + 0x9c));
      (**(code **)(*plVar8 + 200))
                (plVar8,*(int *)(param_1 + 0x98) + -1,*(int *)(param_1 + 0x9c) + -1);
      (**(code **)(*plVar8 + 0xc0))(plVar8,0,*(int *)(param_1 + 0x9c) + -1);
    }
    FUN_005fdab0(plVar8[0x10],0xff000010);
    FUN_005fc860(plVar8[0xe],0xff00000e);
    FUN_0064dd90(param_1,&local_78);
    iVar3 = FUN_005fdff0(plVar8,local_78);
    uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 + -4 < iVar3) {
      iVar3 = FUN_005fdff0(plVar8,&LAB_00c6bbd0);
      FUN_0064dd90(param_1,&local_80);
      uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
      iVar2 = 0;
      if (local_80 != 0) {
        iVar2 = *(int *)(local_80 + -4);
      }
      iVar11 = 0;
      iVar4 = 1;
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        do {
          FUN_0064dd90(param_1,&local_90);
          FUN_00416dc0(&local_88,local_90,0,iVar11);
          iVar5 = FUN_005fdff0(plVar8,local_88);
          uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
          iVar4 = iVar11;
          if ((*(int *)(param_1 + 0x98) - iVar3) + -6 < iVar5) break;
          iVar11 = iVar11 + 1;
          iVar2 = iVar2 + -1;
          iVar4 = 1;
        } while (iVar2 != 0);
      }
      FUN_0064dd90(param_1,&local_a8);
      iVar2 = FUN_005fdfd0(plVar8,local_a8);
      FUN_0064dd90(param_1,&local_b0);
      uVar6 = FUN_005fdfd0(plVar8,local_b0);
      FUN_00498370(local_a0,3,(*(int *)(param_1 + 0x9c) - iVar2) + -2,*(int *)(param_1 + 0x98) + -4,
                   CONCAT44(uVar12,uVar6));
      FUN_0064dd90(param_1,&local_b8);
      iVar2 = FUN_005fdfd0(plVar8,local_b8);
      FUN_0064dd90(param_1,&local_c8);
      FUN_00416dc0(&local_c0,local_c8,0,iVar4);
      FUN_00416ad0(&local_c0,&LAB_00c6bbd0);
      uVar9 = local_c0;
      (**(code **)(*plVar8 + 0x130))
                (plVar8,local_a0,3,(*(int *)(param_1 + 0x9c) - iVar2) + -4,local_c0);
      uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    else {
      FUN_0064dd90(param_1,&local_d0);
      iVar3 = FUN_005fdff0(plVar8,local_d0);
      FUN_0064dd90(param_1,&local_d8);
      iVar4 = FUN_005fdfd0(plVar8,local_d8);
      FUN_0064dd90(param_1,&local_e0);
      (**(code **)(*plVar8 + 0x120))
                (plVar8,iVar2 / 2 - iVar3 / 2,(*(int *)(param_1 + 0x9c) - iVar4) + -2,local_e0);
    }
    uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    uVar10 = FUN_005ffa40(plVar8);
    thunk_FUN_0415fcd2(uVar9,0,0,*(undefined4 *)(param_1 + 0x98),
                       CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x9c)),uVar10,0,0,0xcc0020);
  }
  FUN_00414560(&local_e0,8);
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_68,6);
  return;
}

