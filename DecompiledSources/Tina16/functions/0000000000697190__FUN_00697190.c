/* Ghidra address: 00697190 */
/* Ghidra symbol: FUN_00697190 */


void FUN_00697190(longlong param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_168 [32];
  int *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  char local_be;
  char local_bd;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  longlong local_88 [4];
  undefined8 local_64;
  undefined8 uStack_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34 [5];
  
  local_120 = auStack_168;
  local_128 = 0;
  local_a8 = 0;
  local_40 = 0;
  FUN_00785f90(param_1,&local_40);
  local_bc = 0;
  lVar11 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_004113d0(lVar11,&PTR_FUN_006723b8);
  if ((cVar2 == '\0') || (*(char *)(lVar11 + 0x498) == '\0')) {
    local_bd = '\0';
  }
  else {
    local_bd = '\x01';
  }
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_006723b8);
  if (cVar2 != '\0') {
    cVar2 = FUN_0044f0c0(6,0);
    if ((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4b8) != '\0')) {
      local_be = '\x01';
      goto LAB_0069726b;
    }
  }
  local_be = '\0';
LAB_0069726b:
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
  if (cVar2 == '\0') {
    plVar6 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar6 + 200))(plVar6,local_34,5);
    local_bc = 3;
  }
  else if (*(char *)(param_1 + 0x41) == '\0') {
    if (param_3 == '\0') {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      pcVar7 = (code *)FUN_00411550(uVar8,0xffb0);
      cVar2 = (*pcVar7)(uVar8);
      if (cVar2 == '\0' && local_bd == '\0') {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                          (*(longlong **)(param_1 + 0x10));
        if (cVar2 != '\0') {
          plVar6 = (longlong *)FUN_00777cd0();
          (**(code **)(*plVar6 + 200))(plVar6,local_34,2);
        }
      }
      else {
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 200))(plVar6,local_34,6);
        local_bc = 4;
      }
    }
    else {
      plVar6 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar6 + 200))(plVar6,local_34,3);
      local_bc = 1;
    }
  }
  else {
    plVar6 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar6 + 200))(plVar6,local_34,4);
    local_bc = 2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),&local_54);
  uVar8 = FUN_00777cd0();
  uVar9 = FUN_005ffa40(param_2);
  local_148 = (int *)0x0;
  local_140 = 0;
  FUN_00778dc0(uVar8,uVar9,local_34,&local_54);
  local_d0 = FUN_00786090(param_1);
  iVar3 = thunk_FUN_041b2403(local_d0,0x1603,0,local_88);
  if ((iVar3 != 0) && (local_88[0] != 0)) {
    iVar3 = thunk_FUN_0400423a(local_88[0],&local_8c,&local_90);
    if (iVar3 != 0) {
      local_94 = local_54 + 2;
      iVar3 = FUN_004230c0(&local_54);
      uVar10 = (longlong)(iVar3 - local_90) % 2 & 0xffffffff;
      local_98 = local_50 + (iVar3 - local_90) / 2;
      if (local_be == '\0') {
        local_e8 = FUN_00786090(param_1,uVar10);
        uVar10 = thunk_FUN_04118143(local_e8,0xfffffff0);
        if ((uVar10 & 0xe) == 0xe) {
          local_98 = local_50 + 0xf;
        }
        else {
          cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_006723b8);
          if (cVar2 != '\0') {
            local_c8 = *(longlong *)(param_1 + 0x10);
            bVar1 = *(byte *)(local_c8 + 0x4c0);
            if (bVar1 < 3) {
              if (bVar1 == 2) {
                iVar3 = FUN_004230a0(&local_54);
                local_94 = (local_54 + (iVar3 - local_8c) / 2 +
                           *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x14)) -
                           *(int *)(*(longlong *)(local_c8 + 0x4d8) + 8);
                local_98 = local_50 + 2 + *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x10);
                local_50 = local_50 +
                           local_98 + local_90 + *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0xc);
              }
              else if (bVar1 == 0) {
                local_94 = local_54 + 2 + *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x14);
                local_98 = (local_98 + *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x10)) -
                           *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0xc);
                local_54 = local_54 +
                           local_94 + local_8c + *(int *)(*(longlong *)(local_c8 + 0x4d8) + 8);
              }
              else if (bVar1 == 1) {
                local_94 = (((local_4c - local_8c) + -2) -
                           *(int *)(*(longlong *)(local_c8 + 0x4d8) + 8)) -
                           *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x14);
                local_98 = (local_98 + *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x10)) -
                           *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0xc);
                local_4c = local_94;
              }
            }
            else if (bVar1 == 3) {
              iVar3 = FUN_004230a0(&local_54);
              local_94 = (local_54 + (iVar3 - local_8c) / 2 +
                         *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x14)) -
                         *(int *)(*(longlong *)(local_c8 + 0x4d8) + 8);
              local_98 = (((local_48 - local_90) + -2) -
                         *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0xc)) -
                         *(int *)(*(longlong *)(local_c8 + 0x4d8) + 0x10);
              local_48 = local_98;
            }
            else if (bVar1 == 4) {
              local_94 = FUN_00423530(&local_54);
              local_94 = local_94 - local_8c / 2;
            }
          }
        }
      }
      else {
        local_bc = 0;
        local_d8 = FUN_00786090(param_1,uVar10);
        uVar10 = thunk_FUN_04118143(local_d8,0xfffffff0);
        if ((uVar10 & 0xe) == 0xe) {
          local_98 = local_50 + 0xf;
          local_94 = local_54 + 0xf;
        }
        else {
          local_54 = local_54 + local_8c;
          iVar3 = FUN_00423530(&local_54);
          iVar4 = FUN_00697090(auStack_168);
          local_94 = ((iVar3 - iVar4 / 2) - local_8c) + -2;
          local_e0 = FUN_00786090(param_1,(longlong)iVar4 % 2 & 0xffffffff);
          uVar10 = thunk_FUN_04118143(local_e0,0xfffffff0);
          if ((uVar10 & 0xc) == 0xc) {
            local_94 = local_94 + -7;
          }
        }
      }
      uVar8 = FUN_005ffa40(param_2);
      local_148 = (int *)CONCAT44(local_148._4_4_,local_98);
      local_140 = 0;
      thunk_FUN_04153868(local_88[0],local_bc,uVar8,local_94);
    }
  }
  local_f0 = FUN_00786090(param_1);
  uVar10 = thunk_FUN_04118143(local_f0,0xfffffff0);
  if ((uVar10 & 0xe) == 0xe) {
    local_50 = local_50 + 0xf;
    local_54 = local_54 + 0x28;
    FUN_005ff880(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
    FUN_005fce70(param_2[0xe],0);
    FUN_005fce30(param_2[0xe],0xc);
    local_64 = CONCAT44(local_50,local_54);
    uStack_5c = CONCAT44(local_48,local_4c);
    uVar5 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0x410);
    local_9c = FUN_0060f580(uVar5);
    uVar8 = FUN_00777cd0();
    uVar9 = FUN_005ffa40(param_2);
    local_140 = FUN_0060f570(local_9c);
    local_148 = (int *)&local_64;
    local_138 = *(undefined4 *)(param_2[0xe] + 0x28);
    local_130 = 0;
    FUN_00778f70(uVar8,uVar9,local_34,local_40);
    uVar5 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0x10);
    local_9c = FUN_0060f580(uVar5);
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 1) != 0) {
      uVar8 = FUN_00777cd0();
      cVar2 = FUN_007790b0(uVar8,local_34,2,&local_a0);
      if (cVar2 != '\0') {
        FUN_005fc860(param_2[0xe],local_a0);
      }
    }
    uVar8 = FUN_00777cd0();
    uVar9 = FUN_005ffa40(param_2);
    local_140 = FUN_0060f570(local_9c);
    local_148 = &local_54;
    local_138 = *(undefined4 *)(param_2[0xe] + 0x28);
    local_130 = 0;
    FUN_00778f70(uVar8,uVar9,local_34,local_40);
    local_f8 = FUN_00786090(param_1);
    lVar11 = thunk_FUN_041b2403(local_f8,0x160b,0,0);
    FUN_004169f0(&local_a8,lVar11 + 1);
    local_fc = 0;
    if (local_a8 != 0) {
      local_fc = *(int *)(local_a8 + -4);
    }
    if (local_fc != 0) {
      local_100 = 0;
      if (local_a8 != 0) {
        local_100 = *(undefined4 *)(local_a8 + -4);
      }
      local_ac = local_100;
      local_108 = FUN_00786090(param_1);
      uVar8 = FUN_00416740(local_a8);
      iVar3 = thunk_FUN_041b2403(local_108,0x160a,&local_ac,uVar8);
      if (iVar3 != 0) {
        local_9c = FUN_0060f580(0x10);
        iVar3 = FUN_004230c0(&local_64);
        local_50 = local_50 + iVar3 + 2;
        FUN_005fce30(param_2[0xe],8);
        uVar8 = FUN_00777cd0();
        uVar9 = FUN_005ffa40(param_2);
        local_140 = FUN_0060f570(local_9c);
        local_148 = &local_54;
        local_138 = *(undefined4 *)(param_2[0xe] + 0x28);
        local_130 = 0;
        FUN_00778f70(uVar8,uVar9,local_34,local_a8);
      }
    }
    if (local_88[0] == 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
      if (cVar2 == '\0') {
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 200))(plVar6,local_34,0x30);
      }
      else if (*(char *)(param_1 + 0x41) == '\0') {
        if (*(char *)(param_1 + 0x1a) == '\0') {
          if (param_3 == '\0') {
            plVar6 = (longlong *)FUN_00777cd0();
            (**(code **)(*plVar6 + 200))(plVar6,local_34,0x2d);
          }
          else {
            plVar6 = (longlong *)FUN_00777cd0();
            (**(code **)(*plVar6 + 200))(plVar6,local_34,0x2e);
          }
        }
        else {
          plVar6 = (longlong *)FUN_00777cd0();
          (**(code **)(*plVar6 + 200))(plVar6,local_34,0x31);
        }
      }
      else {
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 200))(plVar6,local_34,0x2f);
      }
      local_4c = 0x23;
      local_54 = 3;
      local_50 = 10;
      local_48 = 0x2a;
      uVar8 = FUN_00777cd0();
      uVar9 = FUN_005ffa40(param_2);
      local_148 = (int *)0x0;
      local_140 = 0;
      FUN_00778dc0(uVar8,uVar9,local_34,&local_54);
    }
  }
  else {
    local_110 = FUN_00786090(param_1);
    uVar10 = thunk_FUN_04118143(local_110,0xfffffff0);
    if ((uVar10 & 0xc) == 0xc) {
      local_4c = local_4c + -0xf;
      FUN_00785f90(param_1,&local_128);
      local_140 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),5);
      local_148 = &local_54;
      FUN_00785c70(param_1,param_2,local_34,local_128);
      if (*(char *)(param_1 + 0x43) != '\0') {
        plVar6 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar6 + 200))(plVar6,local_34,4);
        uVar8 = FUN_005ffa40(param_2);
        local_44 = thunk_FUN_03b57162(uVar8);
        uVar8 = FUN_005ffa40(param_2);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x98);
        local_148._0_4_ = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c);
        FUN_00428be0(uVar8,iVar3 + -0xf,0,iVar3);
        lVar11 = *(longlong *)(param_1 + 0x10);
        local_148 = (int *)CONCAT44(local_148._4_4_,*(undefined4 *)(lVar11 + 0x9c));
        FUN_004238d0(&local_54,*(int *)(lVar11 + 0x98) + -0x1e,0,*(undefined4 *)(lVar11 + 0x98));
        uVar8 = FUN_00777cd0();
        uVar9 = FUN_005ffa40(param_2);
        local_148 = (int *)0x0;
        local_140 = 0;
        FUN_00778dc0(uVar8,uVar9,local_34,&local_54);
        uVar8 = FUN_005ffa40(param_2);
        thunk_FUN_0402759f(uVar8,local_44);
      }
      uVar8 = FUN_00777cd0();
      uVar5 = FUN_007793c0(uVar8,0xff000010);
      FUN_005fd4e0(param_2[0xf],uVar5);
      (**(code **)(*param_2 + 200))(param_2,*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -0xf,3)
      ;
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -0xf,
                 *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) + -3);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
      if (cVar2 == '\0') {
        FUN_005fd4e0(param_2[0xf],*(undefined4 *)(param_2[0xe] + 0x28));
      }
      else {
        uVar8 = FUN_00777cd0();
        uVar5 = FUN_007793c0(uVar8,0xff000014);
        FUN_005fd4e0(param_2[0xf],uVar5);
      }
      (**(code **)(*param_2 + 200))(param_2,*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -0xe,3)
      ;
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -0xe,
                 *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) + -3);
      FUN_005fd4e0(param_2[0xf],*(undefined4 *)(param_2[0xe] + 0x28));
      local_b0 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -8;
      local_b4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) / 2 + 1;
      local_b8 = 3;
      do {
        iVar3 = local_b4 - local_b8;
        (**(code **)(*param_2 + 200))(param_2,local_b0 - local_b8,iVar3);
        (**(code **)(*param_2 + 0xc0))(param_2,local_b0 + local_b8 + 1,iVar3);
        local_b8 = local_b8 + -1;
      } while (local_b8 != -1);
      local_b8 = 0xffffffff;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x10);
      cVar2 = FUN_004113d0(lVar11,&PTR_FUN_006723b8);
      if ((cVar2 == '\0') || (*(char *)(lVar11 + 0x491) == '\0')) {
        local_140 = FUN_006520b0(lVar11,5);
        local_148 = &local_54;
        FUN_00785c70(param_1,param_2,local_34,local_40);
      }
      else {
        local_140 = FUN_006520b0(lVar11,0x15);
        local_148 = &local_54;
        FUN_00785c70(param_1,param_2,local_34,local_40);
      }
    }
  }
  FUN_00414480(&local_128);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_40);
  return;
}

