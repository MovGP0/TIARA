/* Ghidra address: 00adf790 */
/* Ghidra symbol: FUN_00adf790 */


void FUN_00adf790(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  ulonglong local_270;
  undefined1 local_268;
  undefined1 local_250 [32];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 *local_210;
  int local_200;
  char local_1f9;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e0;
  char local_1d9;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  int local_1b8;
  char local_1b1;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  char local_187;
  short local_186;
  int local_180;
  char local_179;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined1 local_151;
  longlong local_150;
  longlong local_148;
  int local_138;
  char local_131;
  longlong local_130;
  longlong local_128;
  byte local_119;
  longlong local_118;
  longlong local_110;
  undefined1 local_101;
  longlong local_100;
  longlong local_f8;
  int local_e8;
  char local_e1;
  longlong local_e0;
  longlong local_d8;
  byte local_c9;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined2 local_8a;
  undefined8 local_88;
  undefined8 local_80;
  char local_71;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_4c;
  int local_48;
  char local_42;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_210 = auStack_298;
  local_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_41 = *(byte *)(param_1 + 0x44);
  uVar6 = (ulonglong)local_41;
  if (uVar6 < 0x32) {
    if (uVar6 == 0x31) {
LAB_00ae0722:
      local_210 = auStack_298;
      FUN_00adb950(auStack_298,local_41,0);
      if (*(longlong *)(param_1 + 0x60) != 0) {
        local_168 = *(longlong *)(param_1 + 0xe8);
        uVar4 = FUN_004aeac0(local_168,*(int *)(local_168 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(param_1 + 0x60),uVar4);
      }
      FUN_00ad4730(param_1);
      goto code_r0x00ae131b;
    }
    if (uVar6 < 0x22) {
      if (uVar6 == 0x21) {
        local_210 = auStack_298;
        FUN_00adf4f0(auStack_298,local_41);
        local_b8 = *(longlong *)(param_1 + 0xe8);
        local_88 = FUN_004aeac0(local_b8,*(int *)(local_b8 + 0x10) + -1);
        cVar2 = FUN_00a554f0(local_88);
        if (cVar2 != '\0') {
          FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                       *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
        }
        FUN_00adcb80(auStack_298);
        FUN_00adf710(auStack_298,local_41);
        goto code_r0x00ae131b;
      }
      if (uVar6 < 0x1c) {
        if (uVar6 == 0x1b) {
          local_210 = auStack_298;
          FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x7c));
          local_1a8 = *(longlong *)(param_1 + 0x48);
          if (local_1a8 == 0) {
            local_278 = 0;
            FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,0,0);
          }
          else {
            local_38 = 0;
            local_1b0 = 0;
            iVar3 = *(int *)(local_1a8 + 0x10);
            local_1b8 = 0;
            if (-1 < iVar3 + -1) {
              do {
                lVar5 = FUN_00a72910(local_1a8,local_1b8);
                if (*(char *)(lVar5 + 8) == 'P') {
                  local_1b1 = '\x01';
                  local_1b0 = FUN_00a72910(local_1a8,local_1b8);
                  goto code_r0x00ae0de3;
                }
                local_1b8 = local_1b8 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            local_1b1 = '\0';
code_r0x00ae0de3:
            if (local_1b1 != '\0') {
              local_38 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
              FUN_00a62c40(*(undefined8 *)(local_1b0 + 0x28),local_38);
            }
            local_278 = 0;
            FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,local_38,local_1a8);
            FUN_00410f20(local_38);
          }
          local_1c8 = *(longlong *)(param_1 + 0xe8);
          local_278 = FUN_004aeac0(local_1c8,*(int *)(local_1c8 + 0x10) + -1);
          local_70 = FUN_00abfd20(&PTR_FUN_00a924a0,1,*(undefined8 *)(param_1 + 0x68),
                                  *(undefined8 *)(param_1 + 0x48));
          local_1d0 = *(longlong *)(param_1 + 0xe8);
          local_278 = FUN_004aeac0(local_1d0,*(int *)(local_1d0 + 0x10) + -1);
          local_68 = FUN_00a9c430(&PTR_FUN_00a8a2f0,1,*(undefined8 *)(param_1 + 0x68),
                                  *(undefined8 *)(param_1 + 0x48));
          *(longlong *)(local_68 + 0x568) = local_70;
          *(undefined1 *)(local_68 + 0x560) = *(undefined1 *)(local_70 + 0xb0);
          FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_68,*(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_68 + 0xa8);
          FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_70,*(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_68 + 0x28);
          FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_41);
          *(undefined8 *)(param_1 + 0x60) = 0;
          FUN_00ad4730(param_1);
          goto code_r0x00ae131b;
        }
        if (uVar6 < 0x17) {
          if (uVar6 == 0x16) {
            local_210 = auStack_298;
            FUN_00ad4730(param_1);
            goto code_r0x00ae131b;
          }
          if (uVar6 == 2) {
            if (*(longlong *)(param_1 + 0x60) == 0) {
              local_210 = auStack_298;
              if (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x14)) {
                local_210 = auStack_298;
                FUN_00a74e40(*(undefined8 *)(param_1 + 0x28),&local_218);
                iVar3 = FUN_00416db0(local_218,&DAT_00ae1414);
                if (iVar3 != 0) {
                  local_98 = *(longlong *)(param_1 + 0xe8);
                  local_278 = FUN_004aeac0(local_98,*(int *)(local_98 + 0x10) + -1);
                  local_270 = *(ulonglong *)(param_1 + 0x70);
                  local_268 = 1;
                  uVar4 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),
                                       *(undefined8 *)(param_1 + 0x48));
                  *(undefined8 *)(param_1 + 0x60) = uVar4;
                  (**(code **)(**(longlong **)(param_1 + 0x60) + 200))
                            (*(longlong **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28));
                }
              }
            }
            else {
              local_210 = auStack_298;
              (**(code **)(**(longlong **)(param_1 + 0x60) + 200))
                        (*(longlong **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28));
            }
            FUN_00ad4730(param_1);
            goto code_r0x00ae131b;
          }
          if (uVar6 == 0x15) {
            local_278 = 0;
            local_270 = local_270 & 0xffffffffffffff00;
            local_210 = auStack_298;
            FUN_00ae3970(param_1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x30),0);
            FUN_00ad4730(param_1);
            goto code_r0x00ae131b;
          }
        }
        else {
          if (uVar6 == 0x17) {
            local_210 = auStack_298;
            FUN_00ada730(param_1,*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x1d8);
            FUN_00ad4730(param_1);
            goto code_r0x00ae131b;
          }
          if (uVar6 == 0x19) goto LAB_00ae0722;
        }
      }
      else {
        if (uVar6 == 0x1c) {
          local_210 = auStack_298;
          FUN_00ae18d0(param_1,&DAT_00ae1418);
          goto code_r0x00ae131b;
        }
        if (uVar6 == 0x1d) {
          local_210 = auStack_298;
          FUN_00adf4f0(auStack_298,local_41);
          local_a0 = *(longlong *)(param_1 + 0xe8);
          local_88 = FUN_004aeac0(local_a0,*(int *)(local_a0 + 0x10) + -1);
          cVar2 = FUN_00a554f0(local_88);
          if (cVar2 != '\0') {
            FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                         *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
          }
          FUN_00adc9a0(auStack_298);
          FUN_00adf710(auStack_298,local_41);
          goto code_r0x00ae131b;
        }
        if (uVar6 == 0x1e) {
          local_210 = auStack_298;
          FUN_00adf4f0(auStack_298,local_41);
          local_a8 = *(longlong *)(param_1 + 0xe8);
          local_88 = FUN_004aeac0(local_a8,*(int *)(local_a8 + 0x10) + -1);
          cVar2 = FUN_00a554f0(local_88);
          if (cVar2 != '\0') {
            FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                         *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
          }
          FUN_00adca40(auStack_298);
          FUN_00adf710(auStack_298,local_41);
          goto code_r0x00ae131b;
        }
        if (uVar6 == 0x1f) {
          local_210 = auStack_298;
          FUN_00adf4f0(auStack_298,local_41);
          local_b0 = *(longlong *)(param_1 + 0xe8);
          local_88 = FUN_004aeac0(local_b0,*(int *)(local_b0 + 0x10) + -1);
          cVar2 = FUN_00a554f0(local_88);
          if (cVar2 != '\0') {
            FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                         *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
          }
          FUN_00adcae0(auStack_298);
          FUN_00adf710(auStack_298,local_41);
          goto code_r0x00ae131b;
        }
      }
    }
    else {
      if (0x2c < uVar6) {
        if (uVar6 != 0x2d) {
          if (uVar6 == 0x2e) goto LAB_00ae069a;
          if (uVar6 != 0x2f) {
            if (uVar6 == 0x30) {
              local_210 = auStack_298;
              if (*(longlong *)(param_1 + 0x60) != 0) {
                local_210 = auStack_298;
                (**(code **)(**(longlong **)(param_1 + 0x60) + 200))
                          (*(longlong **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28));
              }
              FUN_00ab4050(*(undefined8 *)(param_1 + 0x60));
              FUN_00ad4730(param_1);
              goto code_r0x00ae131b;
            }
            goto LAB_00ae130e;
          }
        }
        local_210 = auStack_298;
        if (*(longlong *)(param_1 + 0x60) != 0) {
          local_210 = auStack_298;
          (**(code **)(**(longlong **)(param_1 + 0x60) + 200))
                    (*(longlong **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28));
        }
        FUN_00ad47e0(param_1,*(char *)(param_1 + 0x44) == '-');
        FUN_00ad4730(param_1);
        goto code_r0x00ae131b;
      }
      if (uVar6 == 0x2c) goto LAB_00ae0467;
      if (uVar6 < 0x29) {
        if (uVar6 == 0x28) {
          local_210 = auStack_298;
          FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x7c));
          *(undefined8 *)(param_1 + 0x60) = 0;
          local_118 = *(longlong *)(param_1 + 0xe8);
          local_278 = FUN_004aeac0(local_118,*(int *)(local_118 + 0x10) + -1);
          local_80 = FUN_00abfbc0(&PTR_FUN_00a921a8,1,*(undefined8 *)(param_1 + 0x68),0);
          FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_80,*(undefined4 *)(param_1 + 0x7c));
          FUN_00ad4730(param_1);
          goto code_r0x00ae131b;
        }
        if (uVar6 == 0x23) {
          local_210 = auStack_298;
          FUN_00adf4f0(auStack_298,local_41);
          local_c0 = *(longlong *)(param_1 + 0xe8);
          local_88 = FUN_004aeac0(local_c0,*(int *)(local_c0 + 0x10) + -1);
          cVar2 = FUN_00a554f0(local_88);
          if (cVar2 != '\0') {
            FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                         *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
          }
          FUN_00adcc20(auStack_298);
          FUN_00adf710(auStack_298,local_41);
          goto code_r0x00ae131b;
        }
        if (uVar6 == 0x25) {
          local_210 = auStack_298;
          FUN_00ada0a0(param_1);
          goto code_r0x00ae131b;
        }
      }
      else {
        if (uVar6 == 0x29) {
          local_8a = *(undefined2 *)(param_1 + 0x20);
          local_c8 = *(longlong *)(param_1 + 0x30);
          local_48 = *(int *)(*(longlong *)(local_c8 + 0x28) + 8) - *(int *)(local_c8 + 8);
          local_4c = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28);
          local_210 = auStack_298;
          FUN_00adae00(param_1,&local_8a,&local_48,&local_4c);
          goto code_r0x00ae131b;
        }
        if (uVar6 == 0x2a) {
          local_210 = auStack_298;
          FUN_00ad4730(param_1);
          goto code_r0x00ae131b;
        }
      }
    }
  }
  else if (uVar6 < 0x89) {
    if (uVar6 == 0x88) {
      local_58 = 0;
      local_1d8 = *(longlong *)(param_1 + 0x48);
      iVar3 = *(int *)(local_1d8 + 0x10);
      local_1e0 = 0;
      local_210 = auStack_298;
      puVar1 = auStack_298;
      if (-1 < iVar3 + -1) {
        do {
          local_210 = puVar1;
          lVar5 = FUN_00a72910(local_1d8,local_1e0);
          if (*(char *)(lVar5 + 8) == '_') {
            local_1d9 = '\x01';
            local_58 = FUN_00a72910(local_1d8,local_1e0);
            goto code_r0x00ae10af;
          }
          local_1e0 = local_1e0 + 1;
          iVar3 = iVar3 + -1;
          puVar1 = local_210;
        } while (iVar3 != 0);
      }
      local_1d9 = '\0';
code_r0x00ae10af:
      if (local_1d9 == '\0') {
        FUN_00add480(auStack_298);
      }
      else {
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_1f0 = *(longlong *)(param_1 + 0x48);
        if (local_1f0 == 0) {
          local_278 = 0;
          FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,0,0);
        }
        else {
          local_40 = 0;
          local_1f8 = 0;
          iVar3 = *(int *)(local_1f0 + 0x10);
          local_200 = 0;
          if (-1 < iVar3 + -1) {
            do {
              lVar5 = FUN_00a72910(local_1f0,local_200);
              if (*(char *)(lVar5 + 8) == 'P') {
                local_1f9 = '\x01';
                local_1f8 = FUN_00a72910(local_1f0,local_200);
                goto code_r0x00ae11a3;
              }
              local_200 = local_200 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_1f9 = '\0';
code_r0x00ae11a3:
          if (local_1f9 != '\0') {
            local_40 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
            FUN_00a62c40(*(undefined8 *)(local_1f8 + 0x28),local_40);
          }
          local_278 = 0;
          FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,local_40,local_1f0);
          FUN_00410f20(local_40);
        }
        FUN_00ad4730(param_1);
      }
      goto code_r0x00ae131b;
    }
    if (uVar6 < 0x5f) {
      if (uVar6 < 0x47) {
        if (9 < uVar6 - 0x32) {
          if (uVar6 - 0x3c < 0xb) {
LAB_00ae069a:
            local_210 = auStack_298;
            local_151 = FUN_00a4a4f0(local_41);
            FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_151);
            if (*(longlong *)(param_1 + 0x60) != 0) {
              local_160 = *(longlong *)(param_1 + 0xe8);
              uVar4 = FUN_004aeac0(local_160,*(int *)(local_160 + 0x10) + -1);
              FUN_00ab50e0(*(undefined8 *)(param_1 + 0x60),uVar4);
            }
            FUN_00ad4730(param_1);
            goto code_r0x00ae131b;
          }
          goto LAB_00ae130e;
        }
      }
      else if (9 < uVar6 - 0x47) {
        if (uVar6 - 0x51 < 10) goto LAB_00ae069a;
        if (3 < uVar6 - 0x5b) goto LAB_00ae130e;
      }
LAB_00ae0467:
      local_128 = *(longlong *)(param_1 + 0x48);
      local_119 = local_41;
      if (local_128 == 0) {
        local_278 = 0;
        local_210 = auStack_298;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,0,0);
      }
      else {
        local_28 = 0;
        local_130 = 0;
        iVar3 = *(int *)(local_128 + 0x10);
        local_138 = 0;
        local_210 = auStack_298;
        puVar1 = auStack_298;
        if (-1 < iVar3 + -1) {
          do {
            local_210 = puVar1;
            lVar5 = FUN_00a72910(local_128,local_138);
            if (*(char *)(lVar5 + 8) == 'P') {
              local_131 = '\x01';
              local_130 = FUN_00a72910(local_128,local_138);
              goto code_r0x00ae0516;
            }
            local_138 = local_138 + 1;
            iVar3 = iVar3 + -1;
            puVar1 = local_210;
          } while (iVar3 != 0);
        }
        local_131 = '\0';
code_r0x00ae0516:
        if (local_131 != '\0') {
          local_28 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
          FUN_00a62c40(*(undefined8 *)(local_130 + 0x28),local_28);
        }
        local_278 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_119,local_28,local_128);
        FUN_00410f20(local_28);
      }
      local_148 = *(longlong *)(param_1 + 0xe8);
      local_88 = FUN_004aeac0(local_148,*(int *)(local_148 + 0x10) + -1);
      FUN_00a557b0(local_88);
      cVar2 = FUN_00a554f0(local_88);
      if (cVar2 != '\0') {
        FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
      }
      if (*(longlong *)(param_1 + 0x60) != 0) {
        local_150 = *(longlong *)(param_1 + 0xe8);
        uVar4 = FUN_004aeac0(local_150,*(int *)(local_150 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(param_1 + 0x60),uVar4);
      }
      FUN_00ad4730(param_1);
      goto code_r0x00ae131b;
    }
    if (uVar6 < 0x65) {
      if (uVar6 == 100) {
        local_210 = auStack_298;
        FUN_00ad5060(param_1);
        FUN_00ad4730(param_1);
        goto code_r0x00ae131b;
      }
      if (uVar6 - 0x5f < 4) goto LAB_00ae069a;
      if (uVar6 - 0x5f == 4) {
        local_210 = auStack_298;
        FUN_00adc130(auStack_298);
        FUN_00ad4730(param_1);
        goto code_r0x00ae131b;
      }
    }
    else {
      if (uVar6 - 0x77 < 6) {
        local_210 = auStack_298;
        local_42 = FUN_00a4a530(local_41);
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        local_170 = *(longlong *)(param_1 + 0x48);
        if (local_170 == 0) {
          local_278 = 0;
          FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,0,0);
        }
        else {
          local_30 = 0;
          local_178 = 0;
          iVar3 = *(int *)(local_170 + 0x10);
          local_180 = 0;
          if (-1 < iVar3 + -1) {
            do {
              lVar5 = FUN_00a72910(local_170,local_180);
              if (*(char *)(lVar5 + 8) == 'P') {
                local_179 = '\x01';
                local_178 = FUN_00a72910(local_170,local_180);
                goto code_r0x00ae08a7;
              }
              local_180 = local_180 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_179 = '\0';
code_r0x00ae08a7:
          if (local_179 != '\0') {
            local_30 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
            FUN_00a62c40(*(undefined8 *)(local_178 + 0x28),local_30);
          }
          local_278 = 0;
          FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,local_30,local_170);
          FUN_00410f20(local_30);
        }
        FUN_00ad4fa0(param_1);
        while( true ) {
          local_186 = *(short *)(param_1 + 0x20);
          if ((((ushort)(local_186 - 9U) < 2) || ((ushort)(local_186 - 0xcU) < 2)) ||
             (local_186 == 0x20)) {
            local_187 = '\x01';
          }
          else {
            local_187 = '\0';
          }
          if (local_187 == '\0') break;
          FUN_00ad1170(param_1);
        }
        FUN_00ad4730(param_1);
        if (*(char *)(param_1 + 0x44) == 'h') {
          local_190 = *(longlong *)(param_1 + 0xe8);
          uVar4 = FUN_004aeac0(local_190,*(int *)(local_190 + 0x10) + -1);
          FUN_00468a10(&local_230,L"center");
          FUN_00a52f40(uVar4,&local_230,4);
          FUN_00ad4730(param_1);
        }
        local_198 = *(longlong *)(param_1 + 0xe8);
        local_278 = FUN_004aeac0(local_198,*(int *)(local_198 + 0x10) + -1);
        local_60 = FUN_00a9c430(&PTR_FUN_00a865e0,1,*(undefined8 *)(param_1 + 0x68),
                                *(undefined8 *)(param_1 + 0x48));
        FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_60,*(undefined4 *)(param_1 + 0x7c));
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_60 + 0xa8);
        local_1a0 = *(longlong *)(param_1 + 0xe8);
        local_278 = FUN_004aeac0(local_1a0,*(int *)(local_1a0 + 0x10) + -1);
        local_270 = *(ulonglong *)(param_1 + 0x70);
        local_268 = 1;
        uVar4 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),
                             *(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x60) = uVar4;
        local_71 = '\0';
LAB_00ae0c67:
        if (local_71 == '\0') {
          uVar6 = (ulonglong)*(byte *)(param_1 + 0x44);
          if (uVar6 < 0x2c) {
            if (uVar6 < 0x1b) {
              if (uVar6 != 1) {
                if ((uVar6 == 2) || (uVar6 - 0x15 < 5)) goto LAB_00ae0bfa;
                goto LAB_00ae0c60;
              }
              FUN_00ad4730(param_1);
            }
            else {
              if (((uVar6 - 0x1b < 4) || (uVar6 - 0x21 < 4)) || (uVar6 - 0x29 < 2))
              goto LAB_00ae0bfa;
LAB_00ae0c60:
              local_71 = '\x01';
            }
            goto LAB_00ae0c67;
          }
          if (uVar6 < 0x6d) {
            if (uVar6 - 0x2c < 0x39) {
LAB_00ae0bfa:
              FUN_00adf790(param_1);
              goto LAB_00ae0c67;
            }
            if (uVar6 == 0x66) {
              FUN_00ae1450(param_1,&DAT_00ae1418);
              goto LAB_00ae0c67;
            }
            if (uVar6 != 0x67) goto LAB_00ae0c60;
          }
          else if ((4 < uVar6 - 0x6d) && (2 < uVar6 - 0x83)) {
            if ((3 < uVar6 - 0xb9) && (3 < uVar6 - 0xbe)) goto LAB_00ae0c60;
            goto LAB_00ae0bfa;
          }
          FUN_0040f630(local_250,local_42,0x19);
          FUN_00ad5100(param_1,*(undefined1 *)(param_1 + 0x44),local_250);
          goto LAB_00ae0c67;
        }
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        *(undefined8 *)(param_1 + 0x60) = 0;
        FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_41);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_60 + 0x28);
        if (*(char *)(param_1 + 0x44) == local_42) {
          FUN_00ad4730(param_1);
        }
        goto code_r0x00ae131b;
      }
      if (uVar6 - 0x7d < 6) {
        local_210 = auStack_298;
        FUN_00ad4730(param_1);
        goto code_r0x00ae131b;
      }
    }
  }
  else if (uVar6 < 0xbd) {
    if (uVar6 == 0xbc) {
      local_210 = auStack_298;
      FUN_00adf4f0(auStack_298,local_41);
      FUN_00adce40(auStack_298);
      FUN_00adf710(auStack_298,local_41);
      goto code_r0x00ae131b;
    }
    if (uVar6 < 0xba) {
      if (uVar6 == 0xb9) goto LAB_00ae0467;
      if (uVar6 == 0x8e) {
        local_210 = auStack_298;
        FUN_00adf750(auStack_298,local_41);
        goto code_r0x00ae131b;
      }
      if (uVar6 == 0xa0) {
        local_210 = auStack_298;
        FUN_00ad77c0(param_1);
        goto code_r0x00ae131b;
      }
    }
    else {
      if (uVar6 == 0xba) goto LAB_00ae069a;
      if (uVar6 == 0xbb) {
        local_210 = auStack_298;
        FUN_00adf4f0(auStack_298,local_41);
        FUN_00adccc0(auStack_298);
        FUN_00adf710(auStack_298,local_41);
        goto code_r0x00ae131b;
      }
    }
  }
  else {
    if (uVar6 == 0xbe) {
      local_d8 = *(longlong *)(param_1 + 0x48);
      local_c9 = local_41;
      if (local_d8 == 0) {
        local_278 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_41,0,0);
      }
      else {
        local_20 = 0;
        local_e0 = 0;
        iVar3 = *(int *)(local_d8 + 0x10);
        local_e8 = 0;
        local_210 = auStack_298;
        puVar1 = auStack_298;
        if (-1 < iVar3 + -1) {
          do {
            local_210 = puVar1;
            lVar5 = FUN_00a72910(local_d8,local_e8);
            if (*(char *)(lVar5 + 8) == 'P') {
              local_e1 = '\x01';
              local_e0 = FUN_00a72910(local_d8,local_e8);
              goto code_r0x00ae009b;
            }
            local_e8 = local_e8 + 1;
            iVar3 = iVar3 + -1;
            puVar1 = local_210;
          } while (iVar3 != 0);
        }
        local_e1 = '\0';
code_r0x00ae009b:
        if (local_e1 != '\0') {
          local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
          FUN_00a62c40(*(undefined8 *)(local_e0 + 0x28),local_20);
        }
        local_278 = 0;
        FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_c9,local_20,local_d8);
        FUN_00410f20(local_20);
      }
      local_f8 = *(longlong *)(param_1 + 0xe8);
      local_88 = FUN_004aeac0(local_f8,*(int *)(local_f8 + 0x10) + -1);
      FUN_00a557b0(local_88);
      cVar2 = FUN_00a554f0(local_88);
      if (cVar2 != '\0') {
        FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_88,1);
      }
      if (*(longlong *)(param_1 + 0x60) != 0) {
        local_100 = *(longlong *)(param_1 + 0xe8);
        uVar4 = FUN_004aeac0(local_100,*(int *)(local_100 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(param_1 + 0x60),uVar4);
      }
      FUN_00ad4730(param_1);
      goto code_r0x00ae131b;
    }
    if (uVar6 == 0xbf) {
      local_210 = auStack_298;
      local_101 = FUN_00a4a4f0(local_41);
      FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_101);
      if (*(longlong *)(param_1 + 0x60) != 0) {
        local_110 = *(longlong *)(param_1 + 0xe8);
        uVar4 = FUN_004aeac0(local_110,*(int *)(local_110 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(param_1 + 0x60),uVar4);
      }
      FUN_00ad4730(param_1);
      goto code_r0x00ae131b;
    }
    if (uVar6 == 0xc0) {
      local_210 = auStack_298;
      FUN_00adf4f0(auStack_298,local_41);
      FUN_00adcd90(auStack_298);
      FUN_00adf710(auStack_298,local_41);
      goto code_r0x00ae131b;
    }
    if (uVar6 == 0xc1) {
      local_210 = auStack_298;
      FUN_00ad4730(param_1);
      goto code_r0x00ae131b;
    }
  }
LAB_00ae130e:
  local_210 = auStack_298;
  FUN_00ad4730(param_1);
code_r0x00ae131b:
  FUN_00460ba0(&local_230);
  FUN_00414480(&local_218);
  return;
}

