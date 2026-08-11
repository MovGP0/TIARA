/* Ghidra address: 019f1540 */
/* Ghidra symbol: FUN_019f1540 */


void FUN_019f1540(longlong param_1,ushort param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 char *param_6,undefined8 param_7,char param_8,undefined8 param_9)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  undefined8 uVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_2e8 [32];
  char *local_2c8;
  char *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  ushort local_27a;
  undefined8 local_278;
  undefined8 local_270;
  int local_268;
  int local_264;
  int local_260;
  bool local_25b;
  char local_25a;
  char local_259;
  undefined8 *local_258;
  char *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  char *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [256];
  ulonglong local_88;
  ulonglong local_80 [2];
  char local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  char *local_68;
  longlong local_60;
  longlong local_58;
  undefined *local_50;
  longlong local_48;
  undefined1 local_3a;
  
  local_258 = (undefined8 *)0x0;
  local_240 = 0;
  local_248 = 0;
  local_250 = (char *)0x0;
  local_238 = 0;
  local_228 = 0;
  local_230 = (char *)0x0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1c8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_48 = 0;
  local_50 = (undefined *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = (char *)0x0;
  local_27a = param_2;
  local_278 = param_3;
  local_270 = param_4;
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if ((((sVar3 != 0x3f6) &&
       (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58)), sVar3 != 0x3f7)) &&
      (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58))
      , sVar3 != 0x3f0)) || (iVar6 = FUN_019edff0(param_1,1,3), iVar6 != 3)) {
    local_2c8 = &local_6a;
    local_2c0 = &local_6b;
    lVar9 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,&local_69);
    if (local_27a == 0xc) {
      FUN_00416760(local_80,s_BCDEFGHIJKLMMOQRSTUVX_01fc43d1[0xb]);
      FUN_00416ba0(&local_58,local_80[0],&DAT_019f2754);
    }
    else if (local_27a == 0xd) {
      FUN_00416760(&local_88,s_BCDEFGHIJKLMMOQRSTUVX_01fc43d1[0xc]);
      FUN_00416ba0(&local_58,local_88,&DAT_019f2764);
    }
    else {
      FUN_00416760(&local_58,(&DAT_01fc43d0)[local_27a]);
    }
    if (((local_27a == 3) || (local_27a == 9)) ||
       (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58)), 0xbd < uVar4)) {
      local_3a = 0;
    }
    else {
      local_3a = 1;
    }
    if (*(char *)(lVar9 + 0x2f) == '\0') {
      local_2c8 = *(char **)PTR_DAT_02001f18;
      local_2c0 = (char *)CONCAT71(local_2c0._1_7_,1);
      uVar10 = FUN_0172dba0(&PTR_FUN_01729b58,1,*(undefined8 *)(param_1 + 0x58),0);
      cVar1 = FUN_0172c130(*(undefined8 *)(param_1 + 0x58),0);
      if (cVar1 == '\0') {
        local_2c8 = param_6;
        FUN_00416cd0(&local_200,3,local_58,&DAT_019f2774);
        uVar7 = FUN_019ee1e0(param_1,local_200);
        FUN_0040e840(local_188,uVar7);
        FUN_004169a0(&local_50,local_188);
        local_2c8 = param_6;
        local_2c0 = "_";
        local_2b8 = local_50;
        FUN_00416cd0(&local_208,5,local_58,&DAT_019f2774);
        cVar1 = FUN_019f11f0(param_1,param_9,local_208,lVar9);
        if (cVar1 == '\0') {
          local_2c8 = param_6;
          FUN_00416cd0(&local_210,3,local_58,&DAT_019f2774);
          uVar7 = FUN_019ee110(param_1,local_210);
          FUN_0040e840(local_188,uVar7);
          FUN_004169a0(&local_50,local_188);
          local_2c8 = "_";
          local_2c0 = param_6;
          local_2b8 = &DAT_019f2774;
          local_2b0 = local_50;
          local_2a8 = &DAT_019f27a0;
          local_2a0 = param_7;
          local_298 = &DAT_019f288c;
          FUN_00416cd0(&local_218,9,L".MODEL ",local_58);
          uVar14 = local_218;
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                    (*(longlong **)(param_1 + 0x28),local_218);
          if ((local_27a == 0xc) || (local_27a == 0xd)) {
            if ((local_6b == '\x01') || (local_6b == '\x04')) {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                        (*(longlong **)(param_1 + 0x28),L"LEVEL=3 ");
            }
            else if (local_6b == '\x03') {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                        (*(longlong **)(param_1 + 0x28),L"LEVEL=2 ");
            }
            else if (local_6b == '\x05') {
              bVar2 = *(byte *)(param_1 + 0xc0);
              if (bVar2 < 8) {
                bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1) << (bVar2 & 0x1f) & 0xcU)
                         != 0;
              }
              else {
                bVar15 = false;
              }
              if (bVar15) {
                (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                          (*(longlong **)(param_1 + 0x28),L"LEVEL=8 ");
              }
              else if (bVar2 == 5) {
                (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                          (*(longlong **)(param_1 + 0x28),L"LEVEL=9 ");
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                          (*(longlong **)(param_1 + 0x28),L"LEVEL=7 ");
              }
            }
            else if (local_6b == '\a') {
              if (*(byte *)(param_1 + 0xc0) < 8) {
                bVar15 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                          (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x2cU) != 0;
              }
              else {
                bVar15 = false;
              }
              if (bVar15) {
                (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                          (*(longlong **)(param_1 + 0x28),L"LEVEL=14 ");
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                          (*(longlong **)(param_1 + 0x28),L"LEVEL=8 ");
              }
            }
            else if ((local_6b == '\x02') || (local_6b == '\b')) {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                        (*(longlong **)(param_1 + 0x28),0x20);
            }
          }
          local_25a = '\x01';
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                            (*(longlong **)(param_1 + 0x58));
          cVar1 = FUN_019f10f0(param_1,uVar5);
          if (cVar1 == '\0') {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                              (*(longlong **)(param_1 + 0x58));
            cVar1 = FUN_019f1190(param_1,uVar5);
            if (cVar1 == '\0') {
              uVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                (*(longlong **)(param_1 + 0x58));
              cVar1 = FUN_019f11c0(param_1,uVar5);
              if (cVar1 == '\0') {
                local_25b = false;
                local_25a = '\0';
              }
              else {
                iVar6 = FUN_019edff0(param_1,5,1);
                local_25b = iVar6 == 0;
              }
            }
            else {
              iVar6 = FUN_019edff0(param_1,4,1);
              local_25b = iVar6 == 0;
            }
          }
          else {
            iVar6 = FUN_019edff0(param_1,5,1);
            local_25b = iVar6 == 0;
          }
          local_264 = 0;
          local_260 = param_5;
          local_259 = '\0';
          local_268 = 1;
          if (0 < param_5) {
            do {
              FUN_019f10c0(param_1,&local_58,local_278,local_268);
              if (local_58 != 0) {
                if (param_8 == '\0') {
                  if (((*(char *)(param_1 + 0xc0) == '\0') || (local_27a != 3)) ||
                     (iVar6 = FUN_00416db0(local_58,&PTR_DAT_019f2960), iVar6 != 0)) {
                    if (local_25b == false) {
                      if (local_25a == '\0') {
                        dVar16 = (double)FUN_019ed630(param_1,1,local_268);
                        dVar17 = (double)FUN_0172df70(uVar10,local_268 + -1);
                        if (dVar16 == dVar17) {
                          iVar6 = local_268 + -1;
                          dVar16 = (double)FUN_0172df70(uVar10,iVar6);
                          dVar17 = (double)FUN_019ee030(param_1,local_270,iVar6);
                          if (dVar16 == dVar17) goto LAB_019f254a;
                        }
                      }
                      FUN_019ee060(param_1,&local_248,local_58);
                      FUN_019ed1f0(param_1,&local_250,1,local_268);
                      local_2c8 = local_250;
                      local_2c0 = " ";
                      FUN_00416cd0(&local_240,4,local_248,&DAT_019f2988);
                      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                                (*(longlong **)(param_1 + 0x28),local_240);
                      local_259 = '\x01';
                      local_264 = local_264 + 1;
                    }
                    else {
                      FUN_019ee060(param_1,&local_238,local_58);
                      FUN_00416ad0(&local_238,&DAT_019f2974);
                      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                                (*(longlong **)(param_1 + 0x28),local_238);
                      local_259 = '\x01';
                      local_264 = local_264 + 1;
                    }
LAB_019f254a:
                    if (((local_264 % 5 == 0) && (local_264 != local_260)) && (local_259 != '\0')) {
                      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                                (*(longlong **)(param_1 + 0x28),0);
                      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                                (*(longlong **)(param_1 + 0x28),L"+      ");
                      local_259 = '\0';
                    }
                  }
                }
                else {
                  FUN_019ee060(param_1,&local_48,local_58);
                  if (((*(char *)(param_1 + 0xc0) == '\0') || (local_27a != 3)) ||
                     (iVar6 = FUN_00416db0(local_48,&PTR_DAT_019f2960), iVar6 != 0)) {
                    local_260 = local_260 + -1;
                    while (local_48 != 0) {
                      if (local_25b == false) {
                        FUN_019ed1f0(param_1,&local_230,1,local_268);
                        local_2c8 = local_230;
                        local_2c0 = " ";
                        FUN_00416cd0(&local_228,4,local_48,&DAT_019f2988);
                        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                                  (*(longlong **)(param_1 + 0x28),local_228);
                      }
                      else {
                        FUN_00416ba0(&local_220,local_48,&DAT_019f2974);
                        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                                  (*(longlong **)(param_1 + 0x28),local_220);
                      }
                      local_259 = '\x01';
                      local_264 = local_264 + 1;
                      local_260 = local_260 + 1;
                      FUN_00414480(&local_48);
                      if (((local_264 % 5 == 0) && (local_264 != local_260)) && (local_259 != '\0'))
                      {
                        (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                                  (*(longlong **)(param_1 + 0x28),0);
                        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                                  (*(longlong **)(param_1 + 0x28),L"+      ");
                        local_259 = '\0';
                      }
                    }
                  }
                }
              }
              local_268 = local_268 + 1;
              param_5 = param_5 + -1;
            } while (param_5 != 0);
          }
          FUN_00410f20(uVar10);
          if (((local_27a == 3) || (local_27a == 0xf)) ||
             ((local_27a == 0xc || ((local_27a == 0xd || (local_27a == 9)))))) {
            FUN_019f1400(auStack_2e8,&local_258);
            FUN_00414b50(&local_68,local_258);
            if (local_68 != (char *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                        (*(longlong **)(param_1 + 0x28),local_68);
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28),0x29)
          ;
        }
      }
      else {
        lVar11 = FUN_017ff660(*(undefined8 *)(param_1 + 0x58));
        lVar12 = FUN_019a45d0();
        if (lVar11 == lVar12) {
          uVar10 = FUN_019a45d0();
          FUN_01994230(uVar10);
          uVar10 = FUN_019a45d0();
          FUN_01993f30(uVar10,*(undefined8 *)(param_1 + 0x58),1,0);
        }
        local_1e0 = 4;
        local_1e8 = lVar9;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                  (*(longlong **)(param_1 + 0x58),&local_1f8);
        FUN_00416ba0(&local_1f0,*(undefined8 *)(param_1 + 0x80),local_1f8);
        local_1d8 = local_1f0;
        local_1d0 = 0x11;
        FUN_00442f70(&local_1c8,
                     L"Type not found in the catalogue: %s.\r\nComponent: %s can\'t be exported.",
                     &local_1e8,1);
        FUN_016fd940(local_1c8);
        *(undefined1 *)(param_1 + 0xc2) = 1;
      }
    }
    else {
      local_2c8 = param_6;
      FUN_00416cd0(&local_190,3,local_58,&DAT_019f2774);
      uVar7 = FUN_019ee110(param_1,local_190);
      FUN_0040e840(local_188,uVar7);
      FUN_004169a0(&local_50,local_188);
      iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x28))();
      local_268 = 0;
      if (-1 < iVar6 + -1) {
        do {
          (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x18))
                    (*(longlong **)(lVar9 + 0x30),&local_198,local_268);
          FUN_0043e130(&local_60,local_198);
          cVar1 = FUN_004170c0(L".MODEL",local_60,1);
          if (cVar1 != '\0') {
            bVar2 = cVar1 + 6;
            while (bVar13 = bVar2, *(short *)(local_60 + -2 + (ulonglong)bVar2 * 2) == 0x20) {
              bVar2 = bVar2 + 1;
            }
            while (*(short *)(local_60 + -2 + (ulonglong)bVar13 * 2) != 0x20) {
              bVar13 = bVar13 + 1;
            }
            FUN_00416e20(&local_60,bVar2,(uint)bVar13 - (uint)bVar2);
            local_2c8 = param_6;
            local_2c0 = "_";
            local_2b8 = local_50;
            local_2b0 = &DAT_019f27a0;
            FUN_00416cd0(&local_1a0,6,local_58,&DAT_019f2774);
            FUN_00416ea0(local_1a0,&local_60,bVar2);
          }
          bVar2 = FUN_004170c0(&DAT_019f27b0,local_60,1);
          if (bVar2 != 0) {
            FUN_019f1400(auStack_2e8,&local_1a8);
            FUN_00414b50(&local_68,local_1a8);
            if (local_68 != (char *)0x0) {
              FUN_00416ba0(&local_1b0,&DAT_019f27a0,local_68);
              FUN_00416ea0(local_1b0,&local_60,bVar2 - 1);
            }
          }
          iVar8 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x28))(*(longlong **)(lVar9 + 0x30));
          if ((local_268 == iVar8 + -1) && (bVar2 == 0)) {
            FUN_019f1400(auStack_2e8,&local_1b8);
            FUN_00414b50(&local_68,local_1b8);
            if (local_68 != (char *)0x0) {
              FUN_0043ea00(&local_1c0,local_60);
              if (local_1c0 == 0) {
                FUN_00416ba0(&local_60,&DAT_019f27c0,local_68);
              }
              else {
                local_2c8 = local_68;
                FUN_00416cd0(&local_60,3,local_60,&DAT_019f27a0);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                    (*(longlong **)(param_1 + 0x28),local_60);
          local_268 = local_268 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_00414560(&local_258,0xe);
  FUN_00414560(&local_1c8,8);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_68,5);
  FUN_00414560(&param_6,2);
  return;
}

