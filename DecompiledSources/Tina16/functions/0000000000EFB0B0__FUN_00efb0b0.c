/* Ghidra address: 00efb0b0 */
/* Ghidra symbol: FUN_00efb0b0 */


void FUN_00efb0b0(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 byte *param_5,longlong param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auStack_338 [32];
  undefined *local_318;
  undefined *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 local_2f8;
  char local_2e9;
  int local_2e8;
  char local_2e1;
  byte *local_2e0;
  short local_2d4;
  short local_2d2;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [256];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [55];
  undefined1 local_a1;
  char local_a0;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  byte *local_30;
  
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = (undefined *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = (undefined *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = (undefined *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = (undefined *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_308 = param_2;
  local_300 = param_3;
  local_2f8 = param_4;
  local_2e0 = param_1;
  FUN_019b6320(param_2);
  FUN_019b6320(local_300);
  local_2e9 = '\x01';
  *param_5 = 0;
  if ((((local_2e0 != (byte *)0x0) && (*(char *)(param_6 + 0x92) == '\0')) &&
      (local_30 = local_2e0, local_2e0 != (byte *)0x0)) &&
     ((*local_2e0 == 0 || (*(char *)(param_6 + 0xb4) != '\x01')))) {
    while ((((((*local_30 != 0xff && (*(char *)(param_6 + 0xb4) == '\0')) ||
              ((*local_30 == 0 && (*(char *)(param_6 + 0xb4) == '\x01')))) ||
             ((*local_30 != 0xff && (*(char *)(param_6 + 0xb4) == '\x02')))) ||
            (((*local_30 != 0xff && (*(char *)(param_6 + 0xb4) == '\x03')) ||
             ((*local_30 != 0xff && (*(char *)(param_6 + 0xb4) == '\x04')))))) &&
           (*(char *)(param_6 + 0x92) == '\0'))) {
      FUN_00414480(&local_38);
      FUN_00414480(&local_40);
      local_2d4 = 9;
      iVar5 = 1;
      FUN_00414480(&local_48);
      FUN_00414480(&local_50);
      local_2d2 = 9;
      iVar6 = 1;
      local_2e1 = '\0';
      iVar3 = FUN_00ef7f30(*(undefined8 *)(local_30 + 8),param_6);
      iVar3 = iVar3 + -1;
      local_2e8 = 1;
      if (0 < iVar3) {
        do {
          sVar2 = FUN_00ef8190(*(undefined8 *)(local_30 + 8),local_2e8);
          if (sVar2 == 5) {
            local_2e1 = '\x01';
          }
          local_2e8 = local_2e8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (*local_30 == 0) {
        local_2e1 = '\0';
      }
      local_2e8 = 1;
      if (local_2e1 != '\0') {
        iVar3 = FUN_019b5ce0(*local_308,param_6);
        if (iVar3 == 0) {
          FUN_019b6e50(local_308,&DAT_00efc880,param_6);
        }
        else {
          FUN_019b6e50(local_308,&DAT_00efc890,param_6);
        }
      }
      if (local_2e1 != '\0') {
        iVar3 = FUN_019b5ce0(*local_300,param_6);
        if (iVar3 == 0) {
          FUN_019b6e50(local_300,&DAT_00efc880,param_6);
        }
        else {
          FUN_019b6e50(local_300,&DAT_00efc890,param_6);
        }
      }
      while (iVar3 = FUN_00ef7f30(*(undefined8 *)(local_30 + 8),param_6), local_2e8 < iVar3) {
        sVar2 = FUN_00ef8190(*(undefined8 *)(local_30 + 8),local_2e8);
        if (sVar2 == 9) {
          local_2e8 = local_2e8 + 1;
        }
        else {
          uVar4 = FUN_00ef8190(*(undefined8 *)(local_30 + 8),local_2e8);
          FUN_00ef7d60();
          cVar1 = FUN_019b6fd0(uVar4,param_6);
          if (cVar1 == '\0') {
            uVar8 = FUN_019b7350(uVar4,param_6);
            FUN_00efa310(local_2f8,uVar8,*local_30,param_6);
            if (local_2d2 != 9) {
              if (iVar6 < 2) {
                FUN_00ef9e60(local_d8,local_2d2,param_6);
                FUN_004169a0(&local_160,local_d8);
                local_318 = &DAT_00efc8dc;
                FUN_00416cd0(&local_48,3,local_48,local_160);
                uVar8 = FUN_019b7350(local_2d2,param_6);
                FUN_00efa6e0(&local_168,uVar8,*(undefined1 *)(param_6 + 0xe98));
                local_318 = &DAT_00efc8dc;
                FUN_00416cd0(&local_50,3,local_50,local_168);
              }
              else {
                FUN_00ef9e60(local_d8,local_2d2,param_6);
                FUN_004169a0(&local_140,local_d8);
                local_318 = (undefined *)local_140;
                FUN_00416cd0(&local_48,3,local_48,&DAT_00efc8a4);
                FUN_00efa6e0(&local_148,(double)iVar6,*(undefined1 *)(param_6 + 0xe98));
                local_318 = (undefined *)local_148;
                local_310 = &DAT_00efc8c8;
                FUN_00416cd0(&local_48,4,local_48,&DAT_00efc8b8);
                uVar8 = FUN_019b7350(local_2d2,param_6);
                FUN_00efa6e0(&local_150,uVar8,*(undefined1 *)(param_6 + 0xe98));
                local_318 = (undefined *)local_150;
                FUN_00416cd0(&local_50,3,local_50,&DAT_00efc8a4);
                FUN_00efa6e0(&local_158,(double)iVar6,*(undefined1 *)(param_6 + 0xe98));
                local_318 = local_158;
                local_310 = &DAT_00efc8c8;
                FUN_00416cd0(&local_50,4,local_50,&DAT_00efc8b8);
              }
              local_2d2 = 9;
            }
            if (local_2d4 != 9) {
              if (iVar5 < 2) {
                FUN_00ef9e60(local_d8,local_2d4,param_6);
                FUN_004169a0(&local_190,local_d8);
                local_318 = &DAT_00efc8dc;
                FUN_00416cd0(&local_38,3,local_38,local_190);
                uVar8 = FUN_019b7350(local_2d4,param_6);
                FUN_00efa6e0(&local_198,uVar8,*(undefined1 *)(param_6 + 0xe98));
                local_318 = &DAT_00efc8dc;
                FUN_00416cd0(&local_40,3,local_40,local_198);
              }
              else {
                FUN_00ef9e60(local_d8,local_2d4,param_6);
                FUN_004169a0(&local_170,local_d8);
                local_318 = (undefined *)local_170;
                FUN_00416cd0(&local_38,3,local_38,&DAT_00efc8a4);
                FUN_00efa6e0(&local_178,(double)iVar5,*(undefined1 *)(param_6 + 0xe98));
                local_318 = (undefined *)local_178;
                local_310 = &DAT_00efc8c8;
                FUN_00416cd0(&local_38,4,local_38,&DAT_00efc8b8);
                uVar8 = FUN_019b7350(local_2d4,param_6);
                FUN_00efa6e0(&local_180,uVar8,*(undefined1 *)(param_6 + 0xe98));
                local_318 = (undefined *)local_180;
                FUN_00416cd0(&local_40,3,local_40,&DAT_00efc8a4);
                FUN_00efa6e0(&local_188,(double)iVar5,*(undefined1 *)(param_6 + 0xe98));
                local_318 = local_188;
                local_310 = &DAT_00efc8c8;
                FUN_00416cd0(&local_40,4,local_40,&DAT_00efc8b8);
              }
            }
            if (*param_5 < *local_30) {
              *param_5 = *local_30;
            }
            FUN_019b7350(uVar4,param_6);
            dVar9 = (double)FUN_0040c850();
            if (dVar9 == 1.0) {
              if (*local_30 == 0) {
                iVar3 = 0;
                if (local_38 != 0) {
                  iVar3 = *(int *)(local_38 + -4);
                }
                bVar7 = iVar3 == 0;
              }
              else {
                bVar7 = false;
              }
              if (bVar7) {
                iVar3 = 0;
                if (local_48 != 0) {
                  iVar3 = *(int *)(local_48 + -4);
                }
                bVar7 = iVar3 == 0;
              }
              else {
                bVar7 = false;
              }
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              bVar7 = true;
            }
            else if (local_2e1 == '\0') {
              bVar7 = false;
            }
            else {
              iVar3 = 0;
              if (local_38 != 0) {
                iVar3 = *(int *)(local_38 + -4);
              }
              bVar7 = iVar3 == 0;
            }
            if (bVar7) {
              uVar8 = FUN_019b7350(uVar4,param_6);
              FUN_00efa6e0(&local_1a0,uVar8,*(undefined1 *)(param_6 + 0xe98));
              FUN_00416910(local_2a0,local_1a0,0xff);
              FUN_00415020(&local_a1,local_2a0,0x50);
              uVar8 = FUN_019b5ce0(*local_308,param_6);
              if ((int)uVar8 != 0) {
                if ((byte)(local_a0 - 0x28U) < 8) {
                  bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) <<
                           (local_a0 - 0x28U & 0x1f) & 0x28U) != 0;
                }
                else {
                  bVar7 = false;
                }
                if (!bVar7) {
                  iVar3 = FUN_019b5ce0(*local_308,param_6);
                  sVar2 = FUN_019b60b0(*local_308,iVar3 + -1,param_6);
                  if (sVar2 != 0x28) {
                    FUN_019b6e50(local_308,&DAT_00efc8f0,param_6);
                    FUN_019b6e50(local_300,&DAT_00efc8f0,param_6);
                  }
                }
              }
              FUN_004169a0(&local_2a8,&local_a1);
              FUN_019b6e50(local_308,local_2a8,param_6);
              FUN_019b6e50(local_308,&DAT_00efc8dc,param_6);
              FUN_004169a0(&local_2b0,&local_a1);
              FUN_019b6e50(local_300,local_2b0,param_6);
              FUN_019b6e50(local_300,&DAT_00efc8dc,param_6);
            }
            else {
              dVar9 = (double)FUN_019b7350(uVar4,param_6);
              if (dVar9 == 1.0) {
                iVar3 = FUN_019b5ce0(*local_308,param_6);
                if (iVar3 != 0) {
                  iVar3 = FUN_019b5ce0(*local_308,param_6);
                  sVar2 = FUN_019b60b0(*local_308,iVar3 + -1,param_6);
                  if (sVar2 != 0x28) {
                    FUN_019b6e50(local_308,&DAT_00efc8f0,param_6);
                    FUN_019b6e50(local_300,&DAT_00efc8f0,param_6);
                  }
                }
              }
              else {
                FUN_019b6e50(local_308,&DAT_00efc900,param_6);
                FUN_019b6e50(local_300,&DAT_00efc900,param_6);
              }
            }
            FUN_019b6e50(local_308,local_38,param_6);
            FUN_019b6e50(local_300,local_40,param_6);
            FUN_0040e780(local_2a0,*local_30,1);
            FUN_00415020(&local_a1,local_2a0,0x50);
            if (local_2e1 == '\0') {
              if (*local_30 == 0) {
                FUN_019b6e50(local_308,local_48,param_6);
                iVar3 = FUN_019b5ce0(*local_308,param_6);
                FUN_019b62c0(*local_308,iVar3 + -1);
                FUN_019b6e50(local_300,local_50,param_6);
                iVar3 = FUN_019b5ce0(*local_300,param_6);
                FUN_019b62c0(*local_300,iVar3 + -1);
              }
              else if (*local_30 == 1) {
                FUN_019b6e50(local_308,local_48,param_6);
                FUN_019b6e50(local_308,&DAT_00efc910,param_6);
                FUN_019b6e50(local_300,local_50,param_6);
                FUN_019b6e50(local_300,&DAT_00efc910,param_6);
              }
              else {
                FUN_019b6e50(local_308,local_48,param_6);
                FUN_019b6e50(local_308,L"\\e(s,",param_6);
                FUN_004169a0(&local_2b8,&local_a1);
                FUN_019b6e50(local_308,local_2b8,param_6);
                FUN_019b6e50(local_308,&LAB_00efc938,param_6);
                FUN_019b6e50(local_300,local_50,param_6);
                FUN_019b6e50(local_300,L"\\e(s,",param_6);
                FUN_004169a0(&local_2c0,&local_a1);
                FUN_019b6e50(local_300,local_2c0,param_6);
                FUN_019b6e50(local_300,&LAB_00efc938,param_6);
              }
            }
            else {
              iVar3 = FUN_019b5ce0(*local_308,param_6);
              FUN_019b62c0(*local_308,iVar3 + -1);
              iVar3 = FUN_019b5ce0(*local_300,param_6);
              FUN_019b62c0(*local_300,iVar3 + -1);
            }
            local_2e8 = local_2e8 + 1;
            FUN_00414480(&local_38);
            FUN_00414480(&local_40);
            local_2d4 = 9;
            iVar5 = 1;
          }
          else {
            local_2e9 = '\0';
            cVar1 = FUN_00efaf10(auStack_338,uVar4);
            sVar2 = (short)uVar4;
            if (cVar1 == '\0') {
              if (sVar2 == local_2d4) {
                iVar5 = iVar5 + 1;
              }
              else {
                if (local_2d4 != 9) {
                  if (iVar5 < 2) {
                    FUN_00ef9e60(local_d8,local_2d4,param_6);
                    FUN_004169a0(&local_130,local_d8);
                    local_318 = &DAT_00efc8dc;
                    FUN_00416cd0(&local_38,3,local_38,local_130);
                    uVar8 = FUN_019b7350(local_2d4,param_6);
                    FUN_00efa6e0(&local_138,uVar8,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = &DAT_00efc8dc;
                    FUN_00416cd0(&local_40,3,local_40,local_138);
                  }
                  else {
                    FUN_00ef9e60(local_d8,local_2d4,param_6);
                    FUN_004169a0(&local_110,local_d8);
                    local_318 = (undefined *)local_110;
                    FUN_00416cd0(&local_38,3,local_38,&DAT_00efc8a4);
                    FUN_00efa6e0(&local_118,(double)iVar5,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = (undefined *)local_118;
                    local_310 = &DAT_00efc8c8;
                    FUN_00416cd0(&local_38,4,local_38,&DAT_00efc8b8);
                    uVar8 = FUN_019b7350(local_2d4,param_6);
                    FUN_00efa6e0(&local_120,uVar8,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = (undefined *)local_120;
                    FUN_00416cd0(&local_40,3,local_40,&DAT_00efc8a4);
                    FUN_00efa6e0(&local_128,(double)iVar5,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = local_128;
                    local_310 = &DAT_00efc8c8;
                    FUN_00416cd0(&local_40,4,local_40,&DAT_00efc8b8);
                  }
                }
                FUN_00efa310(local_2f8,0,*local_30,param_6);
                iVar5 = 1;
                local_2d4 = sVar2;
              }
            }
            else {
              if (sVar2 == local_2d2) {
                iVar6 = iVar6 + 1;
              }
              else {
                if (local_2d2 != 9) {
                  if (iVar6 < 2) {
                    FUN_00ef9e60(local_d8,local_2d2,param_6);
                    FUN_004169a0(&local_100,local_d8);
                    local_318 = &DAT_00efc8dc;
                    FUN_00416cd0(&local_48,3,local_48,local_100);
                    uVar8 = FUN_019b7350(local_2d2,param_6);
                    FUN_00efa6e0(&local_108,uVar8,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = &DAT_00efc8dc;
                    FUN_00416cd0(&local_50,3,local_50,local_108);
                  }
                  else {
                    FUN_00ef9e60(local_d8,local_2d2,param_6);
                    FUN_004169a0(&local_e0,local_d8);
                    local_318 = (undefined *)local_e0;
                    FUN_00416cd0(&local_48,3,local_48,&DAT_00efc8a4);
                    FUN_00efa6e0(&local_e8,(double)iVar6,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = (undefined *)local_e8;
                    local_310 = &DAT_00efc8c8;
                    FUN_00416cd0(&local_48,4,local_48,&DAT_00efc8b8);
                    uVar8 = FUN_019b7350(local_2d2,param_6);
                    FUN_00efa6e0(&local_f0,uVar8,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = (undefined *)local_f0;
                    FUN_00416cd0(&local_50,3,local_50,&DAT_00efc8a4);
                    FUN_00efa6e0(&local_f8,(double)iVar6,*(undefined1 *)(param_6 + 0xe98));
                    local_318 = local_f8;
                    local_310 = &DAT_00efc8c8;
                    FUN_00416cd0(&local_50,4,local_50,&DAT_00efc8b8);
                  }
                }
                iVar6 = 1;
                local_2d2 = sVar2;
              }
              FUN_00efafe0(auStack_338,uVar4);
            }
          }
          local_2e8 = local_2e8 + 1;
        }
      }
      if (local_2e1 != '\0') {
        if (*local_30 == 0) {
          iVar3 = FUN_019b5ce0(*local_308,param_6);
          FUN_019b62c0(*local_308,iVar3 + -1);
          FUN_019b6e50(local_308,&LAB_00efc938,param_6);
          iVar3 = FUN_019b5ce0(*local_300,param_6);
          FUN_019b62c0(*local_300,iVar3 + -1);
          FUN_019b6e50(local_300,&LAB_00efc938,param_6);
          iVar3 = 0;
          if (local_48 != 0) {
            iVar3 = *(int *)(local_48 + -4);
          }
          if (0 < iVar3) {
            FUN_019b6e50(local_308,&DAT_00efc8dc,param_6);
            FUN_019b6e50(local_308,local_48,param_6);
            iVar3 = FUN_019b5ce0(*local_308,param_6);
            FUN_019b62c0(*local_308,iVar3 + -1);
          }
          iVar3 = 0;
          if (local_50 != 0) {
            iVar3 = *(int *)(local_50 + -4);
          }
          if (0 < iVar3) {
            FUN_019b6e50(local_300,&DAT_00efc8dc,param_6);
            FUN_019b6e50(local_300,local_50,param_6);
            iVar3 = FUN_019b5ce0(*local_300,param_6);
            FUN_019b62c0(*local_300,iVar3 + -1);
          }
        }
        else if (*local_30 == 1) {
          FUN_019b6e50(local_308,&DAT_00efc8c8,param_6);
          FUN_019b6e50(local_308,local_48,param_6);
          FUN_019b6e50(local_308,&DAT_00efc910,param_6);
          FUN_019b6e50(local_300,&DAT_00efc8c8,param_6);
          FUN_019b6e50(local_300,local_50,param_6);
          FUN_019b6e50(local_300,&DAT_00efc910,param_6);
        }
        else {
          FUN_019b6e50(local_308,&DAT_00efc8c8,param_6);
          FUN_019b6e50(local_308,local_48,param_6);
          FUN_019b6e50(local_308,L"\\e(s,",param_6);
          FUN_004169a0(&local_2c8,&local_a1);
          FUN_019b6e50(local_308,local_2c8,param_6);
          FUN_019b6e50(local_308,&LAB_00efc938,param_6);
          FUN_019b6e50(local_300,&DAT_00efc8c8,param_6);
          FUN_019b6e50(local_300,local_50,param_6);
          FUN_019b6e50(local_300,L"\\e(s,",param_6);
          FUN_004169a0(&local_2d0,&local_a1);
          FUN_019b6e50(local_300,local_2d0,param_6);
          FUN_019b6e50(local_300,&LAB_00efc938,param_6);
        }
      }
      local_30 = *(byte **)(local_30 + 0x10);
      FUN_00ef7d60();
    }
    if (local_2e9 == '\0') {
      FUN_00efa3b0(local_2f8);
    }
  }
  FUN_00414560(&local_2d0,6);
  FUN_00414560(&local_1a0,0x19);
  FUN_00414560(&local_50,4);
  return;
}

