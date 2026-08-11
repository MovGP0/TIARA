/* Ghidra address: 00d489b0 */
/* Ghidra symbol: FUN_00d489b0 */


void FUN_00d489b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 local_120;
  ulonglong local_110;
  ulonglong uStack_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 *local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  ulonglong local_90;
  byte local_86;
  byte local_85;
  undefined1 local_84 [11];
  char local_79;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  int local_5c;
  undefined4 uStack_58;
  ulonglong local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  longlong *local_30;
  
  local_100 = auStack_158;
  local_b0 = (undefined1 *)0x0;
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_00d488f0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xa9) = 1;
    FUN_007d6470(lVar1,0x1fffffff);
  }
  local_138._0_4_ = 0;
  FUN_004238d0(&local_98,0,0,0);
  local_138._0_4_ = 0;
  FUN_004238d0(local_a8,0,0,0);
  uVar3 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  uVar4 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*local_30 + 0xe0))(local_30,uVar3,uVar4);
  uVar3 = (**(code **)(*local_30 + 0x60))(local_30);
  uVar4 = (**(code **)(*local_30 + 0x48))(local_30);
  local_138 = (undefined1 *)CONCAT44(local_138._4_4_,uVar4);
  FUN_004238d0(&local_54,0,0,uVar3);
  uVar7 = FUN_00609e10(local_30);
  local_78 = FUN_005ffa40(uVar7);
  FUN_007892c0(param_1,local_78);
  local_bc = 0;
  uVar8 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  if ((uVar8 & 0x20) == 0x20) {
    local_bc = 0x800;
  }
  cVar2 = FUN_00d48810(param_1);
  if ((cVar2 == '\0') && (cVar2 = FUN_00d48870(param_1), cVar2 == '\0')) {
    local_70[0] = 0x1a;
    local_6c = 0;
    local_68 = 0;
    uVar7 = FUN_00781840();
    cVar2 = FUN_007794c0(uVar7,local_70);
    if (cVar2 != '\0') {
      local_d8 = FUN_00781840();
      local_e0 = *(undefined8 *)(param_1 + 8);
      local_e8 = local_70;
      local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffffffffff00);
      local_130 = 0;
      FUN_00778e90(local_d8,local_e0,local_78,local_e8);
    }
    uVar7 = FUN_00781840();
    local_138 = (undefined1 *)0x0;
    local_130 = local_130 & 0xffffffff00000000;
    FUN_00778dc0(uVar7,local_78,local_70,&local_54);
  }
  iVar5 = FUN_00d488d0();
  local_34 = 0;
  if (-1 < iVar5 + -1) {
    do {
      iVar6 = FUN_00d488d0(param_1);
      if (local_34 == iVar6 + -1) {
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
      uVar7 = FUN_00d48770(param_1,local_34);
      FUN_00d499f0(uVar7,&local_44);
      local_d0 = FUN_00d48770(param_1,local_34);
      local_86 = *(byte *)(local_d0 + 0x24);
      local_85 = *(byte *)(local_d0 + 0x25);
      FUN_00414b50(&local_b0,*(undefined8 *)(local_d0 + 0x18));
      local_b4 = *(int *)(local_d0 + 0x20);
      local_b8 = FUN_00d49a80(local_d0);
      local_79 = '\0';
      if ((local_86 & 8) == 0) {
        if (*(char *)(param_1 + 0x60) != '\0') {
          thunk_FUN_03cc0d62(local_84);
          thunk_FUN_0417e313(*(undefined8 *)(param_1 + 8),local_84);
          cVar2 = FUN_00423210(&local_44,local_84);
          if (cVar2 != '\0') {
            local_79 = '\x01';
          }
        }
        if ((local_86 & 1) == 0) {
          plVar9 = (longlong *)FUN_00781840();
          (**(code **)(*plVar9 + 0x200))(plVar9,local_70,5);
        }
        else {
          plVar9 = (longlong *)FUN_00781840();
          (**(code **)(*plVar9 + 0x200))(plVar9,local_70,2);
        }
        if ((local_79 != '\0') && ((local_86 & 1) != 0)) {
          plVar9 = (longlong *)FUN_00781840();
          (**(code **)(*plVar9 + 0x200))(plVar9,local_70,3);
        }
        if (((local_86 & 2) != 0) && ((local_86 & 1) != 0)) {
          plVar9 = (longlong *)FUN_00781840();
          (**(code **)(*plVar9 + 0x200))(plVar9,local_70,4);
        }
        if ((local_86 & 4) != 0) {
          plVar9 = (longlong *)FUN_00781840();
          (**(code **)(*plVar9 + 0x200))(plVar9,local_70,6);
        }
        if ((local_85 & 2) == 0) {
          cVar2 = FUN_00d48810(param_1);
          if (cVar2 == '\0') {
            uVar7 = FUN_00781840();
            local_138 = (undefined1 *)0x0;
            local_130 = local_130 & 0xffffffff00000000;
            FUN_00778dc0(uVar7,local_78,local_70,&local_44);
          }
          else {
            FUN_007885b0(param_1,local_78,&local_44);
            if ((((local_79 != '\0') || ((local_86 & 2) != 0)) || ((local_86 & 4) != 0)) &&
               ((local_86 & 1) != 0)) {
              uVar7 = FUN_00781840();
              local_138 = (undefined1 *)0x0;
              local_130 = local_130 & 0xffffffff00000000;
              FUN_00778dc0(uVar7,local_78,local_70,&local_44);
            }
          }
        }
        else {
          plVar9 = (longlong *)FUN_00781840();
          (**(code **)(*plVar9 + 0x200))(plVar9,local_70,0x22);
          uVar7 = FUN_00781840();
          local_138 = (undefined1 *)0x0;
          local_130 = local_130 & 0xffffffff00000000;
          FUN_00778dc0(uVar7,local_78,local_70,&local_44);
        }
        if ((local_85 & 2) == 0) {
          local_4c = CONCAT44(local_38,local_3c);
          local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffff00000000);
          FUN_00423010(&local_f8,0,0,0);
          local_98 = local_f8;
          local_90 = uStack_f0;
          if (*(longlong *)(param_1 + 0x78) != 0) {
            local_138 = (undefined1 *)
                        CONCAT44(local_138._4_4_,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90));
            FUN_004238d0(&local_98,0,0);
          }
          FUN_004237f0(&local_110,&local_54,&local_98);
          local_98 = local_110;
          local_90 = uStack_108;
          if ((local_85 & 0x20) != 0) {
            local_138 = (undefined1 *)CONCAT44(local_138._4_4_,local_38);
            FUN_004238d0(&local_110,local_3c - local_b8,local_40,local_3c);
            local_54 = local_110;
            local_4c = uStack_108;
            if ((local_86 & 1) == 0) {
              plVar9 = (longlong *)FUN_00781840();
              (**(code **)(*plVar9 + 0x200))(plVar9,local_70,0x35);
            }
            else {
              plVar9 = (longlong *)FUN_00781840();
              (**(code **)(*plVar9 + 0x200))(plVar9,local_70,0x32);
            }
            if ((local_79 != '\0') && ((local_86 & 1) != 0)) {
              plVar9 = (longlong *)FUN_00781840();
              (**(code **)(*plVar9 + 0x200))(plVar9,local_70,0x33);
            }
            if (((local_86 & 2) != 0) && ((local_86 & 1) != 0)) {
              plVar9 = (longlong *)FUN_00781840();
              (**(code **)(*plVar9 + 0x200))(plVar9,local_70,0x34);
            }
            uVar7 = FUN_00781840();
            local_138 = (undefined1 *)0x0;
            local_130 = local_130 & 0xffffffff00000000;
            FUN_00778dc0(uVar7,local_78,local_70);
            if (*(longlong *)(param_1 + 0x78) != 0) {
              local_138 = (undefined1 *)
                          CONCAT44(local_138._4_4_,
                                   *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90));
              FUN_004238d0(&local_98,0,0);
            }
            local_4c = CONCAT44(local_38,local_3c - local_b8);
            FUN_004237f0(&local_110,&local_54,&local_98);
            local_98._0_4_ = (int)local_110;
            local_98 = CONCAT44((int)(local_110 >> 0x20),(int)local_98 + 2);
          }
          local_90 = uStack_108;
          cVar2 = FUN_00d488a0(param_1);
          if (cVar2 == '\0') {
            cVar2 = FUN_00d48840(param_1);
            if (cVar2 != '\0') {
              local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffff00000000);
              FUN_004238d0(&local_54,0,0,0);
              cVar2 = FUN_00d487f0(param_1);
              if (cVar2 != '\0') {
                uVar7 = FUN_00416740(local_b0);
                local_138 = (undefined1 *)(CONCAT44(local_138._4_4_,local_bc) | 0x401);
                thunk_FUN_041a24be(local_78,uVar7,0xffffffff,&local_54);
              }
              local_138 = (undefined1 *)
                          CONCAT44(local_138._4_4_,
                                   *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90));
              FUN_004238d0(&local_98,0,0);
              local_5c = local_3c;
              uStack_58 = local_38;
              iVar6 = FUN_004230a0(&local_54);
              _local_5c = CONCAT44(uStack_58,(local_5c - iVar6) + -2);
              FUN_004237f0(&local_110,&local_64,&local_98);
              local_98 = local_110;
              local_90 = uStack_108;
            }
          }
          else {
            local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffff00000000);
            FUN_004238d0(&local_54,0,0);
            cVar2 = FUN_00d487f0(param_1);
            if ((cVar2 != '\0') && (cVar2 = FUN_00d48840(param_1), cVar2 == '\0')) {
              uVar7 = FUN_00416740(local_b0);
              local_138 = (undefined1 *)CONCAT44(local_138._4_4_,0x401);
              thunk_FUN_041a24be(local_78,uVar7,0xffffffff);
            }
            iVar6 = FUN_004230c0(&local_54);
            FUN_00423400(&local_98,0,-iVar6);
          }
          if ((-1 < local_b4) && (*(longlong *)(param_1 + 0x78) != 0)) {
            if ((local_86 & 1) == 0) {
              FUN_007d7850(*(undefined8 *)(param_1 + 0x78),1);
            }
            else {
              FUN_007d7850(*(undefined8 *)(param_1 + 0x78),2);
            }
            uVar7 = FUN_00609e10(local_30);
            local_138 = (undefined1 *)CONCAT44(local_138._4_4_,local_b4);
            local_130 = CONCAT71(local_130._1_7_,1);
            FUN_007d6c70(*(undefined8 *)(param_1 + 0x78),uVar7,local_98 & 0xffffffff);
          }
          local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffff00000000);
          FUN_004238d0(local_a8,0,0);
          cVar2 = FUN_00d487f0(param_1);
          if (cVar2 != '\0') {
            cVar2 = FUN_00d48840(param_1);
            if (cVar2 == '\0') {
              iVar6 = FUN_004230a0(&local_98);
              if ((0 < iVar6) && (-1 < local_b4)) {
                local_138 = (undefined1 *)CONCAT44(local_138._4_4_,local_38);
                FUN_004238d0(local_a8,local_44,local_90 >> 0x20);
              }
              if (local_86 == 1) {
                plVar9 = (longlong *)FUN_00781840();
                (**(code **)(*plVar9 + 200))(plVar9,local_70,0x10);
              }
              else if (local_86 == 0) {
                plVar9 = (longlong *)FUN_00781840();
                (**(code **)(*plVar9 + 200))(plVar9,local_70,0x13);
              }
              if (local_b0 != (undefined1 *)0x0) {
                local_138 = local_b0;
                local_130 = CONCAT44(local_130._4_4_,local_bc);
                FUN_007889a0(param_1,local_78,local_70);
              }
            }
            else {
              iVar6 = FUN_004230a0(&local_98);
              if ((0 < iVar6) && (-1 < local_b4)) {
                local_138 = (undefined1 *)CONCAT44(local_138._4_4_,local_38);
                FUN_004238d0(local_a8,(int)local_90 + 2,local_40);
              }
              local_c0 = 0x14104;
              if (local_bc != 0) {
                local_c0 = 0x14904;
              }
              if (local_b0 != (undefined1 *)0x0) {
                uVar7 = FUN_00781840();
                local_138 = local_a8;
                local_130 = CONCAT44(local_130._4_4_,local_c0);
                local_128 = 0x1fffffff;
                local_120 = 0;
                FUN_00778f70(uVar7,local_78,local_70);
              }
            }
          }
        }
      }
      local_34 = local_34 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(*param_2 + 0x88))(param_2,0,0,local_30);
  FUN_00410f20(local_30);
  FUN_00414480(&local_b0);
  return;
}

