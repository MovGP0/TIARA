/* Ghidra address: 00a95b70 */
/* Ghidra symbol: FUN_00a95b70 */


void FUN_00a95b70(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  char local_5a;
  char local_59;
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  undefined8 local_48;
  char local_3a;
  char local_39;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_b0 = auStack_f8;
  local_c0 = 0;
  local_b8 = 0;
  local_48 = 0;
  local_68 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_39 = *(char *)(param_1[3] + 0x91);
  if ((char)param_1[8] == '\x11') {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
    local_b0 = auStack_f8;
    (**(code **)(*param_1 + 0xd0))(param_1,*(undefined4 *)((longlong)param_1 + 0x1b4));
    (**(code **)(*param_1 + 0xd8))(param_1,(int)param_1[0x37]);
  }
  else {
    if (local_39 == '\0') {
      param_1[0x33] = *(longlong *)PTR_DAT_02001ae8;
      puVar1 = auStack_f8;
    }
    else {
      puVar1 = auStack_f8;
      if (param_1[0x33] == 0) {
        local_38 = (longlong *)0x0;
        FUN_00414480(local_20);
        local_70 = param_1[0x32];
        FUN_0043ea00(local_20,local_70);
        FUN_00414b50(&local_68,local_20[0]);
        FUN_00414480(local_20);
        if (local_68 != 0) {
          local_c8 = param_1[3];
          if ((*(longlong *)(local_c8 + 200) == 0) && (*(longlong *)(local_c8 + 0xe8) == 0)) {
            FUN_00414480(&local_28);
            (**(code **)(**(longlong **)(local_c8 + 0xb8) + 0x448))
                      (*(longlong **)(local_c8 + 0xb8),&local_b8,param_1[0x32],0);
            local_78 = local_b8;
            FUN_0043ea00(&local_28,local_b8);
            FUN_00414ad0(param_1 + 0x32,local_28);
            FUN_00414480(&local_28);
          }
          else if (*(longlong *)(local_c8 + 0x108) != 0) {
            (**(code **)(local_c8 + 0x108))
                      (*(undefined8 *)(local_c8 + 0x110),*(undefined8 *)(local_c8 + 0xb8),
                       param_1[0x32],&local_48);
            FUN_00414480(&local_30);
            FUN_0043ea00(&local_30,local_48);
            FUN_00414ad0(param_1 + 0x32,local_30);
            FUN_00414480(&local_30);
          }
          iVar3 = (**(code **)(**(longlong **)(param_1[3] + 0x240) + 0xb0))
                            (*(longlong **)(param_1[3] + 0x240),param_1[0x32]);
          if (iVar3 == -1) {
            local_d8 = (longlong)param_1 + 0x1d1;
            local_38 = (longlong *)FUN_00aa81b0(param_1[3],param_1[0x32],param_1 + 0x35,&local_3a);
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
          }
        }
        if (local_38 == (longlong *)0x0) {
          if (*(char *)((longlong)param_1 + 0x1d1) == '\0') {
            param_1[0x33] = *(longlong *)PTR_DAT_02003010;
          }
          else {
            param_1[0x33] = *(longlong *)PTR_DAT_02001ae8;
            (**(code **)(**(longlong **)(param_1[3] + 0x240) + 0x80))
                      (*(longlong **)(param_1[3] + 0x240),param_1[0x32],param_1);
          }
        }
        else {
          cVar2 = (**(code **)(*local_38 + 0x88))(local_38);
          if (cVar2 == '\0') {
            param_1[0x33] = (longlong)local_38;
          }
          else {
            if (local_3a == '\0') {
              param_1[0x33] = (longlong)local_38;
            }
            else {
              lVar6 = (**(code **)(*local_38 + 0x48))(local_38);
              param_1[0x33] = lVar6;
            }
            if (*(char *)((longlong)param_1 + 0x1aa) == '\0') {
              (**(code **)(*(longlong *)param_1[0x33] + 0x30))((longlong *)param_1[0x33],1);
              local_80 = *(undefined8 *)(param_1[3] + 0x1c0);
              local_88 = param_1[0x33];
              FUN_004ae7e0(local_80,local_88);
              if (*(longlong *)(param_1[3] + 0x228) != 0) {
                FUN_00742eb0(*(longlong *)(param_1[3] + 0x228),1);
              }
            }
            else {
              (**(code **)(*(longlong *)param_1[0x33] + 0x30))((longlong *)param_1[0x33],0);
            }
          }
        }
        param_1[0x34] = (longlong)local_38;
        puVar1 = local_b0;
      }
    }
    local_b0 = puVar1;
    if ((param_1[0x33] == *(longlong *)PTR_DAT_02003010) ||
       (param_1[0x33] == *(longlong *)PTR_DAT_02001ae8)) {
      local_59 = '\x01';
    }
    else {
      local_59 = '\0';
    }
    if ((((char)param_1[0x1e] == '\0') && (param_3 != 0)) &&
       (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
      local_5a = '\x01';
    }
    else {
      local_5a = '\0';
    }
    if (local_5a != '\0') {
      local_8c = *(int *)((longlong)param_1 + 0xf4);
      local_90 = local_8c;
      if (local_8c < 1) {
        local_90 = 1;
      }
      *(int *)((longlong)param_1 + 0xf4) = local_90;
    }
    if ((((char)param_1[0x1b] == '\0') || (*(char *)((longlong)param_1 + 0xbc) != '\0')) ||
       (*(char *)((longlong)param_1 + 0xbd) != '\0')) {
      uVar4 = (**(code **)(*(longlong *)param_1[0x33] + 0x18))((longlong *)param_1[0x33]);
      uVar5 = (**(code **)(*(longlong *)param_1[0x33] + 0x10))((longlong *)param_1[0x33]);
      local_d8 = CONCAT44(local_d8._4_4_,uVar5);
      local_d0 = local_59 == '\0';
      FUN_00ac1af0(param_1,param_4,param_5,uVar4);
      uVar4 = (**(code **)(*param_1 + 200))(param_1);
      *(undefined4 *)(param_1 + 0x37) = uVar4;
      uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar4;
    }
    if (local_39 == '\0' || local_59 != '\0') {
      if (((char)param_1[0x1b] == '\0') &&
         ((local_59 != '\0' ||
          ((*(int *)((longlong)param_1 + 0xdc) < 0 && ((int)param_1[0x1c] < 0)))))) {
        if (param_1[0x19] == 0) {
          local_9c = (int)param_1[0x37];
          local_a0 = local_9c;
          if (local_9c < 0x19) {
            local_a0 = 0x18;
          }
          *(int *)(param_1 + 0x36) = local_a0;
          local_a4 = *(int *)((longlong)param_1 + 0x1b4);
          local_a8 = local_a4;
          if (local_a4 < 0x19) {
            local_a8 = 0x18;
          }
          *(int *)((longlong)param_1 + 0x1ac) = local_a8;
        }
        else {
          FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),L"Arial");
          FUN_005fce30(*(undefined8 *)(param_2 + 0x70),8);
          local_d8 = local_d8 & 0xffffffff00000000;
          FUN_004238d0(local_58,0,0,0);
          uVar7 = FUN_005ffa40(param_2);
          FUN_00416ba0(&local_c0,param_1[0x19],&LAB_00a96610);
          uVar8 = FUN_00416740(local_c0);
          local_d8 = CONCAT44(local_d8._4_4_,0x400);
          thunk_FUN_041a24be(uVar7,uVar8,0xffffffff,local_58);
          *(int *)(param_1 + 0x36) = local_50 + 0x1a;
          local_94 = local_4c;
          if (local_4c < 0x18) {
            local_98 = 0x18;
          }
          else {
            local_98 = local_4c;
          }
          *(int *)((longlong)param_1 + 0x1ac) = local_98;
        }
        (**(code **)(*param_1 + 0xd0))(param_1,*(undefined4 *)((longlong)param_1 + 0x1ac));
        (**(code **)(*param_1 + 0xd8))(param_1,(int)param_1[0x36]);
      }
      else {
        *(int *)(param_1 + 0x36) = (int)param_1[0x37];
        *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 0x1b4);
      }
    }
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((longlong)param_1 + 0xc4);
    *(int *)((longlong)param_1 + 0x94) = (int)param_1[0x18];
    iVar3 = (**(code **)(*param_1 + 200))(param_1);
    *(int *)(param_1 + 0x13) = (int)param_1[0x12] + iVar3;
    iVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x94) + iVar3;
  }
  FUN_00414560(&local_c0,2);
  FUN_00414480(&local_68);
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,3);
  return;
}

