/* Ghidra address: 01ce3940 */
/* Ghidra symbol: FUN_01ce3940 */


void FUN_01ce3940(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined7 uVar11;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  
  local_b8 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  local_b0 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*local_b8 + 0x10))(local_b8,*(undefined8 *)(param_2 + 0x70));
  (**(code **)(*local_b0 + 0x10))(local_b0,*(undefined8 *)(param_2 + 0x78));
  if (param_4 == '\0') {
    (**(code **)(*param_1 + 0x138))(param_1,param_2);
  }
  else {
    FUN_01ce0a20(param_1,param_2);
  }
  cVar2 = FUN_01ce33d0(param_1);
  if (cVar2 == '\0') {
    local_74 = 0;
    local_78 = 0;
    if (param_1[10] == 0) {
      FUN_01ce3570(auStack_d8,param_1);
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1[10] + 0xd8) + 0x28))();
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar7 = (**(code **)(**(longlong **)(param_1[10] + 0xd8) + 0x30))
                            (*(longlong **)(param_1[10] + 0xd8),iVar4);
          FUN_01ce3570(auStack_d8,uVar7);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    local_94 = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar4 = (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
        local_94 = local_94 + iVar4;
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_7c = *(undefined4 *)((longlong)param_1 + 0x14);
    local_80 = *(undefined4 *)((longlong)param_1 + 0x1c);
    iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        cVar2 = FUN_004113d0(param_1,&PTR_FUN_01cdf058);
        if (cVar2 == '\0') {
          plVar8 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                             ((longlong *)param_1[0xf],local_9c);
          cVar2 = (**(code **)(*plVar8 + 0x58))(plVar8);
          if (cVar2 != '\0') goto LAB_01ce3bb7;
        }
        else {
LAB_01ce3bb7:
          lVar9 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
          uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          lVar10 = FUN_004113f0(uVar7,&DAT_01ccbf00);
          plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x90) + 0x80);
          (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar10 + 0xa0));
          (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                    (*(longlong **)(param_2 + 0x70),
                     *(undefined8 *)(*(longlong *)(lVar9 + 0x90) + 0x80));
          FUN_005fdfd0(param_2,&DAT_01ce4ca4);
          FUN_005fdff0(param_2,&DAT_01ce4ca4);
          FUN_00410f20(lVar9);
          uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          FUN_01ce36a0(auStack_d8,uVar7);
          lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          if (*(longlong *)(lVar9 + 0x118) != 0) {
            lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                              ((longlong *)param_1[0xf],local_9c);
            FUN_01ce36a0(auStack_d8,*(undefined8 *)(lVar9 + 0x118));
          }
        }
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_1[4];
    iVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))();
    local_9c = 0;
    uVar11 = (undefined7)((ulonglong)param_1 >> 8);
    if (-1 < iVar4 + -1) {
      do {
        lVar9 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        lVar10 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x90) + 0x80);
        (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar10 + 0xa0));
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),
                   *(undefined8 *)(*(longlong *)(lVar9 + 0x90) + 0x80));
        FUN_005fdfd0(param_2,&DAT_01ce4ca4);
        FUN_005fdff0(param_2,&DAT_01ce4ca4);
        FUN_00410f20(lVar9);
        iVar6 = FUN_01ce3400(param_1);
        _local_90 = CONCAT44(local_8c,*(int *)((longlong)param_1 + 0x14) + iVar6 * local_74 + -1);
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar6 = (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
        uVar5 = FUN_0040c770((double)(iVar3 - iVar6));
        _local_90 = CONCAT44(uVar5,local_90);
        local_88 = CONCAT44(local_88._4_4_,*(int *)((longlong)param_1 + 0x1c) - local_78);
        uVar5 = FUN_0040c770((double)iVar3);
        local_88 = CONCAT44(uVar5,(undefined4)local_88);
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar6 = (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
        iVar3 = iVar3 - iVar6;
        if (*(byte *)(param_1 + 0xb) < 8) {
          bVar12 = ((int)CONCAT71(uVar11,1) << (*(byte *)(param_1 + 0xb) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          local_88 = *(undefined8 *)((longlong)param_1 + 0x1c);
          local_90 = (int)*(undefined8 *)((longlong)param_1 + 0x14);
          local_90 = local_90 + 10;
          local_8c = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x14) >> 0x20);
          lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          _local_90 = CONCAT44(local_8c + *(int *)(lVar9 + 0x94) + 5,local_90);
          local_88 = CONCAT44(local_88._4_4_ + -5,(undefined4)local_88);
        }
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        (**(code **)(*plVar8 + 0xb0))(plVar8,&local_90);
        *(bool *)((longlong)plVar8 + 0x121) = local_78 == 0;
        (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
        local_9c = local_9c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((((char)param_1[0xd] != '\0') &&
        (iVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))((longlong *)param_1[0xe]),
        iVar3 == 1)) &&
       (iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))((longlong *)param_1[0xf]),
       iVar3 == 1)) {
      uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],0);
      lVar9 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      dVar13 = (double)FUN_0040c850((double)(*(int *)(lVar9 + 0xec) - *(int *)(lVar9 + 0xe8)) /
                                    (*(double *)(lVar9 + 0xc0) - *(double *)(lVar9 + 0xb8)));
      uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],0);
      lVar9 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      dVar14 = (double)FUN_0040c850((double)(*(int *)(lVar9 + 0xec) - *(int *)(lVar9 + 0xe8)) /
                                    (*(double *)(lVar9 + 0xc0) - *(double *)(lVar9 + 0xb8)));
      if (dVar13 <= dVar14) {
        if (dVar13 < dVar14) {
          uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],0);
          plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
          dVar15 = (double)((int)plVar8[4] - (int)plVar8[3]) * (dVar13 / dVar14);
          if (*(byte *)(param_1 + 0xb) < 8) {
            bVar12 = ((int)CONCAT71(uVar11,1) << (*(byte *)(param_1 + 0xb) & 0x1f) & 0x60U) != 0;
          }
          else {
            bVar12 = false;
          }
          if (bVar12) {
            uVar5 = FUN_0040c770((double)(int)plVar8[4] -
                                 ((double)((int)plVar8[4] - (int)plVar8[3]) - dVar15) / 2.0);
            *(undefined4 *)(plVar8 + 4) = uVar5;
            uVar5 = FUN_0040c770((double)(int)plVar8[4] - dVar15);
            *(undefined4 *)(plVar8 + 3) = uVar5;
          }
          else {
            uVar5 = FUN_0040c770((double)(int)plVar8[4] -
                                 (double)((int)plVar8[4] - (int)plVar8[3]) * (dVar13 / dVar14));
            *(undefined4 *)(plVar8 + 3) = uVar5;
          }
          (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
        }
      }
      else {
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],0);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        piVar1 = (int *)((longlong)plVar8 + 0x14);
        dVar15 = (double)(*(int *)((longlong)plVar8 + 0x1c) - *piVar1) * (dVar14 / dVar13);
        if (*(byte *)(param_1 + 0xb) < 8) {
          bVar12 = ((int)CONCAT71(uVar11,1) << (*(byte *)(param_1 + 0xb) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          iVar3 = FUN_0040c770(((double)(*(int *)((longlong)plVar8 + 0x1c) - *piVar1) - dVar15) /
                               2.0);
          *piVar1 = *piVar1 + iVar3;
          uVar5 = FUN_0040c770((double)*piVar1 + dVar15);
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar5;
        }
        else {
          uVar5 = FUN_0040c770((double)*piVar1 +
                               (double)(*(int *)((longlong)plVar8 + 0x1c) - *piVar1) *
                               (dVar14 / dVar13));
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar5;
        }
        (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
      }
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))((longlong *)param_1[0x11]);
    local_9c = 1;
    if (0 < iVar3) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))
                          ((longlong *)param_1[0x11],local_9c + -1);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&PTR_FUN_01cd9128);
        (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x28))((longlong *)param_1[0x10]);
    local_9c = 1;
    if (0 < iVar3) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                          ((longlong *)param_1[0x10],local_9c + -1);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&PTR_FUN_01d282a8);
        (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (cVar2 == '\x01') {
    FUN_01ce34b0(param_1);
    local_74 = 0;
    local_78 = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar4 = (**(code **)(*plVar8 + 0x138))(plVar8,param_2);
        if (iVar4 < local_74) {
          iVar4 = local_74;
        }
        local_74 = iVar4;
        cVar2 = (**(code **)(*plVar8 + 0x58))(plVar8);
        iVar4 = local_78;
        if (((cVar2 != '\0') && (plVar8[0x23] != 0)) &&
           (iVar4 = (**(code **)(*(longlong *)plVar8[0x23] + 0x138))
                              ((longlong *)plVar8[0x23],param_2), iVar4 < local_78)) {
          iVar4 = local_78;
        }
        local_78 = iVar4;
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_94 = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar4 = (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
        local_94 = local_94 + iVar4;
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if ((param_1[10] != 0) && (*(char *)(param_1[10] + 0x10d) != '\0')) {
      plVar8 = (longlong *)
               (**(code **)(**(longlong **)(param_1[10] + 0xd8) + 0x30))
                         (*(longlong **)(param_1[10] + 0xd8),0);
      if (plVar8 != param_1) {
        lVar9 = (**(code **)(**(longlong **)(param_1[10] + 0xd8) + 0x30))
                          (*(longlong **)(param_1[10] + 0xd8),0);
        uVar5 = FUN_01ce3470(lVar9);
        lVar10 = (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x30))
                           (*(longlong **)(lVar9 + 0x78),uVar5);
        uVar5 = FUN_01ce3470(lVar9);
        lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x30))
                          (*(longlong **)(lVar9 + 0x78),uVar5);
        local_74 = *(int *)(lVar10 + 0x1c) - *(int *)(lVar9 + 0x14);
      }
    }
    lVar9 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    iVar3 = FUN_01ce3470(param_1);
    iVar4 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))((longlong *)param_1[0xf]);
    if (iVar3 < iVar4) {
      uVar5 = FUN_01ce3470(param_1);
      lVar10 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],uVar5);
      plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x90) + 0x80);
      (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar10 + 0xa0));
    }
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
              (*(longlong **)(param_2 + 0x70),*(undefined8 *)(*(longlong *)(lVar9 + 0x90) + 0x80));
    iVar4 = FUN_005fdfd0(param_2,&DAT_01ce4ca4);
    FUN_005fdff0(param_2,&DAT_01ce4ca4);
    FUN_00410f20(lVar9);
    local_98 = FUN_0040c770((double)iVar4 / 2.0);
    local_98 = (int)param_1[3] + local_98;
    lVar9 = param_1[0x13];
    iVar3 = FUN_01ce3400(param_1);
    if ((int)lVar9 < iVar3) {
      iVar3 = (int)lVar9;
    }
    iVar3 = FUN_0040c770((double)(((int)param_1[4] - local_94) - (int)param_1[3]) / (double)iVar3);
    local_a0 = FUN_0040c770((double)iVar4 / 2.0);
    local_a0 = iVar3 - local_a0;
    iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar8 = (longlong *)
                 (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c);
        cVar2 = (**(code **)(*plVar8 + 0x58))(plVar8);
        if (cVar2 != '\0') {
          uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          FUN_01ce37d0(auStack_d8,uVar7);
          lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          if (*(longlong *)(lVar9 + 0x118) != 0) {
            lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                              ((longlong *)param_1[0xf],local_9c);
            FUN_01ce37d0(auStack_d8,*(undefined8 *)(lVar9 + 0x118));
          }
          iVar6 = FUN_0040c770((double)iVar4 / 2.0);
          local_98 = local_98 + local_a0 + iVar6;
        }
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_1[4];
    iVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))();
    local_9c = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar9 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        lVar10 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x90) + 0x80);
        (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar10 + 0xa0));
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),
                   *(undefined8 *)(*(longlong *)(lVar9 + 0x90) + 0x80));
        FUN_005fdfd0(param_2,&DAT_01ce4ca4);
        FUN_005fdff0(param_2,&DAT_01ce4ca4);
        FUN_00410f20(lVar9);
        _local_90 = CONCAT44(local_8c,*(int *)((longlong)param_1 + 0x14) + local_74 + -1);
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar6 = (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
        uVar5 = FUN_0040c770((double)(iVar3 - iVar6));
        _local_90 = CONCAT44(uVar5,local_90);
        local_88 = CONCAT44(local_88._4_4_,*(int *)((longlong)param_1 + 0x1c) - local_78);
        uVar5 = FUN_0040c770((double)iVar3);
        local_88 = CONCAT44(uVar5,(undefined4)local_88);
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        iVar6 = (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
        iVar3 = iVar3 - iVar6;
        uVar7 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],local_9c);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&DAT_01ccbf00);
        (**(code **)(*plVar8 + 0xb0))(plVar8,&local_90);
        *(bool *)((longlong)plVar8 + 0x121) = local_78 == 0;
        (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
        if (*(char *)(plVar8[0xc] + 0x10d) != '\0') {
          *(undefined4 *)((longlong)plVar8 + 0x94) = 10;
        }
        local_9c = local_9c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))((longlong *)param_1[0x11]);
    local_9c = 1;
    if (0 < iVar3) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))
                          ((longlong *)param_1[0x11],local_9c + -1);
        plVar8 = (longlong *)FUN_004113f0(uVar7,&PTR_FUN_01cd9128);
        (**(code **)(*plVar8 + 0x68))(plVar8);
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar9 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))((longlong *)param_1[0x11],local_9c)
        ;
        cVar2 = (**(code **)(**(longlong **)(lVar9 + 0x60) + 0x58))(*(longlong **)(lVar9 + 0x60));
        if (cVar2 != '\0') {
          plVar8 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0x11] + 0x30))
                             ((longlong *)param_1[0x11],local_9c);
          (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
        }
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))();
    local_9c = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar8 = (longlong *)
                 (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c);
        cVar2 = (**(code **)(*plVar8 + 0x58))(plVar8);
        if (cVar2 != '\0') {
          uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          lVar9 = FUN_004113f0(uVar7,&DAT_01ccbf00);
          iVar4 = *(int *)(*(longlong *)(lVar9 + 0xf8) + 0x10);
          iVar6 = 1;
          if (0 < iVar4) {
            do {
              uVar7 = FUN_004aeac0(*(undefined8 *)(lVar9 + 0xf8),iVar6 + -1);
              plVar8 = (longlong *)FUN_004113f0(uVar7,&PTR_FUN_01d282a8);
              (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
              iVar6 = iVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],local_9c)
          ;
          if (*(longlong *)(lVar9 + 0x118) != 0) {
            lVar9 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                              ((longlong *)param_1[0xf],local_9c);
            lVar9 = *(longlong *)(lVar9 + 0x118);
            iVar4 = *(int *)(*(longlong *)(lVar9 + 0xf8) + 0x10);
            iVar6 = 1;
            if (0 < iVar4) {
              do {
                uVar7 = FUN_004aeac0(*(undefined8 *)(lVar9 + 0xf8),iVar6 + -1);
                plVar8 = (longlong *)FUN_004113f0(uVar7,&PTR_FUN_01d282a8);
                (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_3);
                iVar6 = iVar6 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
        }
        local_9c = local_9c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))(*(longlong **)(param_2 + 0x70),local_b8);
  (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))(*(longlong **)(param_2 + 0x78),local_b0);
  FUN_00410f20(local_b8);
  FUN_00410f20(local_b0);
  return;
}

