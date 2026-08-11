/* Ghidra address: 015232c0 */
/* Ghidra symbol: FUN_015232c0 */


/* WARNING: Removing unreachable block (ram,0x015234b5) */
/* WARNING: Type propagation algorithm not settling */

void FUN_015232c0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  double *pdVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  short *psVar17;
  uint *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined1 local_261;
  longlong *local_250;
  byte local_245;
  int local_244;
  int local_23c;
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
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined1 local_191;
  undefined1 local_190 [14];
  undefined1 local_182;
  undefined1 local_181;
  char *local_180;
  uint local_178;
  uint local_174 [8];
  uint local_154 [4];
  uint local_144;
  uint local_140;
  uint auStack_d8 [6];
  uint local_c0;
  uint local_bc;
  int local_34;
  int local_30;
  undefined1 local_29;
  
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  if (*PTR_DAT_02002b78 != '\0') {
    plVar10 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x3fe);
    FUN_01d38290(plVar10,1);
    pdVar11 = (double *)FUN_01cfde70(plVar10,1,0,&local_181,&local_182,&local_191);
    *pdVar11 = 1.0 / ((*(double *)(PTR_DAT_02004010 + 0x7e0) / *(double *)(PTR_DAT_02004010 + 0x7e8)
                      ) / 20.0);
    (**(code **)(*plVar10 + 0x208))(plVar10,0,0,0);
    uVar12 = FUN_019a4600();
    iVar6 = FUN_019954d0(uVar12);
    (**(code **)(*plVar10 + 0x208))(plVar10,1,iVar6 + 1,0);
    DAT_0210ed38 = plVar10;
  }
  puVar13 = (undefined1 *)FUN_00409570(0x10);
  uVar12 = FUN_019a4600();
  cVar2 = FUN_01995600(uVar12,0,0);
  if (cVar2 == '\0') {
    FUN_01d426b0(2000,&DAT_01525f30);
  }
  *(undefined1 *)(param_1 + 0x19c50) = 0;
  *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x19c58) + -4 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = 0;
  bVar1 = *(byte *)(param_1 + 0x19c50);
  *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)bVar1 + 3) = 0;
  *(undefined8 *)(param_1 + 0x1a5d0 + (ulonglong)bVar1 * 8) = 0;
  local_178 = 0;
  FUN_01aaa9a0(param_1,1,&local_178);
  local_245 = 1;
  uVar12 = FUN_019a45d0();
  FUN_01994230(uVar12);
  bVar23 = false;
  uVar12 = FUN_019a4600();
  FUN_019a4690(uVar12,&local_30,&local_34);
  uVar12 = FUN_019a4600();
  iVar6 = FUN_019954d0(uVar12);
  uVar12 = FUN_019a4600();
  local_250 = (longlong *)FUN_01995660(uVar12,0,0);
  while (((*PTR_DAT_02002ce0 == '\0' && (local_250 != (longlong *)0x0)) && (!bVar23))) {
    plVar14 = (longlong *)FUN_01c7c7d0(*(undefined8 *)PTR_DAT_02004e40,local_250);
    plVar10 = local_250;
    if (plVar14 != (longlong *)0x0) {
      iVar7 = (**(code **)(*plVar14 + 0x1c8))();
      iVar21 = 0;
      plVar10 = plVar14;
      if (-1 < iVar7 + -1) {
        do {
          uVar8 = (**(code **)(*local_250 + 0x210))(local_250,iVar21);
          (**(code **)(*plVar14 + 0x208))(plVar14,iVar21,uVar8,0);
          iVar21 = iVar21 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    local_250 = plVar10;
    uVar5 = (**(code **)(*local_250 + 0xf8))(local_250);
    uVar22 = (uint)uVar5;
    if (((uVar22 < 1000) && (cVar2 = FUN_01aa12d0(uVar22), cVar2 != '\0')) || (0x7fffffff < uVar22))
    {
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_1b8,0x519);
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_1c0,0x51a);
      FUN_00416ad0(&local_1b8,local_1c0);
      FUN_016fd8d0(local_1b8);
      goto LAB_01525e94;
    }
    auStack_d8[1] = (**(code **)(*local_250 + 0x210))(local_250,0);
    iVar7 = 0;
    while (*PTR_DAT_02002ce0 == '\0') {
      iVar21 = (**(code **)(*local_250 + 0x1c8))(local_250);
      if (iVar21 <= iVar7) break;
      uVar9 = (**(code **)(*local_250 + 0x210))(local_250,iVar7 + 1);
      auStack_d8[iVar7 + 2] = uVar9;
      iVar7 = iVar7 + 1;
    }
    iVar7 = FUN_01cfd2d0();
    local_244 = 0;
    if (-1 < iVar7 + -1) {
      do {
        uVar12 = FUN_01cfd030(local_250,local_244);
        bVar1 = (byte)uVar12;
        if (bVar1 < 8) {
          bVar23 = ((int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1) << (bVar1 & 0x1f) & 0x90U) != 0;
        }
        else {
          bVar23 = false;
        }
        if (bVar23) {
          bVar3 = FUN_014b82b0(local_250,local_244,&local_1a0);
          if ((local_245 & bVar3) != 0) {
            lVar15 = FUN_017ff660(local_250);
            lVar16 = FUN_019a45d0();
            if (lVar15 == lVar16) {
              uVar12 = FUN_019a45d0();
              FUN_01993f30(uVar12,local_250,1);
            }
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_1d0,0x10d);
            local_1e0 = local_1a0;
            local_1d8 = 0x11;
            FUN_00442f70(&local_1c8,local_1d0,&local_1e0);
            plVar10 = (longlong *)FUN_0072d3f0(local_1c8,0,0x683);
            FUN_0064cf60(plVar10,0x1587);
            iVar21 = FUN_00654c00();
            local_23c = 0;
            if (-1 < iVar21 + -1) {
              do {
                uVar12 = FUN_00654bc0(plVar10,local_23c);
                cVar2 = FUN_004113d0(uVar12,&PTR_FUN_00673008);
                if (cVar2 != '\0') {
                  lVar15 = FUN_00654bc0(plVar10,local_23c);
                  if (*(int *)(lVar15 + 0x4f0) == 0xc) {
                    uVar12 = FUN_00654bc0(plVar10,local_23c);
                    FUN_0064de00(uVar12,L"Edit");
                  }
                }
                local_23c = local_23c + 1;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            sVar4 = (**(code **)(*plVar10 + 0x2d0))(plVar10);
            FUN_00410f20(plVar10);
            if (sVar4 == 0xc) {
              if (bVar1 == 4) {
                plVar10 = (longlong *)
                          FUN_013ef440(&PTR_FUN_013ee858,1,*(undefined8 *)PTR_DAT_02004030,local_250
                                       ,local_244);
              }
              else {
                plVar10 = (longlong *)
                          FUN_013f2070(&PTR_FUN_013f0eb8,1,*(undefined8 *)PTR_DAT_02004030,local_250
                                       ,local_244);
              }
              iVar21 = (**(code **)(*plVar10 + 0x2d0))(plVar10);
              if (iVar21 == 1) {
                uVar12 = FUN_019a45d0();
                FUN_0199e310(uVar12,0,1);
              }
              FUN_00410f20(plVar10);
              uVar12 = FUN_019a45d0();
              FUN_01994230(uVar12);
            }
            if (sVar4 == 6) {
              uVar12 = FUN_019a45d0();
              FUN_01994230(uVar12);
            }
            if (sVar4 == 0xe) {
              local_245 = 0;
              uVar12 = FUN_019a45d0();
              FUN_01994230(uVar12);
            }
            if (sVar4 == 7) {
              *PTR_DAT_02002ce0 = 1;
            }
          }
        }
        local_244 = local_244 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*PTR_DAT_02002ce0 != '\0') break;
    iVar7 = 0;
    if (uVar22 < 0x3f3) {
      if (uVar22 == 0x3f2) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_154[2] = auStack_d8[3];
        local_174[0] = auStack_d8[4];
        uVar12 = FUN_01522850(param_1,local_250);
        iVar7 = FUN_01aa9090(param_1,4,local_154,local_174,uVar12,local_250);
      }
      else if (uVar22 < 0x8c) {
        if (uVar22 == 0x8b) {
          iVar7 = 8;
          puVar18 = auStack_d8;
          puVar19 = local_154;
          do {
            puVar18 = puVar18 + 1;
            *puVar19 = *puVar18;
            puVar19 = puVar19 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar12 = FUN_015226a0(param_1);
          iVar7 = FUN_01aa9090(param_1,0x2c,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 < 0x7e) {
          if (uVar22 == 0x7d) {
            local_154[0] = auStack_d8[1];
            local_174[0] = auStack_d8[2];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x21,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 < 0x34) {
            if (uVar22 == 0x33) {
              local_154[0] = auStack_d8[1];
              local_154[1] = auStack_d8[2];
              uVar12 = FUN_015226a0(param_1);
              iVar7 = FUN_01aa9090(param_1,0x2e,local_154,local_174,uVar12,local_250);
            }
            else if (uVar22 == 0xe) {
LAB_015256d9:
              if (199 < *(byte *)(param_1 + 0x19c50)) {
                uVar12 = FUN_00b89270();
                FUN_00b8e520(uVar12,&local_1f8,0x51f);
                FUN_016fd8d0(local_1f8);
                *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
              }
              *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
              *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 +
                       (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = auStack_d8[1];
              local_261 = 1;
              *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3)
                   = 1;
              *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) =
                   local_250;
              local_178 = auStack_d8[1];
              FUN_01aaa9a0(param_1,1,&local_178);
            }
            else if (uVar22 == 0x2c) {
              local_154[0] = auStack_d8[1];
              local_154[1] = auStack_d8[2];
              uVar12 = FUN_015226a0(param_1);
              iVar7 = FUN_01aa9090(param_1,0x2f,local_154,local_174,uVar12,local_250);
            }
            else {
              iVar7 = 0;
              if (uVar22 == 0x32) {
                local_154[0] = auStack_d8[1];
                local_154[1] = auStack_d8[2];
                uVar12 = FUN_015226a0(param_1);
                iVar7 = FUN_01aa9090(param_1,0x27,local_154,local_174,uVar12,local_250);
              }
            }
          }
          else if (uVar22 == 0x34) {
            local_154[0] = auStack_d8[1];
            local_174[0] = auStack_d8[2];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x1f,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x3b) {
            local_154[0] = auStack_d8[2];
            local_154[1] = auStack_d8[3];
            local_174[0] = auStack_d8[1];
            local_174[1] = auStack_d8[1];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x20,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x43) goto LAB_015256d9;
        }
        else if (uVar22 < 0x89) {
          if (uVar22 == 0x88) {
            iVar7 = 4;
            puVar18 = auStack_d8;
            puVar19 = local_174;
            do {
              puVar18 = puVar18 + 1;
              *puVar19 = *puVar18;
              puVar19 = puVar19 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x2a,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x7e) {
            local_154[0] = auStack_d8[2];
            local_174[0] = auStack_d8[1];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x22,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x81) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_154[2] = auStack_d8[3];
            local_154[3] = auStack_d8[4];
            local_144 = auStack_d8[5];
            local_140 = local_c0;
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x28,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x87) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_154[2] = auStack_d8[3];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x29,local_154,local_174,uVar12,local_250);
          }
        }
        else if (uVar22 == 0x89) {
          iVar7 = 8;
          puVar18 = auStack_d8;
          puVar19 = local_174;
          do {
            puVar18 = puVar18 + 1;
            *puVar19 = *puVar18;
            puVar19 = puVar19 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar12 = FUN_015226a0(param_1);
          iVar7 = FUN_01aa9090(param_1,0x2d,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 == 0x8a) {
          iVar7 = 4;
          puVar18 = auStack_d8;
          puVar19 = local_154;
          do {
            puVar18 = puVar18 + 1;
            *puVar19 = *puVar18;
            puVar19 = puVar19 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar12 = FUN_015226a0(param_1);
          iVar7 = FUN_01aa9090(param_1,0x2b,local_154,local_174,uVar12,local_250);
        }
      }
      else if (uVar22 < 0x3ec) {
        if (uVar22 == 0x3eb) {
          iVar7 = (**(code **)(*local_250 + 0x1c8))(local_250);
          uVar12 = FUN_01522850(param_1,local_250);
          if (iVar7 == 3) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_174[0] = auStack_d8[3];
          }
          else {
            iVar21 = iVar7 + -1;
            if (0 < iVar21) {
              puVar18 = auStack_d8;
              puVar19 = local_154;
              do {
                puVar18 = puVar18 + 1;
                *puVar19 = *puVar18;
                puVar19 = puVar19 + 1;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            local_174[0] = auStack_d8[iVar7];
          }
          iVar7 = FUN_01aa9090(param_1,6,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 < 0xf3) {
          if (uVar22 == 0xf2) {
            local_154[0] = auStack_d8[3];
            local_154[1] = auStack_d8[3];
            local_174[0] = auStack_d8[2];
            local_174[1] = auStack_d8[1];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x26,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 - 0xe6 < 3) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x23,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0xf0) {
            local_154[0] = auStack_d8[1];
            local_174[0] = auStack_d8[2];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x24,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0xf1) {
            local_154[0] = auStack_d8[1];
            local_174[0] = auStack_d8[2];
            uVar12 = FUN_015226a0(param_1);
            iVar7 = FUN_01aa9090(param_1,0x25,local_154,local_174,uVar12,local_250);
          }
        }
        else if (uVar22 == 0x3e9) {
          local_154[0] = auStack_d8[1];
          local_174[0] = auStack_d8[2];
          FUN_01cfde70(local_250,6,1,&local_181,&local_182,&local_29);
          uVar12 = FUN_01522850(param_1,local_250);
          iVar7 = FUN_01aa9090(param_1,1,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 == 0x3ea) {
          iVar7 = (**(code **)(*local_250 + 0x1c8))(local_250);
          uVar12 = FUN_01522850(param_1,local_250);
          if (iVar7 == 3) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_174[0] = auStack_d8[3];
          }
          else {
            iVar21 = iVar7 + -1;
            if (0 < iVar21) {
              puVar18 = auStack_d8;
              puVar19 = local_154;
              do {
                puVar18 = puVar18 + 1;
                *puVar19 = *puVar18;
                puVar19 = puVar19 + 1;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            local_174[0] = auStack_d8[iVar7];
          }
          iVar7 = FUN_01aa9090(param_1,3,local_154,local_174,uVar12,local_250);
        }
      }
      else if (uVar22 < 0x3f0) {
        if (uVar22 == 0x3ef) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[2];
          local_174[0] = auStack_d8[3];
          uVar12 = FUN_01523180(param_1,local_250);
          iVar7 = FUN_01aa9090(param_1,0x11,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 == 0x3ec) {
          if (auStack_d8[1] != 0) {
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_1e8,0x51e);
            FUN_016fd8d0(local_1e8);
          }
          if (199 < *(byte *)(param_1 + 0x19c50)) {
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_1f0,0x51f);
            FUN_016fd8d0(local_1f0);
            *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
          }
          *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
          *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 +
                   (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = auStack_d8[2];
          local_261 = FUN_00de9350(0xbff0000000000000,local_250,local_190);
          *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3) =
               local_261;
          *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) =
               local_250;
          local_178 = auStack_d8[2];
          FUN_01aaa9a0(param_1,1,&local_178);
        }
        else if (uVar22 == 0x3ed) {
          iVar7 = (**(code **)(*local_250 + 0x1c8))(local_250);
          uVar12 = FUN_01522850(param_1,local_250);
          if (iVar7 == 3) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_174[0] = auStack_d8[3];
          }
          else {
            iVar21 = iVar7 + -1;
            if (0 < iVar21) {
              puVar18 = auStack_d8;
              puVar19 = local_154;
              do {
                puVar18 = puVar18 + 1;
                *puVar19 = *puVar18;
                puVar19 = puVar19 + 1;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            local_174[0] = auStack_d8[iVar7];
          }
          iVar7 = FUN_01aa9090(param_1,9,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 == 0x3ee) {
          local_154[0] = auStack_d8[1];
          local_174[0] = auStack_d8[2];
          uVar12 = FUN_01522bc0(param_1,local_250);
          iVar7 = FUN_01aa9090(param_1,1,local_154,local_174,uVar12,local_250);
        }
      }
      else if (uVar22 == 0x3f0) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_154[2] = auStack_d8[4];
        local_174[0] = auStack_d8[3];
        uVar12 = FUN_01522c80(param_1,local_250);
        *(longlong **)(puVar13 + 8) = local_250;
        psVar17 = (short *)FUN_01cfde70(*(undefined8 *)(puVar13 + 8),1,3,&local_181,&local_182,
                                        &local_29);
        sVar4 = *psVar17;
        if (sVar4 == 1) {
          *puVar13 = 1;
        }
        else if (sVar4 == 2) {
          *puVar13 = 2;
        }
        else if (sVar4 == 3) {
          *puVar13 = 3;
        }
        else if (sVar4 == 4) {
          *puVar13 = 4;
        }
        iVar7 = FUN_01aa9090(param_1,0x15,local_154,local_174,uVar12,puVar13);
      }
      else if (uVar22 == 0x3f1) {
        iVar7 = (**(code **)(*local_250 + 0x1c8))(local_250);
        uVar12 = FUN_01522850(param_1,local_250);
        if (iVar7 == 3) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[2];
          local_174[0] = auStack_d8[3];
        }
        else {
          iVar21 = iVar7 + -1;
          if (0 < iVar21) {
            puVar18 = auStack_d8;
            puVar19 = local_154;
            do {
              puVar18 = puVar18 + 1;
              *puVar19 = *puVar18;
              puVar19 = puVar19 + 1;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
          local_174[0] = auStack_d8[iVar7];
        }
        iVar7 = FUN_01aa9090(param_1,0xc,local_154,local_174,uVar12,local_250);
      }
    }
    else if (uVar22 < 0x45f) {
      if (uVar22 == 0x45e) {
        local_154[0] = auStack_d8[1];
        local_174[0] = auStack_d8[2];
        iVar7 = FUN_01aa9090(param_1,0x19,local_154,local_174,0,local_250);
      }
      else if (uVar22 < 0x3fa) {
        if (uVar22 == 0x3f9) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[2];
          local_174[0] = auStack_d8[3];
          uVar12 = FUN_01522850(param_1,local_250);
          iVar7 = FUN_01aa9090(param_1,0xf,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 < 0x3f7) {
          if (uVar22 == 0x3f6) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[3];
            local_154[2] = auStack_d8[4];
            local_154[3] = local_bc;
            local_144 = auStack_d8[2];
            local_174[0] = local_c0;
            local_174[1] = auStack_d8[5];
            uVar12 = FUN_01522f00(param_1,local_250);
            *(longlong **)(puVar13 + 8) = local_250;
            psVar17 = (short *)FUN_01cfde70(*(undefined8 *)(puVar13 + 8),1,3,&local_181,&local_182,
                                            &local_29);
            sVar4 = *psVar17;
            if (sVar4 == 1) {
              *puVar13 = 1;
            }
            else if (sVar4 == 2) {
              *puVar13 = 2;
            }
            else if (sVar4 == 3) {
              *puVar13 = 3;
            }
            else if (sVar4 == 4) {
              *puVar13 = 4;
            }
            iVar7 = FUN_01aa9090(param_1,0x14,local_154,local_174,uVar12,puVar13);
          }
          else if (uVar22 == 0x3f3) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_154[2] = auStack_d8[3];
            local_174[0] = auStack_d8[4];
            uVar12 = FUN_01522850(param_1,local_250);
            iVar7 = FUN_01aa9090(param_1,10,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x3f4) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_154[2] = auStack_d8[3];
            local_174[0] = auStack_d8[4];
            uVar12 = FUN_01522850(param_1,local_250);
            iVar7 = FUN_01aa9090(param_1,7,local_154,local_174,uVar12,local_250);
          }
          else if (uVar22 == 0x3f5) {
            local_154[0] = auStack_d8[1];
            local_154[1] = auStack_d8[2];
            local_154[2] = auStack_d8[3];
            local_174[0] = auStack_d8[4];
            uVar12 = FUN_01522850(param_1,local_250);
            iVar7 = FUN_01aa9090(param_1,0xd,local_154,local_174,uVar12,local_250);
          }
        }
        else if (uVar22 == 0x3f7) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[3];
          local_154[2] = local_c0;
          local_154[3] = auStack_d8[2];
          local_174[0] = auStack_d8[5];
          local_174[1] = auStack_d8[4];
          uVar12 = FUN_01523040(param_1,local_250);
          *(longlong **)(puVar13 + 8) = local_250;
          psVar17 = (short *)FUN_01cfde70(*(undefined8 *)(puVar13 + 8),1,3,&local_181,&local_182,
                                          &local_29);
          sVar4 = *psVar17;
          if (sVar4 == 1) {
            *puVar13 = 1;
          }
          else if (sVar4 == 2) {
            *puVar13 = 2;
          }
          else if (sVar4 == 3) {
            *puVar13 = 3;
          }
          else if (sVar4 == 4) {
            *puVar13 = 4;
          }
          iVar7 = FUN_01aa9090(param_1,0x13,local_154,local_174,uVar12,puVar13);
        }
        else if (uVar22 == 0x3f8) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[2];
          local_154[2] = auStack_d8[3];
          local_154[3] = auStack_d8[4];
          local_174[0] = auStack_d8[5];
          uVar12 = FUN_01522850(param_1,local_250);
          iVar7 = FUN_01aa9090(param_1,0xb,local_154,local_174,uVar12,local_250);
        }
      }
      else if (uVar22 < 0x44e) {
        if (uVar22 == 0x44d) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[3];
          local_154[2] = auStack_d8[4];
          local_154[3] = auStack_d8[2];
          local_174[0] = local_c0;
          local_174[1] = auStack_d8[5];
          uVar12 = FUN_01522f00(param_1,local_250);
          *(longlong **)(puVar13 + 8) = local_250;
          psVar17 = (short *)FUN_01cfde70(*(undefined8 *)(puVar13 + 8),1,3,&local_181,&local_182,
                                          &local_29);
          sVar4 = *psVar17;
          if (sVar4 == 1) {
            *puVar13 = 1;
          }
          else if (sVar4 == 2) {
            *puVar13 = 2;
          }
          else if (sVar4 == 3) {
            *puVar13 = 3;
          }
          else if (sVar4 == 4) {
            *puVar13 = 4;
          }
          iVar7 = FUN_01aa9090(param_1,0x1c,local_154,local_174,uVar12,puVar13);
        }
        else if (uVar22 == 0x3fa) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[2];
          local_174[0] = auStack_d8[3];
          uVar12 = FUN_01522850(param_1,local_250);
          iVar7 = FUN_01aa9090(param_1,0x10,local_154,local_174,uVar12,local_250);
        }
        else if (uVar22 == 0x3fe) {
          if (auStack_d8[1] != 0) {
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_210,0x51e);
            FUN_016fd8d0(local_210);
          }
          if (199 < *(byte *)(param_1 + 0x19c50)) {
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_218,0x51f);
            FUN_016fd8d0(local_218);
            *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
          }
          *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
          *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 +
                   (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = auStack_d8[2];
          (**(code **)(*local_250 + 0x2d0))(local_250,6,&local_180);
          cVar2 = *local_180;
          if (cVar2 == '\0') {
            local_261 = 0;
          }
          else if (cVar2 == '\x01') {
            local_261 = 1;
          }
          else if (cVar2 == '\x02') {
            local_261 = 2;
          }
          else if (cVar2 == '\x03') {
            local_261 = 3;
          }
          *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3) =
               local_261;
          *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) =
               local_250;
          local_178 = auStack_d8[2];
          FUN_01aaa9a0(param_1,1,&local_178);
        }
        else if (uVar22 == 0x44c) {
          local_154[0] = auStack_d8[1];
          local_154[1] = auStack_d8[3];
          local_154[2] = local_c0;
          local_154[3] = auStack_d8[2];
          local_174[0] = auStack_d8[5];
          local_174[1] = auStack_d8[4];
          uVar12 = FUN_01522f00(param_1,local_250);
          *(longlong **)(puVar13 + 8) = local_250;
          psVar17 = (short *)FUN_01cfde70(*(undefined8 *)(puVar13 + 8),1,3,&local_181,&local_182,
                                          &local_29);
          sVar4 = *psVar17;
          if (sVar4 == 1) {
            *puVar13 = 1;
          }
          else if (sVar4 == 2) {
            *puVar13 = 2;
          }
          else if (sVar4 == 3) {
            *puVar13 = 3;
          }
          else if (sVar4 == 4) {
            *puVar13 = 4;
          }
          iVar7 = FUN_01aa9090(param_1,0x1b,local_154,local_174,uVar12,puVar13);
        }
      }
      else if (uVar22 == 0x44f) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_154[2] = auStack_d8[3];
        local_154[3] = auStack_d8[4];
        local_174[0] = auStack_d8[5];
        uVar12 = FUN_01522710(param_1,local_250,1,1,4);
        iVar7 = FUN_01aa9090(param_1,0x12,local_154,local_174,uVar12,local_250);
      }
      else if (uVar22 == 0x45d) {
        local_154[0] = auStack_d8[1];
        local_174[0] = auStack_d8[2];
        uVar12 = FUN_01522710(param_1,local_250,1,1,5);
        iVar7 = FUN_01aa9090(param_1,0,local_154,local_174,uVar12,local_250);
      }
    }
    else if (uVar22 < 0x5de) {
      if (uVar22 == 0x5dd) {
        local_174[0] = auStack_d8[2];
        local_174[1] = auStack_d8[3];
        local_174[2] = auStack_d8[4];
        local_174[3] = auStack_d8[5];
        local_154[0] = auStack_d8[1];
        iVar7 = FUN_01aa9090(param_1,0x17,local_154,local_174,0,local_250);
      }
      else if (uVar22 < 0x4b1) {
        if (uVar22 == 0x4b0) {
          if (199 < *(byte *)(param_1 + 0x19c50)) {
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_200,0x51f);
            FUN_016fd8d0(local_200);
            *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
          }
          *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
          *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 +
                   (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = auStack_d8[1];
          local_261 = FUN_00de9350(0xbff0000000000000,local_250,local_190);
          *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3) =
               local_261;
          *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) =
               local_250;
          local_178 = auStack_d8[1];
          FUN_01aaa9a0(param_1,1,&local_178);
        }
        else if (uVar22 == 0x45f) {
          if (199 < *(byte *)(param_1 + 0x19c50)) {
            uVar12 = FUN_00b89270();
            FUN_00b8e520(uVar12,&local_208,0x51f);
            FUN_016fd8d0(local_208);
            *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
          }
          *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
          *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 +
                   (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = auStack_d8[1];
          local_261 = 1;
          *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3) = 1
          ;
          *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) =
               local_250;
          local_178 = auStack_d8[1];
          FUN_01aaa9a0(param_1,1,&local_178);
        }
        else if (uVar22 - 0x460 < 2) {
          local_154[0] = auStack_d8[1];
          iVar7 = FUN_01aa9090(param_1,0x1e,local_154,local_174,0,local_250);
        }
        else if (uVar22 == 0x462) {
          local_154[0] = auStack_d8[1];
          local_174[0] = auStack_d8[2];
          iVar7 = FUN_01aa9090(param_1,0x1a,local_154,local_174,0,local_250);
        }
      }
      else if (uVar22 == 0x4b1) {
        if (199 < *(byte *)(param_1 + 0x19c50)) {
          uVar12 = FUN_00b89270();
          FUN_00b8e520(uVar12,&local_220,0x51f);
          FUN_016fd8d0(local_220);
          *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
        }
        *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
        *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 +
                 (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) = auStack_d8[1];
        (**(code **)(*local_250 + 0x2d0))(local_250,6,&local_180);
        cVar2 = *local_180;
        if (cVar2 == '\0') {
          local_261 = 0;
        }
        else if (cVar2 == '\x01') {
          local_261 = 1;
        }
        else if (cVar2 == '\x02') {
          local_261 = 2;
        }
        else if (cVar2 == '\x03') {
          local_261 = 3;
        }
        *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3) =
             local_261;
        *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) = local_250;
        local_178 = auStack_d8[1];
        FUN_01aaa9a0(param_1,1,&local_178);
      }
      else if (uVar22 == 0x5dc) {
        uVar22 = (uint)*(ushort *)(local_250 + 0x2e);
        if (uVar22 != 0) {
          puVar18 = auStack_d8;
          puVar19 = local_154;
          do {
            puVar18 = puVar18 + 1;
            *puVar19 = *puVar18;
            puVar19 = puVar19 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar5 = *(ushort *)((longlong)local_250 + 0x172);
        uVar20 = (ulonglong)uVar5;
        local_244 = 1;
        if (uVar5 != 0) {
          uVar20 = (ulonglong)(uint)uVar5;
          puVar19 = local_174;
          do {
            *puVar19 = auStack_d8[(int)(local_244 + (uint)*(ushort *)(local_250 + 0x2e))];
            local_244 = local_244 + 1;
            puVar19 = puVar19 + 1;
            uVar22 = (int)uVar20 - 1;
            uVar20 = (ulonglong)uVar22;
          } while (uVar22 != 0);
        }
        iVar7 = FUN_01aa9090(param_1,CONCAT71((int7)(uVar20 >> 8),0x1d),local_154,local_174,0,
                             local_250);
      }
    }
    else if (uVar22 < 0x902) {
      if (uVar22 == 0x901) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_154[2] = auStack_d8[3];
        local_154[3] = auStack_d8[4];
        local_174[0] = auStack_d8[5];
        uVar12 = FUN_01522850(param_1,local_250);
        iVar7 = FUN_01aa9090(param_1,0xe,local_154,local_174,uVar12,local_250);
      }
      else if (uVar22 == 0x889) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_174[0] = auStack_d8[3];
        uVar12 = FUN_01522a80(param_1,local_250);
        iVar7 = FUN_01aa9090(param_1,2,local_154,local_174,uVar12,local_250);
      }
      else if (uVar22 == 0x8ed) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_154[2] = auStack_d8[3];
        local_154[3] = auStack_d8[4];
        local_174[0] = auStack_d8[5];
        uVar12 = FUN_01522850(param_1,local_250);
        iVar7 = FUN_01aa9090(param_1,5,local_154,local_174,uVar12,local_250);
      }
      else if (uVar22 == 0x8f5) {
        local_154[0] = auStack_d8[1];
        local_154[1] = auStack_d8[2];
        local_154[2] = auStack_d8[3];
        local_154[3] = auStack_d8[4];
        local_174[0] = auStack_d8[5];
        uVar12 = FUN_01522850(param_1,local_250);
        iVar7 = FUN_01aa9090(param_1,8,local_154,local_174,uVar12,local_250);
      }
    }
    else if (uVar22 == 0xbb9) {
      iVar7 = 9;
      puVar18 = auStack_d8;
      puVar19 = local_154;
      do {
        puVar18 = puVar18 + 1;
        *puVar19 = *puVar18;
        puVar19 = puVar19 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar12 = FUN_01522990(param_1,local_250);
      iVar7 = FUN_01aa9090(param_1,0x18,local_154,local_174,uVar12,local_250);
    }
    else if (uVar22 == 0x122e) {
      local_154[0] = auStack_d8[1];
      local_154[1] = auStack_d8[3];
      local_154[2] = auStack_d8[4];
      local_154[3] = local_bc;
      local_144 = auStack_d8[2];
      local_174[0] = local_c0;
      local_174[1] = auStack_d8[5];
      uVar12 = FUN_01522dc0(param_1,local_250);
      *(longlong **)(puVar13 + 8) = local_250;
      psVar17 = (short *)FUN_01cfde70(*(undefined8 *)(puVar13 + 8),1,3,&local_181,&local_182,
                                      &local_29);
      sVar4 = *psVar17;
      if (sVar4 == 1) {
        *puVar13 = 1;
      }
      else if (sVar4 == 2) {
        *puVar13 = 2;
      }
      else if (sVar4 == 3) {
        *puVar13 = 3;
      }
      else if (sVar4 == 4) {
        *puVar13 = 4;
      }
      iVar7 = FUN_01aa9090(param_1,0x16,local_154,local_174,uVar12,puVar13);
    }
    if (*PTR_DAT_02002d10 != '\0') goto LAB_01525e94;
    uVar12 = FUN_019a4600();
    FUN_01995800(uVar12,0,0);
    uVar12 = FUN_019a4600();
    local_250 = (longlong *)FUN_01995660(uVar12,0);
    lVar15 = FUN_019a4600();
    if (*(char *)(lVar15 + 0x218) == '\0') {
      if ((iVar7 - local_34 < 0x1a) && (local_30 < 2)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) || ((local_30 == 0 && (9 < iVar6 + 1)))) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
    }
    else {
      if ((iVar7 - local_34 < 0x65) && (local_30 < 5)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) || ((local_30 == 0 && (99 < iVar6 + 1)))) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
    }
    if (bVar23) {
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_228);
      FUN_016fd940(local_228);
      *PTR_DAT_02002ce0 = 1;
    }
  }
  plVar10 = DAT_0210ed38;
  if (*PTR_DAT_02002b78 != '\0') {
    auStack_d8[1] = (**(code **)(*DAT_0210ed38 + 0x210))(DAT_0210ed38,0);
    auStack_d8[2] = (**(code **)(*plVar10 + 0x210))(plVar10,1);
    if (auStack_d8[1] != 0) {
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_230,0x51e);
      FUN_016fd8d0(local_230);
    }
    if (199 < *(byte *)(param_1 + 0x19c50)) {
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_238,0x51f);
      FUN_016fd8d0(local_238);
      *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + -1;
    }
    *(char *)(param_1 + 0x19c50) = *(char *)(param_1 + 0x19c50) + '\x01';
    *(uint *)(*(longlong *)(param_1 + 0x19c58) + -4 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 4) =
         auStack_d8[2];
    (**(code **)(*plVar10 + 0x2d0))(plVar10,6,&local_180);
    cVar2 = *local_180;
    if (cVar2 == '\0') {
      local_261 = 0;
    }
    else if (cVar2 == '\x01') {
      local_261 = 1;
    }
    else if (cVar2 == '\x02') {
      local_261 = 2;
    }
    else if (cVar2 == '\x03') {
      local_261 = 3;
    }
    *(undefined1 *)((longlong)&DAT_0210ec64 + (ulonglong)*(byte *)(param_1 + 0x19c50) + 3) =
         local_261;
    *(longlong **)(param_1 + 0x1a5d0 + (ulonglong)*(byte *)(param_1 + 0x19c50) * 8) = plVar10;
    local_178 = auStack_d8[2];
    FUN_01aaa9a0(param_1,1,&local_178);
    uVar5 = FUN_01aa8f70(param_1,auStack_d8[2]);
    DAT_0210ed40 = (uint)uVar5;
  }
  FUN_01aa8f10(param_1,*(undefined1 *)(param_1 + 0x19c50),*(undefined8 *)(param_1 + 0x19c58));
  FUN_004095f0(puVar13,0x10);
LAB_01525e94:
  FUN_00414560(&local_238,0xb);
  FUN_00414560(&local_1d0,5);
  FUN_00414480(&local_1a0);
  return;
}

