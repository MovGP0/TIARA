/* Ghidra address: 00add480 */
/* Ghidra symbol: FUN_00add480 */


void FUN_00add480(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  ulonglong local_230;
  undefined1 local_228;
  undefined8 local_218;
  undefined1 *local_210;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e0;
  char local_1d9;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  int local_138;
  char local_131;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  int local_f0;
  char local_e9;
  longlong local_e8;
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
  undefined1 local_90 [2];
  char local_8e;
  char local_8d;
  undefined4 local_8c;
  int local_88;
  undefined2 local_82;
  undefined8 local_80;
  byte local_75;
  int local_74;
  char local_6d;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_39;
  longlong local_38;
  char local_29;
  longlong local_28;
  longlong local_20;
  
  local_210 = auStack_258;
  local_218 = 0;
  local_29 = '\0';
  local_39 = '\0';
  local_20 = FUN_00a74ba0(&DAT_00a6bb20,1);
  local_28 = 0;
  FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
               *(longlong *)(param_1 + 0x2a0) + 0x60,
               *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
  local_98 = *(longlong *)(param_1 + 0x2a0);
  local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  if (local_a0 == 0) {
    local_238 = 0;
    FUN_00ac0980(*(undefined8 *)(local_98 + 0xe8),0x88,0,0);
  }
  else {
    local_48 = 0;
    local_a8 = 0;
    iVar4 = *(int *)(local_a0 + 0x10);
    local_b0 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar5 = FUN_00a72910(local_a0,local_b0);
        if (*(char *)(lVar5 + 8) == 'P') {
          local_a9 = '\x01';
          local_a8 = FUN_00a72910(local_a0,local_b0);
          goto code_r0x00add5cf;
        }
        local_b0 = local_b0 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_a9 = '\0';
code_r0x00add5cf:
    if (local_a9 != '\0') {
      local_48 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_a8 + 0x28),local_48);
    }
    local_238 = 0;
    FUN_00ac0980(*(undefined8 *)(local_98 + 0xe8),0x88,local_48,local_a0);
    FUN_00410f20(local_48);
  }
  local_74 = FUN_00ad04e0(*(undefined8 *)(param_1 + 0x2a0));
  local_c0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  local_238 = FUN_004aeac0(local_c0,*(int *)(local_c0 + 0x10) + -1);
  local_68 = FUN_00a9c430(&PTR_FUN_00a865e0,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68)
                          ,*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48));
  local_c8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  lVar5 = FUN_004aeac0(local_c8,*(int *)(local_c8 + 0x10) + -1);
  FUN_00467e90(&local_218,lVar5 + 0x6a8);
  cVar3 = FUN_00a2bdd0(local_218,local_90);
  if (cVar3 == '\0') {
    local_90[0] = 0;
  }
  FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),local_68,
               *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
  uVar6 = *(undefined8 *)(local_68 + 0xa8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68) = uVar6;
  local_d0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  local_238 = FUN_004aeac0(local_d0,*(int *)(local_d0 + 0x10) + -1);
  local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
  local_228 = 1;
  uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1,uVar6,0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
  local_6d = '\0';
LAB_00adf24d:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (local_6d != '\0') {
            if (local_29 == '\0') {
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
              (**(code **)(*plVar2 + 200))(plVar2,local_20);
              FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                           *(longlong *)(param_1 + 0x2a0) + 0x60,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
            }
            else {
              FUN_00adcf10(auStack_258);
            }
            lVar5 = FUN_00ac3910(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),0);
            if (*(int *)(lVar5 + 0x6c) == 0) {
              FUN_004ae870(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),0);
            }
            local_6c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x68) + 0x10) + -1;
            if ((-1 < local_6c) &&
               (lVar5 = FUN_00ac3910(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),local_6c
                                    ), *(int *)(lVar5 + 0x6c) == 0)) {
              FUN_004ae870(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),local_6c);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = 0;
            while (iVar4 = FUN_00ad04e0(*(undefined8 *)(param_1 + 0x2a0)), local_74 <= iVar4) {
              FUN_00ad47c0(*(undefined8 *)(param_1 + 0x2a0));
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68) =
                 *(undefined8 *)(local_68 + 0x28);
            if ((*(char *)(*(longlong *)(param_1 + 0x2a0) + 0x44) == -0x72) ||
               (*(short *)(*(longlong *)(param_1 + 0x2a0) + 0x20) == 0)) {
              FUN_00ad4730(*(undefined8 *)(param_1 + 0x2a0));
            }
            FUN_00410f20(local_20);
            FUN_00414480(&local_218);
            return;
          }
          sVar1 = *(short *)(*(longlong *)(param_1 + 0x2a0) + 0x20);
          if ((ushort)(sVar1 - 1U) != 0xffff) break;
          local_6d = '\x01';
        }
        if (7 < (ushort)(sVar1 - 1U)) break;
        FUN_00ad1170(*(undefined8 *)(param_1 + 0x2a0));
      }
      if (sVar1 != 0xd) break;
      FUN_00add120(auStack_258);
      FUN_00ad1170(*(undefined8 *)(param_1 + 0x2a0));
    }
    if (sVar1 == 0x3c) break;
    FUN_00adb8f0(*(undefined8 *)(param_1 + 0x2a0),local_20,local_90[0]);
  }
  FUN_00ad4730(*(undefined8 *)(param_1 + 0x2a0));
  local_75 = *(byte *)(*(longlong *)(param_1 + 0x2a0) + 0x44);
  uVar7 = (ulonglong)local_75;
  if (uVar7 < 0x47) {
    if (uVar7 < 0x24) {
      if (uVar7 == 0x23) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adcc20(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      else if (uVar7 < 0x1d) {
        if (uVar7 == 0x1c) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
          (**(code **)(*plVar2 + 200))(plVar2,local_20);
          FUN_00a74cd0(local_20);
          FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                       *(longlong *)(param_1 + 0x2a0) + 0x60,
                       *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
          local_d8 = *(longlong *)(param_1 + 0x2a0);
          local_e0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
          if (local_e0 == 0) {
            local_238 = 0;
            FUN_00ac0980(*(undefined8 *)(local_d8 + 0xe8),local_75,0,0);
          }
          else {
            local_50 = 0;
            local_e8 = 0;
            iVar4 = *(int *)(local_e0 + 0x10);
            local_f0 = 0;
            if (-1 < iVar4 + -1) {
              do {
                lVar5 = FUN_00a72910(local_e0,local_f0);
                if (*(char *)(lVar5 + 8) == 'P') {
                  local_e9 = '\x01';
                  local_e8 = FUN_00a72910(local_e0,local_f0);
                  goto code_r0x00addc91;
                }
                local_f0 = local_f0 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_e9 = '\0';
code_r0x00addc91:
            if (local_e9 != '\0') {
              local_50 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
              FUN_00a62c40(*(undefined8 *)(local_e8 + 0x28),local_50);
            }
            local_238 = 0;
            FUN_00ac0980(*(undefined8 *)(local_d8 + 0xe8),local_75,local_50,local_e0);
            FUN_00410f20(local_50);
          }
          local_100 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
          uVar6 = FUN_004aeac0(local_100,*(int *)(local_100 + 0x10) + -1);
          FUN_00a54fc0(uVar6,&local_8d,&local_8e);
          if (local_8d != '\0' || local_8e != '\0') {
            local_108 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
            local_238 = FUN_004aeac0(local_108,*(int *)(local_108 + 0x10) + -1);
            uVar6 = FUN_00abfbc0(&PTR_FUN_00a921a8,1,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68));
            FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),uVar6,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
          }
          local_110 = *(longlong *)(param_1 + 0x2a0);
          FUN_00ac0ab0(*(undefined8 *)(local_110 + 0xe8),local_75);
          local_118 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
          local_238 = FUN_004aeac0(local_118,*(int *)(local_118 + 0x10) + -1);
          local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
          local_228 = 0;
          uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
          if (*(short *)(*(longlong *)(param_1 + 0x2a0) + 0x20) == 0xd) {
            FUN_00ad1170(*(undefined8 *)(param_1 + 0x2a0));
          }
        }
        else if (uVar7 < 0x17) {
          if (uVar7 == 0x16) {
            FUN_00ad4730(*(undefined8 *)(param_1 + 0x2a0));
          }
          else if (uVar7 == 2) {
            FUN_00a74c70(local_20,0x3c);
          }
          else if (uVar7 == 0x15) {
            local_238 = 0;
            local_230 = local_230 & 0xffffffffffffff00;
            FUN_00ae3970(*(undefined8 *)(param_1 + 0x2a0),*(longlong *)(param_1 + 0x2a0) + 0x20);
            FUN_00ad4730(*(undefined8 *)(param_1 + 0x2a0));
          }
        }
        else if (uVar7 == 0x17) {
          FUN_00ada730(*(undefined8 *)(param_1 + 0x2a0),
                       *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20) +
                       0x1d8);
        }
        else if (uVar7 == 0x19) {
LAB_00ade4d2:
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
          (**(code **)(*plVar2 + 200))(plVar2,local_20);
          FUN_00a74cd0(local_20);
          FUN_00adb950(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x2a0) + 0x44));
          local_178 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
          uVar6 = FUN_004aeac0(local_178,*(int *)(local_178 + 0x10) + -1);
          FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar6);
        }
      }
      else if (uVar7 == 0x1d) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adc9a0(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      else if (uVar7 == 0x1e) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adca40(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      else if (uVar7 == 0x1f) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adcae0(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      else if (uVar7 == 0x21) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adcb80(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      goto LAB_00adf24d;
    }
    if (uVar7 < 0x2f) {
      if (uVar7 == 0x2e) {
LAB_00ade463:
        FUN_00add410(auStack_258,*(undefined1 *)(*(longlong *)(param_1 + 0x2a0) + 0x44));
        local_170 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        uVar6 = FUN_004aeac0(local_170,*(int *)(local_170 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar6);
        goto LAB_00adf24d;
      }
      if (uVar7 == 0x25) {
        FUN_00ada0a0(*(undefined8 *)(param_1 + 0x2a0));
        goto LAB_00adf24d;
      }
      if (uVar7 == 0x28) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
        (**(code **)(*plVar2 + 200))(plVar2,local_20);
        FUN_00a74cd0(local_20);
        FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                     *(longlong *)(param_1 + 0x2a0) + 0x60,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
        local_1a0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        local_238 = FUN_004aeac0(local_1a0,*(int *)(local_1a0 + 0x10) + -1);
        uVar6 = FUN_00abfbc0(&PTR_FUN_00a921a8,1,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68));
        FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),uVar6,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
        local_1a8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        local_238 = FUN_004aeac0(local_1a8,*(int *)(local_1a8 + 0x10) + -1);
        local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
        local_228 = 0;
        uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
        goto LAB_00adf24d;
      }
      if (uVar7 == 0x29) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
        (**(code **)(*plVar2 + 200))(plVar2,local_20);
        FUN_00a74cd0(local_20);
        local_82 = *(undefined2 *)(*(longlong *)(param_1 + 0x2a0) + 0x20);
        local_190 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x30);
        local_88 = *(int *)(*(longlong *)(local_190 + 0x28) + 8) - *(int *)(local_190 + 8);
        local_8c = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28);
        FUN_00adae00(*(undefined8 *)(param_1 + 0x2a0),&local_82);
        *(undefined2 *)(*(longlong *)(param_1 + 0x2a0) + 0x20) = local_82;
        local_198 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x30);
        *(longlong *)(*(longlong *)(local_198 + 0x28) + 8) =
             *(longlong *)(local_198 + 8) + (longlong)local_88;
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28) = local_8c;
        if (*(short *)(*(longlong *)(param_1 + 0x2a0) + 0x20) == 0xd) {
          FUN_00ad1170(*(undefined8 *)(param_1 + 0x2a0));
        }
        goto LAB_00adf24d;
      }
      if (uVar7 != 0x2c) goto LAB_00adf24d;
    }
    else {
      if (uVar7 == 0x31) goto LAB_00ade4d2;
      if (9 < uVar7 - 0x32) {
        if (uVar7 == 0x3c) {
          iVar4 = FUN_00ad04e0(*(undefined8 *)(param_1 + 0x2a0));
          if (local_74 < iVar4) {
            local_180 = *(longlong *)(param_1 + 0x2a0);
            FUN_00ac0ab0(*(undefined8 *)(local_180 + 0xe8),0x31);
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
            (**(code **)(*plVar2 + 200))(plVar2,local_20);
            FUN_00a74cd0(local_20);
            local_188 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
            uVar6 = FUN_004aeac0(local_188,*(int *)(local_188 + 0x10) + -1);
            FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar6);
          }
        }
        else {
          uVar7 = uVar7 - 0x3d;
joined_r0x00adda13:
          if (uVar7 < 10) goto LAB_00ade463;
        }
        goto LAB_00adf24d;
      }
    }
  }
  else {
    if (0xb0 < uVar7) {
      if (uVar7 < 0xbc) {
        if (uVar7 == 0xbb) {
          FUN_00add220(auStack_258,local_75);
          FUN_00adccc0(param_1);
          FUN_00add3d0(auStack_258,local_75);
        }
        else if (uVar7 < 0xb5) {
          if (uVar7 == 0xb4) {
            if (local_39 != '\0') {
              FUN_00add010(auStack_258);
            }
            if (local_29 != '\0') {
              FUN_00adcf10(auStack_258);
            }
            if (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x60) == 0) {
              local_200 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
              local_238 = FUN_004aeac0(local_200,*(int *)(local_200 + 0x10) + -1);
              local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
              local_228 = 1;
              uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1,
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),0);
              *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
            }
          }
          else {
            if (uVar7 - 0xb1 < 2) goto LAB_00ade35b;
            if (uVar7 - 0xb1 == 2) {
              if (local_39 != '\0') {
                FUN_00add010(auStack_258);
              }
              if (local_29 == '\0') {
                if (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x60) != 0) {
                  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
                  (**(code **)(*plVar2 + 200))(plVar2,local_20);
                  FUN_00a74cd0(local_20);
                  FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                               *(longlong *)(param_1 + 0x2a0) + 0x60,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
                }
              }
              else {
                FUN_00adcf10(auStack_258);
              }
              local_1c8 = *(longlong *)(param_1 + 0x2a0);
              local_1d0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
              if (local_1d0 == 0) {
                local_238 = 0;
                FUN_00ac0980(*(undefined8 *)(local_1c8 + 0xe8),local_75,0,0);
              }
              else {
                local_60 = 0;
                local_1d8 = 0;
                iVar4 = *(int *)(local_1d0 + 0x10);
                local_1e0 = 0;
                if (-1 < iVar4 + -1) {
                  do {
                    lVar5 = FUN_00a72910(local_1d0,local_1e0);
                    if (*(char *)(lVar5 + 8) == 'P') {
                      local_1d9 = '\x01';
                      local_1d8 = FUN_00a72910(local_1d0,local_1e0);
                      goto code_r0x00adee11;
                    }
                    local_1e0 = local_1e0 + 1;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
                local_1d9 = '\0';
code_r0x00adee11:
                if (local_1d9 != '\0') {
                  local_60 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
                  FUN_00a62c40(*(undefined8 *)(local_1d8 + 0x28),local_60);
                }
                local_238 = 0;
                FUN_00ac0980(*(undefined8 *)(local_1c8 + 0xe8),local_75,local_60,local_1d0);
                FUN_00410f20(local_60);
              }
              local_1f0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
              local_238 = FUN_004aeac0(local_1f0,*(int *)(local_1f0 + 0x10) + -1);
              local_28 = FUN_00a9c430(&PTR_FUN_00a865e0,1,
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68));
              FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),local_28,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
              *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68) =
                   *(undefined8 *)(local_28 + 0xa8);
              if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20) != 0) {
                uVar6 = FUN_00a98480(&DAT_00a876a0,1,
                                     *(undefined8 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20))
                ;
                *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20) + 0x310
                 ) = uVar6;
              }
              local_1f8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
              local_238 = FUN_004aeac0(local_1f8,*(int *)(local_1f8 + 0x10) + -1);
              local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
              local_228 = 1;
              uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1);
              *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
              local_29 = '\x01';
            }
          }
        }
        else {
          if (uVar7 == 0xb9) goto LAB_00ade367;
          if (uVar7 == 0xba) goto LAB_00ade463;
        }
      }
      else if (uVar7 == 0xbc) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adce40(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      else if (uVar7 == 0xbe) {
        FUN_00add220(auStack_258,local_75);
        local_1b0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        local_80 = FUN_004aeac0(local_1b0,*(int *)(local_1b0 + 0x10) + -1);
        FUN_00a557b0(local_80);
        cVar3 = FUN_00a554f0(local_80);
        if (cVar3 != '\0') {
          FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20),
                       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28),
                       local_80,1);
        }
        local_1b8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        uVar6 = FUN_004aeac0(local_1b8,*(int *)(local_1b8 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar6);
      }
      else if (uVar7 == 0xbf) {
        FUN_00add410(auStack_258,*(undefined1 *)(*(longlong *)(param_1 + 0x2a0) + 0x44));
        local_1c0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        uVar6 = FUN_004aeac0(local_1c0,*(int *)(local_1c0 + 0x10) + -1);
        FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar6);
      }
      else if (uVar7 == 0xc0) {
        FUN_00add220(auStack_258,local_75);
        FUN_00adcd90(param_1);
        FUN_00add3d0(auStack_258,local_75);
      }
      goto LAB_00adf24d;
    }
    if (100 < uVar7) {
      if (uVar7 == 0x66) {
        if (local_39 == '\0') {
          if (*(int *)(local_20 + 0x14) == 0) {
            FUN_00ab3f00(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60));
            FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60));
          }
          else {
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
            (**(code **)(*plVar2 + 200))(plVar2,local_20);
            FUN_00a74cd0(local_20);
            FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                         *(longlong *)(param_1 + 0x2a0) + 0x60,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
          }
        }
        else {
          FUN_00add010(auStack_258);
        }
        if (*(short *)(*(longlong *)(param_1 + 0x2a0) + 0x20) == 0xd) {
          FUN_00ad1170(*(undefined8 *)(param_1 + 0x2a0));
        }
        local_120 = *(longlong *)(param_1 + 0x2a0);
        local_128 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
        if (local_128 == 0) {
          local_238 = 0;
          FUN_00ac0980(*(undefined8 *)(local_120 + 0xe8),local_75,0,0);
        }
        else {
          local_58 = 0;
          local_130 = 0;
          iVar4 = *(int *)(local_128 + 0x10);
          local_138 = 0;
          if (-1 < iVar4 + -1) {
            do {
              lVar5 = FUN_00a72910(local_128,local_138);
              if (*(char *)(lVar5 + 8) == 'P') {
                local_131 = '\x01';
                local_130 = FUN_00a72910(local_128,local_138);
                goto code_r0x00ade0bb;
              }
              local_138 = local_138 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_131 = '\0';
code_r0x00ade0bb:
          if (local_131 != '\0') {
            local_58 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
            FUN_00a62c40(*(undefined8 *)(local_130 + 0x28),local_58);
          }
          local_238 = 0;
          FUN_00ac0980(*(undefined8 *)(local_120 + 0xe8),local_75,local_58,local_128);
          FUN_00410f20(local_58);
        }
        local_148 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        local_238 = FUN_004aeac0(local_148,*(int *)(local_148 + 0x10) + -1);
        local_38 = FUN_00a9c430(&PTR_FUN_00a865e0,1,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68));
        FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),local_38,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c));
        *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68) = *(undefined8 *)(local_38 + 0xa8);
        local_150 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
        local_238 = FUN_004aeac0(local_150,*(int *)(local_150 + 0x10) + -1);
        local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
        local_228 = 1;
        uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
        local_39 = '\x01';
      }
      else if (uVar7 == 0x6a) {
        if (local_39 != '\0') {
          FUN_00add010(auStack_258);
          local_158 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
          local_238 = FUN_004aeac0(local_158,*(int *)(local_158 + 0x10) + -1);
          local_230 = *(ulonglong *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
          local_228 = 1;
          uVar6 = FUN_00ab3440(&PTR_FUN_00a92a10,1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar6;
        }
      }
      else if ((uVar7 == 0x8e) || (uVar7 == 0xa0)) {
LAB_00ade35b:
        local_6d = '\x01';
      }
      goto LAB_00adf24d;
    }
    if (uVar7 == 100) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
      (**(code **)(*plVar2 + 200))(plVar2,local_20);
      FUN_00a74cd0(local_20);
      FUN_00ad5060(*(undefined8 *)(param_1 + 0x2a0));
      goto LAB_00adf24d;
    }
    if (uVar7 < 0x5b) {
      if (9 < uVar7 - 0x47) {
        uVar7 = uVar7 - 0x51;
        goto joined_r0x00adda13;
      }
      goto LAB_00ade367;
    }
    if (3 < uVar7 - 0x5b) {
      if (uVar7 - 0x5f < 4) goto LAB_00ade463;
      if (uVar7 - 0x5f == 4) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x60);
        (**(code **)(*plVar2 + 200))(plVar2,local_20);
        FUN_00a74cd0(local_20);
        FUN_00adc130(param_1);
      }
      goto LAB_00adf24d;
    }
  }
LAB_00ade367:
  FUN_00add220(auStack_258,local_75);
  local_160 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  local_80 = FUN_004aeac0(local_160,*(int *)(local_160 + 0x10) + -1);
  FUN_00a557b0(local_80);
  cVar3 = FUN_00a554f0(local_80);
  if (cVar3 != '\0') {
    FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28));
  }
  local_168 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  uVar6 = FUN_004aeac0(local_168,*(int *)(local_168 + 0x10) + -1);
  FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar6);
  goto LAB_00adf24d;
}

