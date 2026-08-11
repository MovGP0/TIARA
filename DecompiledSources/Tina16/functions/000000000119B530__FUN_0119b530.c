/* Ghidra address: 0119b530 */
/* Ghidra symbol: FUN_0119b530 */


void FUN_0119b530(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                 int *param_5,undefined8 *param_6,longlong *param_7,uint *param_8,uint *param_9,
                 int *param_10,int param_11,int param_12,int param_13,undefined8 param_14,
                 char param_15)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int iVar21;
  uint *local_bed8;
  longlong *local_bed0;
  int local_bec4;
  uint *local_bec0;
  uint *local_beb8;
  uint *local_beb0;
  int local_bea0;
  int *local_be98;
  longlong *local_be90;
  int *local_be88;
  longlong *local_be80;
  uint *local_be78;
  uint *local_be70;
  int local_be64;
  uint *local_be58;
  int *local_be50;
  uint *local_be48;
  int *local_be40;
  int local_be38;
  int local_be34;
  int *local_be30;
  uint local_be28;
  int local_be20;
  int local_be1c;
  uint *local_be18;
  uint *local_be10;
  int local_be08;
  int local_be04;
  int local_be00;
  int local_bdfc;
  int local_bdf8;
  undefined8 local_bde8;
  undefined8 local_bde0;
  undefined8 local_bdd8;
  undefined8 local_bdd0;
  undefined8 local_bdc8;
  undefined8 local_bdc0;
  undefined8 local_bdb8;
  undefined8 local_bdb0;
  undefined8 local_bda8;
  undefined8 local_bda0;
  undefined8 local_bd98;
  undefined8 local_bd90;
  undefined8 local_bd88;
  undefined8 local_bd80;
  undefined8 local_bd78;
  undefined8 local_bd70;
  undefined8 local_bd68;
  undefined8 local_bd60;
  uint local_bd58 [256];
  undefined8 local_b958;
  int local_b94c [256];
  int local_b54c [256];
  int local_b14c [8];
  int local_b12c [8];
  int local_b10c [8];
  int local_b0ec [8];
  int local_b0cc [9];
  longlong local_b0a8;
  longlong local_b0a0;
  undefined8 local_b098;
  undefined8 local_b090;
  undefined8 local_b088;
  undefined8 local_b080;
  undefined8 local_b078;
  undefined8 local_b070;
  undefined8 local_b068;
  undefined8 local_b060 [2];
  undefined8 local_b050;
  undefined8 local_b048;
  undefined8 local_b040;
  undefined8 local_b038;
  undefined8 local_b030;
  undefined8 local_b028;
  undefined8 local_b020;
  undefined8 local_b018 [2];
  undefined8 local_b008;
  undefined8 local_b000;
  undefined8 local_aff8;
  undefined8 local_aff0;
  undefined8 local_afe8;
  longlong local_afe0;
  longlong local_afd8;
  longlong local_afd0;
  undefined8 local_afc8;
  longlong local_afc0;
  longlong local_afb8;
  undefined8 local_afb0;
  undefined8 uStack_afa8;
  undefined8 uStack_afa0;
  undefined8 uStack_af98;
  undefined8 uStack_af90;
  uint local_af88 [5610];
  uint local_57e0 [4588];
  undefined1 auStack_1030 [4096];
  ulonglong uVar9;
  
  uVar9 = 0xf8;
  do {
    uVar8 = uVar9 - 0x1000;
    auStack_1030[uVar9] = (char)uVar8;
    uVar9 = uVar8;
  } while (0xffffffffffff40f8 < uVar8);
  local_bde8 = 0;
  local_bde0 = 0;
  local_bdd8 = 0;
  local_bdd0 = 0;
  local_bdc8 = 0;
  local_bdc0 = 0;
  local_bdb8 = 0;
  local_bdb0 = 0;
  local_bda8 = 0;
  local_bd88 = 0;
  local_bd90 = 0;
  local_bd98 = 0;
  local_bda0 = 0;
  local_bd80 = 0;
  local_bd78 = 0;
  local_bd70 = 0;
  local_bd68 = 0;
  local_bd60 = 0;
  local_afb8 = 0;
  local_afc0 = 0;
  local_afc8 = 0;
  local_afd0 = 0;
  local_afd8 = 0;
  local_afe0 = 0;
  local_afe8 = 0;
  local_aff0 = 0;
  local_aff8 = 0;
  local_b000 = 0;
  local_b008 = 0;
  local_b0a0 = 0;
  local_b0a8 = 0;
  local_b958 = 0;
  puVar13 = local_57e0;
  for (lVar11 = 0xaf5; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)puVar13 = *param_3;
    param_3 = param_3 + 1;
    puVar13 = puVar13 + 2;
  }
  puVar13 = local_af88;
  for (lVar11 = 0xaf5; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)puVar13 = *param_4;
    param_4 = param_4 + 1;
    puVar13 = puVar13 + 2;
  }
  local_afb0 = *param_6;
  uStack_afa8 = param_6[1];
  uStack_afa0 = param_6[2];
  uStack_af98 = param_6[3];
  uStack_af90 = param_6[4];
  FUN_00417600(&local_b050,&DAT_00401390,9);
  FUN_00417600(&local_b098,&DAT_00401390,9);
  FUN_00414480(&local_afe8);
  FUN_00414480(&local_b008);
  local_bea0 = 0;
  local_be98 = (int *)&local_b050;
  local_be90 = &local_b098;
  do {
    FUN_00414480(local_be98);
    FUN_00414480(local_be90);
    local_bea0 = local_bea0 + 1;
    local_be90 = local_be90 + 1;
    local_be98 = (int *)((longlong)local_be98 + 8);
  } while (local_bea0 != 5);
  local_b0cc[0] = 1;
  local_b0cc[1] = 2;
  local_b0cc[2] = 4;
  local_b0cc[3] = 8;
  local_b0cc[4] = 0x10;
  local_b0cc[5] = 0x20;
  local_b0cc[6] = 0x40;
  local_bea0 = 0;
  if (param_11 - 1U < 0x80000000) {
    local_be34 = param_11;
    local_be90 = param_7;
    local_be98 = param_10;
    local_be88 = (int *)&local_afb0;
    local_bec0 = local_57e0;
    local_beb8 = local_af88;
    local_beb0 = param_9;
    local_bed8 = param_8;
    local_bed0 = (longlong *)param_5;
    local_be80 = param_2;
    do {
      FUN_0064de00(*local_be90,0);
      *local_be98 = 0;
      if (*(int *)((longlong)&local_afb0 + (longlong)(local_bea0 + 1) * 4) != 0) {
        local_be20 = *local_be88;
        local_bec4 = 0;
        if (-1 < local_be20 + -1) {
          local_be78 = local_bec0;
          local_be70 = local_beb8;
          local_be50 = (int *)local_bed0;
          do {
            FUN_0064dd90(*local_be80,&local_aff0);
            (**(code **)(**(longlong **)(*local_be80 + 0x4d8) + 0x18))
                      (*(longlong **)(*local_be80 + 0x4d8),&local_b0a0,local_bec4);
            if (*(char *)(*local_be80 + 0xa9) != '\0') {
              (**(code **)(*(longlong *)*local_be80 + 600))((longlong *)*local_be80);
            }
            FUN_0064dd90(*local_be80,&local_bd60);
            iVar4 = FUN_004170c0(local_b0a0,local_bd60,1);
            (**(code **)(*(longlong *)*local_be80 + 0x290))((longlong *)*local_be80,iVar4 + -1);
            uVar5 = 0;
            if (local_b0a0 != 0) {
              uVar5 = *(undefined4 *)(local_b0a0 + -4);
            }
            (**(code **)(*(longlong *)*local_be80 + 0x288))((longlong *)*local_be80,uVar5);
            uVar16 = *local_be78;
            uVar17 = *local_be70;
            iVar4 = FUN_0119aee0(local_b0a0,1);
            FUN_00416dc0(&local_bd68,local_b0a0,1,iVar4 + -1);
            iVar4 = FUN_0043fc00(local_bd68);
            local_b0ec[0] = FUN_0119af40(local_b0a0,1,0x28);
            local_bdf8 = 1;
            if (0 < param_13) {
              local_be58 = (uint *)local_b0ec;
              iVar15 = param_13;
              do {
                local_be58 = local_be58 + 1;
                if (local_bdf8 < param_13) {
                  iVar6 = FUN_0119af40(local_b0a0,param_12 / 2 + local_bdf8 + -1,0x2c);
                  *local_be58 = iVar6;
                }
                else {
                  iVar6 = FUN_0119af40(local_b0a0,1,0x29);
                  *local_be58 = iVar6;
                }
                FUN_00416dc0(&local_b958,local_b0a0,local_b0ec[local_bdf8 + -1] + 1,
                             (*local_be58 - local_b0ec[local_bdf8 + -1]) + -1);
                iVar6 = FUN_0043fc00(local_b958);
                local_b12c[local_bdf8 + -1] = iVar6;
                local_bdf8 = local_bdf8 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            local_be04 = *(int *)((longlong)&local_afb0 + (longlong)(local_bea0 + 1) * 4);
            local_be64 = 0;
            if (-1 < local_be04 + -1) {
              local_be58 = local_57e0;
              local_be48 = local_af88;
              local_be40 = param_5;
              do {
                lVar11 = (longlong)(local_bea0 + 1);
                FUN_0064dd90(param_2[lVar11],&local_aff8);
                (**(code **)(**(longlong **)(param_2[lVar11] + 0x4d8) + 0x18))
                          (*(longlong **)(param_2[lVar11] + 0x4d8),&local_b0a8,local_be64);
                if (*(char *)(param_2[lVar11] + 0xa9) != '\0') {
                  (**(code **)(*(longlong *)param_2[lVar11] + 600))((longlong *)param_2[lVar11]);
                }
                FUN_0064dd90(*local_be80,&local_bd70);
                iVar15 = FUN_004170c0(local_b0a8,local_bd70,1);
                (**(code **)(*(longlong *)param_2[lVar11] + 0x290))
                          ((longlong *)param_2[lVar11],iVar15 + -1);
                uVar5 = 0;
                if (local_b0a8 != 0) {
                  uVar5 = *(undefined4 *)(local_b0a8 + -4);
                }
                (**(code **)(*(longlong *)param_2[lVar11] + 0x288))
                          ((longlong *)param_2[lVar11],uVar5);
                uVar1 = local_be58[lVar11 * 0x231];
                uVar7 = local_be48[lVar11 * 0x231];
                local_b10c[0] = FUN_0119af40(local_b0a8,1,0x28);
                local_bdf8 = 1;
                if (0 < param_13) {
                  piVar12 = local_b10c;
                  iVar15 = param_13;
                  do {
                    piVar12 = piVar12 + 1;
                    if (local_bdf8 < param_13) {
                      iVar6 = FUN_0119af40(local_b0a8,param_12 / 2 + local_bdf8 + -1,0x2c);
                      *piVar12 = iVar6;
                    }
                    else {
                      iVar6 = FUN_0119af40(local_b0a8,1,0x29);
                      *piVar12 = iVar6;
                    }
                    FUN_00416dc0(&local_bd78,local_b0a8,local_b10c[local_bdf8 + -1] + 1,
                                 (*piVar12 - local_b10c[local_bdf8 + -1]) + -1);
                    iVar6 = FUN_0043fc00(local_bd78);
                    local_b14c[local_bdf8 + -1] = iVar6;
                    local_bdf8 = local_bdf8 + 1;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                }
                if (uVar17 == uVar7) {
                  local_bdf8 = 0;
                  if (-1 < param_13 + -1) {
                    piVar12 = local_b12c;
                    piVar14 = local_b14c;
                    iVar15 = param_13;
                    do {
                      if (*piVar12 != *piVar14) break;
                      local_bdf8 = local_bdf8 + 1;
                      piVar14 = piVar14 + 1;
                      piVar12 = piVar12 + 1;
                      iVar15 = iVar15 + -1;
                    } while (iVar15 != 0);
                  }
                  if (param_13 <= local_bdf8) {
                    iVar15 = FUN_0119aee0(local_b0a8,1);
                    FUN_00416dc0(&local_bd80,local_b0a8,1,iVar15 + -1);
                    iVar15 = FUN_0043fc00(local_bd80);
                    iVar15 = iVar15 - iVar4;
                    iVar6 = FUN_0119a4f0(uVar16 ^ uVar1);
                    if ((iVar6 == 1) && (uVar7 = uVar16 ^ uVar1 | uVar17, -1 < iVar15)) {
                      iVar6 = 0;
                      piVar12 = local_b0cc;
                      do {
                        if (iVar15 == *piVar12) break;
                        iVar6 = iVar6 + 1;
                        piVar12 = piVar12 + 1;
                      } while (iVar6 != 6);
                      if (iVar6 < 6) {
                        FUN_00416dc0(&local_bd88,local_b0a0,1,local_b0ec[0] + -2);
                        FUN_00416dc0(&local_bd90,local_b0a8,1,local_b10c[0] + -2);
                        FUN_00416dc0(&local_bd98,local_b0a8,local_b10c[0] + 1,
                                     (local_b10c[param_13] - local_b10c[0]) + -1);
                        FUN_0043f750(&local_bda0,iVar15);
                        FUN_00416cd0(&local_afd0,8,local_bd88,&DAT_0119dc64,local_bd90,&DAT_0119dc74
                                     ,local_bd98,&DAT_0119dc64,local_bda0,&DAT_0119dc88);
                        FUN_0119b390(local_afd0,param_12,local_b54c);
                        FUN_00414480(&local_afc8);
                        iVar15 = 0;
                        if (-1 < param_12 + -1) {
                          piVar12 = local_b54c;
                          iVar6 = param_12;
                          do {
                            FUN_0043f750(&local_bda8,*piVar12);
                            FUN_00416ad0(&local_afc8,local_bda8);
                            if (iVar15 < param_12 + -1) {
                              FUN_00416ad0(&local_afc8,&DAT_0119dc64);
                            }
                            else {
                              FUN_00416ad0(&local_afc8,&DAT_0119dc98);
                            }
                            iVar15 = iVar15 + 1;
                            piVar12 = piVar12 + 1;
                            iVar6 = iVar6 + -1;
                          } while (iVar6 != 0);
                        }
                        iVar15 = 0;
                        if (local_afd0 != 0) {
                          iVar15 = *(int *)(local_afd0 + -4);
                        }
                        iVar6 = FUN_0119af40(local_afd0,1,0x28);
                        FUN_00416dc0(&local_bdb0,local_afd0,iVar6,(iVar15 - iVar6) + 1);
                        FUN_00416ba0(&local_afd0,local_afc8,local_bdb0);
                        iVar15 = *local_be98;
                        local_bdf8 = 0;
                        puVar13 = local_bed8;
                        puVar19 = local_beb0;
                        if (-1 < iVar15 + -1) {
                          do {
                            if ((*puVar19 == uVar7) && (*puVar13 == uVar1)) break;
                            FUN_0064dd90(*local_be90,&local_b000);
                            (**(code **)(**(longlong **)(*local_be90 + 0x4d8) + 0x18))
                                      (*(longlong **)(*local_be90 + 0x4d8),&local_afc0,local_bdf8);
                            FUN_0119b390(local_afc0,param_12,local_b94c);
                            iVar6 = FUN_0119af40(local_afc0,1,0x28);
                            FUN_00416dc0(&local_afb8,local_afc0,1,iVar6 + -1);
                            iVar6 = 0;
                            if (-1 < param_12 + -1) {
                              piVar12 = local_b54c;
                              piVar14 = local_b94c;
                              iVar21 = param_12;
                              do {
                                if (*piVar12 != *piVar14) break;
                                iVar6 = iVar6 + 1;
                                piVar14 = piVar14 + 1;
                                piVar12 = piVar12 + 1;
                                iVar21 = iVar21 + -1;
                              } while (iVar21 != 0);
                            }
                            if (iVar6 == param_12) break;
                            local_bdf8 = local_bdf8 + 1;
                            iVar15 = iVar15 + -1;
                            puVar13 = puVar13 + 1;
                            puVar19 = puVar19 + 1;
                          } while (iVar15 != 0);
                        }
                        if (*local_be98 <= local_bdf8) {
                          if (*local_be98 != 0) {
                            FUN_0064dd90(*local_be90,&local_bdb8);
                            FUN_0064de00(*local_be90,local_bdb8);
                          }
                          local_beb0[*local_be98] = uVar7;
                          local_bed8[*local_be98] = uVar1;
                          *local_be98 = *local_be98 + 1;
                          (**(code **)(**(longlong **)(*local_be90 + 0x4d8) + 0x78))
                                    (*(longlong **)(*local_be90 + 0x4d8),local_afd0);
                          FUN_0064dd90(*local_be90,&local_b000);
                        }
                        (**(code **)(**(longlong **)(*local_be80 + 0x4d8) + 0x18))
                                  (*(longlong **)(*local_be80 + 0x4d8),&local_afb8,local_bec4);
                        iVar15 = 0;
                        if (local_afb8 != 0) {
                          iVar15 = *(int *)(local_afb8 + -4);
                        }
                        *local_be50 = 1;
                        if (*(short *)(local_afb8 + -2 + (longlong)iVar15 * 2) != 0x2d) {
                          FUN_00416ad0(&local_afb8,&DAT_0119dca8);
                          (**(code **)(**(longlong **)(*local_be80 + 0x4d8) + 0x40))
                                    (*(longlong **)(*local_be80 + 0x4d8),local_bec4,local_afb8);
                          FUN_0064dd90(*local_be80,&local_aff0);
                        }
                        (**(code **)(**(longlong **)(param_2[local_bea0 + 1] + 0x4d8) + 0x18))
                                  (*(longlong **)(param_2[local_bea0 + 1] + 0x4d8),&local_afc0,
                                   local_be64);
                        iVar15 = 0;
                        if (local_afc0 != 0) {
                          iVar15 = *(int *)(local_afc0 + -4);
                        }
                        local_be40[(longlong)(local_bea0 + 1) * 0x231] = 1;
                        if (*(short *)(local_afc0 + -2 + (longlong)iVar15 * 2) != 0x2d) {
                          FUN_00416ad0(&local_afc0,&DAT_0119dcb8);
                          (**(code **)(**(longlong **)(param_2[local_bea0 + 1] + 0x4d8) + 0x40))
                                    (*(longlong **)(param_2[local_bea0 + 1] + 0x4d8),local_be64,
                                     local_afc0);
                          FUN_0064dd90(param_2[local_bea0 + 1]);
                        }
                      }
                      else if (param_15 != '\0') {
                        uVar10 = FUN_00b89270();
                        FUN_00b8e520(uVar10,&local_afd0,0x883);
                      }
                    }
                  }
                }
                local_be64 = local_be64 + 1;
                local_be40 = local_be40 + 1;
                local_be48 = local_be48 + 1;
                local_be58 = local_be58 + 1;
                local_be04 = local_be04 + -1;
              } while (local_be04 != 0);
            }
            local_bec4 = local_bec4 + 1;
            local_be50 = local_be50 + 1;
            local_be70 = local_be70 + 1;
            local_be78 = local_be78 + 1;
            local_be20 = local_be20 + -1;
          } while (local_be20 != 0);
        }
      }
      local_bea0 = local_bea0 + 1;
      local_bed0 = (longlong *)((longlong)local_bed0 + 0x8c4);
      local_bed8 = local_bed8 + 0x231;
      local_beb0 = local_beb0 + 0x231;
      local_beb8 = local_beb8 + 0x231;
      local_bec0 = local_bec0 + 0x231;
      local_be80 = local_be80 + 1;
      local_be88 = local_be88 + 1;
      local_be98 = local_be98 + 1;
      local_be90 = local_be90 + 1;
      local_be34 = local_be34 + -1;
    } while (local_be34 != 0);
  }
  if (-1 < param_11) {
    local_be00 = param_11 + 1;
    local_bed0 = &local_afb0;
    local_bed8 = (uint *)param_2;
    do {
      iVar4 = (int)*local_bed0;
      local_bec4 = 0;
      if (-1 < iVar4 + -1) {
        do {
          FUN_0064dd90(*(longlong *)local_bed8,&local_aff0);
          (**(code **)(**(longlong **)(*(longlong *)local_bed8 + 0x4d8) + 0x18))
                    (*(longlong **)(*(longlong *)local_bed8 + 0x4d8),&local_b0a0,local_bec4);
          iVar15 = 0;
          if (local_b0a0 != 0) {
            iVar15 = *(int *)(local_b0a0 + -4);
          }
          if (*(short *)(local_b0a0 + -2 + (longlong)iVar15 * 2) != 0x2d) {
            FUN_00416ad0(&local_b0a0,&DAT_0119dccc);
            (**(code **)(**(longlong **)(*(longlong *)local_bed8 + 0x4d8) + 0x40))
                      (*(longlong **)(*(longlong *)local_bed8 + 0x4d8),local_bec4,local_b0a0);
            FUN_00414480(&local_afd8);
            FUN_00414480(&local_afe0);
            bVar2 = false;
            bVar3 = false;
            iVar15 = 0;
            if (local_b0a0 != 0) {
              iVar15 = *(int *)(local_b0a0 + -4);
            }
            local_be1c = 1;
            if (0 < iVar15) {
              do {
                if (*(short *)(local_b0a0 + -2 + (longlong)local_be1c * 2) == 0x28) {
                  bVar2 = true;
                  bVar3 = false;
                }
                if (*(short *)(local_b0a0 + -2 + (longlong)local_be1c * 2) == 0x29) {
                  bVar3 = true;
                }
                if (((bVar2) && (!bVar3)) &&
                   (*(short *)(local_b0a0 + -2 + (longlong)local_be1c * 2) != 0x28)) {
                  FUN_00416780(&local_bdc0,
                               *(undefined2 *)(local_b0a0 + -2 + (longlong)local_be1c * 2));
                  FUN_00416ad0(&local_afd8,local_bdc0);
                }
                if (!bVar2) {
                  FUN_00416780(&local_bdc8,
                               *(undefined2 *)(local_b0a0 + -2 + (longlong)local_be1c * 2));
                  FUN_00416ad0(&local_afe0,local_bdc8);
                }
                local_be1c = local_be1c + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            FUN_00416ad0(&local_afd8,&DAT_0119dc64);
            iVar15 = 0;
            if (local_afe0 != 0) {
              iVar15 = *(int *)(local_afe0 + -4);
            }
            FUN_00416dc0(&local_bdd0,local_afe0,1,iVar15 + -1);
            FUN_00416ba0(&local_afe0,local_bdd0,&DAT_0119dc64);
            FUN_00414480(&local_afe8);
            iVar15 = 0;
            if (local_afd8 != 0) {
              iVar15 = *(int *)(local_afd8 + -4);
            }
            local_be1c = 1;
            if (0 < iVar15) {
              do {
                if (*(short *)(local_afd8 + -2 + (longlong)local_be1c * 2) == 0x2c) {
                  iVar6 = FUN_0043fc00(local_afe8);
                  (&DAT_020c59b4)[iVar6] = 1;
                  FUN_00414480(&local_afe8);
                }
                else {
                  FUN_00416780(&local_bdd8,
                               *(undefined2 *)(local_afd8 + -2 + (longlong)local_be1c * 2));
                  FUN_00416ad0(&local_afe8,local_bdd8);
                }
                local_be1c = local_be1c + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            FUN_00414480(&local_afe8);
            local_be1c = 1;
            while (*(short *)(local_afe0 + -2 + (longlong)local_be1c * 2) != 0x2c) {
              FUN_00416780(&local_bde0,*(undefined2 *)(local_afe0 + -2 + (longlong)local_be1c * 2));
              FUN_00416ad0(&local_afe8,local_bde0);
              local_be1c = local_be1c + 1;
            }
            iVar6 = FUN_0043fc00(local_afe8);
            FUN_00414b50(&local_b050,&DAT_0119dce0);
            FUN_00414b50(&local_b048,&DAT_0119dce0);
            FUN_00414b50(&local_b040,&DAT_0119dce0);
            FUN_00414b50(&local_b038,&DAT_0119dce0);
            FUN_00414b50(&local_b030,&DAT_0119dce0);
            iVar15 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
            local_be38 = 0;
            if (-1 < iVar15 + -1) {
              puVar18 = &local_b050;
              do {
                FUN_00526500(0x4000000000000000,
                             (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_be38)
                                     + -1));
                iVar21 = FUN_0040c770();
                if (iVar6 / iVar21 < 1) {
                  FUN_00414ad0(puVar18,&DAT_0119dce0);
                }
                else {
                  iVar6 = iVar6 - iVar21;
                  FUN_00414ad0(puVar18,&LAB_0119dcf0);
                }
                local_be38 = local_be38 + 1;
                puVar18 = puVar18 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            FUN_00414480(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8);
            FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,local_b050);
            FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,local_b048);
            FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,local_b040);
            FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,local_b038);
            FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,local_b030);
            FUN_00414480(&local_afe8);
            FUN_00414480(&local_b098);
            FUN_00414480(&local_b090);
            FUN_00414480(&local_b088);
            FUN_00414480(&local_b080);
            FUN_00414480(&local_b078);
            iVar15 = 0;
            if (local_afe0 != 0) {
              iVar15 = *(int *)(local_afe0 + -4);
            }
            local_be1c = 1;
            if (0 < iVar15) {
              do {
                if (*(short *)(local_afe0 + -2 + (longlong)local_be1c * 2) == 0x2c) {
                  local_be28 = FUN_0043fc00(local_afe8);
                  FUN_00414480(&local_b098);
                  FUN_00414480(&local_b090);
                  FUN_00414480(&local_b088);
                  FUN_00414480(&local_b080);
                  FUN_00414480(&local_b078);
                  FUN_00414b50(&local_b050,&DAT_0119dce0);
                  FUN_00414b50(&local_b048,&DAT_0119dce0);
                  FUN_00414b50(&local_b040,&DAT_0119dce0);
                  FUN_00414b50(&local_b038,&DAT_0119dce0);
                  FUN_00414b50(&local_b030,&DAT_0119dce0);
                  iVar6 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
                  local_be38 = 0;
                  if (-1 < iVar6 + -1) {
                    puVar18 = &local_b050;
                    puVar20 = &local_b098;
                    do {
                      FUN_00526500(0x4000000000000000,
                                   (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) -
                                            local_be38) + -1));
                      iVar21 = FUN_0040c770();
                      if ((int)local_be28 / iVar21 < 1) {
                        FUN_00414ad0(puVar18,&DAT_0119dce0);
                        if (*(short *)(*(longlong *)
                                        (param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8
                                        ) + -2 + (longlong)(local_be38 + 1) * 2) == 0x30) {
                          FUN_00414ad0(puVar20,&DAT_0119dce0);
                        }
                        else {
                          FUN_00414ad0(puVar20,&DAT_0119dca8);
                        }
                      }
                      else {
                        local_be28 = local_be28 - iVar21;
                        FUN_00414ad0(puVar18,&LAB_0119dcf0);
                        if (*(short *)(*(longlong *)
                                        (param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8
                                        ) + -2 + (longlong)(local_be38 + 1) * 2) == 0x31) {
                          FUN_00414ad0(puVar20,&LAB_0119dcf0);
                        }
                        else {
                          FUN_00414ad0(puVar20,&DAT_0119dca8);
                        }
                      }
                      local_be38 = local_be38 + 1;
                      puVar20 = puVar20 + 1;
                      puVar18 = puVar18 + 1;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                  }
                  FUN_00414480(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8);
                  FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,
                               local_b098);
                  FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,
                               local_b090);
                  FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,
                               local_b088);
                  FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,
                               local_b080);
                  FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,
                               local_b078);
                  iVar6 = FUN_0043fc00(local_afe8);
                  *(undefined4 *)(param_1 + 0x40838 + (longlong)iVar6 * 4) = 1;
                  FUN_00414480(&local_afe8);
                }
                else {
                  FUN_00416780(&local_bde8,
                               *(undefined2 *)(local_afe0 + -2 + (longlong)local_be1c * 2));
                  FUN_00416ad0(&local_afe8,local_bde8);
                }
                local_be1c = local_be1c + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0x828) + 1;
          }
          local_bec4 = local_bec4 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_bed8 = (uint *)((longlong)local_bed8 + 8);
      local_bed0 = (longlong *)((longlong)local_bed0 + 4);
      local_be00 = local_be00 + -1;
    } while (local_be00 != 0);
  }
  if (-1 < param_11) {
    local_be08 = param_11 + 1;
    local_bed8 = (uint *)&local_afb0;
    local_beb0 = (uint *)param_5;
    local_beb8 = local_af88;
    local_bec0 = local_57e0;
    local_bed0 = param_2;
    do {
      FUN_00414480(&local_afe8);
      local_bdfc = *local_bed8;
      local_bec4 = 0;
      if (-1 < local_bdfc + -1) {
        local_be30 = (int *)local_beb0;
        local_be18 = local_beb8;
        local_be10 = local_bec0;
        do {
          (**(code **)(**(longlong **)(*local_bed0 + 0x4d8) + 0x18))
                    (*(longlong **)(*local_bed0 + 0x4d8),&local_afd0,local_bec4);
          iVar4 = 0;
          if (local_afd0 != 0) {
            iVar4 = *(int *)(local_afd0 + -4);
          }
          if (*(short *)(local_afd0 + -2 + (longlong)iVar4 * 2) == 0x2a) {
            FUN_00414480(&local_afe8);
          }
          if (*local_be30 == 0) {
            *local_be30 = 2;
            uVar16 = 1;
            local_be1c = 0;
            do {
              if ((*local_be18 | uVar16) == *local_be18) {
                (&DAT_020c5db4)[(int)uVar16] = 1;
              }
              uVar16 = uVar16 * 2;
              local_be1c = local_be1c + 1;
            } while (local_be1c != 8);
            iVar15 = *local_be10 - *local_be18;
            FUN_00414b50(&local_b050,&DAT_0119dce0);
            FUN_00414b50(&local_b048,&DAT_0119dce0);
            FUN_00414b50(&local_b040,&DAT_0119dce0);
            FUN_00414b50(&local_b038,&DAT_0119dce0);
            FUN_00414b50(&local_b030,&DAT_0119dce0);
            iVar4 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
            local_be38 = 0;
            if (-1 < iVar4 + -1) {
              puVar18 = &local_b050;
              do {
                FUN_00526500(0x4000000000000000,
                             (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_be38)
                                     + -1));
                iVar6 = FUN_0040c770();
                if (iVar15 / iVar6 < 1) {
                  FUN_00414ad0(puVar18,&DAT_0119dce0);
                }
                else {
                  iVar15 = iVar15 - iVar6;
                  FUN_00414ad0(puVar18,&LAB_0119dcf0);
                }
                local_be38 = local_be38 + 1;
                puVar18 = puVar18 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b050);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b048);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b040);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b038);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b030);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b028);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b020);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b018[0]);
            FUN_00414480(&local_b098);
            FUN_00414480(&local_b090);
            FUN_00414480(&local_b088);
            FUN_00414480(&local_b080);
            FUN_00414480(&local_b078);
            FUN_00414480(&local_b070);
            FUN_00414480(&local_b068);
            FUN_00414480(local_b060);
            uVar17 = 1;
            iVar4 = 1;
            local_bd58[0] = *local_be10;
            uVar16 = *local_be18;
            local_be1c = 0;
            do {
              if ((uVar16 | uVar17) == uVar16) {
                local_be64 = 0;
                if (-1 < iVar4 + -1) {
                  puVar13 = local_bd58;
                  iVar15 = iVar4;
                  do {
                    local_bd58[local_be64 + iVar4] = *puVar13 - uVar17;
                    local_be64 = local_be64 + 1;
                    puVar13 = puVar13 + 1;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                }
                iVar4 = iVar4 * 2;
              }
              uVar17 = uVar17 * 2;
              local_be1c = local_be1c + 1;
            } while (local_be1c != 8);
            if (-1 < iVar4 + -1) {
              puVar13 = local_bd58;
              do {
                uVar16 = *puVar13;
                FUN_00414480(&local_b098);
                FUN_00414480(&local_b090);
                FUN_00414480(&local_b088);
                FUN_00414480(&local_b080);
                FUN_00414480(&local_b078);
                FUN_00414480(&local_b070);
                FUN_00414480(&local_b068);
                FUN_00414480(local_b060);
                FUN_00414b50(&local_b050,&DAT_0119dce0);
                FUN_00414b50(&local_b048,&DAT_0119dce0);
                FUN_00414b50(&local_b040,&DAT_0119dce0);
                FUN_00414b50(&local_b038,&DAT_0119dce0);
                FUN_00414b50(&local_b030,&DAT_0119dce0);
                FUN_00414b50(&local_b028,&DAT_0119dce0);
                FUN_00414b50(&local_b020,&DAT_0119dce0);
                FUN_00414b50(local_b018,&DAT_0119dce0);
                iVar15 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
                local_be38 = 0;
                if (-1 < iVar15 + -1) {
                  puVar18 = &local_b050;
                  puVar20 = &local_b098;
                  local_be28 = uVar16;
                  do {
                    FUN_00526500(0x4000000000000000,
                                 (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) -
                                          local_be38) + -1));
                    iVar6 = FUN_0040c770();
                    if ((int)local_be28 / iVar6 < 1) {
                      FUN_00414ad0(puVar18,&DAT_0119dce0);
                      if (*(short *)(*(longlong *)
                                      (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8)
                                     + -2 + (longlong)(local_be38 + 1) * 2) == 0x30) {
                        FUN_00414ad0(puVar20,&DAT_0119dce0);
                      }
                      else {
                        FUN_00414ad0(puVar20,&DAT_0119dca8);
                      }
                    }
                    else {
                      local_be28 = local_be28 - iVar6;
                      FUN_00414ad0(puVar18,&LAB_0119dcf0);
                      if (*(short *)(*(longlong *)
                                      (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8)
                                     + -2 + (longlong)(local_be38 + 1) * 2) == 0x31) {
                        FUN_00414ad0(puVar20,&LAB_0119dcf0);
                      }
                      else {
                        FUN_00414ad0(puVar20,&DAT_0119dca8);
                      }
                    }
                    local_be38 = local_be38 + 1;
                    puVar20 = puVar20 + 1;
                    puVar18 = puVar18 + 1;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                }
                FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b098)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b090)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b088)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b080)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b078)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b070)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b068)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,
                             local_b060[0]);
                *(undefined4 *)(param_1 + 0x40c38 + (longlong)(int)uVar16 * 4) = 1;
                *(undefined4 *)
                 (param_1 + 0x838 + (longlong)*(int *)(param_1 + 0x82c) * 0x400 +
                 (longlong)(int)uVar16 * 4) = 1;
                puVar13 = puVar13 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
          }
          local_bec4 = local_bec4 + 1;
          local_be10 = local_be10 + 1;
          local_be18 = local_be18 + 1;
          local_be30 = local_be30 + 1;
          local_bdfc = local_bdfc + -1;
        } while (local_bdfc != 0);
      }
      local_bec0 = local_bec0 + 0x231;
      local_beb8 = local_beb8 + 0x231;
      local_beb0 = local_beb0 + 0x231;
      local_bed0 = local_bed0 + 1;
      local_bed8 = local_bed8 + 1;
      local_be08 = local_be08 + -1;
    } while (local_be08 != 0);
  }
  FUN_00414560(&local_bde8,6);
  FUN_00414480(&local_bdb8);
  FUN_00414560(&local_bdb0,8);
  FUN_00414480(&local_bd70);
  FUN_00414480(&local_bd68);
  FUN_00414480(&local_bd60);
  FUN_00414480(&local_b958);
  FUN_00414560(&local_b0a8,2);
  FUN_00417840(&local_b098,&DAT_00401390,9);
  FUN_00417840(&local_b050,&DAT_00401390,9);
  FUN_00414560(&local_b008,0xb);
  return;
}

