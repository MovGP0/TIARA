/* Ghidra address: 01365890 */
/* Ghidra symbol: FUN_01365890 */


undefined1 FUN_01365890(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  short extraout_var;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c0;
  int *local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined4 *local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_48;
  undefined1 local_39;
  longlong local_38;
  longlong local_30;
  
  local_a0 = auStack_e8;
  local_39 = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    local_48 = 0;
    if (-1 < iVar11 + -1) {
      do {
        local_90 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),local_48);
        local_c8 = -1;
        local_c0 = 0xffffffff;
        local_b8 = &local_74;
        local_b0 = &local_78;
        FUN_0199e960(param_2,param_3,*local_90,local_90[1]);
        if (local_74 < 0) {
          local_80 = (longlong *)0x0;
        }
        else {
          local_80 = (longlong *)FUN_0198d420(param_2,local_74);
        }
        local_5c = 0;
        while (local_80 != (longlong *)0x0) {
          if (*(char *)((longlong)local_80 + 10) == '\0') {
            cVar1 = FUN_0198a580(local_80);
            if (cVar1 != '\x05') {
              if (*PTR_DAT_020052b8 == '\0') {
                uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),local_48);
                FUN_013657d0(auStack_e8,uVar4,0);
              }
              break;
            }
            cVar1 = FUN_017c3740(local_80);
            if (cVar1 == '\0') {
              uVar3 = (**(code **)(*local_80 + 0x1f8))(local_80,*local_90,local_90[1]);
              cVar1 = (**(code **)(*local_80 + 600))(local_80,uVar3);
              if (cVar1 == '\0') {
                local_5c = local_5c + 1;
              }
            }
          }
          local_6c = local_74;
          local_70 = local_78;
          local_c8 = local_74;
          local_c0 = local_78;
          local_b8 = &local_74;
          local_b0 = &local_78;
          FUN_0199e960(param_2,param_3,*local_90,local_90[1]);
          if (local_74 < 0) {
            local_80 = (longlong *)0x0;
          }
          else {
            local_80 = (longlong *)FUN_0198d420(param_2,local_74);
          }
        }
        if (local_80 == (longlong *)0x0) {
          local_c8 = -1;
          local_c0 = 0xffffffff;
          local_b8 = &local_74;
          local_b0 = &local_78;
          FUN_0199e960(param_2,param_3,*local_90,local_90[1]);
          if (local_74 < 0) {
            local_80 = (longlong *)0x0;
          }
          else {
            local_80 = (longlong *)FUN_0198d420(param_2,local_74);
          }
          while (local_80 != (longlong *)0x0) {
            if ((*(char *)((longlong)local_80 + 10) == '\0') &&
               (cVar1 = FUN_0198a580(local_80), cVar1 == '\x05')) {
              local_38 = 0;
              iVar10 = *(int *)(local_30 + 0x10);
              local_54 = 0;
              if (-1 < iVar10 + -1) {
                do {
                  puVar5 = (undefined8 *)FUN_004aeac0(local_30,local_54);
                  if ((longlong *)*puVar5 == local_80) {
                    lVar6 = FUN_004aeac0(local_30,local_54);
                    local_38 = FUN_01365540(auStack_e8,*(undefined8 *)(lVar6 + 8));
                    break;
                  }
                  local_54 = local_54 + 1;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              if (local_38 == 0) {
                local_38 = FUN_01365540(auStack_e8,local_80[0x5a]);
              }
              local_58 = (**(code **)(*local_80 + 0x1f8))(local_80,*local_90,local_90[1]);
              for (local_54 = 0; local_54 < *(int *)(local_38 + 0x10) + -2; local_54 = local_54 + 1)
              {
                lVar6 = FUN_004aeac0(local_38,local_54);
                iVar10 = local_54 + 1;
                lVar7 = FUN_004aeac0(local_38,iVar10);
                if (lVar6 == lVar7) {
                  FUN_004ae870(local_38,iVar10);
                }
              }
              if (*(int *)(local_38 + 0x10) == 2) {
                uVar4 = FUN_004aeac0(local_38,1 - local_58);
                FUN_004aec30(local_38,1,uVar4);
              }
              if (local_58 == 0) {
                local_60 = 0;
                local_64 = 1;
              }
              else {
                local_60 = *(int *)(local_38 + 0x10) + -1;
                local_64 = *(int *)(local_38 + 0x10) + -2;
              }
              uVar4 = FUN_004aeac0(local_38,local_60);
              uVar8 = FUN_004aeac0(local_38,local_64);
              cVar1 = FUN_00b959e0(uVar4,uVar8);
              if (cVar1 == '\0') {
                uVar3 = FUN_00b959a0(local_90[2],local_90[3]);
                uVar4 = FUN_00b95a80(uVar3);
                FUN_004aedb0(local_38,local_60,uVar4);
                uVar4 = FUN_004aeac0(local_38,local_64);
                sVar2 = FUN_00b959c0(uVar4);
                uVar3 = FUN_00b959a0((longlong)sVar2,local_90[3]);
                uVar4 = FUN_00b95a80(uVar3);
                FUN_004aedb0(local_38,local_64,uVar4);
              }
              else {
                uVar3 = FUN_00b959a0(local_90[2],local_90[3]);
                uVar4 = FUN_00b95a80(uVar3);
                FUN_004aedb0(local_38,local_60,uVar4);
                uVar4 = FUN_004aeac0(local_38,local_64);
                FUN_00b959c0(uVar4);
                uVar3 = FUN_00b959a0(local_90[2],(longlong)extraout_var);
                uVar4 = FUN_00b95a80(uVar3);
                FUN_004aedb0(local_38,local_64,uVar4);
              }
              FUN_01365670(auStack_e8,local_80,local_38,0);
            }
            local_6c = local_74;
            local_70 = local_78;
            local_c8 = local_74;
            local_c0 = local_78;
            local_b8 = &local_74;
            local_b0 = &local_78;
            FUN_0199e960(param_2,param_3,*local_90);
            if (local_74 < 0) {
              local_80 = (longlong *)0x0;
            }
            else {
              local_80 = (longlong *)FUN_0198d420(param_2,local_74);
            }
          }
        }
        local_48 = local_48 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(local_30 + 0x10);
    local_48 = 0;
    if (-1 < iVar11 + -1) {
      do {
        plVar9 = (longlong *)FUN_004aeac0(local_30,local_48);
        if (*plVar9 == 0) {
          lVar6 = FUN_004aeac0(local_30,local_48);
          cVar1 = FUN_01365790(auStack_e8,*(undefined8 *)(lVar6 + 8));
          if (cVar1 == '\0') {
            lVar6 = FUN_004aeac0(local_30,local_48);
            local_88 = FUN_017c04c0(0,&PTR_FUN_017c0190,*(undefined8 *)(lVar6 + 8),0);
            if (local_88 != 0) {
              if ((*PTR_DAT_020052b8 != '\0') &&
                 (lVar6 = FUN_004aeac0(local_30,local_48), *(longlong *)(lVar6 + 0x10) != 0)) {
                FUN_00410f20(*(undefined8 *)(local_88 + 0x3f0));
                lVar6 = FUN_004aeac0(local_30,local_48);
                uVar4 = FUN_017c5070(*(undefined8 *)(lVar6 + 0x10));
                *(undefined8 *)(local_88 + 0x3f0) = uVar4;
              }
              (**(code **)(*param_2 + 0x20))(param_2,local_88);
            }
          }
        }
        else {
          plVar9 = (longlong *)FUN_004aeac0(local_30,local_48);
          local_88 = *plVar9;
          lVar6 = FUN_004aeac0(local_30,local_48);
          cVar1 = FUN_01365790(auStack_e8,*(undefined8 *)(lVar6 + 8));
          if (cVar1 == '\0') {
            FUN_017c2de0(local_88);
            lVar6 = FUN_004aeac0(local_30,local_48);
            FUN_017c2e00(local_88,*(undefined8 *)(lVar6 + 8));
            FUN_017c2bc0(local_88);
          }
          else {
            FUN_0198b6d0(param_2,local_88);
          }
        }
        local_48 = local_48 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(local_30 + 0x10);
    local_39 = 0 < iVar11;
    local_48 = 0;
    if (-1 < iVar11 + -1) {
      do {
        lVar6 = FUN_004aeac0(local_30,local_48);
        FUN_00410f20(*(undefined8 *)(lVar6 + 8));
        uVar4 = FUN_004aeac0(local_30,local_48);
        FUN_004095f0(uVar4);
        local_48 = local_48 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    FUN_00410f20(local_30);
    local_a8 = param_2;
    FUN_00b95360();
    FUN_019a4ba0(local_a8,0);
  }
  return local_39;
}

