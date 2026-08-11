/* Ghidra address: 0117b260 */
/* Ghidra symbol: FUN_0117b260 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0117b260(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  longlong *plVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  int local_1934;
  int local_1930;
  int local_1928;
  double local_1920;
  int local_1914;
  double local_1910;
  double *local_1908;
  double *local_1900;
  int local_18f4;
  double *local_18f0;
  int local_18e0;
  undefined4 local_18dc;
  int local_18d8;
  int local_18d4;
  int local_18d0;
  int local_18cc;
  double local_18c8;
  double local_18c0;
  double local_18b8;
  double local_18a0;
  double local_1898;
  double local_1890;
  undefined8 local_1880;
  undefined8 local_1878;
  undefined8 local_1870;
  undefined8 local_1868;
  undefined8 local_1860;
  undefined8 local_1858;
  undefined8 local_1850;
  undefined8 local_1848;
  undefined1 local_1840 [256];
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 local_1730;
  undefined8 local_1728;
  undefined8 local_1720;
  undefined8 local_1718;
  undefined8 local_1710;
  undefined8 local_1708;
  undefined8 local_1700;
  undefined8 local_16f8;
  undefined8 local_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined8 local_16d8;
  undefined8 local_16d0;
  double local_16c8;
  short *local_16c0 [204];
  double adStack_1060 [51];
  double adStack_ec8 [51];
  double adStack_d30 [51];
  undefined8 local_b98 [49];
  double adStack_a10 [13];
  undefined1 local_9a8;
  double adStack_880 [50];
  double adStack_6f0 [50];
  double adStack_560 [50];
  double adStack_3d0 [50];
  double adStack_240 [70];
  
  local_9a8 = 0;
  local_1880 = 0;
  local_1878 = 0;
  local_1870 = 0;
  local_1868 = 0;
  local_1860 = 0;
  local_1858 = 0;
  local_1850 = 0;
  local_1848 = 0;
  local_1740 = 0;
  local_1738 = 0;
  local_1730 = 0;
  local_1728 = 0;
  local_1720 = 0;
  local_1718 = 0;
  local_1710 = 0;
  local_1708 = 0;
  local_1700 = 0;
  local_16f8 = 0;
  local_16f0 = 0;
  local_16c0[0] = (short *)0x0;
  local_16c8 = 0.0;
  local_16d0 = 0;
  local_16d8 = 0;
  local_16e0 = 0;
  local_16e8 = 0;
  if ((*(short *)(*param_1 + 0x1fa4) == 0x50) || (*(short *)(*param_1 + 0x1fa4) == 0x53)) {
    local_1930 = *(int *)(*param_1 + 0x1fa0) / 2;
    plVar8 = (longlong *)((longlong)*(int *)(*param_1 + 0x1fa0) % 2 & 0xffffffff);
  }
  else {
    local_1930 = *(int *)(*param_1 + 0x1fa0);
    plVar8 = param_2;
  }
  dVar14 = (double)FUN_00526500(0x4024000000000000,plVar8);
  dVar15 = (double)FUN_0040c760();
  dVar16 = (double)FUN_0040c760((1.0 / dVar15) / dVar15 + 1.0);
  dVar15 = (double)FUN_0040c2f0(1.0 / dVar15 + dVar16);
  dVar15 = (1.0 / (double)local_1930) * dVar15;
  dVar16 = (double)FUN_0040af80(dVar15);
  dVar17 = (double)FUN_0040af80(-dVar15);
  dVar16 = dVar16 * 0.5 - dVar17 * 0.5;
  FUN_00526970(dVar15);
  local_1934 = 0;
  if (-1 < local_1930 + -1) {
    local_1928 = local_1930;
    do {
      iVar11 = local_1934 + 1;
      sVar1 = *(short *)(*param_1 + 0x1fa6);
      if (sVar1 == 0x42) {
        dVar15 = (double)FUN_0040bdd0(((double)(iVar11 * 2 + -1) * 3.1415926535898) /
                                      (double)(local_1930 * 2));
        local_18c8 = dVar15 * 2.0;
      }
      else if (sVar1 == 0x43) {
        dVar15 = (double)FUN_0040bdd0((((double)(iVar11 * 2 + -1) * 3.1415926535898) / 2.0) /
                                      (double)local_1930);
        dVar17 = (double)FUN_0040bdd0(((double)iVar11 * 3.1415926535898) / (double)local_1930);
        if (iVar11 == 1) {
          local_18c8 = (dVar15 * 2.0) / dVar16;
        }
        if (1 < iVar11) {
          local_18c8 = (dVar15 * 4.0 * local_1920) / (local_18c0 * local_1910);
        }
        local_18c0 = local_18c8;
        local_1920 = dVar15;
        local_1910 = dVar16 * dVar16 + dVar17 * dVar17;
      }
      else {
        if (sVar1 != 0x45) {
          if (sVar1 == 0x49) {
            local_18dc = 3;
          }
          else {
            local_18dc = 3;
          }
          goto LAB_0117fd30;
        }
        if (local_1934 == 0) {
          if (*(longlong *)PTR_DAT_02004f98 != 0) {
            FUN_008059a0(*(undefined8 *)PTR_DAT_02004f98);
          }
          FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),local_16c0);
          if (*local_16c0[0] == 0x53) {
            dVar17 = (double)FUN_0040c2f0(0x4024000000000000);
            dVar23 = (*(double *)(*param_1 + 0x30) / *(double *)(*param_1 + 0x20)) / 1000.0;
            iVar11 = *(int *)(*param_1 + 0x1fa0);
            iVar12 = iVar11 * 2;
            iVar7 = iVar12 + 1;
            dVar18 = (double)FUN_0040c760(dVar23 * 0.001);
            dVar15 = dVar18 + dVar18;
            local_18d8 = 1;
            do {
              dVar24 = dVar23 + 0.001;
              iVar13 = 6;
              do {
                dVar26 = (double)FUN_0040c760(dVar24 * dVar15);
                dVar24 = (dVar24 + dVar15) / 2.0;
                if ((dVar24 - dVar26) * 100000000.0 < dVar24) break;
                iVar13 = iVar13 + -1;
                dVar15 = dVar26;
              } while (iVar13 != 0);
              if (1 < local_18d8) break;
              local_18b8 = (double)iVar7 / dVar24;
              dVar15 = (double)FUN_0040c850(dVar23 - 0.001);
              local_18d8 = local_18d8 + 1;
            } while (local_18d8 != 3);
            dVar24 = local_18b8 * dVar24;
            dVar15 = (double)FUN_0040af80(-3.1415926535898 / dVar24);
            dVar26 = (double)FUN_00526600(dVar15,(double)iVar11);
            FUN_0040fb60(local_1840,dVar24 / ((1.0 - dVar15) * 4.0 * dVar26),8,2);
            FUN_004169a0(&local_16c8,local_1840);
            FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48
                        );
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              FUN_00416ba0(&local_1848,L"Critical Q  = ",local_16c8);
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,local_1848);
            }
            dVar17 = (double)FUN_0040af80((-*(double *)(*param_1 + 0x10) * (dVar17 / 10.0)) / 2.0);
            dVar26 = (double)FUN_0040af80(dVar24 * 3.1415926535898);
            FUN_0040c2f0(((dVar17 * dVar17 - 1.0) / (dVar26 / 4.0 + 1.0 / dVar26)) /
                         (dVar26 / 4.0 + 1.0 / dVar26) + 1.0);
            dVar19 = (double)FUN_0040c760(dVar17 * dVar17 - 1.0);
            dVar26 = dVar26 / ((dVar17 + dVar19) * 2.0);
            dVar19 = (double)FUN_0040c760(dVar26 * dVar26 + 1.0);
            dVar26 = (double)FUN_0040c2f0(dVar26 + dVar19);
            dVar26 = dVar26 / (dVar24 * 2.0);
            dVar24 = (double)FUN_0040bdd0(dVar26);
            dVar26 = (double)FUN_0040bcd0(dVar26);
            dVar24 = dVar24 / dVar26;
            FUN_0040fb60(local_1840,
                         (dVar23 - 0.001) / (dVar18 / (dVar24 * 0.001 * dVar24) + 1.0) + 0.001,8,2);
            FUN_004169a0(&local_16c8,local_1840);
            FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48
                        );
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              FUN_00416ba0(&local_1850,L"3 Db (Khz) about   = ",local_16c8);
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,local_1850);
            }
            adStack_6f0[iVar11] = dVar24;
            if (0 < iVar12) {
              pdVar6 = adStack_880;
              iVar13 = iVar12;
              do {
                pdVar6 = pdVar6 + 1;
                *pdVar6 = 1.0;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            local_18d8 = 1;
            iVar13 = 0x400;
            dVar26 = dVar15;
            do {
              adStack_880[local_18d8] = (adStack_880[local_18d8] * (1.0 - dVar26)) / (dVar26 + 1.0);
              if (iVar12 <= local_18d8) {
                dVar26 = dVar26 * dVar15;
                dVar19 = (1.0 - dVar26) / (dVar26 + 1.0);
                dVar19 = dVar19 * dVar19;
                adStack_6f0[iVar11] =
                     (adStack_6f0[iVar11] * (dVar24 * dVar24 + dVar19)) /
                     (dVar24 * dVar24 * dVar19 + 1.0);
                local_18d8 = 0;
              }
              dVar26 = dVar26 * dVar15;
              if (dVar26 < 2.5e-19) break;
              local_18d8 = local_18d8 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            local_1914 = 1;
            if (0 < iVar11) {
              pdVar6 = adStack_880;
              iVar13 = iVar11;
              do {
                pdVar6 = pdVar6 + 1;
                *pdVar6 = *pdVar6 * adStack_880[iVar7 - local_1914];
                adStack_880[iVar7 - local_1914] = *pdVar6;
                local_1914 = local_1914 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            local_1914 = 1;
            if (0 < iVar11) {
              pdVar6 = adStack_880;
              pdVar5 = adStack_560;
              pdVar9 = adStack_240;
              iVar13 = iVar11;
              do {
                pdVar6 = pdVar6 + 1;
                pdVar9 = pdVar9 + 1;
                pdVar5 = pdVar5 + 1;
                *pdVar5 = (adStack_880[local_1914 * 2] *
                          (1.0 - *pdVar6 * *pdVar6 * *pdVar6 * *pdVar6)) / *pdVar6;
                *pdVar9 = adStack_6f0[iVar11] * *pdVar6;
                local_1914 = local_1914 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            adStack_3d0[1] = 1.0 / adStack_240[iVar11];
            iVar13 = iVar11 + -1;
            local_1914 = 1;
            if (0 < iVar13) {
              pdVar6 = adStack_3d0;
              pdVar5 = adStack_560;
              pdVar9 = adStack_240;
              do {
                pdVar9 = pdVar9 + 1;
                pdVar6 = pdVar6 + 1;
                pdVar5 = pdVar5 + 1;
                adStack_3d0[local_1914 + 1] =
                     (*pdVar6 - adStack_240[iVar11 - local_1914]) /
                     (*pdVar6 * adStack_240[iVar11 - local_1914] + 1.0);
                adStack_6f0[iVar11 - local_1914] =
                     adStack_6f0[(iVar11 - local_1914) + 1] +
                     (adStack_6f0[iVar11] * *pdVar5) / (*pdVar9 * *pdVar9 + 1.0);
                local_1914 = local_1914 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            if (0 < iVar11) {
              pdVar6 = adStack_3d0;
              pdVar5 = adStack_6f0;
              pdVar9 = adStack_560;
              local_1900 = adStack_880;
              local_1908 = adStack_240;
              iVar13 = iVar11;
              do {
                local_1900 = local_1900 + 1;
                local_1908 = local_1908 + 1;
                pdVar6 = pdVar6 + 1;
                pdVar9 = pdVar9 + 1;
                pdVar5 = pdVar5 + 1;
                *local_1908 = (((*pdVar6 * *pdVar6 + 1.0) * *pdVar5) / *pdVar9 -
                              *pdVar6 / *local_1900) / 2.0;
                *pdVar6 = *pdVar6 * *local_1900;
                *pdVar9 = *local_1900 * *local_1900;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            adStack_240[iVar11 + 1] = adStack_240[iVar11];
            adStack_3d0[iVar11 + 1] = adStack_3d0[iVar11];
            adStack_560[iVar11 + 1] = adStack_560[iVar11];
            if (iVar11 != 1) {
              iVar4 = 1;
              iVar13 = iVar4;
              do {
                while (iVar2 = iVar13, iVar13 = iVar2 + 2, local_18d0 = iVar4, iVar13 <= iVar11 + 1)
                {
                  while (local_18d0 <= iVar2) {
                    dVar15 = adStack_3d0[local_18d0];
                    dVar17 = 1.0 / ((dVar15 - adStack_3d0[iVar13]) /
                                    (adStack_240[local_18d0] *
                                    (adStack_560[iVar13] - adStack_560[local_18d0])) - 1.0);
                    adStack_240[iVar13] =
                         (adStack_240[iVar13] - adStack_240[local_18d0]) * dVar17 * dVar17 -
                         adStack_240[local_18d0] * (dVar17 + dVar17 + 1.0);
                    adStack_3d0[iVar13] = (dVar15 - adStack_3d0[iVar13]) * dVar17;
                    local_18d0 = local_18d0 + 2;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar13 = iVar4;
              } while (iVar4 != 3);
              dVar17 = adStack_240[iVar11] / adStack_240[iVar11 + 1] - 1.0;
            }
            dVar15 = 0.0005 / (dVar18 * 3.1415926535898);
            dVar24 = dVar15 * 1.0;
            local_18b8 = dVar15 / 1.0;
            if (dVar23 < 0.001) {
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,L"HIGH PASS FILTER");
              }
              if (0 < iVar11) {
                pdVar6 = adStack_3d0;
                pdVar5 = adStack_240;
                local_1900 = adStack_560;
                local_1908 = adStack_880;
                iVar13 = iVar11;
                do {
                  local_1900 = local_1900 + 1;
                  local_1908 = local_1908 + 1;
                  pdVar5 = pdVar5 + 1;
                  pdVar6 = pdVar6 + 1;
                  *pdVar6 = local_18b8 / *pdVar6;
                  *local_1900 = local_18b8 / (*pdVar5 * *local_1900);
                  *pdVar5 = dVar24 * *pdVar5;
                  *local_1908 = dVar18 * *local_1908;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              adStack_3d0[iVar11 + 1] = local_18b8 * adStack_3d0[iVar11 + 1];
            }
            else {
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,L"LOW PASS FILTER ");
              }
              if (0 < iVar11) {
                local_1908 = adStack_3d0;
                local_1900 = adStack_240;
                pdVar6 = adStack_560;
                pdVar5 = adStack_880;
                iVar13 = iVar11;
                do {
                  local_1900 = local_1900 + 1;
                  local_1908 = local_1908 + 1;
                  pdVar6 = pdVar6 + 1;
                  pdVar5 = pdVar5 + 1;
                  *local_1908 = local_18b8 * *local_1908;
                  *pdVar6 = local_18b8 * *local_1900 * *pdVar6;
                  *local_1900 = dVar24 / *local_1900;
                  *pdVar5 = dVar18 / *pdVar5;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              adStack_3d0[iVar11 + 1] = local_18b8 * adStack_3d0[iVar11 + 1];
            }
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,L"    KHZ        FARAD        HENRY");
            }
            *(undefined4 *)PTR_DAT_02002af8 = 0;
            local_18d0 = 1;
            if (0 < iVar11) {
              do {
                iVar13 = local_18d0 + 2;
                FUN_0040fb60(local_1840,(double)*(int *)PTR_DAT_02002af8,8,2);
                FUN_004169a0(&local_16d0,local_1840);
                FUN_0122a290(&local_16d0,*(undefined8 *)PTR_DAT_020052e0,
                             *(undefined8 *)PTR_DAT_02001b48);
                FUN_0040fb60(local_1840,adStack_3d0[local_18d0],8,2);
                FUN_004169a0(&local_16c8,local_1840);
                FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,
                             *(undefined8 *)PTR_DAT_02001b48);
                *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                     adStack_3d0[local_18d0];
                *(undefined8 *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
                *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
                if (*(longlong *)PTR_DAT_02004f98 != 0) {
                  FUN_00416cd0(&local_1858,4,L"ujind=",local_16d0,L"                       ",
                               local_16c8);
                  plVar8 = *(longlong **)
                            (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                  (**(code **)(*plVar8 + 0x78))(plVar8,local_1858);
                }
                FUN_0040fb60(local_1840,adStack_880[local_18d0],8,2);
                FUN_004169a0(&local_16c8,local_1840);
                FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,
                             *(undefined8 *)PTR_DAT_02001b48);
                FUN_0040fb60(local_1840,(double)local_18d0,8,2);
                FUN_004169a0(local_16c0,local_1840);
                FUN_0122a290(local_16c0,*(undefined8 *)PTR_DAT_020052e0,
                             *(undefined8 *)PTR_DAT_02001b48);
                FUN_0040fb60(local_1840,adStack_240[local_18d0],8,2);
                FUN_004169a0(&local_16d0,local_1840);
                FUN_0122a290(&local_16d0,*(undefined8 *)PTR_DAT_020052e0,
                             *(undefined8 *)PTR_DAT_02001b48);
                FUN_0040fb60(local_1840,adStack_560[local_18d0],8,2);
                FUN_004169a0(&local_16d8,local_1840);
                FUN_0122a290(&local_16d8,*(undefined8 *)PTR_DAT_020052e0,
                             *(undefined8 *)PTR_DAT_02001b48);
                *(double *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                     adStack_240[local_18d0];
                *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                     adStack_560[local_18d0];
                *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
                if (*(longlong *)PTR_DAT_02004f98 != 0) {
                  FUN_00416cd0(&local_1860,8,&DAT_0117ffd0,local_16c8,L"     ",local_16c0[0],
                               L"     ",local_16d0,L"     ",local_16d8);
                  plVar8 = *(longlong **)
                            (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                  (**(code **)(*plVar8 + 0x78))(plVar8,local_1860);
                }
                local_18d0 = iVar13;
              } while (iVar13 <= iVar11);
            }
            FUN_0040fb60(local_1840,(double)(iVar11 + 1),8,2);
            FUN_004169a0(&local_16d0,local_1840);
            FUN_0122a290(&local_16d0,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48
                        );
            FUN_0040fb60(local_1840,(double)*(int *)PTR_DAT_02002af8,8,2);
            FUN_004169a0(&local_16d8,local_1840);
            FUN_0122a290(&local_16d8,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48
                        );
            FUN_0040fb60(local_1840,adStack_3d0[iVar11 + 1],8,2);
            FUN_004169a0(&local_16c8,local_1840);
            FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48
                        );
            *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                 adStack_3d0[iVar11 + 1];
            *(undefined8 *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
            *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              FUN_00416cd0(&local_1868,6,L" ujind=",local_16d8,&DAT_0118010c,local_16d0,
                           L"                    ",local_16c8);
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,local_1868);
            }
            if (iVar11 != 1) {
              iVar11 = (iVar11 + 1) / 2;
              local_18d8 = iVar7 + iVar11 * -2 + -1;
              iVar11 = iVar11 * 2 + 2;
              if (iVar11 <= iVar12) {
                iVar11 = (iVar12 - iVar11) + 1;
                do {
                  FUN_0040fb60(local_1840,adStack_880[local_18d8],8,2);
                  FUN_004169a0(&local_16c8,local_1840);
                  FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,
                               *(undefined8 *)PTR_DAT_02001b48);
                  FUN_0040fb60(local_1840,(double)local_18d8,8,2);
                  FUN_004169a0(local_16c0,local_1840);
                  FUN_0122a290(local_16c0,*(undefined8 *)PTR_DAT_020052e0,
                               *(undefined8 *)PTR_DAT_02001b48);
                  FUN_0040fb60(local_1840,adStack_240[local_18d8],8,2);
                  FUN_004169a0(&local_16d0,local_1840);
                  FUN_0122a290(&local_16d0,*(undefined8 *)PTR_DAT_020052e0,
                               *(undefined8 *)PTR_DAT_02001b48);
                  FUN_0040fb60(local_1840,adStack_560[local_18d8],8,2);
                  FUN_004169a0(&local_16d8,local_1840);
                  FUN_0122a290(&local_16d8,*(undefined8 *)PTR_DAT_020052e0,
                               *(undefined8 *)PTR_DAT_02001b48);
                  if (0 < local_18d8) {
                    *(double *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                         adStack_240[local_18d8];
                    *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                         adStack_560[local_18d8];
                    *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
                    if (*(longlong *)PTR_DAT_02004f98 != 0) {
                      FUN_00416cd0(&local_1870,8,&DAT_0117ffd0,local_16c8,L"     ",local_16c0[0],
                                   L"     ",local_16d0,L"     ",local_16d8);
                      plVar8 = *(longlong **)
                                (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                      (**(code **)(*plVar8 + 0x78))(plVar8,local_1870);
                    }
                    FUN_0040fb60(local_1840,adStack_3d0[local_18d8],8,2);
                    FUN_004169a0(&local_16c8,local_1840);
                    FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,
                                 *(undefined8 *)PTR_DAT_02001b48);
                    *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                         adStack_3d0[local_18d8];
                    *(undefined8 *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
                    FUN_0040fb60(local_1840,(double)*(int *)PTR_DAT_02002af8,8,2);
                    FUN_004169a0(&local_16d8,local_1840);
                    FUN_0122a290(&local_16d8,*(undefined8 *)PTR_DAT_020052e0,
                                 *(undefined8 *)PTR_DAT_02001b48);
                    if (*(longlong *)PTR_DAT_02004f98 != 0) {
                      FUN_00416cd0(&local_1878,6,L"ujind=",local_16d8,&DAT_0118010c,local_16c0[0],
                                   L"                     ",local_16c8);
                      plVar8 = *(longlong **)
                                (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                      (**(code **)(*plVar8 + 0x78))(plVar8,local_1878);
                    }
                    *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
                  }
                  local_18d8 = local_18d8 + -2;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              FUN_0040fb60(local_1840,dVar17,8,2);
              FUN_004169a0(&local_16c8,local_1840);
              FUN_0122a290(&local_16c8,*(undefined8 *)PTR_DAT_020052e0,
                           *(undefined8 *)PTR_DAT_02001b48);
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416ba0(&local_1880,L"   precision test    ",local_16c8);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1880);
              }
              *(undefined8 *)(*param_2 + 0x12e0) = 0x3ff0000000000000;
            }
          }
          else {
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,L"Elliptic filter   ");
            }
            local_18f4 = 0;
            dVar18 = (double)FUN_0040c2f0(0x4024000000000000);
            dVar15 = *(double *)(*param_1 + 0x10);
            dVar17 = *(double *)*param_1;
            iVar11 = *(int *)(*param_1 + 0x1fa0);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),local_16c0);
            sVar1 = *local_16c0[0];
            if (-dVar15 <= -dVar17) {
              local_18dc = 3;
              goto LAB_0117fd30;
            }
            iVar12 = iVar11 * 2;
            dVar15 = (double)FUN_0040af80((dVar18 / 10.0) * -dVar15);
            dVar15 = dVar15 - 1.0;
            dVar17 = (double)FUN_0040af80((dVar18 / 10.0) * -dVar17);
            dVar18 = (double)FUN_0040c760(dVar15 / (dVar17 - 1.0));
            dVar17 = (double)FUN_0040c760(dVar15 / (dVar17 - 1.0) - 1.0);
            dVar18 = dVar18 + dVar17;
            dVar17 = (double)FUN_0040c2f0(dVar18 + dVar18);
            dVar23 = 9.869604401089402 / (dVar17 * 2.0);
            dVar17 = (double)FUN_0040c760(dVar15);
            dVar15 = (double)FUN_0040c760(dVar15 + 1.0);
            dVar18 = dVar18 / (dVar17 + dVar15);
            dVar15 = (double)FUN_0040c760(dVar18 * dVar18 + 1.0);
            dVar15 = (double)FUN_0040c2f0(dVar18 + dVar15);
            dVar17 = (double)FUN_0040bdd0();
            dVar15 = (double)FUN_0040bcd0((dVar23 * dVar15) / 3.1415926535898);
            dVar17 = dVar17 / dVar15;
            dVar18 = dVar17 * dVar17;
            dVar15 = (double)FUN_0040af80(-dVar23);
            local_18d8 = iVar11 + -1;
            iVar7 = 0x32;
            pdVar6 = adStack_240;
            pdVar5 = adStack_3d0;
            local_1900 = adStack_560;
            local_18f0 = adStack_6f0;
            local_1908 = adStack_880;
            do {
              local_18f0 = local_18f0 + 1;
              local_1900 = local_1900 + 1;
              local_1908 = local_1908 + 1;
              pdVar5 = pdVar5 + 1;
              pdVar6 = pdVar6 + 1;
              *pdVar6 = 0.0;
              *pdVar5 = 0.0;
              *local_1900 = 0.0;
              *local_18f0 = 1.0;
              *local_1908 = 0.0;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            iVar7 = 0x400;
            dVar24 = dVar15;
            do {
              if (local_18d8 == iVar11) {
                dVar26 = ((1.0 - dVar24) / (dVar24 + 1.0)) * ((1.0 - dVar24) / (dVar24 + 1.0));
                dVar17 = (dVar17 * (dVar18 + dVar26)) / (dVar18 * dVar26 + 1.0);
              }
              adStack_6f0[local_18d8] = (adStack_6f0[local_18d8] * (1.0 - dVar24)) / (dVar24 + 1.0);
              dVar24 = dVar24 * dVar15;
              if (dVar24 < 2.5e-19) break;
              local_18d8 = local_18d8 + -1;
              if (local_18d8 == 0) {
                local_18d8 = iVar12;
              }
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            adStack_6f0[iVar11] = 0.0;
            adStack_6f0[iVar12] = adStack_6f0[iVar12] * adStack_6f0[iVar12];
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),dVar23);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),dVar17);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),adStack_6f0[iVar12])
            ;
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d8);
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              FUN_00416cd0(&local_16f0,6,L"U = ",local_16c8,L" ao = ",local_16d0,L"     ep = ",
                           local_16d8);
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,local_16f0);
            }
            iVar7 = iVar11 + -1;
            local_1914 = 1;
            if (0 < iVar7) {
              local_1908 = adStack_6f0;
              do {
                local_1908 = local_1908 + 1;
                *local_1908 = -*local_1908 * adStack_6f0[iVar12 - local_1914];
                FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),-*local_1908);
                FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
                if (*(longlong *)PTR_DAT_02004f98 != 0) {
                  FUN_00416ba0(&local_16f8,&DAT_0117ff30,local_16c8);
                  plVar8 = *(longlong **)
                            (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                  (**(code **)(*plVar8 + 0x78))(plVar8,local_16f8);
                }
                adStack_6f0[iVar12 - local_1914] = -*local_1908;
                local_1914 = local_1914 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            dVar15 = (double)FUN_0040c760(dVar17 * dVar17 + 1.0 / (dVar17 * dVar17) +
                                          adStack_6f0[iVar12] * adStack_6f0[iVar12] +
                                          1.0 / (adStack_6f0[iVar12] * adStack_6f0[iVar12]));
            local_18d0 = 1;
            while (local_18d0 <= iVar11 + -1) {
              local_18d8 = (local_18d0 + 1) / 2;
              dVar18 = dVar17 * adStack_6f0[local_18d0] + 1.0 / (dVar17 * adStack_6f0[local_18d0]);
              adStack_a10[local_18d8] =
                   (adStack_6f0[iVar11 - local_18d0] *
                   (1.0 / (adStack_6f0[iVar12] * adStack_6f0[local_18d0]) -
                   adStack_6f0[iVar12] * adStack_6f0[local_18d0])) / dVar18;
              adStack_d30[local_18d8] = -dVar15 / dVar18;
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           adStack_a10[local_18d8]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           adStack_d30[local_18d8]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416cd0(&local_1700,4,L"Re = ",local_16c8,L"     Se = ",local_16d0);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1700);
              }
              adStack_a10[(iVar11 - local_18d8) + 1] = adStack_a10[local_18d8];
              adStack_d30[(iVar11 - local_18d8) + 1] = -adStack_d30[local_18d8];
              local_18d0 = local_18d0 + 2;
            }
            if (local_18d8 * 2 != iVar11) {
              adStack_a10[local_18d8 + 1] = -dVar17;
              adStack_d30[local_18d8 + 1] = 0.0;
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),-dVar17);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416ba0(&local_1708,&DAT_0117ff80,local_16c8);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1708);
              }
            }
            local_18e0 = 2;
            if (sVar1 == 0x61) {
              local_18e0 = 1;
            }
            local_18a0 = -adStack_6f0[1];
            if (sVar1 == 0x61) {
              local_18a0 = adStack_6f0[iVar12];
            }
            local_1898 = adStack_6f0[iVar12];
            if (sVar1 == 99) {
              local_1898 = -adStack_6f0[1];
            }
            dVar15 = (double)FUN_0040c760((adStack_6f0[iVar12] + local_1898) /
                                          (adStack_6f0[iVar12] * local_18a0 + 1.0));
            FUN_0040c760((adStack_6f0[iVar12] * local_1898 + 1.0) /
                         (adStack_6f0[iVar12] + local_18a0));
            adStack_560[1] = 0.0;
            local_1914 = local_18e0;
            if (local_18e0 <= iVar11) {
              iVar12 = (iVar11 - local_18e0) + 1;
              local_1908 = adStack_560 + local_18e0;
              local_18f0 = adStack_880 + local_18e0;
              do {
                *local_1908 = (adStack_6f0[local_1914 * 2 + -1] + local_18a0) /
                              (adStack_6f0[local_1914 * 2 + -1] * local_1898 + 1.0);
                dVar18 = (double)FUN_0040c760(1.0 / *local_1908);
                *local_18f0 = dVar18;
                local_1914 = local_1914 + 1;
                local_18f0 = local_18f0 + 1;
                local_1908 = local_1908 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            dVar24 = 0.0;
            dVar18 = 0.0;
            dVar23 = 0.0;
            adStack_240[1] = 0.0;
            local_18d4 = 1;
            local_1914 = 1;
            if (0 < iVar11) {
              local_18f0 = adStack_d30;
              local_1908 = adStack_a10;
              local_1900 = (double *)local_b98;
              local_18cc = iVar11;
              do {
                local_18f0 = local_18f0 + 1;
                local_1908 = local_1908 + 1;
                dVar26 = (dVar17 * dVar17 +
                         adStack_6f0[local_1914 * 2 + -1] * adStack_6f0[local_1914 * 2 + -1]) /
                         (dVar17 * adStack_6f0[local_1914 * 2 + -1] * dVar17 *
                          adStack_6f0[local_1914 * 2 + -1] + 1.0);
                dVar27 = (local_1898 * local_18a0 + 1.0) * *local_18f0 + local_1898 +
                         local_18a0 * dVar26;
                dVar21 = local_1898 * local_1898 + local_1898 * 2.0 * *local_18f0 + dVar26;
                dVar25 = local_18a0 * 2.0 * *local_18f0 + local_18a0 * local_18a0 * dVar26 + 1.0;
                dVar26 = (double)FUN_0040c760(dVar21 / dVar25);
                dVar22 = dVar27 / dVar25;
                dVar19 = (double)FUN_0040c760((dVar26 - dVar22) / 2.0);
                *local_1908 = dVar19;
                if (*local_1908 == 0.0) {
                  *local_1908 = 1e-30;
                }
                dVar19 = (double)FUN_0040c760(dVar21 * dVar25);
                uVar20 = FUN_0040c760(((dVar19 - dVar27) / 2.0) / dVar25);
                *local_1900 = (double)uVar20;
                dVar19 = (double)FUN_0040c760((dVar26 + dVar22) / 2.0);
                *local_18f0 = dVar19;
                local_16c0[(longlong)(local_18f4 + 1) * 2 + -1] = (short *)(-*local_1908 / dVar15);
                local_16c0[(longlong)(local_18f4 + 1) * 2] = (short *)(*local_18f0 / dVar15);
                local_18f4 = local_18f4 + 2;
                FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                             -*local_1908 / dVar15);
                FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
                FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                             *local_18f0 / dVar15);
                FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
                if (*(longlong *)PTR_DAT_02004f98 != 0) {
                  FUN_00416cd0(&local_1710,4,L"RF = ",local_16c8,L"      SF = ",local_16d0);
                  plVar8 = *(longlong **)
                            (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                  (**(code **)(*plVar8 + 0x78))(plVar8,local_1710);
                }
                local_16c0[(longlong)local_18f4 * 2 + -1] = (short *)(-*local_1908 / dVar15);
                local_16c0[(longlong)local_18f4 * 2] = (short *)(-*local_18f0 / dVar15);
                dVar24 = dVar24 + *local_1908 / dVar26;
                local_18d4 = -local_18d4;
                dVar26 = ((double)local_18d4 * *local_1908) / *local_18f0;
                dVar18 = (dVar18 + dVar26) / (1.0 - dVar18 * dVar26);
                if (sVar1 == 0x61) {
                  dVar19 = (adStack_880[2] - *local_18f0) / *local_1908;
                  dVar26 = (adStack_880[2] + *local_18f0) / *local_1908;
                  dVar26 = ((double)local_18d4 * (dVar26 - dVar19)) / (dVar19 * dVar26 + 1.0);
                  dVar23 = (dVar23 + dVar26) / (1.0 - dVar23 * dVar26);
                }
                adStack_240[1] = adStack_240[1] + *local_1908;
                local_1914 = local_1914 + 1;
                local_1900 = local_1900 + 1;
                local_18cc = local_18cc + -1;
              } while (local_18cc != 0);
            }
            if (sVar1 == 0x61) {
              dVar17 = (double)FUN_0040c760(dVar23 * dVar23 + 1.0);
              dVar23 = dVar23 / (dVar17 + 1.0);
            }
            if (local_18e0 <= iVar11) {
              iVar12 = (iVar11 - local_18e0) + 1;
              local_1900 = adStack_ec8 + local_18e0;
              local_1908 = adStack_1060 + local_18e0;
              local_18f0 = adStack_880 + local_18e0;
              do {
                *local_1900 = 0.0;
                *local_1908 = dVar23;
                local_18d4 = 1;
                if (0 < iVar11) {
                  pdVar6 = adStack_d30;
                  pdVar5 = adStack_a10;
                  iVar7 = iVar11;
                  do {
                    pdVar5 = pdVar5 + 1;
                    pdVar6 = pdVar6 + 1;
                    *local_1900 = *local_1900 +
                                  1.0 / (*pdVar5 +
                                        ((*local_18f0 - *pdVar6) * (*local_18f0 - *pdVar6)) /
                                        *pdVar5) +
                                  1.0 / (*pdVar5 +
                                        ((*local_18f0 + *pdVar6) * (*local_18f0 + *pdVar6)) /
                                        *pdVar5);
                    local_18d4 = -local_18d4;
                    dVar17 = (*local_18f0 - (double)local_18d4 * *pdVar6) / *pdVar5;
                    *local_1908 = (*local_1908 + dVar17) / (1.0 - *local_1908 * dVar17);
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                local_18f0 = local_18f0 + 1;
                local_1908 = local_1908 + 1;
                local_1900 = local_1900 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            adStack_560[iVar11 + 1] = adStack_560[iVar11];
            adStack_880[iVar11 + 1] = adStack_880[iVar11];
            adStack_ec8[iVar11 + 1] = adStack_ec8[iVar11];
            adStack_1060[iVar11 + 1] = adStack_1060[iVar11];
            adStack_3d0[1] = 0.0;
            local_18d0 = 1;
            while (local_18d0 <= (iVar11 - local_18e0) + 1) {
              adStack_1060[(iVar11 - local_18d0) + 1] =
                   -1.0 / adStack_1060[(iVar11 - local_18d0) + 1];
              local_18d0 = local_18d0 + 2;
            }
            if (local_18e0 <= iVar11 + 1) {
              iVar12 = ((iVar11 + 1) - local_18e0) + 1;
              local_18f0 = adStack_1060 + local_18e0;
              local_1908 = adStack_ec8 + local_18e0;
              local_1900 = adStack_560 + local_18e0;
              pdVar6 = adStack_880 + local_18e0;
              pdVar5 = adStack_240 + local_18e0;
              pdVar9 = adStack_3d0 + local_18e0;
              do {
                *pdVar5 = ((*local_18f0 * *local_18f0 + 1.0) * *local_1908) / (*local_1900 * 4.0) -
                          (*local_18f0 * *pdVar6) / 2.0;
                *pdVar9 = *local_18f0 / *pdVar6;
                pdVar9 = pdVar9 + 1;
                pdVar5 = pdVar5 + 1;
                pdVar6 = pdVar6 + 1;
                local_1900 = local_1900 + 1;
                local_1908 = local_1908 + 1;
                local_18f0 = local_18f0 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0117ffd0);
            }
            iVar7 = 1;
            iVar12 = iVar7;
            do {
              while (iVar13 = iVar12, iVar12 = iVar13 + 2, local_18d0 = iVar7, iVar12 <= iVar11 + 1)
              {
                while (local_18d0 <= iVar13) {
                  lVar10 = (longlong)local_18d0;
                  dVar17 = adStack_3d0[lVar10];
                  dVar26 = 1.0 / ((dVar17 - adStack_3d0[iVar12]) /
                                  (adStack_240[lVar10] * (adStack_560[iVar12] - adStack_560[lVar10])
                                  ) - 1.0);
                  adStack_240[iVar12] =
                       (adStack_240[iVar12] - adStack_240[local_18d0]) * dVar26 * dVar26 -
                       adStack_240[local_18d0] * (dVar26 + dVar26 + 1.0);
                  adStack_3d0[iVar12] = (dVar17 - adStack_3d0[iVar12]) * dVar26;
                  local_18d0 = local_18d0 + 2;
                }
              }
              iVar7 = iVar7 + 1;
              iVar12 = iVar7;
            } while (iVar7 != 3);
            local_1890 = 1.0;
            if (sVar1 != 99) {
              local_1890 = (1.0 - dVar18 * dVar23) / (dVar18 + dVar23);
              local_1890 = local_1890 * local_1890;
            }
            local_18d0 = 1;
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0117ffd0);
            }
            while (local_18d0 <= iVar11 + 1) {
              adStack_240[local_18d0] = adStack_240[local_18d0] * local_1890;
              adStack_3d0[local_18d0] = adStack_3d0[local_18d0] * local_1890;
              local_18d0 = local_18d0 + 2;
            }
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_1890);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),1.0 / local_1890);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0117ffd0);
            }
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0117ffd0);
            }
            *(double *)(*param_2 + 0x12e0) = local_1890;
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              FUN_00416cd0(&local_1718,5,L"LD RESIS =",local_16c8,L" (  ",local_16d0,&DAT_0118001c);
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,local_1718);
            }
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))
                        (plVar8,L"             L(C)             C(L)             PEAK    L()");
            }
            *(undefined4 *)PTR_DAT_02002af8 = 0;
            dVar17 = 0.0;
            local_18d0 = 2;
            while (local_18d0 < iVar11 + 2) {
              iVar12 = local_18d0 + 2;
              dVar17 = dVar17 + adStack_3d0[local_18d0];
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),(double)local_18d0
                          );
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_16c0);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           dVar15 * adStack_3d0[local_18d0]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           dVar15 / adStack_240[local_18d0]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           adStack_880[local_18d0] / dVar15);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d8);
              dVar18 = 0.0;
              FUN_00414b50(&local_16e0,&DAT_011800b4);
              if (adStack_880[local_18d0] != 0.0) {
                dVar18 = ((dVar15 * adStack_240[local_18d0]) / adStack_880[local_18d0]) /
                         adStack_880[local_18d0];
                FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),dVar18);
                FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16e0);
              }
              *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                   dVar15 * adStack_3d0[local_18d0];
              *(undefined8 *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
              *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = dVar18;
              *(double *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                   dVar15 / adStack_240[local_18d0];
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
              local_18d0 = iVar12;
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416cd0(&local_1720,9,local_16c0[0],L"         ",local_16c8,L"         ",
                             local_16d0,L"          ",local_16d8,&DAT_0118010c,local_16e0);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1720);
              }
            }
            local_18d0 = 3;
            while (local_18d0 < iVar11 + 1) {
              iVar7 = local_18d0 + -2;
              iVar12 = local_18d0 + 2;
              dVar17 = dVar17 + adStack_3d0[local_18d0];
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),(double)local_18d0
                          );
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_16c0);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           dVar15 * adStack_3d0[local_18d0]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           dVar15 / adStack_240[iVar7]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           adStack_880[iVar7] / dVar15);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d8);
              dVar18 = 0.0;
              FUN_00414b50(&local_16e0,&DAT_011800b4);
              if (adStack_880[iVar7] != 0.0) {
                dVar18 = ((dVar15 * adStack_240[iVar7]) / adStack_880[iVar7]) / adStack_880[iVar7];
                FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),dVar18);
                FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16e0);
              }
              *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                   dVar15 * adStack_3d0[local_18d0];
              *(undefined8 *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
              *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = dVar18;
              *(double *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                   dVar15 / adStack_240[iVar7];
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
              local_18d0 = iVar12;
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416cd0(&local_1728,9,local_16c0[0],L"         ",local_16c8,L"         ",
                             local_16d0,L"          ",local_16d8,&DAT_0118010c,local_16e0);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1728);
              }
            }
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                         adStack_240[iVar11] / adStack_240[iVar11 + 1] - 1.0);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
            FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                         ((local_1890 + 1.0) * dVar24 - dVar17) - adStack_3d0[iVar11 + 1]);
            FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
            if (*(longlong *)PTR_DAT_02004f98 != 0) {
              FUN_00416cd0(&local_1730,4,L"TESTS      ",local_16c8,L"            ",local_16d0);
              plVar8 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
              (**(code **)(*plVar8 + 0x78))(plVar8,local_1730);
            }
            if (sVar1 == 0x61) {
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),0x3ff0000000000000
                          );
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_16c0);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           dVar15 * adStack_3d0[1]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           dVar15 / adStack_240[1]);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d0);
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                           adStack_880[1] / dVar15);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16d8);
              dVar17 = 0.0;
              FUN_00414b50(&local_16e0,&DAT_011800b4);
              if (adStack_880[1] != 0.0) {
                dVar17 = ((dVar15 * adStack_240[1]) / adStack_880[1]) / adStack_880[1];
                FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),dVar17);
                FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16e0);
              }
              *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                   dVar15 * adStack_3d0[1];
              *(undefined8 *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
              *(double *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = dVar17;
              *(double *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) =
                   dVar15 / adStack_240[1];
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416cd0(&local_1740,9,local_16c0[0],L"         ",local_16c8,L"         ",
                             local_16d0,L"          ",local_16d8,&DAT_0118010c,local_16e0);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1740);
              }
            }
            else {
              dVar15 = dVar15 / adStack_240[1];
              FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),dVar15);
              FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_16c8);
              if (*(longlong *)PTR_DAT_02004f98 != 0) {
                FUN_00416ba0(&local_1738,L"1                          ",local_16c8);
                plVar8 = *(longlong **)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004f98 + 0x6b0) + 0x4a0);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_1738);
              }
              *(double *)(*param_2 + 0x978 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = dVar15;
              *(undefined8 *)(*param_2 + 0x10 + (longlong)*(int *)PTR_DAT_02002af8 * 8) = 0;
              *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + 1;
            }
            *(int *)PTR_DAT_02002af8 = *(int *)PTR_DAT_02002af8 + -1;
          }
        }
      }
      if ((*(short *)(*param_1 + 0x1fa6) == 0x42) || (*(short *)(*param_1 + 0x1fa6) == 0x43)) {
        cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0));
        if (cVar3 == '\x01') {
          if (local_1934 % 2 == 0) {
            *(double *)(*param_2 + 0x10 + (longlong)(local_1934 / 2) * 8) = local_18c8;
          }
          else {
            *(double *)(*param_2 + 0x978 + (longlong)(local_1934 / 2) * 8) = local_18c8;
          }
        }
        else if (local_1934 % 2 == 1) {
          *(double *)(*param_2 + 0x10 + (longlong)(local_1934 / 2) * 8) = local_18c8;
        }
        else {
          *(double *)(*param_2 + 0x978 + (longlong)(local_1934 / 2) * 8) = local_18c8;
        }
      }
      local_1934 = local_1934 + 1;
      local_1928 = local_1928 + -1;
    } while (local_1928 != 0);
  }
  if ((*(short *)(*param_1 + 0x1fa6) == 0x42) || (*(short *)(*param_1 + 0x1fa6) == 0x43)) {
    dVar14 = (double)FUN_0040c760((dVar14 - 1.0) + 1.0);
    if (*(short *)(*param_1 + 0x1fa6) == 0x43) {
      if (local_1930 % 2 == 0) {
        dVar15 = (double)FUN_0040c760(dVar14 * dVar14 - 1.0);
        *(double *)(*param_2 + 0x12e0) = (dVar14 * 2.0 * dVar14 - dVar14 * 2.0 * dVar15) - 1.0;
      }
      else {
        *(undefined8 *)(*param_2 + 0x12e0) = 0x3ff0000000000000;
      }
    }
    else if (*(short *)(*param_1 + 0x1fa6) == 0x42) {
      *(undefined8 *)(*param_2 + 0x12e0) = 0x3ff0000000000000;
    }
  }
  local_18dc = 0;
LAB_0117fd30:
  FUN_00414560(&local_1880,8);
  FUN_00414560(&local_1740,0x11);
  return local_18dc;
}

