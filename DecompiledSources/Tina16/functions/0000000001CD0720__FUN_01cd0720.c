/* Ghidra address: 01cd0720 */
/* Ghidra symbol: FUN_01cd0720 */


void FUN_01cd0720(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined7 uVar14;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar15;
  int iVar16;
  bool bVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 local_b4;
  int local_b0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  short *local_60 [6];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_60[0] = (short *)0x0;
  (**(code **)(*param_1 + 0x68))(param_1);
  local_b4 = FUN_01cce3f0(param_1);
  plVar9 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_2 + 0x70));
  uVar14 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(byte *)(param_1 + 0xe) < 8) {
    bVar17 = ((int)CONCAT71(uVar14,1) << (*(byte *)(param_1 + 0xe) & 0x1f) & 4U) != 0;
  }
  else {
    bVar17 = false;
  }
  if (bVar17) {
    local_b4 = 0xffffffe2;
  }
  iVar15 = *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x14);
  iVar16 = (int)param_1[4] - (int)param_1[3];
  if ((double)param_1[0x11] == 0.0) {
    lVar18 = FUN_00f06430(param_1[0x17],param_1[0x18]);
    param_1[0x11] = lVar18;
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 < 2) {
    param_1[0xf] = (longlong)
                   (((double)param_1[0x18] - (double)param_1[0x17]) /
                   (double)*(int *)((longlong)param_1 + 0x74));
  }
  else if (bVar2 == 2) {
    dVar19 = (double)FUN_00c43d10(param_1[0x18]);
    dVar20 = (double)FUN_00c43d10(param_1[0x17]);
    lVar18 = FUN_00c43d20((dVar19 - dVar20) / (double)*(int *)((longlong)param_1 + 0x74));
    param_1[0xf] = lVar18;
  }
  else if (bVar2 == 3) {
    param_1[0xf] = 0x3fb999999999999a;
  }
  uVar10 = FUN_01cd6670(param_1);
  uVar10 = uVar10 & 0xff;
  if (uVar10 < 5) {
    if (uVar10 != 4) {
      uVar10 = uVar10 - 1;
      if (uVar10 == 0xffffffffffffffff) {
        piVar1 = (int *)((longlong)param_1 + 0x14);
        lVar11 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
        plVar13 = *(longlong **)(*(longlong *)(lVar11 + 0x90) + 0x80);
        (**(code **)(*plVar13 + 0x10))(plVar13,param_1[0x14]);
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),param_1[0x14]);
        iVar16 = FUN_005fdff0(param_2,&DAT_01cd2144);
        uVar8 = FUN_01cd66b0(param_1);
        uVar4 = FUN_00f060d0(param_1[0xf]);
        lVar18 = CONCAT44(uVar6,uVar8);
        FUN_00f05f60(local_70,param_1[0x18],param_1[0x11],(char)param_1[0x10],lVar18,local_b4,uVar4)
        ;
        iVar7 = FUN_005fdff0(param_2,local_70[0]);
        iVar5 = FUN_005fdfd0(param_2,&DAT_01cd2144);
        cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
        if (cVar3 == '\0') {
          local_b0 = FUN_0040c770((double)(*(int *)((longlong)param_1 + 0x1c) - *piVar1));
        }
        else {
          local_b0 = FUN_0040c770((double)(*(int *)((longlong)param_1 + 0x1c) - iVar7) +
                                  (double)iVar16 * 0.8);
          local_b0 = local_b0 - *piVar1;
        }
        if (*(char *)((longlong)param_1 + 0x121) == '\0') {
          local_b0 = FUN_0040c770((double)(*(int *)((longlong)param_1 + 0x1c) - *piVar1));
        }
        FUN_00410f20(lVar11);
        uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
        FUN_01d2c460(uVar12,*piVar1,(int)param_1[3]);
        FUN_01d2c460(uVar12,*piVar1 + local_b0,(int)param_1[3]);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Axis",uVar12);
        if ((char)param_1[0x21] == '\0') {
          plVar13 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
          (**(code **)(**(longlong **)(plVar13[0x12] + 0x80) + 0x10))
                    (*(longlong **)(plVar13[0x12] + 0x80),param_1[0x13]);
          (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                    (*(longlong **)(param_2 + 0x70),param_1[0x13]);
          uVar6 = FUN_01cd66b0(param_1);
          FUN_00f06520(local_60,param_1[0x11],uVar6,0xffffff9c);
          iVar7 = 0;
          if (local_60[0] != (short *)0x0) {
            iVar7 = *(int *)(local_60[0] + -2);
          }
          if (0 < iVar7) {
            if ((ushort)(*local_60[0] - 0x40U) < 0x40) {
              bVar17 = (1L << ((byte)(*local_60[0] - 0x40U) & 0x3f) & 0x7fffffe07fffffeU) != 0;
            }
            else {
              bVar17 = false;
            }
            if ((bVar17) && (param_1[0x1c] == 0)) {
              FUN_00416ea0(&DAT_01cd2174,local_60,1);
            }
          }
          lVar18 = param_1[0x1c];
          FUN_00416cd0(&local_78,3,param_1[0x1b],local_60[0],lVar18);
          (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                    (*(longlong **)(plVar13[0x12] + 0xa0),local_78);
          iVar7 = FUN_01d1b660(plVar13[0x12],param_2);
          uVar6 = FUN_0040c770((double)*piVar1 + (double)(iVar15 - iVar7) / 2.0);
          iVar15 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x94) * 1.2 +
                                (double)iVar5 * 1.2);
          local_80 = FUN_00498310(uVar6,(int)param_1[3] + iVar15);
          (**(code **)(*plVar13 + 200))(plVar13,&local_80);
          (**(code **)(*(longlong *)param_1[9] + 0x80))
                    ((longlong *)param_1[9],L"Axis label",plVar13);
        }
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),param_1[0x14]);
        dVar19 = (double)param_1[0x17];
        iVar15 = 0;
        if (-1 < *(int *)((longlong)param_1 + 0x74)) {
          iVar7 = *(int *)((longlong)param_1 + 0x74) + 1;
          do {
            uVar6 = (undefined4)((ulonglong)lVar18 >> 0x20);
            if ((char)param_1[0x21] == '\0') {
              plVar13 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
              (**(code **)(**(longlong **)(plVar13[0x12] + 0x80) + 0x10))
                        (*(longlong **)(plVar13[0x12] + 0x80),param_1[0x14]);
              uVar8 = FUN_01cd66b0(param_1);
              uVar4 = FUN_00f060d0(param_1[0xf]);
              lVar18 = CONCAT44(uVar6,uVar8);
              FUN_00f05f60(&local_88,dVar19,param_1[0x11],(char)param_1[0x10],lVar18,local_b4,uVar4)
              ;
              (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                        (*(longlong **)(plVar13[0x12] + 0xa0),local_88);
              if (iVar15 == 0) {
                uVar6 = FUN_0040c770((double)(int)param_1[3] +
                                     (double)*(int *)((longlong)param_1 + 0x94) * 1.2);
                local_80 = FUN_00498310(*piVar1 - iVar16,uVar6);
                (**(code **)(*plVar13 + 200))(plVar13,&local_80);
              }
              else if (iVar15 == *(int *)((longlong)param_1 + 0x74)) {
                uVar6 = FUN_0040c770((double)(int)param_1[3] +
                                     (double)*(int *)((longlong)param_1 + 0x94) * 1.2);
                local_80 = FUN_00498310((*piVar1 + local_b0) - iVar16,uVar6);
                (**(code **)(*plVar13 + 200))(plVar13,&local_80);
              }
              else {
                uVar6 = FUN_0040c770(((double)*piVar1 +
                                     (double)(iVar15 * local_b0) /
                                     (double)*(int *)((longlong)param_1 + 0x74)) - (double)iVar16);
                uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                     (double)*(int *)((longlong)param_1 + 0x94) * 1.2);
                local_80 = FUN_00498310(uVar6,uVar8);
                (**(code **)(*plVar13 + 200))(plVar13,&local_80);
              }
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"ScaleNumber",plVar13);
              uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              uVar6 = FUN_0040c770((double)*piVar1 +
                                   (double)(iVar15 * local_b0) /
                                   (double)*(int *)((longlong)param_1 + 0x74));
              FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
              uVar6 = FUN_0040c770((double)*piVar1 +
                                   (double)(iVar15 * local_b0) /
                                   (double)*(int *)((longlong)param_1 + 0x74));
              FUN_01d2c460(uVar12,uVar6,(int)param_1[3] + *(int *)((longlong)param_1 + 0x94));
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"ScaleLine",uVar12);
              if (*(byte *)(param_1 + 0xe) < 8) {
                bVar17 = ((int)CONCAT71(uVar14,1) << (*(byte *)(param_1 + 0xe) & 0x1f) & 3U) != 0;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                if (iVar15 < *(int *)((longlong)param_1 + 0x74)) {
                  if ((double)local_b0 / (double)*(int *)((longlong)param_1 + 0x74) <= 60.0) {
                    iVar5 = 1;
                    do {
                      uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                      uVar6 = FUN_0040c770((double)*piVar1 +
                                           (((double)iVar15 + (double)iVar5 * 0.25) *
                                           (double)local_b0) /
                                           (double)*(int *)((longlong)param_1 + 0x74));
                      FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                      uVar6 = FUN_0040c770((double)*piVar1 +
                                           (((double)iVar15 + (double)iVar5 * 0.25) *
                                           (double)local_b0) /
                                           (double)*(int *)((longlong)param_1 + 0x74));
                      uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                           (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                      FUN_01d2c460(uVar12,uVar6,uVar8);
                      (**(code **)(*(longlong *)param_1[9] + 0x80))
                                ((longlong *)param_1[9],L"ScaleSubLine",uVar12);
                      iVar5 = iVar5 + 1;
                    } while (iVar5 != 4);
                  }
                  else {
                    iVar5 = 1;
                    do {
                      uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                      if (iVar5 == 5) {
                        uVar6 = FUN_0040c770((double)*piVar1 +
                                             (((double)iVar15 + 0.5) * (double)local_b0) /
                                             (double)*(int *)((longlong)param_1 + 0x74));
                        FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                        uVar6 = FUN_0040c770((double)*piVar1 +
                                             (((double)iVar15 + 0.5) * (double)local_b0) /
                                             (double)*(int *)((longlong)param_1 + 0x74));
                        uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                             (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                        FUN_01d2c460(uVar12,uVar6,uVar8);
                      }
                      else {
                        uVar6 = FUN_0040c770((double)*piVar1 +
                                             (((double)iVar15 + (double)iVar5 / 10.0) *
                                             (double)local_b0) /
                                             (double)*(int *)((longlong)param_1 + 0x74));
                        FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                        uVar6 = FUN_0040c770((double)*piVar1 +
                                             (((double)iVar15 + (double)iVar5 / 10.0) *
                                             (double)local_b0) /
                                             (double)*(int *)((longlong)param_1 + 0x74));
                        uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                             (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
                        FUN_01d2c460(uVar12,uVar6,uVar8);
                      }
                      (**(code **)(*(longlong *)param_1[9] + 0x80))
                                ((longlong *)param_1[9],L"ScaleSubLine",uVar12);
                      iVar5 = iVar5 + 1;
                    } while (iVar5 != 10);
                  }
                }
              }
              else if (iVar15 < *(int *)((longlong)param_1 + 0x74)) {
                if ((double)local_b0 / (double)*(int *)((longlong)param_1 + 0x74) <= 60.0) {
                  uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                  dVar20 = (double)FUN_00c43d10(0x4008000000000000);
                  uVar6 = FUN_0040c770((double)*piVar1 +
                                       (((double)iVar15 + dVar20) * (double)local_b0) /
                                       (double)*(int *)((longlong)param_1 + 0x74));
                  FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                  dVar20 = (double)FUN_00c43d10(0x4008000000000000);
                  uVar6 = FUN_0040c770((double)*piVar1 +
                                       (((double)iVar15 + dVar20) * (double)local_b0) /
                                       (double)*(int *)((longlong)param_1 + 0x74));
                  uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                       (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                  FUN_01d2c460(uVar12,uVar6,uVar8);
                  (**(code **)(*(longlong *)param_1[9] + 0x80))
                            ((longlong *)param_1[9],L"ScaleLine",uVar12);
                  uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                  dVar20 = (double)FUN_00c43d10(0x4018000000000000);
                  uVar6 = FUN_0040c770((double)*piVar1 +
                                       (((double)iVar15 + dVar20) * (double)local_b0) /
                                       (double)*(int *)((longlong)param_1 + 0x74));
                  FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                  dVar20 = (double)FUN_00c43d10(0x4018000000000000);
                  uVar6 = FUN_0040c770((double)*piVar1 +
                                       (((double)iVar15 + dVar20) * (double)local_b0) /
                                       (double)*(int *)((longlong)param_1 + 0x74));
                  uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                       (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                  FUN_01d2c460(uVar12,uVar6,uVar8);
                  (**(code **)(*(longlong *)param_1[9] + 0x80))
                            ((longlong *)param_1[9],L"ScaleLine",uVar12);
                  uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                  dVar20 = (double)FUN_00c43d10(0x4022000000000000);
                  uVar6 = FUN_0040c770((double)*piVar1 +
                                       (((double)iVar15 + dVar20) * (double)local_b0) /
                                       (double)*(int *)((longlong)param_1 + 0x74));
                  FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                  dVar20 = (double)FUN_00c43d10(0x4022000000000000);
                  uVar6 = FUN_0040c770((double)*piVar1 +
                                       (((double)iVar15 + dVar20) * (double)local_b0) /
                                       (double)*(int *)((longlong)param_1 + 0x74));
                  uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                       (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                  FUN_01d2c460(uVar12,uVar6,uVar8);
                  (**(code **)(*(longlong *)param_1[9] + 0x80))
                            ((longlong *)param_1[9],L"ScaleLine",uVar12);
                }
                else {
                  iVar5 = 2;
                  do {
                    uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                    dVar20 = (double)FUN_00c43d10((double)iVar5);
                    uVar6 = FUN_0040c770((double)*piVar1 +
                                         (((double)iVar15 + dVar20) * (double)local_b0) /
                                         (double)*(int *)((longlong)param_1 + 0x74));
                    FUN_01d2c460(uVar12,uVar6,(int)param_1[3]);
                    dVar20 = (double)FUN_00c43d10((double)iVar5);
                    uVar6 = FUN_0040c770((double)*piVar1 +
                                         (((double)iVar15 + dVar20) * (double)local_b0) /
                                         (double)*(int *)((longlong)param_1 + 0x74));
                    uVar8 = FUN_0040c770((double)(int)param_1[3] +
                                         (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                    FUN_01d2c460(uVar12,uVar6,uVar8);
                    (**(code **)(*(longlong *)param_1[9] + 0x80))
                              ((longlong *)param_1[9],L"ScaleLine",uVar12);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 != 10);
                }
              }
            }
            if (*(byte *)(param_1 + 0xe) < 2) {
              dVar19 = dVar19 + ((double)param_1[0x18] - (double)param_1[0x17]) /
                                (double)*(int *)((longlong)param_1 + 0x74);
            }
            else if (*(byte *)(param_1 + 0xe) == 2) {
              dVar19 = (double)FUN_00c43d10(param_1[0x17]);
              dVar20 = (double)FUN_00c43d10(param_1[0x18]);
              dVar21 = (double)FUN_00c43d10(param_1[0x17]);
              dVar19 = (double)FUN_00c43d20(dVar19 + ((double)(iVar15 + 1) * (dVar20 - dVar21)) /
                                                     (double)*(int *)((longlong)param_1 + 0x74));
            }
            if (iVar15 == *(int *)((longlong)param_1 + 0x74) + -1) {
              dVar19 = (double)param_1[0x18];
            }
            iVar15 = iVar15 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        *(int *)(param_1 + 0x1d) = *piVar1;
        *(int *)((longlong)param_1 + 0xec) = *piVar1 + local_b0;
      }
      else if (uVar10 < 2) {
        FUN_01ccf160(param_1,param_2,param_3,iVar15,CONCAT44(uVar6,iVar16),local_b4);
      }
      else if (uVar10 == 2) {
        lVar18 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
        plVar13 = *(longlong **)(*(longlong *)(lVar18 + 0x90) + 0x80);
        (**(code **)(*plVar13 + 0x10))(plVar13,param_1[0x14]);
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),param_1[0x14]);
        iVar15 = FUN_005fdfd0(param_2,&DAT_01cd2144);
        cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
        if (cVar3 == '\0') {
          local_b0 = FUN_0040c770((double)((int)param_1[4] - (int)param_1[3]));
        }
        else {
          local_b0 = FUN_0040c770((double)(int)param_1[4] -
                                  ((double)(int)param_1[3] + (double)iVar15 / 2.0));
        }
        FUN_00410f20(lVar18);
        uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
        uVar6 = FUN_0040c770((double)(int)param_1[4]);
        FUN_01d2c460(uVar12,*(int *)((longlong)param_1 + 0x1c) + -1,uVar6);
        uVar6 = FUN_0040c770((double)(int)param_1[3] + (double)iVar15 / 2.0);
        FUN_01d2c460(uVar12,*(int *)((longlong)param_1 + 0x1c) + -1,uVar6);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Axis",uVar12);
        plVar13 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
        (**(code **)(**(longlong **)(plVar13[0x12] + 0x80) + 0x10))
                  (*(longlong **)(plVar13[0x12] + 0x80),param_1[0x13]);
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),param_1[0x13]);
        FUN_00416ba0(&local_90,param_1[0x1b],param_1[0x1c]);
        (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                  (*(longlong **)(plVar13[0x12] + 0xa0),local_90);
        iVar7 = FUN_01d1bfb0(plVar13[0x12],param_2);
        uVar6 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x14) + (double)iVar7 * 0.2);
        iVar7 = FUN_01d1bfb0(plVar13[0x12],param_2);
        uVar8 = FUN_0040c770((double)(int)param_1[3] + (double)(iVar16 - iVar7) / 2.0);
        local_80 = FUN_00498310(uVar6,uVar8);
        (**(code **)(*plVar13 + 200))(plVar13,&local_80);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Axis label",plVar13);
        FUN_01d1b660(plVar13[0x12],param_2);
        plVar13 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
        (**(code **)(**(longlong **)(plVar13[0x12] + 0x80) + 0x10))
                  (*(longlong **)(plVar13[0x12] + 0x80),param_1[0x14]);
        iVar16 = (**(code **)(**(longlong **)(param_1[0xd] + 0x80) + 0x28))
                           (*(longlong **)(param_1[0xd] + 0x80));
        if (iVar16 < 7) {
          (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                    (*(longlong **)(plVar13[0x12] + 0xa0),&DAT_01cd2218);
        }
        else {
          (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                    (*(longlong **)(plVar13[0x12] + 0xa0),&DAT_01cd2228);
        }
        iVar16 = FUN_01d1b660(plVar13[0x12],param_2);
        uVar6 = FUN_0040c770(((double)*(int *)((longlong)param_1 + 0x1c) -
                             (double)*(int *)((longlong)param_1 + 0x94) * 1.2) - (double)iVar16);
        uVar8 = FUN_0040c770((double)(int)param_1[4] - (double)iVar15 / 2.0);
        local_80 = FUN_00498310(uVar6,uVar8);
        (**(code **)(*plVar13 + 200))(plVar13,&local_80);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleNumber",plVar13)
        ;
        uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
        uVar6 = FUN_0040c770((double)(int)param_1[4]);
        FUN_01d2c460(uVar12,*(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x94),
                     uVar6);
        uVar6 = FUN_0040c770((double)(int)param_1[4]);
        FUN_01d2c460(uVar12,*(int *)((longlong)param_1 + 0x1c) + -1,uVar6);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleLine",uVar12);
        plVar13 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
        (**(code **)(**(longlong **)(plVar13[0x12] + 0x80) + 0x10))
                  (*(longlong **)(plVar13[0x12] + 0x80),param_1[0x14]);
        iVar16 = (**(code **)(**(longlong **)(param_1[0xd] + 0x80) + 0x28))
                           (*(longlong **)(param_1[0xd] + 0x80));
        if (iVar16 < 7) {
          (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                    (*(longlong **)(plVar13[0x12] + 0xa0),&LAB_01cd2238);
        }
        else {
          (**(code **)(**(longlong **)(plVar13[0x12] + 0xa0) + 0x78))
                    (*(longlong **)(plVar13[0x12] + 0xa0),&DAT_01cd2228);
        }
        iVar16 = FUN_01d1b660(plVar13[0x12],param_2);
        uVar6 = FUN_0040c770(((double)*(int *)((longlong)param_1 + 0x1c) -
                             (double)*(int *)((longlong)param_1 + 0x94) * 1.2) - (double)iVar16);
        uVar8 = FUN_0040c770(((double)(int)param_1[4] - (double)iVar15 / 2.0) - (double)local_b0);
        local_80 = FUN_00498310(uVar6,uVar8);
        (**(code **)(*plVar13 + 200))(plVar13,&local_80);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleNumber",plVar13)
        ;
        uVar12 = FUN_01d2b190(&PTR_FUN_01d29210,1);
        uVar6 = FUN_0040c770((double)((int)param_1[4] - local_b0));
        FUN_01d2c460(uVar12,*(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x94),
                     uVar6);
        uVar6 = FUN_0040c770((double)((int)param_1[4] - local_b0));
        FUN_01d2c460(uVar12,*(int *)((longlong)param_1 + 0x1c) + -1,uVar6);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleLine",uVar12);
        uVar6 = FUN_0040c770((double)(int)param_1[4]);
        *(undefined4 *)(param_1 + 0x1d) = uVar6;
        uVar6 = FUN_0040c770((double)((int)param_1[4] - local_b0));
        *(undefined4 *)((longlong)param_1 + 0xec) = uVar6;
      }
      goto LAB_01cd201d;
    }
LAB_01cd1ed2:
    piVar1 = (int *)((longlong)param_1 + 0x14);
    lVar18 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    plVar13 = *(longlong **)(*(longlong *)(lVar18 + 0x90) + 0x80);
    (**(code **)(*plVar13 + 0x10))(plVar13,param_1[0x14]);
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
              (*(longlong **)(param_2 + 0x70),param_1[0x14]);
    FUN_005fdff0(param_2,&DAT_01cd2144);
    FUN_005fdfd0(param_2,&DAT_01cd2144);
    iVar15 = FUN_0040c770((double)(*(int *)((longlong)param_1 + 0x1c) - *piVar1));
    FUN_00410f20(lVar18);
    *(int *)(param_1 + 0x1d) = *piVar1;
    *(int *)((longlong)param_1 + 0xec) = *piVar1 + iVar15;
  }
  else {
    if (uVar10 != 5) {
      if (uVar10 == 6) goto LAB_01cd1ed2;
      if (uVar10 != 7) goto LAB_01cd201d;
    }
    lVar18 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    plVar13 = *(longlong **)(*(longlong *)(lVar18 + 0x90) + 0x80);
    (**(code **)(*plVar13 + 0x10))(plVar13,param_1[0x14]);
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
              (*(longlong **)(param_2 + 0x70),param_1[0x14]);
    FUN_005fdff0(param_2,&DAT_01cd2144);
    FUN_005fdfd0(param_2,&DAT_01cd2144);
    FUN_00410f20(lVar18);
    *(int *)(param_1 + 0x1d) = (int)param_1[4];
    *(int *)((longlong)param_1 + 0xec) = (int)param_1[3];
  }
LAB_01cd201d:
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))(*(longlong **)(param_2 + 0x70),plVar9);
  FUN_00410f20(plVar9);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_78,2);
  FUN_00414480(local_60);
  return;
}

