/* Ghidra address: 00bf8270 */
/* Ghidra symbol: FUN_00bf8270 */


void FUN_00bf8270(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  int local_b8;
  ulonglong local_b4;
  ulonglong uStack_ac;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_94;
  ulonglong uStack_8c;
  undefined4 local_84;
  int local_7c;
  int local_78;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined8 local_30;
  
  local_d0 = auStack_128;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  puVar4 = auStack_128;
  uVar5 = local_94;
  if (*(char *)(*(longlong *)(param_1 + 0x130) + 0x498) != '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x4a0);
    puVar4 = auStack_128;
    if (*(char *)(lVar2 + 8) != '\0') {
      local_68 = 0;
      local_64 = *(undefined4 *)(lVar2 + 0x14);
      local_108 = (int *)0x0;
      local_30 = thunk_FUN_04164f7c(8,1,&local_68,0);
      uVar9 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
      local_58 = thunk_FUN_041a19a1(uVar9,local_30);
      local_4c = *(int *)(param_1 + 0x140);
      if (local_4c <= *(int *)(param_1 + 0x148)) {
        iVar10 = (*(int *)(param_1 + 0x148) - local_4c) + 1;
        do {
          local_50 = FUN_00c11080(*(undefined8 *)(param_1 + 0x130),local_4c);
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x4e8);
          iVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if ((iVar6 < local_50) &&
             (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x4e8),
             iVar6 = (**(code **)(*plVar3 + 0x28))(plVar3), iVar6 != 0)) break;
          iVar6 = FUN_00c11030(*(undefined8 *)(param_1 + 0x130),local_50);
          local_48 = (iVar6 - *(int *)(*(longlong *)(param_1 + 0x130) + 0x534)) *
                     *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c);
          if ((*(int *)(*(longlong *)(param_1 + 0x130) + 0x52c) % 2 == 1) && (local_50 % 2 == 0)) {
            local_48 = local_48 + 1;
          }
          local_40 = local_4c;
          while( true ) {
            iVar6 = FUN_00c11080(*(undefined8 *)(param_1 + 0x130),local_40);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x4e8);
            iVar7 = (**(code **)(*plVar3 + 0x28))(plVar3);
            if (iVar7 < iVar6) break;
            iVar6 = FUN_00c11080(*(undefined8 *)(param_1 + 0x130),local_40);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x4e8);
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_e0,iVar6 + -1);
            FUN_0043eb50(&local_d8,local_e0);
            if (local_d8 != 0) break;
            local_40 = local_40 + 1;
          }
          iVar6 = FUN_00c11080(*(undefined8 *)(param_1 + 0x130),local_40);
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x4e8);
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_e8,iVar6 + -1);
          local_3c = FUN_00bf3fd0(*(undefined8 *)(param_1 + 0x130),local_e8,1,1);
          local_38 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x618);
          if (local_38 < local_3c) {
            do {
              local_44 = local_38 * *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4) +
                         *(int *)(*(longlong *)(param_1 + 0x130) + 0x530) + -2;
              if (*(int *)(*(longlong *)(param_1 + 0x130) + 0x50c) <= local_38) {
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
                (**(code **)(*plVar3 + 200))(plVar3,local_44,local_48);
                local_48 = local_48 + *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c);
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
                (**(code **)(*plVar3 + 0xc0))(plVar3,local_44,local_48);
                local_48 = local_48 - *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c);
              }
              local_38 = local_38 + *(int *)(*(longlong *)(param_1 + 0x130) + 0x618);
            } while (local_38 < local_3c);
          }
          local_4c = local_4c + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      uVar9 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
      thunk_FUN_041a19a1(uVar9,local_58);
      thunk_FUN_0416f828(local_30);
      puVar4 = local_d0;
    }
    local_d0 = puVar4;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x4a0);
    if ((*(char *)(lVar2 + 0x18) != '\0') ||
       (puVar4 = local_d0, uVar5 = local_94, *(char *)(lVar2 + 0x19) != '\0')) {
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x78),
                   *(undefined4 *)(lVar2 + 0xc));
      local_6c = 0;
      iVar10 = FUN_00be1000();
      local_34 = 0;
      puVar4 = local_d0;
      uVar5 = local_94;
      if (-1 < iVar10 + -1) {
        do {
          local_a0 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x4a8) + 0x10);
          if (*(uint *)(local_a0 + 0x10) <= local_34) {
            FUN_00594f90();
          }
          puVar1 = (ulonglong *)(*(longlong *)(local_a0 + 8) + (longlong)(int)local_34 * 0x14);
          local_b4 = *puVar1;
          uStack_ac = puVar1[1];
          uStack_a4 = (undefined4)puVar1[2];
          local_94._0_4_ = (int)local_b4;
          puVar4 = local_d0;
          uVar5 = local_b4;
          uStack_8c = uStack_ac;
          local_84 = uStack_a4;
          if (*(int *)(param_1 + 0xac) < (int)local_94) break;
          local_84._0_1_ = (char)uStack_a4;
          bVar11 = (char)local_84 != '\0';
          uVar5 = local_b4;
          if (((bVar11) && (uVar5 = local_b4, local_6c < (int)local_94)) &&
             (uVar5 = local_b4, *(int *)(param_1 + 0xb0) <= (int)local_94)) {
            local_94 = local_b4;
            if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x4a0) + 0x18) != '\0') {
              iVar6 = FUN_00c11030(*(undefined8 *)(param_1 + 0x130),local_b4 & 0xffffffff);
              local_48 = ((iVar6 - *(int *)(*(longlong *)(param_1 + 0x130) + 0x534)) + 1) *
                         *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c) + -1;
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
              (**(code **)(*plVar3 + 200))(plVar3,*(undefined4 *)(param_1 + 0x58),local_48);
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
              (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined4 *)(param_1 + 0x60),local_48);
            }
            uVar5 = local_94;
            if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x4a0) + 0x19) != '\0') {
              uVar8 = FUN_00c11030(*(undefined8 *)(param_1 + 0x130),local_94 & 0xffffffff);
              FUN_00bfce40(*(undefined8 *)(param_1 + 0x130),&local_7c,uVar8,local_94 & 0xffffffff);
              local_b8 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x130));
              local_b8 = local_b8 + -1;
              local_b9 = 0 < local_7c;
              local_ba = local_7c <= local_b8;
              uVar5 = local_94;
              if ((bool)local_b9 && (bool)local_ba) {
                uVar9 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
                (**(code **)(*plVar3 + 0x30))(plVar3,uVar9);
                uVar9 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
                thunk_FUN_03b994b9(uVar9,1);
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
                (**(code **)(*plVar3 + 0x68))
                          (plVar3,*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x4a0) + 0xc));
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
                local_108 = &local_7c;
                local_100 = &LAB_00bf8cee;
                local_f8 = 3;
                (**(code **)(*plVar3 + 0x48))
                          (plVar3,local_7c +
                                  (*(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4) * 2) / 7,
                           local_78 - *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c) / 5,0);
                uVar9 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
                thunk_FUN_03b994b9(uVar9,2);
                local_bb = 0x1e < *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c);
                if ((bool)local_bb) {
                  local_c0 = 2;
                }
                else {
                  local_c0 = 1;
                }
                FUN_005fd6d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x78),
                             local_c0);
                FUN_005fdcb0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x80),1);
                local_78 = local_78 + *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c) / 7;
                FUN_005fdf50(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490),&local_7c);
                FUN_005fdcb0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x80),0);
                FUN_005fd6d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x490) + 0x78),1);
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
                (**(code **)(*plVar3 + 0x38))(plVar3);
                uVar5 = local_94;
              }
            }
          }
          local_94 = uVar5;
          if ((char)local_84 != '\0') {
            local_c4 = local_94._4_4_;
            if (local_94._4_4_ < local_6c) {
              local_c8 = local_6c;
            }
            else {
              local_c8 = local_94._4_4_;
            }
            local_6c = local_c8;
          }
          local_34 = local_34 + 1;
          iVar10 = iVar10 + -1;
          puVar4 = local_d0;
          uVar5 = local_94;
        } while (iVar10 != 0);
      }
    }
  }
  local_94 = uVar5;
  local_d0 = puVar4;
  FUN_00414560(&local_e8,3);
  return;
}

