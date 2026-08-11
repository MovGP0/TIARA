/* Ghidra address: 0070c0a0 */
/* Ghidra symbol: FUN_0070c0a0 */


void FUN_0070c0a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  int *local_f8;
  undefined4 local_f0;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_d0 [16];
  undefined1 *local_c0;
  int local_b4;
  longlong local_b0;
  int local_a8;
  bool local_a1;
  undefined8 local_a0;
  bool local_91;
  longlong local_90;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined1 local_70 [12];
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_c0 = auStack_118;
  local_78 = 0;
  plVar4 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (cVar1 == '\0') goto LAB_0070ca1b;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
  cVar1 = FUN_004113d0(lVar8,&PTR_FUN_007ee548);
  local_90 = lVar8;
  if (cVar1 == '\0') {
    local_90 = 0;
  }
  plVar4 = (longlong *)FUN_00777cd0();
  (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,1);
  uVar5 = FUN_00777cd0();
  uVar6 = FUN_005ffa40(param_2);
  local_f8 = (int *)CONCAT44(local_f8._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
  FUN_004238d0(local_d0,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
  local_f8 = (int *)0x0;
  local_f0 = 0;
  FUN_00778dc0(uVar5,uVar6,local_70,local_d0);
  if (local_90 == 0) {
LAB_0070c1f4:
    local_a1 = false;
  }
  else {
    uVar5 = FUN_0065b870(local_90);
    iVar3 = thunk_FUN_041b570f(uVar5);
    if (iVar3 != 0) goto LAB_0070c1f4;
    local_a0 = FUN_00786090(param_1);
    uVar7 = thunk_FUN_04118143(local_a0,0xfffffff0);
    local_a1 = (uVar7 & 0x100) == 0x100;
  }
  local_91 = local_a1;
  uVar5 = FUN_00786090(param_1);
  lVar8 = thunk_FUN_041b2403(uVar5,0x40e,0,0);
  if (lVar8 < 1) {
    lVar8 = *(longlong *)(param_1 + 0x10);
    cVar1 = FUN_004113d0(lVar8,&PTR_FUN_006b1538);
    if (cVar1 == '\0') {
      uVar5 = FUN_00786090(param_1);
      local_58 = thunk_FUN_041b2403(uVar5,0x406,0,0);
    }
    else {
      local_b0 = *(longlong *)(lVar8 + 0x490);
      local_58 = *(int *)(*(longlong *)(local_b0 + 0x10) + 0x10);
    }
    local_e4 = local_58 + -1;
    local_5c = 0;
    if (-1 < local_e4) {
      local_e4 = local_58;
      do {
        local_f8 = (int *)((ulonglong)local_f8 & 0xffffffff00000000);
        FUN_004238d0(&local_40,0,0,0);
        uVar5 = FUN_00786090(param_1);
        thunk_FUN_041b2403(uVar5,0x40a,(longlong)local_5c,&local_40);
        cVar1 = FUN_00423b30(&local_40);
        if (cVar1 != '\0') goto LAB_0070ca1b;
        local_50 = CONCAT44(local_3c,local_40);
        local_48 = CONCAT44(local_34,local_38);
        if (local_5c == local_58 + -1) {
          iVar3 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
          local_48 = CONCAT44(local_48._4_4_,iVar3 + 10);
        }
        plVar4 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,2);
        uVar5 = FUN_00777cd0();
        uVar6 = FUN_005ffa40(param_2);
        local_f8 = (int *)0x0;
        local_f0 = 0;
        FUN_00778dc0(uVar5,uVar6,local_70);
        plVar4 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,2);
        FUN_00423b10(&local_40,0xffffffff,0xffffffff);
        lVar8 = *(longlong *)(param_1 + 0x10);
        cVar1 = FUN_004113d0(lVar8,&PTR_FUN_006b0a88);
        if (cVar1 == '\0') {
          local_64 = FUN_006520b0(lVar8,0);
        }
        else {
          lVar9 = FUN_006d8710(*(undefined8 *)(lVar8 + 0x490),local_5c);
          local_64 = FUN_006520b0(lVar8,*(undefined4 *)
                                         (&DAT_01e03e6c + (ulonglong)*(byte *)(lVar9 + 0x24) * 4));
        }
        local_60 = local_5c;
        uVar5 = FUN_00786090(param_1);
        uVar2 = thunk_FUN_041b2403(uVar5,0x40c);
        FUN_004169f0(&local_78,uVar2);
        local_b4 = 0;
        if (local_78 != 0) {
          local_b4 = *(int *)(local_78 + -4);
        }
        if (local_b4 < 1) {
          lVar8 = *(longlong *)(param_1 + 0x10);
          cVar1 = FUN_004113d0(lVar8);
          if (cVar1 != '\0') {
            lVar8 = FUN_006d8710(*(undefined8 *)(lVar8 + 0x490));
            if (*(char *)(lVar8 + 0x28) == '\x01') {
              local_d8 = *(longlong *)(param_1 + 0x10);
              if (*(longlong *)(local_d8 + 0x4b0) != 0) {
                local_30 = *(undefined8 *)(local_d8 + 0x498);
                *(undefined8 *)(local_d8 + 0x498) = param_2;
                FUN_006d8710(*(undefined8 *)(local_d8 + 0x490),local_5c);
                (**(code **)(local_d8 + 0x4b0))(*(undefined8 *)(local_d8 + 0x4b8));
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x498) = local_30;
              }
            }
            else {
              FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x490),local_5c);
              local_f8 = &local_40;
              local_f0 = local_64;
              FUN_00785c70(param_1);
            }
          }
        }
        else {
          uVar5 = FUN_00786090(param_1);
          FUN_00414de0(&local_78);
          local_54 = thunk_FUN_041b2403(uVar5,0x40d);
          if ((local_54 & 0x1000) == 0) {
            local_f8 = &local_40;
            local_f0 = local_64;
            FUN_00785c70(param_1);
          }
          else {
            local_e0 = *(longlong *)(param_1 + 0x10);
            cVar1 = FUN_004113d0();
            if ((cVar1 != '\0') && (*(longlong *)(local_e0 + 0x4b0) != 0)) {
              local_30 = *(undefined8 *)(local_e0 + 0x498);
              *(undefined8 *)(local_e0 + 0x498) = param_2;
              FUN_006d8710(*(undefined8 *)(local_e0 + 0x490),local_5c);
              (**(code **)(local_e0 + 0x4b0))(*(undefined8 *)(local_e0 + 0x4b8));
              *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x498) = local_30;
            }
          }
        }
        local_5c = local_5c + 1;
        local_e4 = local_e4 + -1;
      } while (local_e4 != 0);
    }
    if (local_91 != false) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
                (*(longlong **)(param_1 + 0x10),&local_50);
      local_50 = CONCAT44(local_48._4_4_ + -0x11,(int)local_48 + -0x11);
      plVar4 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,4);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      local_f8 = (int *)0x0;
      local_f0 = 0;
      FUN_00778dc0(uVar5,uVar6,local_70,&local_50);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),&local_40);
    FUN_0040d200(&local_84,0xc,0);
    uVar5 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar5,0x407,0,&local_84);
    local_40 = local_84 + local_7c;
    local_3c = local_80;
    local_34 = local_34 - local_80;
    local_38 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
    local_38 = local_38 + 10;
    plVar4 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,2);
    uVar5 = FUN_00777cd0();
    uVar6 = FUN_005ffa40(param_2);
    local_f8 = (int *)0x0;
    local_f0 = 0;
    FUN_00778dc0(uVar5,uVar6,local_70,&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),&local_50);
    local_50 = CONCAT44(local_48._4_4_ + -0x11,(int)local_48 + -0x11);
    if (local_91 != false) {
      plVar4 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,4);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      local_f8 = (int *)0x0;
      local_f0 = 0;
      FUN_00778dc0(uVar5,uVar6,local_70,&local_50);
    }
    plVar4 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar4 + 0x1b8))(plVar4,local_70,2);
    uVar5 = FUN_00786090(param_1);
    uVar2 = thunk_FUN_041b2403(uVar5,0x40c,0,0);
    FUN_004169f0(&local_78,uVar2);
    local_a8 = 0;
    if (local_78 != 0) {
      local_a8 = *(int *)(local_78 + -4);
    }
    if (0 < local_a8) {
      uVar5 = FUN_00786090(param_1);
      uVar6 = FUN_00414de0(&local_78);
      thunk_FUN_041b2403(uVar5,0x40d,0,uVar6);
      local_f0 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0);
      local_f8 = &local_40;
      local_64 = local_f0;
      FUN_00785c70(param_1,param_2,local_70,local_78);
    }
  }
LAB_0070ca1b:
  FUN_00414480(&local_78);
  return;
}

