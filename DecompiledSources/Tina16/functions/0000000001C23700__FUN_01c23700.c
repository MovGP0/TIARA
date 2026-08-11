/* Ghidra address: 01c23700 */
/* Ghidra symbol: FUN_01c23700 */


void FUN_01c23700(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_e0 [16];
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a1;
  int local_a0;
  undefined4 local_9c;
  longlong local_98 [4];
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 *local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_d0 = auStack_138;
  if (*(char *)(param_1 + 0x4d8) == '\0') {
    *(undefined1 *)(param_1 + 0x4d8) = 1;
    local_d0 = auStack_138;
    FUN_01c258d0(param_1);
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 200));
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    local_118 = *(undefined4 *)(param_1 + 0x9c);
    FUN_004238d0(local_e0,0,0,*(undefined4 *)(param_1 + 0x98));
    (**(code **)(*plVar4 + 0xa8))(plVar4,local_e0);
    uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_01c22b90(param_1 + 0x52c,0x808080,0xffffff,uVar5);
    local_38 = *(undefined8 *)(param_1 + 0x52c);
    local_30 = *(undefined8 *)(param_1 + 0x534);
    FUN_00423b10(&local_38,0xfffffffe,0xfffffffe);
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),0xffffff);
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    (**(code **)(*plVar4 + 0xa8))(plVar4,&local_38);
    if (*(longlong *)(param_1 + 0x588) != 0) {
      uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      FUN_01c26af0(param_1,uVar5,&local_38,*(undefined8 *)(param_1 + 0x588));
    }
    iVar2 = FUN_01c230d0();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_60 = (undefined4 *)FUN_01c230e0(param_1,local_4c);
        local_b8 = *local_60;
        local_b4 = local_60[1];
        local_b0 = local_b4;
        local_ac = local_b8;
        uVar5 = FUN_01c26830(param_1,&local_b8);
        local_78._0_4_ = (int)uVar5;
        local_78._0_4_ = *(int *)(param_1 + 0x52c) + (int)local_78;
        local_78._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
        local_78._4_4_ = *(int *)(param_1 + 0x530) + local_78._4_4_;
        local_38 = CONCAT44(local_78._4_4_ + -7,(int)local_78 + -7);
        local_30 = CONCAT44(local_78._4_4_ + 8,(int)local_78 + 8);
        local_78 = uVar5;
        lVar3 = FUN_01c270a0(param_1,local_60);
        if (lVar3 == 0) {
          uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
          FUN_010b5040(*(undefined8 *)(param_1 + 0x4b0 + (longlong)*(int *)(param_1 + 0x4a8) * 8),
                       uVar5,&local_38,0);
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_a0 = 0;
    iVar2 = FUN_01c232b0();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_01c233d0(param_1,local_4c);
        if ((*(longlong *)(lVar3 + 8) == 0) &&
           (lVar3 = FUN_01c233d0(param_1,local_4c), lVar3 != *(longlong *)(param_1 + 0x540))) {
          local_a0 = local_a0 + 1;
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((0 < local_a0) || (*(char *)(param_1 + 0x5c9) != '\0')) {
      lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 200));
      plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x4dc);
      uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      FUN_01c22b90(param_1 + 0x4dc,0x808080,0xffffff,uVar5);
      uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      uVar5 = FUN_005ffa40(uVar5);
      thunk_FUN_0412a071(uVar5,0);
      lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      FUN_005fdcb0(*(undefined8 *)(lVar3 + 0x80),1);
      plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      iVar2 = FUN_005fdfd0(uVar5,*(undefined8 *)(param_1 + 0x5c0));
      (**(code **)(*plVar4 + 0x120))
                (plVar4,3,(*(int *)(param_1 + 0x4e0) - iVar2) + -2,*(undefined8 *)(param_1 + 0x5c0))
      ;
    }
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 200));
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x4ec);
    uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_01c22b90(param_1 + 0x4ec,0x808080,0xffffff,uVar5);
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 200));
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x4fc);
    uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_01c22b90(param_1 + 0x4fc,0x808080,0xffffff,uVar5);
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 200));
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x51c);
    uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_01c22b90(param_1 + 0x51c,0x808080,0xffffff,uVar5);
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 200));
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x50c);
    uVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_01c22b90(param_1 + 0x50c,0x808080,0xffffff,uVar5);
    local_48 = *(undefined8 *)(param_1 + 0x4dc);
    local_40 = *(undefined8 *)(param_1 + 0x4e4);
    FUN_00423b10(&local_48,0xfffffffe,0xfffffffe);
    local_40 = CONCAT44(local_48._4_4_ + 0x14,(int)local_48);
    local_98[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_98[1] = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_98[2] = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_98[3] = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar2 = FUN_01c232b0();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = FUN_01c233d0(param_1,local_4c);
        local_58 = FUN_01c23490(param_1,uVar5);
        lVar3 = FUN_01c233d0(param_1,local_4c);
        if ((*(longlong *)(lVar3 + 8) == 0) &&
           (lVar3 = FUN_01c233d0(param_1,local_4c), lVar3 != *(longlong *)(param_1 + 0x540))) {
          if (*(int *)(param_1 + 0x4e4) < (int)local_40 + local_58) {
            local_48 = CONCAT44(local_48._4_4_ + 0x14,*(int *)(param_1 + 0x4dc));
            local_40 = CONCAT44(local_40._4_4_ + 0x14,*(int *)(param_1 + 0x4dc) + local_58);
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_40);
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 + local_58);
          }
          lVar3 = FUN_01c233d0(param_1,local_4c);
          *(undefined8 *)(lVar3 + 0x20) = local_48;
          *(undefined8 *)(lVar3 + 0x28) = local_40;
          uVar5 = FUN_01c233d0(param_1,local_4c);
          FUN_01c250b0(param_1,uVar5,local_4c);
        }
        else {
          lVar3 = FUN_01c233d0(param_1,local_4c);
          if (*(longlong *)(lVar3 + 8) != 0) {
            lVar3 = FUN_01c233d0(param_1,local_4c);
            local_bc = **(undefined4 **)(lVar3 + 8);
            lVar3 = FUN_01c233d0(param_1,local_4c);
            local_c4 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 4);
            local_c8 = local_bc;
            local_c0 = local_c4;
            local_78 = FUN_01c26830(param_1,&local_c8);
            lVar3 = FUN_01c233d0(param_1,local_4c);
            cVar1 = *(char *)(*(longlong *)(lVar3 + 8) + 0x36);
            if (cVar1 == '\0') {
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x20) = (*(int *)(param_1 + 0x52c) + (int)local_78) - local_58 / 2;
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x24) = *(int *)(param_1 + 0x4f0) + 2;
              for (local_50 = 0; local_50 < *(int *)(local_98[0] + 0x10); local_50 = local_50 + 1) {
                lVar3 = FUN_004aeac0(local_98[0],local_50);
                lVar6 = FUN_01c233d0(param_1,local_4c);
                if (*(int *)(lVar6 + 0x20) <= *(int *)(lVar3 + 0x20)) break;
              }
              uVar5 = FUN_01c233d0(param_1,local_4c);
              FUN_004aec30(local_98[0],local_50,uVar5);
            }
            else if (cVar1 == '\x01') {
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x20) = *(int *)(param_1 + 0x4fc) + 2;
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x24) = *(int *)(param_1 + 0x530) + local_78._4_4_ + -10;
              for (local_50 = 0; local_50 < *(int *)(local_98[1] + 0x10); local_50 = local_50 + 1) {
                lVar3 = FUN_004aeac0(local_98[1],local_50);
                lVar6 = FUN_01c233d0(param_1,local_4c);
                if (*(int *)(lVar6 + 0x24) <= *(int *)(lVar3 + 0x24)) break;
              }
              uVar5 = FUN_01c233d0(param_1,local_4c);
              FUN_004aec30(local_98[1],local_50,uVar5);
            }
            else if (cVar1 == '\x02') {
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x20) = (*(int *)(param_1 + 0x52c) + (int)local_78) - local_58 / 2;
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x24) = *(int *)(param_1 + 0x510) + 2;
              for (local_50 = 0; local_50 < *(int *)(local_98[2] + 0x10); local_50 = local_50 + 1) {
                lVar3 = FUN_004aeac0(local_98[2],local_50);
                lVar6 = FUN_01c233d0(param_1,local_4c);
                if (*(int *)(lVar6 + 0x20) <= *(int *)(lVar3 + 0x20)) break;
              }
              uVar5 = FUN_01c233d0(param_1,local_4c);
              FUN_004aec30(local_98[2],local_50,uVar5);
            }
            else if (cVar1 == '\x03') {
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x20) = (*(int *)(param_1 + 0x524) - local_58) + -2;
              lVar3 = FUN_01c233d0(param_1,local_4c);
              *(int *)(lVar3 + 0x24) = *(int *)(param_1 + 0x530) + local_78._4_4_ + -10;
              for (local_50 = 0; local_50 < *(int *)(local_98[3] + 0x10); local_50 = local_50 + 1) {
                lVar3 = FUN_004aeac0(local_98[3],local_50);
                lVar6 = FUN_01c233d0(param_1,local_4c);
                if (*(int *)(lVar6 + 0x24) <= *(int *)(lVar3 + 0x24)) break;
              }
              uVar5 = FUN_01c233d0(param_1,local_4c);
              FUN_004aec30(local_98[3],local_50,uVar5);
            }
            lVar3 = FUN_01c233d0(param_1,local_4c);
            lVar6 = FUN_01c233d0(param_1,local_4c);
            *(int *)(lVar6 + 0x28) = *(int *)(lVar3 + 0x20) + local_58;
            lVar3 = FUN_01c233d0(param_1,local_4c);
            lVar6 = FUN_01c233d0(param_1,local_4c);
            *(int *)(lVar6 + 0x2c) = *(int *)(lVar3 + 0x24) + 0x14;
          }
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_54 = 0;
    do {
      if (local_54 == 0) {
        local_a1 = 0;
      }
      else {
        local_a1 = 2;
      }
      lVar3 = local_98[local_a1];
      if (0 < *(int *)(lVar3 + 0x10)) {
        local_9c = 0;
        local_50 = (*(int *)(lVar3 + 0x10) + -1) / 2;
        local_70 = FUN_004aeac0(lVar3,local_50);
        FUN_01c24b30(param_1,local_70,&local_9c,10);
        local_4c = local_50 + -1;
        if (-1 < local_50 + -1) {
          do {
            local_68 = FUN_004aeac0(local_98[local_a1],local_4c);
            iVar2 = *(int *)(local_70 + 0x20);
            if (iVar2 < *(int *)(local_68 + 0x28)) {
              local_58 = *(int *)(local_68 + 0x28) - *(int *)(local_68 + 0x20);
              *(int *)(local_68 + 0x28) = iVar2;
              *(int *)(local_68 + 0x20) = iVar2 - local_58;
            }
            FUN_01c24b30(param_1,local_68,&local_9c,10);
            local_4c = local_4c + -1;
          } while (local_4c != -1);
        }
        local_9c = 0;
        local_4c = local_50 + 1;
        iVar2 = *(int *)(local_98[local_a1] + 0x10) + -1;
        if (local_4c <= iVar2) {
          iVar2 = (iVar2 - local_4c) + 1;
          do {
            local_68 = FUN_004aeac0(local_98[local_a1],local_4c);
            iVar9 = *(int *)(local_70 + 0x28);
            if (*(int *)(local_68 + 0x20) < iVar9) {
              local_58 = *(int *)(local_68 + 0x28) - *(int *)(local_68 + 0x20);
              *(int *)(local_68 + 0x20) = iVar9;
              *(int *)(local_68 + 0x28) = iVar9 + local_58;
            }
            local_70 = local_68;
            FUN_01c24b30(param_1,local_68,&local_9c,10);
            local_4c = local_4c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_54 = local_54 + 1;
    } while (local_54 != 2);
    local_54 = 0;
    do {
      if (local_54 == 0) {
        local_a1 = 3;
      }
      else {
        local_a1 = 1;
      }
      lVar3 = local_98[local_a1];
      if (0 < *(int *)(lVar3 + 0x10)) {
        local_9c = 0;
        local_50 = (*(int *)(lVar3 + 0x10) + -1) / 2;
        local_70 = FUN_004aeac0(lVar3,local_50);
        FUN_01c24b30(param_1,local_70,&local_9c,10);
        local_4c = local_50 + -1;
        if (-1 < local_50 + -1) {
          do {
            uVar8 = (ulonglong)local_a1;
            local_68 = FUN_004aeac0(local_98[uVar8],local_4c);
            iVar2 = local_4c + 1;
            lVar3 = FUN_004aeac0(local_98[uVar8],iVar2);
            if (*(int *)(lVar3 + 0x24) < *(int *)(local_68 + 0x2c)) {
              local_58 = *(int *)(local_68 + 0x2c) - *(int *)(local_68 + 0x24);
              lVar3 = FUN_004aeac0(local_98[uVar8],iVar2);
              iVar2 = *(int *)(lVar3 + 0x24);
              *(int *)(local_68 + 0x2c) = iVar2;
              *(int *)(local_68 + 0x24) = iVar2 - local_58;
            }
            FUN_01c24b30(param_1,local_68,&local_9c,10);
            local_4c = local_4c + -1;
          } while (local_4c != -1);
        }
        local_9c = 0;
        local_4c = local_50 + 1;
        iVar2 = *(int *)(local_98[local_a1] + 0x10) + -1;
        if (local_4c <= iVar2) {
          iVar2 = (iVar2 - local_4c) + 1;
          do {
            uVar8 = (ulonglong)local_a1;
            local_68 = FUN_004aeac0(local_98[uVar8],local_4c);
            iVar9 = local_4c + -1;
            lVar3 = FUN_004aeac0(local_98[uVar8],iVar9);
            if (*(int *)(local_68 + 0x24) < *(int *)(lVar3 + 0x2c)) {
              local_58 = *(int *)(local_68 + 0x2c) - *(int *)(local_68 + 0x24);
              lVar3 = FUN_004aeac0(local_98[uVar8],iVar9);
              iVar9 = *(int *)(lVar3 + 0x2c);
              *(int *)(local_68 + 0x24) = iVar9;
              *(int *)(local_68 + 0x2c) = iVar9 + local_58;
            }
            FUN_01c24b30(param_1,local_68,&local_9c,10);
            local_4c = local_4c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_54 = local_54 + 1;
    } while (local_54 != 2);
    iVar2 = FUN_01c232b0();
    local_4c = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_01c233d0(param_1,local_4c);
        if (*(longlong *)(lVar3 + 8) != 0) {
          uVar5 = FUN_01c233d0(param_1,local_4c);
          FUN_01c250b0(param_1,uVar5,local_4c);
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(longlong *)(param_1 + 0x540) != 0) {
      FUN_01c250b0(param_1,*(undefined8 *)(param_1 + 0x540),0);
    }
    FUN_00410f20(local_98[0]);
    FUN_00410f20(local_98[1]);
    FUN_00410f20(local_98[2]);
    FUN_00410f20(local_98[3]);
    uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    local_110 = FUN_005ffa40(uVar7);
    local_118 = *(undefined4 *)(param_1 + 0x9c);
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0xcc0020;
    thunk_FUN_0415fcd2(uVar5,0,0,*(undefined4 *)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0x4d8) = 0;
  }
  else {
    FUN_01c24b10(0,auStack_138);
  }
  return;
}

