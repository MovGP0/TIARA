/* Ghidra address: 0070d250 */
/* Ghidra symbol: FUN_0070d250 */


void FUN_0070d250(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int extraout_var;
  longlong lVar10;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  ulonglong local_300;
  longlong local_2f8;
  int local_2f0;
  uint local_2ec;
  longlong *local_2e8;
  int local_2e0;
  char local_2db;
  char local_2da;
  char local_2d9;
  undefined8 local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2ae [510];
  undefined1 local_b0 [12];
  int local_a4;
  byte local_a0;
  byte local_9f;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined1 local_40 [12];
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = param_2;
  local_2e8 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*local_2e8 + 0x90))(local_2e8);
  if (cVar2 != '\0') {
    uVar6 = FUN_00786090(param_1);
    local_2ec = thunk_FUN_04118143(uVar6,0xfffffff0);
    local_308 = (undefined8 *)
                CONCAT44(local_308._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
    FUN_004238d0(&local_50,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4cd) == '\0') {
      local_34[0] = 0x1a;
      local_30 = 0;
      local_2c = 0;
      cVar2 = FUN_007794c0(local_2e8,local_34);
      if (cVar2 != '\0') {
        uVar6 = FUN_00786090(param_1);
        uVar7 = FUN_005ffa40(local_2f8);
        local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
        local_300 = 0;
        FUN_00778ec0(local_2e8,uVar6,uVar7,local_34);
      }
      uVar6 = FUN_005ffa40(local_2f8);
      local_308 = (undefined8 *)0x0;
      local_300 = local_300 & 0xffffffff00000000;
      FUN_00778dc0(local_2e8,uVar6,local_34,&local_50);
    }
    else {
      uVar5 = FUN_00779380(local_2e8,0x1a);
      uVar4 = FUN_00779380(local_2e8,0x1b);
      local_308 = (undefined8 *)CONCAT71(local_308._1_7_,1);
      FUN_00636080(local_2f8,uVar5,uVar4,&local_50);
    }
    FUN_0070cdf0(param_1);
    iVar3 = FUN_0070cc60();
    local_2e0 = iVar3 + -1;
    local_2f0 = 0;
    if (-1 < local_2e0) {
      do {
        local_2e0 = iVar3;
        local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0xff);
        FUN_0070cd20(param_1,local_b0,local_2f0,local_2ae);
        bVar1 = local_a0;
        if ((local_a0 & 8) != 8) {
          FUN_0070cc90(param_1,&local_50,local_2f0);
          if ((local_9f & 0x80) == 0x80) {
            local_2da = '\n';
            if ((bVar1 & 4) == 0) {
              local_2da = '\r';
            }
            else if ((bVar1 & 2) == 2) {
              local_2da = '\f';
            }
            else if ((bVar1 & 1) == 1) {
              if ((bVar1 & 2) == 2) {
                local_2da = '\x0f';
              }
              else if ((*(int *)(param_1 + 0x44) == local_2f0) &&
                      (*(char *)(param_1 + 0x38) != '\0')) {
                local_2da = '\x0f';
              }
              else {
                local_2da = '\x0e';
              }
            }
            else if ((*(int *)(param_1 + 0x44) == local_2f0) && (*(char *)(param_1 + 0x38) != '\0'))
            {
              local_2da = '\v';
            }
          }
          else {
            local_2da = '\x02';
            if ((bVar1 & 4) == 0) {
              local_2da = '\x05';
            }
            else if (((local_a0 & 2) == 2) &&
                    (((local_9f & 8) != 8 || (*(int *)(param_1 + 0x40) != local_2f0)))) {
              local_2da = '\x04';
            }
            else if ((local_a0 & 1) == 1) {
              if ((local_a0 & 2) == 2) {
                local_2da = '\a';
              }
              else if ((*(int *)(param_1 + 0x44) == local_2f0) &&
                      (*(char *)(param_1 + 0x38) != '\0')) {
                local_2da = '\a';
              }
              else {
                local_2da = '\x06';
              }
            }
            else if (((*(int *)(param_1 + 0x44) == local_2f0) && (*(char *)(param_1 + 0x38) != '\0')
                     ) || (((local_9f & 8) == 8 && (*(int *)(param_1 + 0x40) == local_2f0)))) {
              local_2da = '\x03';
            }
          }
          if ((((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4cd) == '\0') || ((local_a0 & 2) == 2))
              || ((local_a0 & 1) == 1)) ||
             (((*(char *)(param_1 + 0x38) != '\0' && (*(int *)(param_1 + 0x44) == local_2f0)) ||
              (*(int *)(param_1 + 0x40) == local_2f0)))) {
            local_2d9 = '\x01';
          }
          else {
            local_2d9 = '\0';
          }
          (**(code **)(*local_2e8 + 0x200))(local_2e8,local_34,local_2da);
          local_2db = '\x01';
          if ((local_9f & 2) == 2) {
            if (local_2d9 != '\0') {
              uVar6 = FUN_005ffa40(local_2f8);
              local_308 = (undefined8 *)0x0;
              local_300 = local_300 & 0xffffffff00000000;
              FUN_00778dc0(local_2e8,uVar6,local_34,&local_50);
            }
          }
          else if ((local_9f & 0x80) == 0x80) {
            uVar6 = FUN_005ffa40(local_2f8);
            local_308 = (undefined8 *)0x0;
            local_300 = local_300 & 0xffffffff00000000;
            FUN_00778dc0(local_2e8,uVar6,local_34,&local_50);
          }
          else if ((local_9f & 8) == 8) {
            iVar3 = FUN_0070d200(auStack_328,local_2f0);
            local_58 = CONCAT44(uStack_44,local_48 - iVar3);
            if (local_2d9 != '\0') {
              uVar6 = FUN_005ffa40(local_2f8);
              local_308 = (undefined8 *)0x0;
              local_300 = local_300 & 0xffffffff00000000;
              FUN_00778dc0(local_2e8,uVar6,local_34,&local_60);
            }
            local_58 = CONCAT44(uStack_44,local_48);
            local_60 = CONCAT44(uStack_4c,local_48 - iVar3);
            lVar10 = param_1;
            if ((*(int *)(param_1 + 0x40) == local_2f0) || (lVar10 = 0, local_2da == '\x04')) {
              uVar6 = CONCAT71((int7)((ulonglong)lVar10 >> 8),0x1c);
            }
            else if (local_2da == '\x05') {
              uVar6 = 0x1d;
            }
            else if (local_2da == '\x03') {
              uVar6 = 0x1b;
            }
            else {
              uVar6 = 0x1a;
            }
            uVar5 = (undefined4)uVar6;
            if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4cd) == '\x01') &&
               (((cVar2 = (char)uVar6, cVar2 == '\x05' || (cVar2 == '\x1a')) || (cVar2 == '\x1d'))))
            {
              uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),0x32);
            }
            (**(code **)(*local_2e8 + 0x200))(local_2e8,local_40,uVar5);
            uVar6 = FUN_005ffa40(local_2f8);
            local_308 = (undefined8 *)0x0;
            local_300 = local_300 & 0xffffffff00000000;
            FUN_00778dc0(local_2e8,uVar6,local_40,&local_60);
            local_48 = local_48 - iVar3;
          }
          else if ((local_9f & 1) == 1) {
            local_60 = CONCAT44(uStack_4c,local_50);
            local_58 = CONCAT44(uStack_44,local_48);
            plVar8 = (longlong *)FUN_007810f0();
            cVar2 = (**(code **)(*plVar8 + 0x98))(plVar8);
            if (cVar2 != '\0') {
              local_58 = CONCAT44(local_58._4_4_,(int)local_60 + 4);
            }
            lVar10 = *(longlong *)(param_1 + 0x10);
            cVar2 = FUN_004113d0(lVar10,&PTR_FUN_006ccaa0);
            if (((cVar2 == '\0') || (*(char *)(lVar10 + 0x4e6) != '\0')) ||
               (lVar10 = FUN_006fca20(lVar10,local_2f0), *(char *)(lVar10 + 0x339) == '\0')) {
              (**(code **)(*local_2e8 + 0x200))(local_2e8,local_34,0x22);
              uVar6 = FUN_005ffa40(local_2f8);
              local_308 = (undefined8 *)0x0;
              local_300 = local_300 & 0xffffffff00000000;
              FUN_00778dc0(local_2e8,uVar6,local_34,&local_60);
            }
            else {
              uVar9 = FUN_00423530(&local_60);
              uVar5 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
              FUN_00423530(&local_60);
              local_308._0_4_ = extraout_var + 2;
              FUN_004238d0(&local_2c8,0,uVar9 >> 0x20,uVar5);
              local_60 = local_2c8;
              local_58 = uStack_2c0;
              uVar6 = FUN_00777cd0();
              uVar5 = FUN_007793c0(uVar6,0xff000010);
              uVar6 = FUN_00777cd0();
              uVar4 = FUN_007793c0(uVar6,0xff000014);
              local_308 = (undefined8 *)CONCAT44(local_308._4_4_,1);
              FUN_00741000(local_2f8,&local_60,uVar5,uVar4);
            }
            local_2db = '\0';
          }
          else if (local_2d9 != '\0') {
            uVar6 = FUN_005ffa40(local_2f8);
            local_308 = (undefined8 *)0x0;
            local_300 = local_300 & 0xffffffff00000000;
            FUN_00778dc0(local_2e8,uVar6,local_34,&local_50);
          }
          lVar10 = *(longlong *)(param_1 + 0x48);
          if (lVar10 == 0) {
            local_308 = (undefined8 *)((ulonglong)local_308._4_4_ << 0x20);
            FUN_004238d0(&local_70,0,0,0);
          }
          else {
            local_308 = (undefined8 *)CONCAT44(local_308._4_4_,*(undefined4 *)(lVar10 + 0x90));
            FUN_004238d0(&local_70,0,0,*(undefined4 *)(lVar10 + 0x94));
            FUN_004238f0(&local_2c8,&local_70,&local_50);
          }
          iVar3 = FUN_00414d00(local_90);
          if (((0 < iVar3) && ((local_9f & 1) != 1)) &&
             ((cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_006ccaa0),
              cVar2 == '\0' ||
              ((cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_006ccaa0),
               cVar2 != '\0' &&
               ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4dc) != '\0' ||
                ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4a0) != '\0' &&
                 (lVar10 = FUN_006fca20(*(longlong *)(param_1 + 0x10),local_2f0),
                 *(char *)(lVar10 + 0x33a) == '\x05')))))))))) {
            if ((local_2ec & 0x1000) == 0x1000) {
              local_80 = CONCAT44(uStack_4c,local_50);
              uStack_78 = CONCAT44(uStack_44,local_48);
              FUN_005ff880(local_2f8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
              uVar7 = FUN_005ffa40(local_2f8);
              uVar6 = local_90;
              uVar5 = FUN_00414d00(local_90);
              local_308._0_4_ = 0x411;
              thunk_FUN_041a24be(uVar7,uVar6,uVar5,&local_80);
              FUN_004238f0(&local_2c8,&local_80,&local_50);
              if (((local_2db != '\0') && (-1 < local_a4)) && (*(longlong *)(param_1 + 0x48) != 0))
              {
                local_308._0_4_ = local_68._4_4_;
                FUN_004238d0(&local_2c8,5,local_70._4_4_,
                             *(int *)(*(longlong *)(param_1 + 0x48) + 0x94) + 5);
                local_70 = local_2c8;
                local_68 = uStack_2c0;
                FUN_00423b50(&local_70,local_50,0);
                local_308._0_4_ = uStack_78._4_4_;
                FUN_004238d0(&local_2c8,(int)local_68 + 3,local_80._4_4_,local_48);
                local_80 = local_2c8;
                uStack_78 = uStack_2c0;
              }
              if (local_2d9 == '\0') {
                uVar6 = FUN_00777cd0();
                uVar5 = FUN_007793c0(uVar6,0xff000012);
                FUN_005fc860(*(undefined8 *)(local_2f8 + 0x70),uVar5);
                uVar6 = FUN_005ffa40(local_2f8);
                thunk_FUN_03b994b9(uVar6,1);
                uVar7 = FUN_005ffa40(local_2f8);
                uVar6 = local_90;
                uVar5 = FUN_00414d00(local_90);
                local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0x10);
                thunk_FUN_041a24be(uVar7,uVar6,uVar5,&local_80);
              }
              else {
                FUN_004167d0(&local_2d0,local_90);
                local_308 = &local_80;
                local_300 = CONCAT44(local_300._4_4_,0x10);
                FUN_00785c70(param_1,local_2f8,local_34,local_2d0);
              }
            }
            else {
              FUN_005ff880(local_2f8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
              local_80 = CONCAT44(uStack_4c,local_50);
              uStack_78 = CONCAT44(uStack_44,local_48);
              uVar7 = FUN_005ffa40(local_2f8);
              uVar6 = local_90;
              uVar5 = FUN_00414d00(local_90);
              local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0x411);
              thunk_FUN_041a24be(uVar7,uVar6,uVar5,&local_80);
              FUN_004238f0(&local_2c8,&local_80,&local_50);
              if (((local_2db != '\0') && (-1 < local_a4)) && (*(longlong *)(param_1 + 0x48) != 0))
              {
                iVar3 = FUN_004230c0(&local_70);
                FUN_00423b50(&local_80,0,(longlong)iVar3 / 2 & 0xffffffff);
                iVar3 = FUN_004230c0(&local_80);
                FUN_00423b50(&local_70,0,(longlong)-iVar3 / 2 & 0xffffffff);
              }
              if (local_2d9 == '\0') {
                uVar6 = FUN_00777cd0();
                uVar5 = FUN_007793c0(uVar6,0xff000012);
                FUN_005fc860(*(undefined8 *)(local_2f8 + 0x70),uVar5);
                uVar6 = FUN_005ffa40(local_2f8);
                thunk_FUN_03b994b9(uVar6,1);
                uVar7 = FUN_005ffa40(local_2f8);
                uVar6 = local_90;
                uVar5 = FUN_00414d00(local_90);
                local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0x11);
                thunk_FUN_041a24be(uVar7,uVar6,uVar5,&local_80);
              }
              else {
                FUN_004167d0(&local_2d8,local_90);
                local_308 = &local_80;
                local_300 = CONCAT44(local_300._4_4_,0x11);
                FUN_00785c70(param_1,local_2f8,local_34,local_2d8);
              }
            }
          }
          if (((local_2db != '\0') && (-1 < local_a4)) && (*(longlong *)(param_1 + 0x48) != 0)) {
            cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_006ccaa0);
            if (cVar2 == '\0') {
              uVar6 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x48));
              uVar7 = FUN_005ffa40(local_2f8);
              local_308 = (undefined8 *)CONCAT44(local_308._4_4_,local_70._4_4_);
              local_300 = CONCAT44(local_300._4_4_,1);
              thunk_FUN_04153868(uVar6,local_a4,uVar7,local_70 & 0xffffffff);
            }
            else if ((((local_a0 & 4) == 0) &&
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x4f8) != 0)) &&
                    (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x4f8),
                    iVar3 = (**(code **)(*plVar8 + 0x90))(plVar8), local_a4 < iVar3)) {
              local_308 = (undefined8 *)CONCAT44(local_308._4_4_,local_a4);
              local_300 = CONCAT71(local_300._1_7_,1);
              FUN_007d6c70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x4f8),local_2f8,
                           local_70 & 0xffffffff,local_70._4_4_);
            }
            else if (((*(int *)(param_1 + 0x44) == local_2f0) &&
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x508) != 0)) &&
                    (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x508),
                    iVar3 = (**(code **)(*plVar8 + 0x90))(plVar8), local_a4 < iVar3)) {
              local_308 = (undefined8 *)CONCAT44(local_308._4_4_,local_a4);
              local_300 = CONCAT71(local_300._1_7_,1);
              FUN_007d6c70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x508),local_2f8,
                           local_70 & 0xffffffff,local_70._4_4_);
            }
            else {
              local_308 = (undefined8 *)CONCAT44(local_308._4_4_,local_a4);
              local_300 = CONCAT71(local_300._1_7_,(local_a0 & 4) == 4);
              FUN_007d6c70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x4e8),local_2f8,
                           local_70 & 0xffffffff,local_70._4_4_);
            }
          }
        }
        local_2f0 = local_2f0 + 1;
        local_2e0 = local_2e0 + -1;
        iVar3 = local_2e0;
      } while (local_2e0 != 0);
    }
  }
  FUN_00414560(&local_2d8,2);
  return;
}

