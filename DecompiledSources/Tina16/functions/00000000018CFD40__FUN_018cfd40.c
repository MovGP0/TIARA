/* Ghidra address: 018cfd40 */
/* Ghidra symbol: FUN_018cfd40 */


void FUN_018cfd40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined8 uVar16;
  int local_84;
  int local_70;
  int local_6c;
  
  FUN_018cfb30(param_1);
  if (*(longlong *)(param_2 + 400) == 0) {
    cVar3 = FUN_004113d0(param_2,&PTR_FUN_0192c3a0);
    if ((cVar3 == '\0') || (*(char *)(param_2 + 0x200) != '\x02')) {
      plVar6 = (longlong *)FUN_018d0c10(&PTR_FUN_018c55a8,1,param_1);
      iVar4 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
      local_84 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar7 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                            (*(longlong **)(param_2 + 0x80),local_84);
          if ((0.0 < *(double *)(param_2 + 0xa8)) &&
             (((0.0 <= *(double *)(lVar7 + 0x98) &&
               (*(double *)(lVar7 + 0x98) <= *(double *)(param_2 + 0xa8))) ||
              ((0.0 <= *(double *)(lVar7 + 0x98) + *(double *)(lVar7 + 0xa8) &&
               (*(double *)(lVar7 + 0x98) + *(double *)(lVar7 + 0xa8) <= *(double *)(param_2 + 0xa8)
               )))))) {
            FUN_018cf810(&DAT_018c4db0,1,0,lVar7);
            FUN_01877920(plVar6,*(undefined8 *)(lVar7 + 0xa0));
          }
          local_84 = local_84 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_01877c10(plVar6);
      cVar3 = FUN_004113d0(param_2,&PTR_FUN_0192c3a0);
      if ((cVar3 == '\0') || (*(char *)(param_2 + 0x200) != '\0')) {
        lVar7 = FUN_0195e8b0(&PTR_FUN_01927248,1,0);
        uVar16 = FUN_019508b0(param_2);
        FUN_01950580(lVar7,uVar16,0,*(double *)(param_2 + 0xa8) + 1.0,0x3ff0000000000000);
        lVar8 = FUN_018d0b10(&DAT_018c5378,1,0,lVar7,param_1);
        FUN_01877a80(plVar6,0,*(undefined8 *)(lVar7 + 0xa0),lVar8);
        iVar4 = (**(code **)(*plVar6 + 0x18))();
        local_84 = 0;
        if (-1 < iVar4 + -1) {
          do {
            lVar9 = FUN_01877a70(plVar6,local_84);
            lVar10 = FUN_0180cb40(&DAT_0180c3b0,1,*(undefined8 *)(lVar9 + 0x30));
            iVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
            local_70 = local_84 + 1;
            if (local_70 <= iVar5 + -1) {
              iVar5 = ((iVar5 + -1) - local_70) + 1;
              do {
                lVar11 = FUN_01877a70(plVar6,local_70);
                lVar1 = *(longlong *)(lVar11 + 0x30);
                lVar12 = FUN_0180cb40(&DAT_0180c3b0,1,lVar1);
                cVar3 = FUN_0180cdc0(lVar10,lVar12);
                if (((cVar3 == '\0') &&
                    (*(double *)(lVar10 + 0x10) <= *(double *)(lVar12 + 0x10) &&
                     *(double *)(lVar12 + 0x10) != *(double *)(lVar10 + 0x10))) &&
                   (cVar3 = FUN_0180cd80(lVar10,lVar12), cVar3 != '\0')) {
                  uVar16 = FUN_0180ce00(lVar10,lVar12);
                  bVar2 = false;
                  local_6c = local_70 + -1;
                  if (local_84 + 1 <= local_6c) {
                    iVar15 = ((local_84 + 1) - local_6c) + -1;
                    do {
                      lVar13 = FUN_01877a70(plVar6,local_6c);
                      lVar13 = *(longlong *)(lVar13 + 0x30);
                      lVar14 = FUN_0180cb40(&DAT_0180c3b0,1,lVar13);
                      if (((((0.0 < *(double *)(lVar13 + 0xb0)) && (0.0 < *(double *)(lVar1 + 0xb0))
                            ) || (0.0001 < *(double *)(lVar12 + 0x10) - *(double *)(lVar14 + 0x10)))
                          && ((cVar3 = FUN_0180cdc0(lVar10,lVar14), cVar3 == '\0' &&
                              (cVar3 = FUN_0180cdc0(lVar12,lVar14), cVar3 == '\0')))) &&
                         (cVar3 = FUN_0180cd80(uVar16,lVar14), cVar3 != '\0')) {
                        bVar2 = true;
                      }
                      FUN_00410f20(lVar14);
                      if (bVar2) break;
                      local_6c = local_6c + -1;
                      iVar15 = iVar15 + 1;
                    } while (iVar15 != 0);
                  }
                  if ((!bVar2) && ((local_84 < 1 || (*(int *)(lVar9 + 0x38) != 0)))) {
                    FUN_018cf7d0(lVar9,lVar11);
                  }
                  FUN_00410f20(uVar16);
                }
                FUN_00410f20(lVar12);
                local_70 = local_70 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            if ((0 < local_84) && (*(int *)(lVar9 + 0x38) == 0)) {
              if (*(longlong *)(lVar9 + 0x30) != 0) {
                *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 400) = 0;
              }
              FUN_00410f20(lVar9);
              FUN_01877b70(plVar6,local_84,0);
            }
            FUN_00410f20(lVar10);
            local_84 = local_84 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (*(longlong *)(param_2 + 400) != 0) {
          FUN_004aee30(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 400));
          FUN_00410f20(*(undefined8 *)(param_2 + 400));
        }
        *(longlong *)(lVar8 + 0x30) = param_2;
        *(longlong *)(param_2 + 400) = lVar8;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar8);
        FUN_00410f20(plVar6);
        *(undefined8 *)(lVar7 + 400) = 0;
        FUN_00410f20();
      }
      else {
        *(longlong **)(param_2 + 400) = plVar6;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 8),plVar6);
        plVar6[8] = param_2;
        *(undefined1 *)(plVar6 + 6) = 1;
      }
    }
  }
  return;
}

