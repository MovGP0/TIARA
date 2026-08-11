/* Ghidra address: 013689b0 */
/* Ghidra symbol: FUN_013689b0 */


void FUN_013689b0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  int local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  int local_cc;
  undefined4 *local_c8;
  longlong local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_94 [2];
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  longlong local_48;
  undefined4 local_3c;
  longlong *local_38;
  longlong local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_e0 = *(longlong *)(param_1[2] + 0x27a8);
  local_e8 = param_1;
  local_b4 = param_2;
  local_b0 = param_3;
  uVar3 = FUN_0198d430();
  local_f8 = &local_60;
  FUN_01a982d0(uVar3,local_b4,local_b0,&local_5c);
  if ((char)local_e8[3] == '\0') {
    FUN_01b1cd00(&local_5c,&local_60);
    if (*PTR_DAT_020052b8 == '\0') {
      *(undefined1 *)(local_e8 + 6) = 0;
      (**(code **)(*(longlong *)local_e8[5] + 0x10))((longlong *)local_e8[5]);
      local_3c = FUN_00b959a0(local_5c,local_60);
      uVar3 = FUN_00b95a80(local_3c);
      FUN_004ae7e0(local_e8[5],uVar3);
      (**(code **)(*local_e8 + 0x20))(local_e8);
      FUN_013694a0(local_e8,local_5c,local_60);
      *(int *)(local_e8 + 8) = *(int *)(local_e8[5] + 0x10) + -1;
      FUN_0134f800();
      FUN_0134f2e0(*(undefined8 *)(local_e8[2] + 0x27a8),local_e8[5],(int)local_e8[8]);
      *(undefined1 *)(local_e8 + 3) = 1;
    }
  }
  else {
    FUN_01369450(local_e8);
    (**(code **)(*local_e8 + 0x20))(local_e8);
    FUN_01b1cd00(&local_5c,&local_60);
    if (*PTR_DAT_020052b8 == '\0') {
      FUN_01367ef0(local_e8,local_5c,local_60);
      if (1 < *(int *)(local_e8[5] + 0x10)) {
        local_d8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        uVar3 = FUN_004aeac0(local_e8[5],0);
        local_3c = FUN_00b959c0(uVar3);
        uVar3 = FUN_00b95a80(local_3c);
        FUN_004ae7e0(local_d8,uVar3);
        uVar3 = FUN_004aeac0(local_e8[5],1);
        uVar2 = FUN_00b959c0(uVar3);
        local_64._0_2_ = (short)uVar2;
        uVar6 = (int)(short)local_64 - (int)(short)local_3c >> 0x1f;
        local_64._2_2_ = (short)((uint)uVar2 >> 0x10);
        uVar10 = (int)local_64._2_2_ - (int)local_3c._2_2_ >> 0x1f;
        if ((int)(((int)(short)local_64 - (int)(short)local_3c ^ uVar6) - uVar6) <
            (int)(((int)local_64._2_2_ - (int)local_3c._2_2_ ^ uVar10) - uVar10)) {
          cVar1 = '\x02';
        }
        else {
          cVar1 = '\x01';
        }
        local_d0 = 2;
        local_64 = uVar2;
        if (1 < *(int *)(local_e8[5] + 0x10) + -1) {
          iVar9 = *(int *)(local_e8[5] + 0x10) + -2;
          do {
            uVar3 = FUN_004aeac0(local_e8[5],local_d0);
            uVar2 = FUN_00b959c0(uVar3);
            local_3c._0_2_ = (short)uVar2;
            uVar6 = (int)(short)local_3c - (int)(short)local_64 >> 0x1f;
            local_3c._2_2_ = (short)((uint)uVar2 >> 0x10);
            uVar10 = (int)local_3c._2_2_ - (int)local_64._2_2_ >> 0x1f;
            if ((int)(((int)(short)local_3c - (int)(short)local_64 ^ uVar6) - uVar6) <
                (int)(((int)local_3c._2_2_ - (int)local_64._2_2_ ^ uVar10) - uVar10)) {
              cVar7 = '\x02';
            }
            else {
              cVar7 = '\x01';
            }
            local_3c = uVar2;
            if (cVar7 != cVar1) {
              uVar3 = FUN_00b95a80(local_64);
              FUN_004ae7e0(local_d8,uVar3);
              cVar1 = cVar7;
            }
            local_64 = local_3c;
            local_d0 = local_d0 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        uVar3 = FUN_00b95a80(local_64);
        FUN_004ae7e0(local_d8,uVar3);
        local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        local_48 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        if (1 < *(int *)(local_d8 + 0x10)) {
          if (*(char *)((longlong)local_e8 + 0x21) == '\0') {
            FUN_0041ddd0(&local_a8,PTR_PTR_02005480);
            FUN_017baeb0(&PTR_FUN_017ba4c0,local_a8,local_e0,0);
          }
          else {
            FUN_0041ddd0(&local_a0,PTR_PTR_020013f0);
            FUN_017baeb0(&PTR_FUN_017ba4c0,local_a0,local_e0,0);
          }
          local_f8 = (undefined4 *)
                     CONCAT71(local_f8._1_7_,*(undefined1 *)((longlong)local_e8 + 0x21));
          local_f0 = CONCAT31(local_f0._1_3_,1);
          local_38 = (longlong *)FUN_01992db0(local_e0,local_d8,1,0xffffffff);
          (**(code **)(*local_38 + 0x1b8))(local_38,1,0,0);
          local_38 = (longlong *)
                     FUN_017c04c0(0,&PTR_FUN_017c0190,local_d8,
                                  *(undefined1 *)((longlong)local_e8 + 0x21));
          lVar4 = local_e0;
          iVar9 = *(int *)(local_e0 + 0x10);
          iVar8 = 0;
          if (-1 < iVar9 + -1) {
            do {
              uVar3 = FUN_00b94e60(lVar4,iVar8);
              FUN_01368570(auStack_118,uVar3);
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          uVar3 = (**(code **)*local_38)(local_38);
          FUN_00418590(uVar3,&DAT_017c0400);
          local_c8 = (undefined4 *)FUN_00410e60(&PTR_FUN_00472dd0,1);
          local_c0 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          iVar9 = *(int *)(local_30 + 0x10);
          local_d0 = 0;
          if (-1 < iVar9 + -1) {
            do {
              lVar4 = FUN_004aeac0(local_30,local_d0);
              uVar2 = FUN_00b959c0(*(undefined8 *)(lVar4 + 8));
              local_3c._0_2_ = (short)uVar2;
              lVar4 = (longlong)(short)local_3c;
              local_3c._2_2_ = (short)((uint)uVar2 >> 0x10);
              lVar11 = (longlong)local_3c._2_2_;
              local_f8 = local_c8;
              local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)((longlong)local_e8 + 0x21));
              local_3c = uVar2;
              FUN_019916f0(local_e0,lVar4,lVar11,0);
              local_d0 = local_d0 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          local_ac = *(int *)(local_48 + 0x10) + -1;
          local_cc = 0;
          iVar9 = *(int *)(local_48 + 0x10);
          if (-1 < local_ac) {
            do {
              local_ac = iVar9;
              plVar5 = (longlong *)FUN_004aeac0(local_48,local_cc);
              uVar3 = FUN_0198d430(local_e0);
              (**(code **)(*plVar5 + 0x68))(plVar5,uVar3,&local_74);
              local_84 = local_74;
              uStack_7c = uStack_6c;
              iVar9 = local_c8[4];
              local_d0 = 0;
              if (-1 < iVar9 + -1) {
                do {
                  plVar5 = (longlong *)FUN_004aeac0(local_c8,local_d0);
                  (**(code **)(*plVar5 + 0x1f0))(plVar5,0,&local_4c,&local_50);
                  plVar5 = (longlong *)FUN_004aeac0(local_c8,local_d0);
                  (**(code **)(*plVar5 + 0x1f0))(plVar5,1,&local_54,&local_58);
                  if ((local_4c == local_54) || (local_50 == local_58)) {
                    uVar3 = FUN_004aeac0(local_48,local_cc);
                    local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,local_54);
                    local_f0 = local_58;
                    cVar1 = FUN_01368900(auStack_118,uVar3,local_4c,local_50);
                    if (cVar1 != '\0') {
                      local_74 = local_84;
                      uStack_6c = uStack_7c;
                      plVar5 = (longlong *)FUN_004aeac0(local_c8,local_d0);
                      uVar3 = FUN_0198d430(local_e0);
                      (**(code **)(*plVar5 + 0x50))(plVar5,uVar3,local_94);
                      FUN_00b957c0(&local_74,local_94);
                      cVar1 = FUN_00b95810(&local_84,&local_74);
                      if (cVar1 != '\0') {
                        plVar5 = (longlong *)FUN_004aeac0(local_c8,local_d0);
                        uVar3 = FUN_0198d430(local_e0);
                        (**(code **)(*plVar5 + 0xa8))(plVar5,uVar3);
                        uVar3 = FUN_004aeac0(local_c8,local_d0);
                        FUN_004ae7e0(local_c0,uVar3);
                      }
                    }
                  }
                  local_d0 = local_d0 + 1;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              local_cc = local_cc + 1;
              local_ac = local_ac + -1;
              iVar9 = local_ac;
            } while (local_ac != 0);
          }
          iVar9 = *(int *)(local_c0 + 0x10);
          local_d0 = 0;
          if (-1 < iVar9 + -1) {
            do {
              uVar3 = FUN_004aeac0(local_c0,local_d0);
              FUN_0198b6d0(local_e0,uVar3);
              uVar3 = FUN_004aeac0(local_c0,local_d0);
              iVar8 = FUN_004aeba0(local_c8,uVar3);
              if (-1 < iVar8) {
                FUN_004ae870(local_c8,iVar8);
              }
              local_d0 = local_d0 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          iVar9 = FUN_004aeba0(local_c8,local_38);
          if (-1 < iVar9) {
            FUN_004ae870(local_c8,iVar9);
          }
          if (0 < *(int *)(local_c0 + 0x10)) {
            FUN_00b95360(local_e0);
          }
          iVar9 = local_c8[4];
          local_d0 = 0;
          if (-1 < iVar9 + -1) {
            do {
              plVar5 = (longlong *)FUN_004aeac0(local_c8,local_d0);
              (**(code **)(*plVar5 + 0x1b8))(plVar5,1,0,0);
              local_d0 = local_d0 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          FUN_0199e310(local_e0,0,1,0);
          FUN_017baf00();
          FUN_00410f20(local_c8);
          FUN_00410f20(local_c0);
        }
        FUN_00410f20(local_48);
        iVar9 = *(int *)(local_30 + 0x10);
        local_d0 = 0;
        if (-1 < iVar9 + -1) {
          do {
            uVar3 = FUN_004aeac0(local_30,local_d0);
            FUN_004095f0(uVar3);
            local_d0 = local_d0 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        FUN_00410f20(local_30);
        FUN_00410f20(local_d8);
      }
    }
    *(undefined1 *)(local_e8 + 3) = 0;
  }
  uVar2 = (**(code **)(*local_e8 + 0x30))(local_e8);
  (**(code **)(*local_e8 + 0x38))(local_e8,uVar2);
  FUN_00414560(&local_a8,2);
  return;
}

