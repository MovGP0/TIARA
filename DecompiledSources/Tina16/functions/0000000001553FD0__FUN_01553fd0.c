/* Ghidra address: 01553fd0 */
/* Ghidra symbol: FUN_01553fd0 */


void FUN_01553fd0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int local_2c8;
  int local_2c4;
  int local_2bc;
  int local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0 [16];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_dc [4];
  undefined4 local_d8;
  undefined1 local_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_92;
  char local_91 [9];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [4];
  char local_45;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_260 = 0;
  local_268 = 0;
  local_250 = 0;
  local_258 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_200 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_68[3] = 0;
  local_68[2] = 0;
  local_68[1] = 0;
  local_68[0] = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  bVar4 = 0;
  local_2c = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x8f0);
  local_2ac = *(int *)(lVar1 + 0x10);
  local_2c4 = 0;
  if (-1 < local_2ac + -1) {
    do {
      uVar12 = FUN_01d347d0(lVar1,local_2c4);
      *(undefined8 *)(param_1 + 0x208) = uVar12;
      *(undefined1 *)(param_1 + 0x147) = 0;
      FUN_01d3f0e0(&local_f0,*(undefined2 *)(*(longlong *)(param_1 + 0x208) + 8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      FUN_00414b50(param_1 + 0x138,local_f0);
      cVar5 = FUN_0154cf30(*(undefined8 *)(param_1 + 0x270),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      if (cVar5 == '\0') {
        cVar5 = FUN_01d3f1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
        if (cVar5 != '\0') {
          uVar12 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x40) + 0x1a8);
          bVar4 = 1;
          bVar3 = false;
          FUN_00414b50(param_1 + 0x138,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x18));
          lVar14 = FUN_00e0f340(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x938),
                                *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
          FUN_00e0e8e0(*(undefined8 *)(lVar14 + 0x828),&local_2c,&local_45);
          *(undefined8 *)(lVar14 + 0x858) = *(undefined8 *)(param_1 + 0x208);
          if ((local_2c != 0) &&
             (FUN_00414b50(&local_b0,*(undefined8 *)(*(longlong *)(lVar14 + 0x828) + 0x20)),
             local_45 == '\0')) {
            uVar13 = FUN_00442620(*(longlong *)(param_1 + 0x270) + 0xbc,local_b0);
            _CreateSimulatorObject
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0xa20),local_2c,uVar13);
            *(undefined1 *)(*(longlong *)(param_1 + 0x270) + 0x930) = 1;
          }
          cVar5 = FUN_015f5c70(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0xa18),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),0x1ffff,
                               &local_30,&local_92);
          if ((cVar5 != '\0') && (local_30 == 0x10000)) {
            uVar9 = FUN_015fe680(uVar12,2);
            local_30 = FUN_015fd5a0(uVar9);
            bVar3 = true;
            local_2c = local_30;
          }
          if (*(int *)(param_1 + 0x17c) == 1) {
            FUN_015f8b00(&local_228,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
            FUN_00414ad0(*(longlong *)(param_1 + 0x270) + 0x80,local_228);
            FUN_015ef700(&local_c0,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
            cVar5 = FUN_015f5c70(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0xa18),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),0xffff,
                                 &local_30,&local_92);
            if (cVar5 == '\0') {
              FUN_00414b50(&local_b8,*(undefined8 *)(param_1 + 0x138));
              FUN_017ff4a0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),&local_230);
              FUN_00416cd0(&local_70,3,local_b8,&DAT_015561f8,local_230);
              FUN_00414ad0(lVar14 + 0x830,local_70);
              cVar5 = FUN_01d404e0(local_b8,&local_38);
              if ((cVar5 != '\0') &&
                 (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x920),
                 iVar8 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_70), iVar8 == -1)) {
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x920);
                (**(code **)(*plVar2 + 0x78))(plVar2,local_70);
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x920);
                iVar8 = (**(code **)(*plVar2 + 0x28))(plVar2);
                *(int *)(*(longlong *)(param_1 + 0x208) + 0xf8) = iVar8 + -1;
              }
              FUN_00416ba0(&local_238,L"write_comps_other: VHDLTextMacro.instance_name is ",local_70
                          );
              FUN_01602e30(local_238,1);
              FUN_00416cd0(param_1 + 0x228,4,&DAT_01556094,local_70,&DAT_01556234,
                           *(undefined8 *)(param_1 + 0x138));
            }
            else {
              FUN_00416ba0(&local_b8,L"MCU_PROCESS_",
                           *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x80));
              FUN_00416cd0(param_1 + 0x228,4,&DAT_01556094,local_b8,&DAT_01556234,
                           *(undefined8 *)(param_1 + 0x138));
            }
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
            (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
          }
          if (*(int *)(param_1 + 0x17c) == 1) {
            cVar5 = FUN_01d40680(*(undefined8 *)(*(longlong *)(lVar14 + 0x828) + 8),&local_38,
                                 &local_3c,&local_40,&local_44);
            if ((cVar5 != '\0') && (local_44 == 0)) {
              FUN_013a6200(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x790),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),local_38,local_3c,
                           local_40);
              FUN_015f8b00(&local_240,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
              FUN_00416cd0(&local_80,3,L"\"rom_file_",local_240,L".dat\"");
              FUN_00414b50(&local_78,L"file_name");
              FUN_00414b50(param_1 + 0x228,L"  GENERIC MAP (");
              FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_78,&DAT_0155644c
                           ,local_80);
              FUN_00416ad0(param_1 + 0x228,&DAT_01556460);
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
              (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
            }
          }
          FUN_00414b50(param_1 + 0x228,L"  PORT MAP (");
          FUN_00414480(param_1 + 0x110);
          iVar15 = -1;
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10);
          local_2bc = 0;
          if (-1 < iVar8 + -1) {
            do {
              uVar12 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28),local_2bc
                                   );
              *(undefined8 *)(param_1 + 0x180) = uVar12;
              FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_248,
                           *(undefined8 *)(param_1 + 0x180));
              FUN_00414b50(param_1 + 0x218,local_248);
              if (*(int *)(param_1 + 0x17c) == 0) {
                FUN_01575810(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8d0),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),
                             *(undefined8 *)(param_1 + 0x218));
              }
              *(undefined1 *)(param_1 + 0x10f) = 1;
              if ((((local_2c == 1) &&
                   (iVar11 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar14 + 0x828) + 8),
                                          L"cqpic"), iVar11 != 0)) &&
                  (cVar5 = FUN_015fa060(*(undefined8 *)(*(longlong *)(lVar14 + 0x828) + 8)),
                  cVar5 != '\0')) &&
                 (local_2bc ==
                  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10) + -1)) {
                FUN_00414b50(&local_80,L"ponrst_n");
                *(undefined1 *)(param_1 + 0x10f) = 0;
              }
              if (*(char *)(param_1 + 0x10f) != '\0') {
                FUN_01cfdb80(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),&local_80,
                             local_2bc);
                if (local_2c == 1) {
                  FUN_00415dd0(&local_258,local_80,0);
                  FUN_015f0ae0(&local_250,local_258,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),0);
                  FUN_00416880(&local_80,local_250);
                  uVar6 = FUN_00e0f470(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x938),
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),
                                       &local_80);
                  *(undefined1 *)(param_1 + 0x10f) = uVar6;
                }
                else {
                  cVar5 = FUN_00e0f470(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x938),
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),
                                       &local_80);
                  if (cVar5 == '\0') {
                    FUN_00415dd0(&local_268,local_80,0);
                    FUN_015f0ae0(&local_260,local_268,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),0);
                    FUN_00416880(&local_80,local_260);
                  }
                }
                if (local_2c == 1) {
                  FUN_0043e1a0(&local_270,local_80);
                  iVar11 = FUN_00416db0(local_270,L"clkin");
                  if (iVar11 == 0) goto LAB_015558b5;
                }
                if (local_2c == 2) {
                  FUN_0043e1a0(&local_278,local_80);
                  iVar11 = FUN_00416db0(local_278,&DAT_015564c0);
                  if (iVar11 == 0) goto LAB_015558b5;
                }
                if (local_2c == 4) {
                  FUN_0043e1a0(&local_280,local_80);
                  iVar11 = FUN_00416db0(local_280,&DAT_015564c0);
                  if (iVar11 == 0) goto LAB_015558b5;
                }
                if (local_2c == 8) {
                  FUN_0043e1a0(&local_288,local_80);
                  FUN_00416db0(local_288,&DAT_015564c0);
                }
              }
LAB_015558b5:
              cVar5 = FUN_00e0f5e0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x938),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),local_80);
              if (cVar5 == '\0') {
                *(undefined4 *)(*(longlong *)(param_1 + 0x270) + 0x928) = 1;
              }
              else {
                FUN_00e10680(lVar14,&local_290,local_80);
                FUN_00414b50(&local_80,local_290);
                cVar5 = FUN_015755e0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8d0),
                                     *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),
                                     &local_a0);
                if (cVar5 != '\0') {
                  FUN_0043e1a0(&local_298,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x20));
                  iVar15 = FUN_00416db0(local_298,L"real");
                  if (iVar15 == 0) {
                    *(undefined1 *)(local_a0 + 0x48) = 2;
                  }
                  else if (local_2c != 0) {
                    *(undefined1 *)(local_a0 + 0x48) = 1;
                    *(int *)(local_a0 + 0x4c) = local_2c;
                    *(undefined1 *)(local_a0 + 0x4a) = 0;
                    FUN_00415dd0(param_1 + 0x100,local_80,0);
                    FUN_00414480(&local_a8);
                    if (bVar3) {
                      FUN_00414ad0(local_a0 + 0x60,local_80);
                      *(undefined1 *)(local_a0 + 0x4a) = 1;
                      local_91[0] = '\0';
                    }
                    else if (local_45 == '\0') {
                      uVar12 = FUN_004425e0(*(longlong *)(param_1 + 0x270) + 0x4be,
                                            *(undefined8 *)(param_1 + 0x100));
                      local_91[0] = _ProcessMCUPins(*(undefined8 *)
                                                     (*(longlong *)(param_1 + 0x270) + 0xa20),uVar12
                                                    ,local_2c,&local_e8,local_dc,&local_d8,local_d4)
                      ;
                      if (local_91[0] != '\0') {
                        FUN_00442ae0(&local_2a0,local_e8);
                        FUN_00416880(&local_a8,local_2a0);
                      }
                    }
                    else {
                      FUN_00416880(&local_2a8,*(undefined8 *)(param_1 + 0x100));
                      local_d8 = FUN_01604bc0(local_2a8,&local_a8,local_91);
                    }
                    if (local_91[0] != '\0') {
                      *(undefined1 *)(local_a0 + 0x49) = 1;
                      FUN_00414ad0(local_a0 + 0x58,local_a8);
                      *(undefined4 *)(local_a0 + 0x50) = local_d8;
                    }
                  }
                }
                if ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x28) == 0) ||
                   (cVar5 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270)), cVar5 == '\0')) {
                  FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_80,
                               &DAT_0155644c,*(undefined8 *)(param_1 + 0x218));
                }
                else {
                  FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_80,
                               &DAT_0155644c,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28))
                  ;
                }
                if (local_2bc <
                    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10) + -1) {
                  FUN_00416ad0(param_1 + 0x228,&DAT_015560a4);
                }
                iVar11 = 0;
                if (*(longlong *)(param_1 + 0x228) != 0) {
                  iVar11 = *(int *)(*(longlong *)(param_1 + 0x228) + -4);
                }
                iVar15 = local_2bc;
                if ((0x28 < iVar11) && (*(int *)(param_1 + 0x17c) == 1)) {
                  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
                  (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
                  FUN_00414480();
                }
              }
              local_2bc = local_2bc + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          if (*(int *)(param_1 + 0x17c) == 1) {
            local_2c8 = 0;
            if (*(longlong *)(param_1 + 0x228) != 0) {
              local_2c8 = *(int *)(*(longlong *)(param_1 + 0x228) + -4);
            }
            if (*(longlong *)(param_1 + 0x228) == 0) {
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
              iVar8 = (**(code **)(*plVar2 + 0x28))(plVar2);
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
              (**(code **)(*plVar2 + 0x18))(plVar2,local_68,iVar8 + -1);
              iVar8 = 0;
              if (local_68[0] != 0) {
                iVar8 = *(int *)(local_68[0] + -4);
              }
              if ((1 < iVar8) && (*(short *)(local_68[0] + -2 + (longlong)(iVar8 + -1) * 2) == 0x2c)
                 ) {
                FUN_00416e20(local_68,iVar8 + -1,2);
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
                iVar8 = (**(code **)(*plVar2 + 0x28))(plVar2);
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
                (**(code **)(*plVar2 + 0x40))(plVar2,iVar8 + -1,local_68[0]);
              }
            }
          }
          if (((iVar15 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10) + -1
               ) && (1 < local_2c8)) && (*(int *)(param_1 + 0x17c) == 1)) {
            FUN_00416e20(param_1 + 0x228,local_2c8 + -1,2);
          }
          if (*(int *)(param_1 + 0x17c) == 1) {
            FUN_00416cd0(param_1 + 0x228,3,*(undefined8 *)(param_1 + 0x110),
                         *(undefined8 *)(param_1 + 0x228),&DAT_01556314);
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
            (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
          }
          if (((*(char *)(*(longlong *)(param_1 + 0x270) + 0x930) != '\0') && (local_45 == '\0')) &&
             (!bVar3)) {
            _FreeSimulatorObject(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0xa20));
          }
        }
      }
      else {
        bVar4 = 1;
        FUN_01d3f0e0(&local_f8,*(undefined2 *)(*(longlong *)(param_1 + 0x208) + 8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
        FUN_00414b50(param_1 + 0x138,local_f8);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x40);
        (**(code **)(*plVar2 + 0x288))(plVar2,local_68 + 2);
        FUN_015502b0(*(undefined8 *)(param_1 + 0x270),&local_100,*(undefined8 *)(param_1 + 0x208));
        FUN_00414b50(param_1 + 0x118,local_100);
        FUN_00416cd0(*(longlong *)(param_1 + 0x270) + 0x7b0,5,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x7b0),local_68[2],
                     &DAT_01556094,*(undefined8 *)(param_1 + 0x118),&DAT_015560a4);
        FUN_0154fc70(*(undefined8 *)(param_1 + 0x270),&local_88,*(undefined8 *)(param_1 + 0x118));
        FUN_00416ba0(&local_110,&DAT_015560b8,local_88);
        FUN_0043e1a0(&local_108,local_110);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
        iVar8 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_108);
        *(int *)(*(longlong *)(param_1 + 0x270) + 0x928) = iVar8;
        if (iVar8 < 0) {
          FUN_00416ba0(&local_120,local_88,L": can\'t found in components.txt");
          FUN_015fcf20(local_120,0,0,0);
        }
        else {
          local_2bc = iVar8 + 1;
          do {
            local_2bc = local_2bc + 1;
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
            (**(code **)(*plVar2 + 0x18))(plVar2,&local_118,local_2bc);
            iVar8 = FUN_004170c0(&DAT_015560c8,local_118,1);
          } while (iVar8 < 1);
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_80,local_2bc);
        FUN_00416dc0(&local_80,local_80,4,0xff);
        uVar12 = FUN_015f2580(local_80);
        *(undefined8 *)(param_1 + 0x170) = uVar12;
        uVar6 = FUN_01601b80(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),param_1 + 0x238,
                             param_1 + 0x237,param_1 + 0x236);
        *(undefined1 *)(param_1 + 0x137) = uVar6;
        if (0 < *(int *)(param_1 + 0x238)) {
          FUN_015f1c60(&local_128,*(undefined1 *)(param_1 + 0x237));
          FUN_00416cd0(param_1 + 0x128,3,&DAT_01556128,local_128,&DAT_01556128);
        }
        if (1 < *(int *)(param_1 + 0x238)) {
          FUN_015f1c60(&local_130,*(undefined1 *)(param_1 + 0x236));
          FUN_00416cd0(param_1 + 0x120,3,&DAT_01556128,local_130,&DAT_01556128);
        }
        if (*(char *)(param_1 + 0x137) == '\0') {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x40);
          (**(code **)(*plVar2 + 0x288))(plVar2,&local_1d8);
          FUN_015f0d60(&local_1d0,local_1d8,0xfffffffd,0,0);
          FUN_00416880(local_68 + 2,local_1d0);
          if (local_68[2] == 0) {
            FUN_01d43440(&local_1e0,local_2c4);
            FUN_00416cd0(local_68 + 3,3,*(undefined8 *)(param_1 + 0x138),&DAT_015561f8,local_1e0);
          }
          else {
            FUN_00414b50(local_68 + 3,local_68[2]);
          }
          if (*(int *)(*(longlong *)(param_1 + 0x208) + 8) == 0x8f) {
            FUN_017ff4a0(plVar2,&local_1e8);
            FUN_00416cd0(param_1 + 0x228,3,L" PS2_Keyboard_",local_1e8,&DAT_01556234);
          }
          else if (*(int *)(*(longlong *)(param_1 + 0x208) + 8) == 0x34) {
            FUN_017ff4a0(plVar2,&local_1f0);
            FUN_00416cd0(param_1 + 0x228,3,L" Switch1_",local_1f0,&DAT_01556234);
          }
          else if (*(int *)(*(longlong *)(param_1 + 0x208) + 8) == 0x3b) {
            FUN_017ff4a0(plVar2,&local_1f8);
            FUN_00416cd0(param_1 + 0x228,3,L" Alt_Switch_",local_1f8,&DAT_01556234);
          }
          else {
            cVar5 = FUN_01d3f310(*(undefined4 *)(*(longlong *)(param_1 + 0x208) + 8),&local_34);
            if (cVar5 == '\0') {
              if (*(int *)(*(longlong *)(param_1 + 0x208) + 8) == 0x5dd) {
                FUN_017ff4a0(plVar2,&local_210);
                FUN_00416cd0(param_1 + 0x228,3,L" HEXKEYPAD_",local_210,&DAT_01556234);
              }
              else {
                FUN_0154b5f0(&local_218,plVar2);
                FUN_00416cd0(param_1 + 0x228,5,&DAT_01556094,local_68[3],L"_cmp_id_",local_218,
                             &DAT_01556234);
              }
            }
            else {
              FUN_01d43440(&local_200,local_34);
              FUN_017ff4a0(plVar2,&local_208);
              FUN_00416cd0(param_1 + 0x228,5,L" DIP",local_200,&DAT_015561f8,local_208,&DAT_01556234
                          );
            }
          }
          if (*(int *)(param_1 + 0x17c) == 1) {
            FUN_00416ad0(param_1 + 0x228,*(undefined8 *)(param_1 + 0x118));
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
            (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x208) + 8);
            if ((((iVar8 != 0x8f) && (iVar8 != 0x3ef)) &&
                ((((iVar8 != 0x44f && (((iVar8 != 0x34 && (iVar8 != 0x3b)) && (iVar8 != 0x462)))) &&
                  ((iVar8 != 0x2903 && (iVar8 != 0x464)))) && (iVar8 != 0x43)))) &&
               (((cVar5 = FUN_01d3f2d0(iVar8), cVar5 == '\0' &&
                 (*(int *)(*(longlong *)(param_1 + 0x208) + 8) != 0x5dd)) &&
                ((*(int *)(*(longlong *)(param_1 + 0x208) + 8) != 0xa8 &&
                 (*(int *)(*(longlong *)(param_1 + 0x208) + 8) != 0x118)))))) {
              FUN_0156f9a0(*(undefined8 *)(param_1 + 0x208),&local_220,
                           *(undefined8 *)(param_1 + 0x270),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 8),
                           *(undefined1 *)(*(longlong *)(param_1 + 0x270) + 0x955));
              FUN_00414b50(param_1 + 0x228,local_220);
              if (*(longlong *)(param_1 + 0x228) != 0) {
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
                (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
              }
            }
          }
          FUN_00414b50(param_1 + 0x228,L"  PORT MAP (");
          FUN_01551ca0(param_1,*(undefined8 *)(param_1 + 0x118));
          if (*(int *)(param_1 + 0x17c) == 1) {
            FUN_00416ad0(param_1 + 0x228,&DAT_01556314);
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
            (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
          }
          FUN_00410f20(*(undefined8 *)(param_1 + 0x170));
        }
        else {
          lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x40) + 0x528);
          if (lVar14 == 0) {
LAB_0155469d:
            uVar10 = *(uint *)(*(longlong *)(param_1 + 0x208) + 8);
          }
          else {
            uVar9 = FUN_01d03160(lVar14);
            cVar5 = FUN_01d3d5c0(uVar9);
            if (cVar5 == '\0') goto LAB_0155469d;
            uVar7 = FUN_01d03160(lVar14);
            uVar10 = (uint)uVar7;
          }
          FUN_0154b550(local_1b0,uVar10);
          puVar16 = local_1b0;
          puVar17 = (undefined8 *)(param_1 + 0x18c);
          for (lVar14 = 0xf; lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10);
          if (iVar8 == 0) {
            FUN_00416ba0(&local_1b8,local_88,L": port count is 0, devices.ddb may old");
            FUN_015fcf20(local_1b8,0,0,0);
          }
          local_2bc = 0;
          iVar15 = iVar8;
          if (-1 < iVar8 + -1) {
            do {
              if (iVar8 + -1 < local_2bc) {
                *(undefined8 *)(param_1 + 0x180) = 0;
              }
              else {
                uVar12 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28),
                                      *(int *)(param_1 + 0x18c + (longlong)(local_2bc + 1) * 4) + -1
                                     );
                *(undefined8 *)(param_1 + 0x180) = uVar12;
              }
              if (*(longlong *)(param_1 + 0x180) != 0) {
                uVar12 = FUN_01571ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x750),
                                      *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30));
                *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x28) = uVar12;
                if ((*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x28) == 0) ||
                   (*(char *)(*(longlong *)(param_1 + 0x180) + 0x99) == '\0')) {
                  FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_1c8,
                               *(undefined8 *)(param_1 + 0x180));
                  FUN_00414b50(param_1 + 0x218,local_1c8);
                }
                else {
                  FUN_01571a60(*(undefined8 *)(param_1 + 0x180),&local_1c0);
                  FUN_00414b50(param_1 + 0x218,local_1c0);
                }
                if (*(int *)(param_1 + 0x17c) == 0) {
                  FUN_01575810(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8d0),
                               *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),
                               *(undefined8 *)(param_1 + 0x218));
                }
                (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))
                          (*(longlong **)(param_1 + 0x170),&local_c8,local_2bc);
                iVar11 = FUN_00416db0(local_c8,&DAT_01556194);
                if ((iVar11 == 0) || (iVar11 = FUN_00416db0(local_c8,L"qNot"), iVar11 == 0)) {
                  iVar11 = FUN_00416db0(local_c8,&DAT_01556194);
                  if (iVar11 == 0) {
                    FUN_00414b50(&local_d0,*(undefined8 *)(param_1 + 0x128));
                  }
                  iVar11 = FUN_00416db0(local_c8,L"qNot");
                  if (iVar11 == 0) {
                    FUN_00414b50(&local_d0,*(undefined8 *)(param_1 + 0x120));
                  }
                  if ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x28) == 0) ||
                     (cVar5 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270)), cVar5 == '\0')) {
                    FUN_00416cd0(param_1 + 0x228,5,&DAT_015561bc,*(undefined8 *)(param_1 + 0x218),
                                 L" <= ",local_d0,&DAT_015561e8);
                  }
                  else {
                    FUN_00416cd0(param_1 + 0x228,5,&DAT_015561bc,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),L" <= ",
                                 local_d0,&DAT_015561e8);
                  }
                  if (*(int *)(param_1 + 0x17c) == 1) {
                    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
                    (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x228));
                  }
                }
              }
              local_2bc = local_2bc + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
      }
      local_2c4 = local_2c4 + 1;
      local_2ac = local_2ac + -1;
    } while (local_2ac != 0);
  }
  if (((bool)(bVar4 & *(int *)(param_1 + 0x17c) == 1)) &&
     (cVar5 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270)), cVar5 != '\0')) {
    FUN_0154f560(*(undefined8 *)(param_1 + 0x270));
  }
  if ((bool)(bVar4 & *(int *)(param_1 + 0x17c) == 1)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
    (**(code **)(*plVar2 + 0x78))(plVar2,0);
  }
  FUN_00414480(&local_2a8);
  FUN_004144d0(&local_2a0);
  FUN_00414560(&local_298,6);
  FUN_00414590(&local_268,4);
  FUN_00414560(&local_248,0xf);
  FUN_004144d0(&local_1d0);
  FUN_00414560(&local_1c8,3);
  FUN_00414560(&local_130,9);
  FUN_00414560(&local_d0,6);
  FUN_00414560(&local_88,8);
  return;
}

