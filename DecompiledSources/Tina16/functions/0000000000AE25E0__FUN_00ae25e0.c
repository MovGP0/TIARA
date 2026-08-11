/* Ghidra address: 00ae25e0 */
/* Ghidra symbol: FUN_00ae25e0 */


void FUN_00ae25e0(longlong param_1,byte param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_180;
  byte *local_178;
  byte local_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  char local_10d;
  int local_108;
  char local_101;
  longlong local_100;
  undefined1 local_f1;
  longlong local_f0;
  int local_e0;
  char local_d9;
  longlong local_d8;
  longlong local_d0;
  int local_c0;
  char local_b9;
  longlong local_b8;
  undefined1 local_ad;
  int local_a8;
  char local_a1;
  longlong local_a0;
  int local_90;
  char local_89;
  longlong local_88;
  int local_78;
  char local_71;
  longlong local_70;
  int local_60;
  char local_59;
  longlong local_58;
  byte local_49;
  byte *local_48;
  undefined2 local_40;
  undefined1 local_3d;
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_120 = auStack_1a8;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_3c = 1;
  local_40 = 0x31;
  local_49 = FUN_00a4a530(param_2);
  if (local_49 == 1) {
    local_49 = 7;
  }
  local_3d = 0;
  local_38 = 0;
  if (param_2 == 0x8f) {
    local_58 = *(longlong *)(param_1 + 0x48);
    iVar3 = *(int *)(local_58 + 0x10);
    local_60 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_00a72910(local_58,local_60);
        if (*(char *)(lVar4 + 8) == 'O') {
          local_59 = '\x01';
          local_38 = FUN_00a72910(local_58,local_60);
          goto code_r0x00ae2721;
        }
        local_60 = local_60 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_59 = '\0';
code_r0x00ae2721:
    if ((local_59 != '\0') && (-1 < *(int *)(local_38 + 0x18))) {
      local_3c = *(int *)(local_38 + 0x18);
    }
    local_70 = *(longlong *)(param_1 + 0x48);
    iVar3 = *(int *)(local_70 + 0x10);
    local_78 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_00a72910(local_70,local_78);
        if (*(char *)(lVar4 + 8) == 'W') {
          local_71 = '\x01';
          local_38 = FUN_00a72910(local_70,local_78);
          goto code_r0x00ae27cc;
        }
        local_78 = local_78 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_71 = '\0';
code_r0x00ae27cc:
    if ((local_71 != '\0') && (*(longlong *)(local_38 + 0x28) != 0)) {
      local_40 = **(undefined2 **)(local_38 + 0x28);
    }
    goto LAB_00ae2ac7;
  }
  if (param_2 != 0x91) goto LAB_00ae2ac7;
  local_88 = *(longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(local_88 + 0x10);
  local_90 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00a72910(local_88,local_90);
      if (*(char *)(lVar4 + 8) == '?') {
        local_89 = '\x01';
        local_38 = FUN_00a72910(local_88,local_90);
        goto code_r0x00ae288b;
      }
      local_90 = local_90 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_89 = '\0';
code_r0x00ae288b:
  if (local_89 == '\0') {
    local_a0 = *(longlong *)(param_1 + 0x48);
    iVar3 = *(int *)(local_a0 + 0x10);
    local_a8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_00a72910(local_a0,local_a8);
        if (*(char *)(lVar4 + 8) == 'W') {
          local_a1 = '\x01';
          local_38 = FUN_00a72910(local_a0,local_a8);
          goto code_r0x00ae2925;
        }
        local_a8 = local_a8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_a1 = '\0';
code_r0x00ae2925:
    if (local_a1 == '\0') {
LAB_00ae2984:
      local_ad = 0;
    }
    else {
      FUN_0043e1a0(&local_128,*(undefined8 *)(local_38 + 0x28));
      iVar3 = FUN_00416db0(local_128,L"none");
      if (iVar3 != 0) {
        FUN_0043e1a0(&local_130,*(undefined8 *)(local_38 + 0x28));
        iVar3 = FUN_00416db0(local_130,L"plain");
        if (iVar3 != 0) goto LAB_00ae2984;
      }
      local_ad = 1;
    }
  }
  else {
    local_ad = 1;
  }
  local_3d = local_ad;
  local_b8 = *(longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(local_b8 + 0x10);
  local_c0 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00a72910(local_b8,local_c0);
      if (*(char *)(lVar4 + 8) == 'W') {
        local_b9 = '\x01';
        local_38 = FUN_00a72910(local_b8,local_c0);
        goto code_r0x00ae2a23;
      }
      local_c0 = local_c0 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_b9 = '\0';
code_r0x00ae2a23:
  if (local_b9 != '\0') {
    FUN_0043e1a0(&local_138,*(undefined8 *)(local_38 + 0x28));
    iVar3 = FUN_00416db0(local_138,L"disc");
    if (iVar3 == 0) {
      local_40 = 100;
    }
    else {
      FUN_0043e1a0(&local_140,*(undefined8 *)(local_38 + 0x28));
      iVar3 = FUN_00416db0(local_140,L"circle");
      if (iVar3 == 0) {
        local_40 = 99;
      }
      else {
        FUN_0043e1a0(&local_148,*(undefined8 *)(local_38 + 0x28));
        iVar3 = FUN_00416db0(local_148,L"square");
        if (iVar3 == 0) {
          local_40 = 0x73;
        }
      }
    }
  }
LAB_00ae2ac7:
  FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
  *(undefined8 *)(param_1 + 0x60) = 0;
  local_d0 = *(longlong *)(param_1 + 0x48);
  if (local_d0 == 0) {
    local_188 = 0;
    FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,0,0);
  }
  else {
    local_30 = 0;
    local_d8 = 0;
    iVar3 = *(int *)(local_d0 + 0x10);
    local_e0 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_00a72910(local_d0,local_e0);
        if (*(char *)(lVar4 + 8) == 'P') {
          local_d9 = '\x01';
          local_d8 = FUN_00a72910(local_d0,local_e0);
          goto code_r0x00ae2ba5;
        }
        local_e0 = local_e0 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_d9 = '\0';
code_r0x00ae2ba5:
    if (local_d9 != '\0') {
      local_30 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_d8 + 0x28),local_30);
    }
    local_188 = 0;
    FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_2,local_30,local_d0);
    FUN_00410f20(local_30);
  }
  local_f0 = *(longlong *)(param_1 + 0xe8);
  local_188 = FUN_004aeac0(local_f0,*(int *)(local_f0 + 0x10) + -1);
  pbVar5 = (byte *)FUN_00a9c430(&PTR_FUN_00a8a628,1,*(undefined8 *)(param_1 + 0x68),
                                *(undefined8 *)(param_1 + 0x48));
  local_48 = pbVar5;
  FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),pbVar5,*(undefined4 *)(param_1 + 0x7c));
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_48 + 0xa8);
  FUN_00ad4730(param_1);
  bVar1 = *(char *)(param_1 + 0x44) + 0x78;
  if (bVar1 < 0x20) {
    uVar7 = 1 << (bVar1 & 0x1f);
    pbVar5 = (byte *)(ulonglong)uVar7;
    bVar8 = (uVar7 & 0x1e8020) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    local_f1 = FUN_00a4a4f0(*(undefined1 *)(param_1 + 0x44));
    FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_f1);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_48 + 0x28);
  }
  else {
    if ((byte)(param_2 + 0x78) < 0x10) {
      uVar7 = (int)CONCAT62((int6)((ulonglong)pbVar5 >> 0x10),1) << (param_2 + 0x78 & 0x1f);
      pbVar5 = (byte *)(ulonglong)uVar7;
      bVar8 = (uVar7 & 0x1e80) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    do {
      uVar6 = (ulonglong)*(byte *)(param_1 + 0x44);
      if (uVar6 < 0x77) {
        if (uVar6 < 0x2c) {
          if (uVar6 < 0x1a) {
            if ((uVar6 != 0x19) && (uVar6 != 2)) {
              uVar6 = uVar6 - 0x15;
joined_r0x00ae2e14:
              if (2 < uVar6) goto LAB_00ae3183;
            }
          }
          else if (10 < uVar6 - 0x1b) {
            uVar6 = uVar6 - 0x28;
            goto joined_r0x00ae2e14;
          }
LAB_00ae3175:
          FUN_00adf790(param_1);
        }
        else {
          if (0x66 < uVar6) {
            if ((uVar6 - 0x67 < 2) || (uVar6 - 0x6d < 5)) goto LAB_00ae312f;
            goto LAB_00ae3183;
          }
          if (uVar6 != 0x66) {
            if ((0x2e < uVar6 - 0x2c) && (1 < uVar6 - 0x5d)) {
              uVar6 = uVar6 - 0x61;
              goto joined_r0x00ae2f48;
            }
            goto LAB_00ae3175;
          }
          pbVar5 = param_3;
          FUN_00ae1450(param_1,param_3);
        }
      }
      else {
        if (0x90 < uVar6) {
          if (uVar6 < 0xb4) {
            if (uVar6 == 0xb3) {
LAB_00ae312f:
              local_168[0] = 0x10;
              local_168[1] = 0;
              local_168[2] = 0;
              local_168[3] = 0;
              local_168[4] = 0;
              local_168[5] = 0;
              local_168[6] = 0;
              local_168[7] = 0;
              local_168[8] = 0;
              local_168[9] = 0;
              local_168[10] = 0;
              local_168[0xb] = 0;
              local_168[0xc] = 0;
              local_168[0xd] = 0;
              local_168[0xe] = 0;
              local_168[0xf] = 0;
              local_168[0x10] = 0;
              local_168[0x11] = 0;
              local_168[0x12] = 0xe1;
              local_168[0x13] = 0x1e;
              local_168[0x14] = 0;
              local_168[0x15] = 0;
              local_168[0x16] = 0;
              local_168[0x17] = 0;
              local_168[0x18] = 0;
              FUN_0040f7c0(local_168,param_3,0x19);
              pbVar5 = (byte *)(ulonglong)*(byte *)(param_1 + 0x44);
              FUN_00ad5100(param_1,pbVar5,local_168);
              goto LAB_00ae31d0;
            }
            if (uVar6 - 0x91 < 4) goto LAB_00ae307e;
            if (uVar6 - 0x95 < 2) goto LAB_00ae2f53;
            if (uVar6 - 0x95 != 0xb) goto LAB_00ae3183;
          }
          else if (3 < uVar6 - 0xb9) {
            uVar6 = uVar6 - 0xbe;
joined_r0x00ae2f48:
            if (3 < uVar6) goto LAB_00ae3183;
          }
          goto LAB_00ae3175;
        }
        if (uVar6 < 0x89) {
          if ((uVar6 == 0x88) || (uVar6 - 0x77 < 0xc)) goto LAB_00ae3175;
          if (uVar6 - 0x83 < 3) goto LAB_00ae312f;
          if (uVar6 - 0x86 < 2) {
            pbVar5 = (byte *)(ulonglong)*(byte *)(param_1 + 0x44);
            FUN_00ad5100(param_1,pbVar5,param_3);
            goto LAB_00ae31d0;
          }
        }
        else {
          if (uVar6 == 0x8f) {
LAB_00ae307e:
            pbVar5 = (byte *)(ulonglong)*(byte *)(param_1 + 0x44);
            FUN_00ae25e0(param_1,pbVar5,param_3);
            if (*(byte *)(param_1 + 0x44) < 200) {
              pbVar5 = (byte *)(((ulonglong)param_3 & 7) * 8);
              bVar8 = (param_3[((longlong)(pbVar5 + *(byte *)(param_1 + 0x44)) >> 3) -
                               ((ulonglong)param_3 & 7)] >>
                       ((ulonglong)(pbVar5 + *(byte *)(param_1 + 0x44)) & 7) & 1) != 0;
            }
            else {
              bVar8 = false;
            }
            if (!bVar8) {
              FUN_00ad4730(param_1);
            }
            goto LAB_00ae31d0;
          }
          if (uVar6 == 0x90) {
LAB_00ae2f53:
            if (*(char *)(param_1 + 0x44) == -0x70) {
              local_100 = *(longlong *)(param_1 + 0x48);
              iVar3 = *(int *)(local_100 + 0x10);
              local_108 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  lVar4 = FUN_00a72910(local_100,local_108);
                  if (*(char *)(lVar4 + 8) == 'Z') {
                    local_101 = '\x01';
                    local_38 = FUN_00a72910(local_100,local_108);
                    goto code_r0x00ae2fe9;
                  }
                  local_108 = local_108 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              local_101 = '\0';
code_r0x00ae2fe9:
              local_10d = local_101;
            }
            else {
              local_10d = '\0';
            }
            if ((local_10d != '\0') && (*(int *)(local_38 + 0x18) != 0)) {
              local_3c = *(int *)(local_38 + 0x18);
            }
            pbVar5 = (byte *)(ulonglong)param_2;
            local_188 = CONCAT62(local_188._2_6_,local_40);
            local_180 = local_3d;
            local_178 = param_3;
            FUN_00ae1f40(param_1,pbVar5,*(undefined1 *)(param_1 + 0x44),local_3c);
            local_3c = local_3c + 1;
            goto LAB_00ae31d0;
          }
        }
LAB_00ae3183:
        if (*(byte *)(param_1 + 0x44) < 200) {
          pbVar5 = (byte *)(((ulonglong)param_3 & 7) * 8);
          bVar8 = (param_3[((longlong)(pbVar5 + *(byte *)(param_1 + 0x44)) >> 3) -
                           ((ulonglong)param_3 & 7)] >>
                   ((ulonglong)(pbVar5 + *(byte *)(param_1 + 0x44)) & 7) & 1) != 0;
        }
        else {
          bVar8 = false;
        }
        if (!bVar8) {
          FUN_00ad4730(param_1);
        }
      }
LAB_00ae31d0:
      local_168[0] = 0x10;
      local_168[1] = 0;
      local_168[2] = 0;
      local_168[3] = 0;
      local_168[4] = 0;
      local_168[5] = 0;
      local_168[6] = 0;
      local_168[7] = 0;
      local_168[8] = 0;
      local_168[9] = 0;
      local_168[10] = 0;
      local_168[0xb] = 0;
      local_168[0xc] = 0;
      local_168[0xd] = 0;
      local_168[0xe] = 0;
      local_168[0xf] = 0;
      local_168[0x10] = 0;
      local_168[0x11] = 0;
      local_168[0x12] = 0;
      local_168[0x13] = 0;
      local_168[0x14] = 0;
      local_168[0x15] = 0;
      local_168[0x16] = 0;
      local_168[0x17] = 0;
      local_168[0x18] = 0;
      if (local_49 < 200) {
        pbVar5 = (byte *)0x0;
        local_168[(longlong)(ulonglong)local_49 >> 3] =
             local_168[(longlong)(ulonglong)local_49 >> 3] | '\x01' << ((ulonglong)local_49 & 7);
      }
      bVar1 = *(byte *)(param_1 + 0x44);
      if (bVar1 < 200) {
        pbVar5 = local_168;
        bVar8 = (pbVar5[(longlong)(ulonglong)bVar1 >> 3] >> ((ulonglong)bVar1 & 7) & 1) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) break;
      if (bVar1 < 200) {
        pbVar5 = (byte *)(((ulonglong)param_3 & 7) * 8);
        bVar8 = (param_3[((longlong)(pbVar5 + bVar1) >> 3) - ((ulonglong)param_3 & 7)] >>
                 ((ulonglong)(pbVar5 + bVar1) & 7) & 1) != 0;
      }
      else {
        bVar8 = false;
      }
    } while (!bVar8);
    if ((byte)(param_2 + 0x78) < 0x10) {
      bVar8 = ((int)CONCAT62((int6)((ulonglong)pbVar5 >> 0x10),1) << (param_2 + 0x78 & 0x1f) &
              0x1e80U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    }
    FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
    cVar2 = FUN_00a9ba60(*(undefined8 *)(param_1 + 0x68));
    if (cVar2 != '\0') {
      local_48[0x480] = 0xe;
      local_48[0x481] = 0;
      local_48[0x482] = 0;
      local_48[0x483] = 0;
      local_48[0x50a] = 1;
    }
    FUN_00a9ccf0(local_48);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x81) != '\0') {
      FUN_00ad5060(param_1);
    }
    FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_2);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_48 + 0x28);
  }
  FUN_00414560(&local_148,5);
  return;
}

