/* Ghidra address: 00710420 */
/* Ghidra symbol: FUN_00710420 */


void FUN_00710420(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int local_100;
  int local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  int local_d0 [4];
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  int local_54;
  int local_50;
  undefined1 local_49;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_38 [15];
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_c0 = auStack_128;
  local_60 = 0;
  plVar5 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar5 + 0x90))(plVar5);
  if (((cVar1 != '\0') && (*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) != 0)) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      local_78 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x260))
                           (*(longlong **)(param_1 + 0x10));
    }
    else {
      local_78 = *(int *)(param_1 + 0xb8);
    }
    local_28 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    FUN_005ffb10(local_28,param_2);
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
    (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      local_29 = 0xe;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      pcVar9 = (code *)FUN_00411550(uVar6,0xffb0);
      cVar1 = (*pcVar9)(uVar6);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0x38) == '\0') {
          local_29 = 0xb;
        }
        else {
          local_29 = 0xc;
        }
      }
      else {
        local_29 = 0xd;
      }
    }
    local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
    FUN_004238d0(&local_48,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
    plVar5 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar5 + 0xf0))(plVar5,local_38,local_29);
    uVar6 = FUN_00777cd0();
    uVar7 = FUN_00609e10(local_20);
    uVar7 = FUN_005ffa40(uVar7);
    local_108 = 0;
    local_100 = 0;
    FUN_00778dc0(uVar6,uVar7,local_38,&local_48);
    plVar5 = *(longlong **)(param_1 + 0x10);
    if ((*(byte *)(plVar5 + 0x59) & 2) == 0) {
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      FUN_00423b10(&local_48,0xfffffffd,0xfffffffd);
      FUN_00692750(param_1,local_d0);
      local_40 = local_d0[0] + -2;
      local_80 = (longlong *)FUN_00609e10(local_20);
      FUN_005fdab0(local_80[0x10],*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 200));
      (**(code **)(*local_80 + 0xa8))(local_80,&local_48);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      local_49 = 5;
    }
    else if (*(char *)(param_1 + 0x98) == '\0') {
      if (*(char *)(param_1 + 100) == '\0') {
        local_49 = 2;
      }
      else {
        local_49 = 3;
      }
    }
    else {
      local_49 = 4;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x580) != '\x01') {
      plVar5 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar5 + 0xf0))(plVar5,local_38,local_49);
      uVar6 = FUN_00777cd0();
      uVar7 = FUN_00609e10(local_20);
      uVar7 = FUN_005ffa40(uVar7);
      FUN_00692750(param_1,local_d0);
      local_108 = 0;
      local_100 = 0;
      FUN_00778dc0(uVar6,uVar7,local_38,local_d0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),&local_48);
    FUN_00423b10(&local_48,0xfffffffd,0xfffffffd);
    FUN_00692750(param_1,local_d0);
    local_40 = local_d0[0] + -2;
    lVar8 = FUN_00609e10(local_20);
    (**(code **)(**(longlong **)(lVar8 + 0x70) + 0x10))
              (*(longlong **)(lVar8 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
    plVar5 = *(longlong **)(param_1 + 0x10);
    if ((*(byte *)(plVar5 + 0x59) & 1) != 0) {
      cVar1 = (**(code **)(*plVar5 + 0xf0))(plVar5);
      if (cVar1 == '\0') {
        lVar8 = FUN_00609e10(local_20);
        uVar6 = FUN_00777cd0();
        uVar3 = FUN_007793a0(uVar6,0x13);
        FUN_005fc860(*(undefined8 *)(lVar8 + 0x70),uVar3);
      }
      else {
        lVar8 = FUN_00609e10(local_20);
        uVar6 = FUN_00777cd0();
        uVar3 = FUN_007793a0(uVar6,0x16);
        FUN_005fc860(*(undefined8 *)(lVar8 + 0x70),uVar3);
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar8 + 0x580) == '\x02') {
      pcVar9 = (code *)FUN_00411550(lVar8,0xffb0);
      cVar1 = (*pcVar9)(lVar8);
      if (cVar1 == '\0') {
        local_90 = (longlong *)FUN_00609e10(local_20);
        local_a8 = *(longlong *)(param_1 + 8);
        FUN_005fdab0(local_90[0x10],*(undefined4 *)(*(longlong *)(local_a8 + 0x18) + 0x28));
        FUN_005fdcb0(local_90[0x10],0);
        (**(code **)(*local_90 + 0xa8))(local_90,&local_48);
      }
      else {
        local_88 = (longlong *)FUN_00609e10(local_20);
        if (local_78 != -1) {
          FUN_005fdab0(local_88[0x10],0xff00000d);
          FUN_005fdcb0(local_88[0x10],0);
          (**(code **)(*local_88 + 0xa8))(local_88,&local_48);
          FUN_005fc860(local_88[0xe],0xff00000e);
        }
        (**(code **)(*local_88 + 0x98))(local_88,&local_48);
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x580) != '\x01') {
      uVar6 = FUN_00786090(param_1);
      local_68 = thunk_FUN_041b2403(uVar6,0x403,0,0);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x568) == 0) || (local_78 == -1)) {
        if ((local_68 < 1) || (local_78 == -1)) {
          local_48 = local_48 + 5;
        }
        else {
          local_a0 = *(longlong *)(param_1 + 0x10);
          lVar8 = FUN_006a35d0(*(undefined8 *)(local_a0 + 0x588),local_78);
          local_64 = *(int *)(lVar8 + 0x30);
          lVar8 = (longlong)local_68;
          thunk_FUN_0400423a(lVar8,&local_6c,&local_70);
          local_74 = thunk_FUN_041da135(lVar8);
          if ((-1 < local_64) && (local_64 < local_74)) {
            local_50 = 5;
            iVar4 = FUN_004230c0(&local_48);
            local_54 = (local_44 + iVar4 / 2) - local_70 / 2;
            if (local_54 < local_44) {
              local_54 = local_44;
            }
            uVar6 = FUN_00609e10(local_20,(longlong)local_70 % 2 & 0xffffffff);
            uVar6 = FUN_005ffa40(uVar6);
            local_108 = CONCAT44(local_108._4_4_,local_54);
            local_100 = local_6c;
            local_f8 = local_70;
            local_f0 = 0xffffffff;
            local_e8 = 0xffffffff;
            local_e0 = 0;
            thunk_FUN_0413e9f5((longlong)local_68,local_64,uVar6,local_50);
            local_48 = local_50 + local_6c + 5;
          }
        }
      }
      else {
        local_98 = *(longlong *)(param_1 + 0x10);
        local_50 = 5;
        iVar4 = FUN_004230c0(&local_48);
        local_54 = (local_44 + iVar4 / 2) - *(int *)(*(longlong *)(local_98 + 0x568) + 0x90) / 2;
        if (local_54 < local_44) {
          local_54 = local_44;
        }
        lVar8 = FUN_006a35d0(*(undefined8 *)(local_98 + 0x588),local_78);
        if (-1 < *(int *)(lVar8 + 0x30)) {
          lVar8 = FUN_006a35d0(*(undefined8 *)(local_98 + 0x588),local_78);
          iVar4 = (**(code **)(**(longlong **)(local_98 + 0x568) + 0x90))
                            (*(longlong **)(local_98 + 0x568));
          if (*(int *)(lVar8 + 0x30) < iVar4) {
            uVar6 = FUN_00609e10(local_20);
            lVar8 = FUN_006a35d0(*(undefined8 *)(local_98 + 0x588),local_78);
            uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                              (*(longlong **)(param_1 + 0x10));
            local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(lVar8 + 0x30));
            local_100 = CONCAT31(local_100._1_3_,uVar2);
            FUN_007d6c70(*(undefined8 *)(local_98 + 0x568),uVar6,local_50,local_54);
          }
        }
        local_48 = local_50 + *(int *)(*(longlong *)(local_98 + 0x568) + 0x94) + 5;
      }
      if (local_78 != -1) {
        lVar8 = FUN_00609e10(local_20);
        FUN_005fdcb0(*(undefined8 *)(lVar8 + 0x80),1);
        lVar8 = FUN_006a35d0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x588),local_78);
        FUN_00414b50(&local_60,*(undefined8 *)(lVar8 + 0x20));
        if (local_60 != 0) {
          uVar6 = FUN_00609e10(local_20);
          local_b8 = FUN_005ffa40(uVar6);
          local_ac = 0;
          if (local_60 != 0) {
            local_ac = *(undefined4 *)(local_60 + -4);
          }
          uVar6 = FUN_00416740(local_60);
          local_108 = CONCAT44(local_108._4_4_,0x24);
          thunk_FUN_041a24be(local_b8,uVar6,local_ac,&local_48);
        }
      }
    }
    (**(code **)(*local_28 + 0x88))(local_28,0,0,local_20);
    FUN_00410f20(local_20);
    FUN_005ffb10(local_28,0);
    FUN_00410f20(local_28);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  FUN_00414480(&local_60);
  return;
}

