/* Ghidra address: 00ad5100 */
/* Ghidra symbol: FUN_00ad5100 */


void FUN_00ad5100(longlong param_1,byte param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 *local_150;
  longlong local_148;
  int local_138;
  char local_131;
  longlong local_130;
  longlong local_128;
  longlong local_100;
  longlong local_f8;
  int local_e8;
  char local_e1;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b0;
  char local_a9;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  int local_80;
  char local_79;
  longlong local_78;
  longlong local_70;
  char local_61;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_150 = auStack_1b8;
  uVar3 = (ulonglong)param_2;
  if (uVar3 < 0x83) {
    if (uVar3 < 0x68) {
      if (uVar3 == 0x67) {
LAB_00ad51e4:
        local_150 = auStack_1b8;
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        local_70 = *(longlong *)(param_1 + 0x48);
        if (local_70 == 0) {
          local_198 = 0;
          FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,0,0);
        }
        else {
          local_30 = 0;
          local_78 = 0;
          iVar7 = *(int *)(local_70 + 0x10);
          local_80 = 0;
          if (-1 < iVar7 + -1) {
            do {
              lVar4 = FUN_00a72910(local_70,local_80);
              if (*(char *)(lVar4 + 8) == 'P') {
                local_79 = '\x01';
                local_78 = FUN_00a72910(local_70,local_80);
                goto code_r0x00ad52b3;
              }
              local_80 = local_80 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_79 = '\0';
code_r0x00ad52b3:
          if (local_79 != '\0') {
            local_30 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
            FUN_00a62c40(*(undefined8 *)(local_78 + 0x28),local_30);
          }
          local_198 = 0;
          FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,local_30,local_70);
          FUN_00410f20(local_30);
        }
        FUN_00ad4fa0(param_1);
        local_90 = *(longlong *)(param_1 + 0xe8);
        local_198 = FUN_004aeac0(local_90,*(int *)(local_90 + 0x10) + -1);
        local_58 = FUN_00a9c430(&PTR_FUN_00a865e0,1,*(undefined8 *)(param_1 + 0x68),
                                *(undefined8 *)(param_1 + 0x48));
        FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_58,*(undefined4 *)(param_1 + 0x7c));
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_58 + 0xa8);
        local_98 = *(longlong *)(param_1 + 0xe8);
        local_198 = FUN_004aeac0(local_98,*(int *)(local_98 + 0x10) + -1);
        local_190 = *(undefined8 *)(param_1 + 0x70);
        local_188 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x10) == 0;
        uVar5 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0);
        *(undefined8 *)(param_1 + 0x60) = uVar5;
        FUN_00ad4730(param_1);
        uVar1 = FUN_00a4a530(param_2);
        FUN_0040f630(&local_170,uVar1,0x19);
        FUN_0040f7c0(&local_170,param_3,0x19);
        FUN_00ae4310(param_1,&local_170);
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        if (*(char *)(param_1 + 0x81) != '\0') {
          FUN_00ad5060(param_1);
        }
        FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_2);
        cVar2 = FUN_00a9ba60(*(undefined8 *)(param_1 + 0x68));
        if (cVar2 != '\0') {
          *(undefined4 *)(local_58 + 0x480) = 0xe;
          *(undefined1 *)(local_58 + 0x50a) = 1;
        }
        FUN_00a9ccf0(local_58);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_58 + 0x28);
        *(undefined8 *)(param_1 + 0x60) = 0;
        cVar2 = FUN_00a4a530(param_2);
        if (*(char *)(param_1 + 0x44) != cVar2) {
          return;
        }
        FUN_00ad4730(param_1);
        return;
      }
      if (uVar3 == 0x15) {
        local_198 = 0;
        local_190 = local_190 & 0xffffffffffffff00;
        local_150 = auStack_1b8;
        FUN_00ae3970(param_1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x30),0);
        FUN_00ad4730(param_1);
        return;
      }
      if (uVar3 == 0x16) {
        local_150 = auStack_1b8;
        FUN_00ad4730(param_1);
        return;
      }
    }
    else {
      if (uVar3 == 0x68) {
        local_150 = auStack_1b8;
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        local_198 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,0,0);
        *(undefined8 *)(param_1 + 0x60) = 0;
        FUN_00ad4730(param_1);
        local_170 = 0;
        uStack_168 = 0x100000000000;
        uStack_160 = 0;
        uStack_158 = 0;
        FUN_0040f7c0(&local_170,param_3,0x19);
        FUN_00ae4310(param_1,&local_170);
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_2);
        *(undefined8 *)(param_1 + 0x60) = 0;
        if (*(char *)(param_1 + 0x44) != 'l') {
          return;
        }
        FUN_00ad4730(param_1);
        return;
      }
      if (uVar3 - 0x6d < 5) goto LAB_00ad51e4;
    }
  }
  else {
    if (uVar3 < 0xb4) {
      local_150 = auStack_1b8;
      if (uVar3 == 0xb3) {
        do {
          FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x60) = 0;
          local_128 = *(longlong *)(param_1 + 0x48);
          if (local_128 == 0) {
            local_198 = 0;
            FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,0,0);
          }
          else {
            local_48 = 0;
            local_130 = 0;
            iVar7 = *(int *)(local_128 + 0x10);
            local_138 = 0;
            if (-1 < iVar7 + -1) {
              do {
                lVar4 = FUN_00a72910(local_128,local_138);
                if (*(char *)(lVar4 + 8) == 'P') {
                  local_131 = '\x01';
                  local_130 = FUN_00a72910(local_128,local_138);
                  goto code_r0x00ad5f23;
                }
                local_138 = local_138 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            local_131 = '\0';
code_r0x00ad5f23:
            if (local_131 != '\0') {
              local_48 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
              FUN_00a62c40(*(undefined8 *)(local_130 + 0x28),local_48);
            }
            local_198 = 0;
            FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,local_48,local_128);
            FUN_00410f20(local_48);
          }
          local_148 = *(longlong *)(param_1 + 0xe8);
          local_198 = FUN_004aeac0(local_148,*(int *)(local_148 + 0x10) + -1);
          local_50 = FUN_00a9c430(&PTR_FUN_00a865e0,1,*(undefined8 *)(param_1 + 0x68));
          FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_50,*(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_50 + 0xa8);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20);
          if (lVar4 != 0) {
            uVar5 = FUN_00a98480(&DAT_00a876a0,1,lVar4);
            *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x310) = uVar5;
          }
          FUN_00ad4730(param_1);
          local_170 = *param_3;
          uStack_168 = param_3[1];
          uStack_160 = param_3[2];
          uStack_158 = *(undefined1 *)(param_3 + 3);
          FUN_0040f7c0(&local_170,&DAT_00ad63d7,0x19);
          FUN_00ae4310(param_1,&local_170);
          FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x60) = 0;
          FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_2);
          cVar2 = FUN_00a9ba60(*(undefined8 *)(param_1 + 0x68));
          if (cVar2 != '\0') {
            *(undefined4 *)(local_50 + 0x480) = 0xe;
            *(undefined1 *)(local_50 + 0x50a) = 1;
          }
          FUN_00a9ccf0(local_50);
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_50 + 0x28);
          if (*(char *)(param_1 + 0x44) == -0x4c) {
            if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) != 0) {
              *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x310) = 0;
            }
            FUN_00ad4730(param_1);
          }
          if (*(char *)(param_1 + 0x44) != -0x4d) {
            return;
          }
        } while( true );
      }
      if (2 < uVar3 - 0x83) {
        if (uVar3 == 0x86) {
          local_150 = auStack_1b8;
          FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x60) = 0;
          local_170 = *param_3;
          uStack_168 = param_3[1];
          uStack_160 = param_3[2];
          uStack_158 = *(undefined1 *)(param_3 + 3);
          FUN_0040f7c0(&local_170,&DAT_00ad63f0,0x19);
          FUN_00ae25e0(param_1,*(undefined1 *)(param_1 + 0x44),&local_170);
          bVar6 = *(char *)(param_1 + 0x44) + 0x78;
          if (bVar6 < 8) {
            bVar8 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (bVar6 & 0x1f) & 0x10U) !=
                    0;
          }
          else {
            bVar8 = false;
          }
          if (!bVar8) {
            return;
          }
          FUN_00ad4730(param_1);
          return;
        }
        if (uVar3 != 0x87) goto LAB_00ad62ed;
      }
      goto LAB_00ad51e4;
    }
    if (uVar3 == 0xb5) {
      FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
      local_a0 = *(longlong *)(param_1 + 0x48);
      if (local_a0 == 0) {
        local_198 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,0,0);
      }
      else {
        local_38 = 0;
        local_a8 = 0;
        iVar7 = *(int *)(local_a0 + 0x10);
        local_b0 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar4 = FUN_00a72910(local_a0,local_b0);
            if (*(char *)(lVar4 + 8) == 'P') {
              local_a9 = '\x01';
              local_a8 = FUN_00a72910(local_a0,local_b0);
              goto code_r0x00ad5689;
            }
            local_b0 = local_b0 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_a9 = '\0';
code_r0x00ad5689:
        if (local_a9 != '\0') {
          local_38 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
          FUN_00a62c40(*(undefined8 *)(local_a8 + 0x28),local_38);
        }
        local_198 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,local_38,local_a0);
        FUN_00410f20(local_38);
      }
      FUN_00ad4fa0(param_1);
      local_c0 = *(longlong *)(param_1 + 0xe8);
      local_198 = FUN_004aeac0(local_c0,*(int *)(local_c0 + 0x10) + -1);
      local_60 = FUN_00ac0db0(&PTR_FUN_00a8af10,1,*(undefined8 *)(param_1 + 0x68),
                              *(undefined8 *)(param_1 + 0x48));
      FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_60,*(undefined4 *)(param_1 + 0x7c));
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_60 + 0xa8);
      local_c8 = *(longlong *)(param_1 + 0xe8);
      local_198 = FUN_004aeac0(local_c8,*(int *)(local_c8 + 0x10) + -1);
      local_190 = *(undefined8 *)(param_1 + 0x70);
      local_188 = 1;
      uVar5 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      FUN_00ad4730(param_1);
      local_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0x40000000000000;
      uStack_158 = 0;
      FUN_0040f7c0(&local_170,param_3,0x19);
      FUN_00ae4310(param_1,&local_170);
      FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
      FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_2);
      cVar2 = FUN_00a9ba60(*(undefined8 *)(param_1 + 0x68));
      if (cVar2 != '\0') {
        *(undefined4 *)(local_60 + 0x480) = 0xe;
        *(undefined1 *)(local_60 + 0x50a) = 1;
      }
      FUN_00a9ccf0(local_60);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_60 + 0x28);
      local_d0 = *(longlong *)(param_1 + 0xe8);
      local_198 = FUN_004aeac0(local_d0,*(int *)(local_d0 + 0x10) + -1);
      local_190 = *(undefined8 *)(param_1 + 0x70);
      local_188 = 1;
      uVar5 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      if (*(char *)(param_1 + 0x44) != -0x4a) {
        return;
      }
      FUN_00ad4730(param_1);
      return;
    }
    if (uVar3 == 0xb7) {
      local_150 = auStack_1b8;
      FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
      local_d8 = *(longlong *)(param_1 + 0x48);
      if (local_d8 == 0) {
        local_198 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,0,0);
      }
      else {
        local_40 = 0;
        local_e0 = 0;
        iVar7 = *(int *)(local_d8 + 0x10);
        local_e8 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar4 = FUN_00a72910(local_d8,local_e8);
            if (*(char *)(lVar4 + 8) == 'P') {
              local_e1 = '\x01';
              local_e0 = FUN_00a72910(local_d8,local_e8);
              goto code_r0x00ad5a78;
            }
            local_e8 = local_e8 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_e1 = '\0';
code_r0x00ad5a78:
        if (local_e1 != '\0') {
          local_40 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
          FUN_00a62c40(*(undefined8 *)(local_e0 + 0x28),local_40);
        }
        local_198 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,local_40,local_d8);
        FUN_00410f20(local_40);
      }
      FUN_00ad4fa0(param_1);
      local_60 = 0;
      local_61 = FUN_004113d0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x28),
                              &PTR_FUN_00a8af10);
      if (local_61 != '\0') {
        local_60 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x28);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_60 + 0x560);
      }
      local_f8 = *(longlong *)(param_1 + 0xe8);
      local_198 = FUN_004aeac0(local_f8,*(int *)(local_f8 + 0x10) + -1);
      local_190 = *(undefined8 *)(param_1 + 0x70);
      local_188 = 1;
      uVar5 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      FUN_00ad4730(param_1);
      local_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0x100000000000000;
      uStack_158 = 0;
      FUN_0040f7c0(&local_170,param_3,0x19);
      FUN_00ae4310(param_1,&local_170);
      FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
      FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_2);
      if (local_61 != '\0') {
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_60 + 0xa8);
      }
      local_100 = *(longlong *)(param_1 + 0xe8);
      local_198 = FUN_004aeac0(local_100,*(int *)(local_100 + 0x10) + -1);
      local_190 = *(undefined8 *)(param_1 + 0x70);
      local_188 = 1;
      uVar5 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      if (*(char *)(param_1 + 0x44) != -0x48) {
        return;
      }
      FUN_00ad4730(param_1);
      return;
    }
  }
LAB_00ad62ed:
  local_150 = auStack_1b8;
  FUN_00ad4730(param_1);
  return;
}

