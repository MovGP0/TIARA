/* Ghidra address: 01ccf160 */
/* Ghidra symbol: FUN_01ccf160 */


void FUN_01ccf160(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined4 param_6)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  int local_88;
  int local_84;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  short *local_50 [5];
  
  local_70 = 0;
  local_60[0] = 0;
  local_50[0] = (short *)0x0;
  piVar1 = (int *)((longlong)param_1 + 0x14);
  lVar9 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
  plVar11 = *(longlong **)(*(longlong *)(lVar9 + 0x90) + 0x80);
  (**(code **)(*plVar11 + 0x10))(plVar11,param_1[0x14]);
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),param_1[0x14]);
  iVar4 = FUN_005fdfd0(param_2,&DAT_01cd0650);
  cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar3 == '\0') {
    local_84 = FUN_0040c770((double)((int)param_1[4] - (int)param_1[3]));
  }
  else {
    local_84 = FUN_0040c770((double)(int)param_1[4] -
                            ((double)(int)param_1[3] + (double)iVar4 / 2.0));
  }
  FUN_00410f20(lVar9);
  uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
  iVar6 = *piVar1;
  if ((char)param_1[0x24] != '\0') {
    iVar6 = *(int *)((longlong)param_1 + 0x1c) + -1;
  }
  uVar5 = FUN_0040c770((double)(int)param_1[4]);
  FUN_01d2c460(uVar10,iVar6,uVar5);
  iVar6 = *piVar1;
  if ((char)param_1[0x24] != '\0') {
    iVar6 = *(int *)((longlong)param_1 + 0x1c) + -1;
  }
  uVar5 = FUN_0040c770((double)(int)param_1[3] + (double)iVar4 / 2.0);
  FUN_01d2c460(uVar10,iVar6,uVar5);
  (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Axis",uVar10);
  plVar11 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
  (**(code **)(**(longlong **)(plVar11[0x12] + 0x80) + 0x10))
            (*(longlong **)(plVar11[0x12] + 0x80),param_1[0x13]);
  cVar3 = FUN_01cd6670(param_1);
  if (cVar3 == '\x01') {
    *(undefined1 *)(plVar11[0x12] + 0x88) = 1;
  }
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),param_1[0x13]);
  uVar5 = FUN_01cd66b0(param_1);
  FUN_00f06520(local_50,param_1[0x11],uVar5,0xffffff9c);
  iVar6 = 0;
  if (local_50[0] != (short *)0x0) {
    iVar6 = *(int *)(local_50[0] + -2);
  }
  if (0 < iVar6) {
    if ((ushort)(*local_50[0] - 0x40U) < 0x40) {
      bVar13 = (1L << ((byte)(*local_50[0] - 0x40U) & 0x3f) & 0x7fffffe07fffffeU) != 0;
    }
    else {
      bVar13 = false;
    }
    if ((bVar13) && (param_1[0x1c] == 0)) {
      FUN_00416ea0(&DAT_01cd0680,local_50,1);
    }
  }
  lVar9 = param_1[0x1c];
  FUN_00416cd0(local_60,3,param_1[0x1b],local_50[0],lVar9);
  (**(code **)(**(longlong **)(plVar11[0x12] + 0xa0) + 0x78))
            (*(longlong **)(plVar11[0x12] + 0xa0),local_60[0]);
  if ((char)param_1[0x24] == '\0') {
    cVar3 = FUN_01cd6670(param_1);
    if (cVar3 == '\x01') {
      iVar6 = FUN_01d1b660(plVar11[0x12],param_2);
      uVar5 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) - (double)iVar6 * 1.2);
      iVar6 = FUN_01d1bfb0(plVar11[0x12],param_2);
      uVar7 = FUN_0040c770((double)(int)param_1[3] + (double)(param_5 - iVar6) / 2.0);
      local_68 = FUN_00498310(uVar5,uVar7);
      (**(code **)(*plVar11 + 200))(plVar11,&local_68);
    }
    else if (cVar3 == '\x02') {
      iVar6 = FUN_01d1b660(plVar11[0x12],param_2);
      uVar5 = FUN_0040c770((double)((*(int *)((longlong)param_1 + 0x1c) - iVar6) + -2));
      iVar6 = FUN_01d1bfb0(plVar11[0x12],param_2);
      uVar7 = FUN_0040c770((double)(int)param_1[3] + (double)(param_5 - iVar6) / 2.0);
      local_68 = FUN_00498310(uVar5,uVar7);
      (**(code **)(*plVar11 + 200))(plVar11,&local_68);
    }
  }
  else {
    cVar3 = FUN_01cd6670(param_1);
    if (cVar3 == '\x01') {
      iVar6 = FUN_01d1b660(plVar11[0x12],param_2);
      uVar5 = FUN_0040c770((double)*piVar1 + (double)iVar6 * 0.2);
      iVar6 = FUN_01d1bfb0(plVar11[0x12],param_2);
      uVar7 = FUN_0040c770((double)(int)param_1[3] + (double)(param_5 - iVar6) / 2.0);
      local_68 = FUN_00498310(uVar5,uVar7);
      (**(code **)(*plVar11 + 200))(plVar11,&local_68);
    }
    else if (cVar3 == '\x02') {
      iVar6 = FUN_01d1bfb0(plVar11[0x12],param_2);
      uVar5 = FUN_0040c770((double)*piVar1 + (double)iVar6 * 0.2);
      iVar6 = FUN_01d1bfb0(plVar11[0x12],param_2);
      uVar7 = FUN_0040c770((double)(int)param_1[3] + (double)(param_5 - iVar6) / 2.0);
      local_68 = FUN_00498310(uVar5,uVar7);
      (**(code **)(*plVar11 + 200))(plVar11,&local_68);
    }
  }
  (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"Axis label",plVar11);
  FUN_01d1b660(plVar11[0x12],param_2);
  dVar14 = (double)param_1[0x17];
  local_88 = 0;
  if (-1 < *(int *)((longlong)param_1 + 0x74)) {
    iVar6 = *(int *)((longlong)param_1 + 0x74) + 1;
    do {
      uVar17 = (undefined4)((ulonglong)lVar9 >> 0x20);
      plVar11 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
      (**(code **)(**(longlong **)(plVar11[0x12] + 0x80) + 0x10))
                (*(longlong **)(plVar11[0x12] + 0x80),param_1[0x14]);
      uVar5 = FUN_01cd66b0(param_1);
      uVar7 = FUN_00f060d0(param_1[0xf]);
      lVar9 = CONCAT44(uVar17,uVar5);
      FUN_00f05f60(&local_70,dVar14,param_1[0x11],(char)param_1[0x10],lVar9,param_6,uVar7);
      (**(code **)(**(longlong **)(plVar11[0x12] + 0xa0) + 0x78))
                (*(longlong **)(plVar11[0x12] + 0xa0),local_70);
      lVar2 = param_1[0x24];
      iVar8 = FUN_01d1b660(plVar11[0x12],param_2);
      uVar7 = FUN_0040c770(((double)*(int *)((longlong)param_1 + 0x1c) -
                           (double)*(int *)((longlong)param_1 + 0x94) * 1.2) - (double)iVar8);
      uVar5 = FUN_0040c770((double)*piVar1 + (double)*(int *)((longlong)param_1 + 0x94) * 1.2);
      if ((char)lVar2 != '\0') {
        uVar5 = uVar7;
      }
      uVar7 = FUN_0040c770(((double)(int)param_1[4] - (double)iVar4 / 2.0) -
                           (double)(local_88 * local_84) /
                           (double)*(int *)((longlong)param_1 + 0x74));
      local_68 = FUN_00498310(uVar5,uVar7);
      (**(code **)(*plVar11 + 200))(plVar11,&local_68);
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleNumber",plVar11);
      uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
      iVar8 = *piVar1 + *(int *)((longlong)param_1 + 0x94);
      if ((char)param_1[0x24] != '\0') {
        iVar8 = *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x94);
      }
      uVar5 = FUN_0040c770((double)(int)param_1[4] -
                           (double)(local_88 * local_84) /
                           (double)*(int *)((longlong)param_1 + 0x74));
      FUN_01d2c460(uVar10,iVar8,uVar5);
      iVar8 = *piVar1;
      if ((char)param_1[0x24] != '\0') {
        iVar8 = *(int *)((longlong)param_1 + 0x1c) + -1;
      }
      uVar5 = FUN_0040c770((double)(int)param_1[4] -
                           (double)(local_88 * local_84) /
                           (double)*(int *)((longlong)param_1 + 0x74));
      FUN_01d2c460(uVar10,iVar8,uVar5);
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleLine",uVar10);
      if (*(byte *)(param_1 + 0xe) < 8) {
        bVar13 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                  (*(byte *)(param_1 + 0xe) & 0x1f) & 3U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        if (local_88 < *(int *)((longlong)param_1 + 0x74)) {
          if ((double)local_84 / (double)*(int *)((longlong)param_1 + 0x74) <= 60.0) {
            iVar8 = 1;
            do {
              uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              lVar2 = param_1[0x24];
              uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                                   (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
              uVar5 = FUN_0040c770((double)*piVar1 +
                                   (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
              if ((char)lVar2 != '\0') {
                uVar5 = uVar7;
              }
              uVar7 = FUN_0040c770((double)(int)param_1[4] -
                                   (((double)local_88 + (double)iVar8 * 0.25) * (double)local_84) /
                                   (double)*(int *)((longlong)param_1 + 0x74));
              FUN_01d2c460(uVar10,uVar5,uVar7);
              iVar12 = *piVar1;
              if ((char)param_1[0x24] != '\0') {
                iVar12 = *(int *)((longlong)param_1 + 0x1c) + -1;
              }
              uVar5 = FUN_0040c770((double)(int)param_1[4] -
                                   (((double)local_88 + (double)iVar8 * 0.25) * (double)local_84) /
                                   (double)*(int *)((longlong)param_1 + 0x74));
              FUN_01d2c460(uVar10,iVar12,uVar5);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"ScaleSubLine",uVar10);
              iVar8 = iVar8 + 1;
            } while (iVar8 != 4);
          }
          else {
            iVar8 = 1;
            do {
              uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              if (iVar8 == 5) {
                lVar2 = param_1[0x24];
                uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                                     (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                uVar5 = FUN_0040c770((double)*piVar1 +
                                     (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
                if ((char)lVar2 != '\0') {
                  uVar5 = uVar7;
                }
                uVar7 = FUN_0040c770((double)(int)param_1[4] -
                                     (((double)local_88 + 0.5) * (double)local_84) /
                                     (double)*(int *)((longlong)param_1 + 0x74));
                FUN_01d2c460(uVar10,uVar5,uVar7);
                iVar12 = *piVar1;
                if ((char)param_1[0x24] != '\0') {
                  iVar12 = *(int *)((longlong)param_1 + 0x1c) + -1;
                }
                uVar5 = FUN_0040c770((double)(int)param_1[4] -
                                     (((double)local_88 + 0.5) * (double)local_84) /
                                     (double)*(int *)((longlong)param_1 + 0x74));
                FUN_01d2c460(uVar10,iVar12,uVar5);
              }
              else {
                lVar2 = param_1[0x24];
                uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                                     (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
                uVar5 = FUN_0040c770((double)*piVar1 +
                                     (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
                if ((char)lVar2 != '\0') {
                  uVar5 = uVar7;
                }
                uVar7 = FUN_0040c770((double)(int)param_1[4] -
                                     (((double)local_88 + (double)iVar8 / 10.0) * (double)local_84)
                                     / (double)*(int *)((longlong)param_1 + 0x74));
                FUN_01d2c460(uVar10,uVar5,uVar7);
                iVar12 = *piVar1;
                if ((char)param_1[0x24] != '\0') {
                  iVar12 = *(int *)((longlong)param_1 + 0x1c) + -1;
                }
                uVar5 = FUN_0040c770((double)(int)param_1[4] -
                                     (((double)local_88 + (double)iVar8 / 10.0) * (double)local_84)
                                     / (double)*(int *)((longlong)param_1 + 0x74));
                FUN_01d2c460(uVar10,iVar12,uVar5);
              }
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"ScaleLine",uVar10);
              iVar8 = iVar8 + 1;
            } while (iVar8 != 10);
          }
        }
      }
      else if (local_88 < *(int *)((longlong)param_1 + 0x74)) {
        if ((double)local_84 / (double)*(int *)((longlong)param_1 + 0x74) <= 60.0) {
          uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
          lVar2 = param_1[0x24];
          uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                               (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
          uVar5 = FUN_0040c770((double)*piVar1 + (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
          if ((char)lVar2 != '\0') {
            uVar5 = uVar7;
          }
          dVar15 = (double)FUN_00c43d10(0x4008000000000000);
          uVar7 = FUN_0040c770((double)(int)param_1[4] -
                               (((double)local_88 + dVar15) * (double)local_84) /
                               (double)*(int *)((longlong)param_1 + 0x74));
          FUN_01d2c460(uVar10,uVar5,uVar7);
          iVar8 = *piVar1;
          if ((char)param_1[0x24] != '\0') {
            iVar8 = *(int *)((longlong)param_1 + 0x1c) + -1;
          }
          dVar15 = (double)FUN_00c43d10(0x4008000000000000);
          uVar5 = FUN_0040c770((double)(int)param_1[4] -
                               (((double)local_88 + dVar15) * (double)local_84) /
                               (double)*(int *)((longlong)param_1 + 0x74));
          FUN_01d2c460(uVar10,iVar8,uVar5);
          (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleLine",uVar10);
          uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
          lVar2 = param_1[0x24];
          uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                               (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
          uVar5 = FUN_0040c770((double)*piVar1 + (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
          if ((char)lVar2 != '\0') {
            uVar5 = uVar7;
          }
          dVar15 = (double)FUN_00c43d10(0x4018000000000000);
          uVar7 = FUN_0040c770((double)(int)param_1[4] -
                               (((double)local_88 + dVar15) * (double)local_84) /
                               (double)*(int *)((longlong)param_1 + 0x74));
          FUN_01d2c460(uVar10,uVar5,uVar7);
          iVar8 = *piVar1;
          if ((char)param_1[0x24] != '\0') {
            iVar8 = *(int *)((longlong)param_1 + 0x1c) + -1;
          }
          dVar15 = (double)FUN_00c43d10(0x4018000000000000);
          uVar5 = FUN_0040c770((double)(int)param_1[4] -
                               (((double)local_88 + dVar15) * (double)local_84) /
                               (double)*(int *)((longlong)param_1 + 0x74));
          FUN_01d2c460(uVar10,iVar8,uVar5);
          (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleLine",uVar10);
          uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
          lVar2 = param_1[0x24];
          uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                               (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
          uVar5 = FUN_0040c770((double)*piVar1 + (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
          if ((char)lVar2 != '\0') {
            uVar5 = uVar7;
          }
          dVar15 = (double)FUN_00c43d10(0x4022000000000000);
          uVar7 = FUN_0040c770((double)(int)param_1[4] -
                               (((double)local_88 + dVar15) * (double)local_84) /
                               (double)*(int *)((longlong)param_1 + 0x74));
          FUN_01d2c460(uVar10,uVar5,uVar7);
          iVar8 = *piVar1;
          if ((char)param_1[0x24] != '\0') {
            iVar8 = *(int *)((longlong)param_1 + 0x1c) + -1;
          }
          dVar15 = (double)FUN_00c43d10(0x4022000000000000);
          uVar5 = FUN_0040c770((double)(int)param_1[4] -
                               (((double)local_88 + dVar15) * (double)local_84) /
                               (double)*(int *)((longlong)param_1 + 0x74));
          FUN_01d2c460(uVar10,iVar8,uVar5);
          (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ScaleLine",uVar10);
        }
        else {
          iVar8 = 1;
          do {
            uVar10 = FUN_01d2b190(&PTR_FUN_01d29210,1);
            lVar2 = param_1[0x24];
            uVar7 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x1c) -
                                 (double)*(int *)((longlong)param_1 + 0x94) * 0.5);
            uVar5 = FUN_0040c770((double)*piVar1 + (double)*(int *)((longlong)param_1 + 0x94) * 0.5)
            ;
            if ((char)lVar2 != '\0') {
              uVar5 = uVar7;
            }
            dVar15 = (double)FUN_00c43d10((double)iVar8);
            uVar7 = FUN_0040c770((double)(int)param_1[4] -
                                 (((double)local_88 + dVar15) * (double)local_84) /
                                 (double)*(int *)((longlong)param_1 + 0x74));
            FUN_01d2c460(uVar10,uVar5,uVar7);
            iVar12 = *piVar1;
            if ((char)param_1[0x24] != '\0') {
              iVar12 = *(int *)((longlong)param_1 + 0x1c) + -1;
            }
            dVar15 = (double)FUN_00c43d10((double)iVar8);
            uVar5 = FUN_0040c770((double)(int)param_1[4] -
                                 (((double)local_88 + dVar15) * (double)local_84) /
                                 (double)*(int *)((longlong)param_1 + 0x74));
            FUN_01d2c460(uVar10,iVar12,uVar5);
            (**(code **)(*(longlong *)param_1[9] + 0x80))
                      ((longlong *)param_1[9],L"ScaleLine",uVar10);
            iVar8 = iVar8 + 1;
          } while (iVar8 != 10);
        }
      }
      if (*(byte *)(param_1 + 0xe) < 2) {
        dVar14 = dVar14 + ((double)param_1[0x18] - (double)param_1[0x17]) /
                          (double)*(int *)((longlong)param_1 + 0x74);
      }
      else if (*(byte *)(param_1 + 0xe) == 2) {
        dVar14 = (double)FUN_00c43d10(param_1[0x17]);
        dVar15 = (double)FUN_00c43d10(param_1[0x18]);
        dVar16 = (double)FUN_00c43d10(param_1[0x17]);
        dVar14 = (double)FUN_00c43d20(dVar14 + ((double)(local_88 + 1) * (dVar15 - dVar16)) /
                                               (double)*(int *)((longlong)param_1 + 0x74));
      }
      if (local_88 == *(int *)((longlong)param_1 + 0x74) + -1) {
        dVar14 = (double)param_1[0x18];
      }
      local_88 = local_88 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar5 = FUN_0040c770((double)(int)param_1[4]);
  *(undefined4 *)(param_1 + 0x1d) = uVar5;
  uVar5 = FUN_0040c770((double)((int)param_1[4] - local_84));
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar5;
  FUN_00414480(&local_70);
  FUN_00414480(local_60);
  FUN_00414480(local_50);
  return;
}

