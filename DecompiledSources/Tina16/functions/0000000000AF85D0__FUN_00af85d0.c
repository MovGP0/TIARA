/* Ghidra address: 00af85d0 */
/* Ghidra symbol: FUN_00af85d0 */


undefined8 FUN_00af85d0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined4 local_d0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_99;
  int local_98;
  char local_91;
  undefined4 local_90;
  undefined1 local_8c [4];
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_b0 = auStack_f8;
  local_91 = '\0';
  local_50 = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  cVar2 = FUN_00af2f30(param_1);
  if ((cVar2 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x8b0) + 0x10) != 0)) {
    local_30 = (longlong *)FUN_00aa5de0(&PTR_FUN_00a90568,1,*(undefined8 *)(param_1 + 0x8b0));
    *(undefined1 *)((longlong)local_30 + 0x2bd) = 0;
    *(undefined1 *)((longlong)local_30 + 0x92) = 1;
    local_30[0x5c] = *(longlong *)(param_1 + 0x810);
    local_30[0x5d] = *(longlong *)(param_1 + 0x818);
    local_50 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_84 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    local_d8 = param_3;
    FUN_004238d0(&local_70,0,0,param_2);
    while (local_91 == '\0') {
      local_40 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
      (**(code **)(*local_40 + 0x88))(local_40,param_2);
      (**(code **)(*local_40 + 0x70))(local_40,param_3);
      local_38 = FUN_006056e0(&PTR_FUN_005f7f40,1,local_40,0);
      if (local_84 == 0) {
        local_d0 = 0;
        local_c8 = local_8c;
        local_c0 = &local_90;
        local_d8 = param_3;
        local_98 = (**(code **)(*local_30 + 0x30))(local_30,local_38,0,param_2);
      }
      FUN_00aa66b0(local_30,local_84);
      FUN_00af8500(auStack_f8,local_38,0);
      do {
        uVar4 = local_80;
        lVar1 = *(longlong *)(param_1 + 0x730);
        if (lVar1 == 0) {
          local_99 = 0;
        }
        else {
          local_99 = *(byte *)(lVar1 + 8);
        }
        local_80._0_4_ = (undefined4)local_70;
        if (local_99 < 3) {
          if (local_99 == 2) {
LAB_00af898b:
            uStack_78 = uStack_68;
            iVar5 = ((int)local_30[0x43] - *(int *)((longlong)local_30 + 0x94)) + -1;
            local_80 = CONCAT44(iVar5,(undefined4)local_80);
            FUN_00aa66b0(local_30,*(int *)(*(longlong *)(param_1 + 0x730) + 0xc) - iVar5);
            local_d8 = param_2 * 3;
            local_d0 = 0;
            local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
            local_c0 = (undefined4 *)((ulonglong)local_c0 & 0xffffffff00000000);
            (**(code **)(*local_30 + 0x38))(local_30,local_38,&local_80,param_2);
            *(undefined1 *)(*(longlong *)(param_1 + 0x730) + 8) = 3;
            iVar5 = ((int)local_30[0x43] - *(int *)((longlong)local_30 + 0x94)) + 1;
            uStack_78 = CONCAT44(iVar5,(undefined4)uStack_78);
            local_a8 = thunk_FUN_03976db5(0,local_80._4_4_,param_2 + 1,iVar5);
            uVar4 = FUN_005ffa40(local_38);
            thunk_FUN_039bba01(uVar4,local_a8);
            thunk_FUN_0416f828(local_a8);
            local_d8 = 0;
            local_d0 = 0;
            local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
            local_c0 = (undefined4 *)((ulonglong)local_c0 & 0xffffffff00000000);
            (**(code **)(*local_30 + 0x38))(local_30,local_38,&local_80);
            lVar1 = *(longlong *)(param_1 + 0x730);
            if (lVar1 != 0) {
              if (*(byte *)(lVar1 + 8) < 8) {
                bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar1 >> 8),1) <<
                         (*(byte *)(lVar1 + 8) & 0x1f) & 1U) != 0;
              }
              else {
                bVar6 = false;
              }
              uVar4 = local_80;
              if (bVar6) goto LAB_00af8c5a;
            }
            FUN_00af8500(auStack_f8,local_38,
                         (int)local_30[0x43] - *(int *)((longlong)local_30 + 0x94));
            uVar4 = local_80;
          }
          else {
            local_80 = uVar4;
            if (local_99 == 0) {
              local_d8 = 0;
              local_d0 = 0;
              local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
              local_c0 = (undefined4 *)((ulonglong)local_c0 & 0xffffffff00000000);
              (**(code **)(*local_30 + 0x38))(local_30,local_38,&local_70,param_2);
              FUN_00af8500(auStack_f8,local_38,(int)local_30[0x43] - local_84);
              uVar4 = local_80;
            }
            else if (local_99 == 1) {
              FUN_00aa66b0(local_30,*(undefined4 *)(lVar1 + 0xc));
              local_80 = local_70;
              uVar4 = local_80;
              local_80._4_4_ = (int)((ulonglong)local_70 >> 0x20);
              iVar5 = local_80._4_4_ + *(int *)(*(longlong *)(param_1 + 0x730) + 0x10);
              uStack_78._0_4_ = (undefined4)uStack_68;
              uStack_78 = CONCAT44(iVar5,(undefined4)uStack_78);
              local_80 = uVar4;
              local_a8 = thunk_FUN_03976db5(0,0,param_2 + 1,iVar5);
              uVar4 = FUN_005ffa40(local_38);
              thunk_FUN_039bba01(uVar4,local_a8);
              thunk_FUN_0416f828(local_a8);
              local_d8 = 0;
              local_d0 = 0;
              local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
              local_c0 = (undefined4 *)((ulonglong)local_c0 & 0xffffffff00000000);
              (**(code **)(*local_30 + 0x38))(local_30,local_38,&local_80);
              uVar4 = local_80;
            }
          }
        }
        else {
          if (local_99 == 4) goto LAB_00af898b;
          if (local_99 == 5) {
            local_a0 = (undefined4)local_30[0x43];
            iVar5 = (int)local_30[0x43] - *(int *)((longlong)local_30 + 0x94);
            local_80 = CONCAT44(iVar5,(undefined4)local_80);
            iVar3 = iVar5 + *(int *)(*(longlong *)(param_1 + 0x730) + 0x10);
            uStack_78._0_4_ = (undefined4)uStack_68;
            uStack_78 = CONCAT44(iVar3,(undefined4)uStack_78);
            local_a8 = thunk_FUN_03976db5(0,iVar5,param_2 + 1,iVar3);
            uVar4 = FUN_005ffa40(local_38);
            thunk_FUN_039bba01(uVar4,local_a8);
            thunk_FUN_0416f828(local_a8);
            FUN_00aa66b0(local_30,*(int *)(*(longlong *)(param_1 + 0x730) + 0xc) - local_80._4_4_);
            local_d8 = 0;
            local_d0 = 0;
            local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
            local_c0 = (undefined4 *)((ulonglong)local_c0 & 0xffffffff00000000);
            (**(code **)(*local_30 + 0x38))(local_30,local_38,&local_80);
            *(undefined4 *)(local_30 + 0x43) = local_a0;
            uVar4 = local_80;
          }
        }
LAB_00af8c5a:
        local_80 = uVar4;
        lVar1 = *(longlong *)(param_1 + 0x730);
        if (lVar1 == 0) break;
        if (*(byte *)(lVar1 + 8) < 8) {
          bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar1 >> 8),1) << (*(byte *)(lVar1 + 8) & 0x1f) &
                  0x13U) != 0;
        }
        else {
          bVar6 = false;
        }
      } while (!bVar6);
      FUN_00410f20(local_38);
      FUN_004ae7e0(local_50,local_40);
      local_84 = (int)local_30[0x43];
      *(int *)(local_30 + 0x5e) = (int)local_30[0x5e] + 1;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      if ((local_98 <= local_84) || (local_84 <= local_88)) {
        local_91 = '\x01';
      }
      local_88 = local_84;
    }
    FUN_00410f20(local_30);
  }
  return local_50;
}

