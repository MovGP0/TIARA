/* Ghidra address: 0115de00 */
/* Ghidra symbol: FUN_0115de00 */


undefined8 FUN_0115de00(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_98;
  int local_94;
  
  iVar5 = *(int *)(*param_2 + 0xcc);
  local_98 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar6 = (longlong)local_98;
      *(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar6 * 8) = *(undefined8 *)(*param_1 + 0x48);
      *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + lVar6 * 8) = 0;
      *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) = 0;
      *(undefined8 *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) = 0;
      dVar12 = *(double *)(*(longlong *)*param_2 + lVar6 * 8);
      dVar13 = *(double *)(*(longlong *)*param_2 + (longlong)local_98 * 8) * 6.2831853071796;
      if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) {
        dVar7 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x870));
        iVar2 = FUN_0040c840(-dVar7 / 20.0);
        dVar7 = (double)FUN_00525c30(dVar12 / *(double *)PTR_DAT_020040b8,0x3ff0000000000000);
        *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) = (double)(iVar2 + 1) * -dVar7;
        if (*(double *)PTR_DAT_020040b8 < dVar12) {
          if (*(double *)(PTR_DAT_020040b8 + 8) <= dVar12) {
            *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                 *(undefined8 *)(PTR_DAT_020040b8 + 0x18);
          }
          else {
            dVar7 = (double)FUN_00526490(dVar12);
            dVar8 = (double)FUN_00526490(*(undefined8 *)PTR_DAT_020040b8);
            dVar11 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 8));
            dVar9 = (double)FUN_00526490(*(undefined8 *)PTR_DAT_020040b8);
            *(double *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                 *(double *)(PTR_DAT_020040b8 + 0x10) +
                 ((*(double *)(PTR_DAT_020040b8 + 0x18) - *(double *)(PTR_DAT_020040b8 + 0x10)) *
                 (dVar7 - dVar8)) / (dVar11 - dVar9);
          }
        }
        else {
          *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
               *(undefined8 *)(PTR_DAT_020040b8 + 0x10);
        }
      }
      if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
        dVar7 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x878));
        iVar2 = FUN_0040c840(dVar7 / 20.0);
        dVar7 = (double)FUN_00525c30(dVar12 / *(double *)(PTR_DAT_020040b8 + 0x28),
                                     0x3ff0000000000000);
        *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) = (double)(iVar2 + 1) * -dVar7;
        if (*(double *)(PTR_DAT_020040b8 + 0x20) < dVar12) {
          if (*(double *)(PTR_DAT_020040b8 + 0x28) <= dVar12) {
            *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                 *(undefined8 *)(PTR_DAT_020040b8 + 0x38);
          }
          else {
            dVar7 = (double)FUN_00526490(dVar12);
            dVar8 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x20));
            dVar11 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x28));
            dVar9 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x20));
            *(double *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                 *(double *)(PTR_DAT_020040b8 + 0x30) +
                 ((*(double *)(PTR_DAT_020040b8 + 0x38) - *(double *)(PTR_DAT_020040b8 + 0x30)) *
                 (dVar7 - dVar8)) / (dVar11 - dVar9);
          }
        }
        else {
          *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
               *(undefined8 *)(PTR_DAT_020040b8 + 0x30);
        }
      }
      if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
        dVar7 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x870));
        iVar3 = FUN_0040c840(-dVar7 / 20.0);
        dVar7 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x878));
        iVar4 = FUN_0040c840(dVar7 / 20.0);
        iVar2 = iVar3 + 1;
        if (iVar3 + 1 < iVar4 + 1) {
          iVar2 = iVar4 + 1;
        }
        dVar7 = (double)FUN_00525c30(dVar12 / *(double *)(PTR_DAT_020040b8 + 0x48),
                                     0x3ff0000000000000);
        *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) = (double)iVar2 * -dVar7;
        FUN_00526350((double)iVar2 / 2.0);
        iVar2 = FUN_0040c840((double)(iVar2 + 3) / 4.0);
        dVar7 = (double)FUN_00525c30(dVar12 * (1.0 / *(double *)(PTR_DAT_020040b8 + 0x48)),
                                     (double)iVar2 *
                                     (1.0 - dVar12 / *(double *)(PTR_DAT_020040b8 + 0x48)));
        dVar8 = (double)FUN_00525c30(dVar12 * (1.0 / *(double *)(PTR_DAT_020040b8 + 0x50)),
                                     (double)iVar2 *
                                     (1.0 - dVar12 / *(double *)(PTR_DAT_020040b8 + 0x50)));
        *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) =
             (double)iVar2 * -dVar7 + (double)iVar2 * -dVar8 + (double)iVar2 * 3.1415926535898;
        if (*(double *)(PTR_DAT_020040b8 + 0x40) < dVar12) {
          if (*(double *)(PTR_DAT_020040b8 + 0x48) <= dVar12) {
            if (*(double *)(PTR_DAT_020040b8 + 0x50) < dVar12) {
              if (*(double *)(PTR_DAT_020040b8 + 0x58) <= dVar12) {
                *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                     *(undefined8 *)(PTR_DAT_020040b8 + 0x70);
              }
              else {
                dVar7 = (double)FUN_00526490(dVar12);
                dVar8 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x50));
                dVar11 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x58));
                dVar9 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x50));
                *(double *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                     *(double *)(PTR_DAT_020040b8 + 0x68) +
                     ((*(double *)(PTR_DAT_020040b8 + 0x70) - *(double *)(PTR_DAT_020040b8 + 0x68))
                     * (dVar7 - dVar8)) / (dVar11 - dVar9);
              }
            }
            else {
              *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                   *(undefined8 *)(PTR_DAT_020040b8 + 0x68);
            }
          }
          else {
            dVar7 = (double)FUN_00526490(dVar12);
            dVar8 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x40));
            dVar11 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x48));
            dVar9 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x40));
            *(double *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                 *(double *)(PTR_DAT_020040b8 + 0x60) +
                 ((*(double *)(PTR_DAT_020040b8 + 0x68) - *(double *)(PTR_DAT_020040b8 + 0x60)) *
                 (dVar7 - dVar8)) / (dVar11 - dVar9);
          }
        }
        else {
          *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
               *(undefined8 *)(PTR_DAT_020040b8 + 0x60);
        }
      }
      if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
        dVar7 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x870));
        iVar3 = FUN_0040c840(-dVar7 / 20.0);
        dVar7 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x878));
        iVar4 = FUN_0040c840(dVar7 / 20.0);
        iVar2 = iVar3 + 1;
        if (iVar3 + 1 < iVar4 + 1) {
          iVar2 = iVar4 + 1;
        }
        iVar3 = FUN_0040c840((double)iVar2 / 2.0);
        iVar2 = FUN_00526350((double)iVar2 / 2.0);
        uVar10 = FUN_00526500(dVar12 / *(double *)(PTR_DAT_020040b8 + 0x78),(double)iVar3);
        dVar7 = (double)FUN_00525c30(uVar10,0x3ff0000000000000);
        uVar10 = FUN_00526500(dVar12 / *(double *)(PTR_DAT_020040b8 + 0x90),(double)iVar3);
        dVar8 = (double)FUN_00525c30(uVar10,0x3ff0000000000000);
        *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) =
             (double)-iVar2 * dVar7 - (double)iVar2 * dVar8;
        if (*(double *)(PTR_DAT_020040b8 + 0x78) < dVar12) {
          if (*(double *)(PTR_DAT_020040b8 + 0x80) <= dVar12) {
            if (*(double *)(PTR_DAT_020040b8 + 0x88) < dVar12) {
              if (*(double *)(PTR_DAT_020040b8 + 0x90) <= dVar12) {
                *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                     *(undefined8 *)(PTR_DAT_020040b8 + 0xa8);
              }
              else {
                dVar12 = (double)FUN_00526490(dVar12);
                dVar7 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x88));
                dVar8 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x90));
                dVar11 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x88));
                *(double *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                     *(double *)(PTR_DAT_020040b8 + 0xa0) +
                     ((*(double *)(PTR_DAT_020040b8 + 0xa8) - *(double *)(PTR_DAT_020040b8 + 0xa0))
                     * (dVar12 - dVar7)) / (dVar8 - dVar11);
              }
            }
            else {
              *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                   *(undefined8 *)(PTR_DAT_020040b8 + 0xa0);
            }
          }
          else {
            dVar12 = (double)FUN_00526490(dVar12);
            dVar7 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x78));
            dVar8 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x80));
            dVar11 = (double)FUN_00526490(*(undefined8 *)(PTR_DAT_020040b8 + 0x78));
            *(double *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
                 *(double *)(PTR_DAT_020040b8 + 0x98) +
                 ((*(double *)(PTR_DAT_020040b8 + 0xa0) - *(double *)(PTR_DAT_020040b8 + 0x98)) *
                 (dVar12 - dVar7)) / (dVar8 - dVar11);
          }
        }
        else {
          *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 8) =
               *(undefined8 *)(PTR_DAT_020040b8 + 0x98);
        }
      }
      *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) =
           *(double *)(*(longlong *)(*param_2 + 0x20) + lVar6 * 8) * 57.295779513082195;
      iVar2 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2;
      local_94 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = local_94 * 3;
          dVar7 = *(double *)(*param_1 + 0x50 + (longlong)(iVar3 + 2) * 8) -
                  *(double *)(*param_1 + 0x50 + (longlong)iVar3 * 8) * dVar13 * dVar13;
          dVar8 = *(double *)(*param_1 + 0x50 + (longlong)(iVar3 + 1) * 8) * dVar13;
          dVar12 = (double)FUN_0040c760(dVar7 * dVar7 + dVar8 * dVar8);
          lVar6 = (longlong)local_98;
          *(double *)(*(longlong *)(*param_2 + 8) + lVar6 * 8) =
               *(double *)(*(longlong *)(*param_2 + 8) + lVar6 * 8) * dVar12;
          if (0.0 < dVar12) {
            dVar12 = (double)FUN_00525d90(dVar8,dVar7);
            *(double *)(*(longlong *)(*param_2 + 0x10) + lVar6 * 8) =
                 *(double *)(*(longlong *)(*param_2 + 0x10) + lVar6 * 8) + dVar12;
          }
          dVar7 = *(double *)(*param_1 + 0xff8 + (longlong)(iVar3 + 2) * 8) -
                  *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) * dVar13 * dVar13;
          dVar8 = *(double *)(*param_1 + 0xff8 + (longlong)(iVar3 + 1) * 8) * dVar13;
          dVar12 = (double)FUN_0040c760(dVar7 * dVar7 + dVar8 * dVar8);
          *(double *)(*(longlong *)(*param_2 + 8) + lVar6 * 8) =
               *(double *)(*(longlong *)(*param_2 + 8) + lVar6 * 8) / dVar12;
          if (0.0 < dVar12) {
            dVar12 = (double)FUN_00525d90(dVar8,dVar7);
            *(double *)(*(longlong *)(*param_2 + 0x10) + lVar6 * 8) =
                 *(double *)(*(longlong *)(*param_2 + 0x10) + lVar6 * 8) - dVar12;
          }
          local_94 = local_94 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_98 * 8) =
           *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_98 * 8) * 57.295779513082195
      ;
      local_98 = local_98 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
    dVar12 = 0.0;
    iVar5 = *(int *)(*param_2 + 0xcc);
    local_98 = 0;
    if (-1 < iVar5 + -1) {
      do {
        if (dVar12 < *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_98 * 8)) {
          dVar12 = *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_98 * 8);
        }
        local_98 = local_98 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(*param_2 + 0xcc);
    local_98 = 0;
    if (-1 < iVar5 + -1) {
      do {
        *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_98 * 8) =
             *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_98 * 8) - dVar12;
        local_98 = local_98 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (*(int *)(*param_2 + 0xd4) == 0) {
    iVar5 = *(int *)(*param_2 + 0xcc);
    local_98 = 0;
    if (iVar5 - 1U < 0x80000000) {
      do {
        pdVar1 = (double *)(*(longlong *)(*param_2 + 8) + (longlong)local_98 * 8);
        if (*pdVar1 <= 1e-30 && *pdVar1 != 1e-30) {
          *(undefined8 *)(*(longlong *)(*param_2 + 8) + (longlong)local_98 * 8) = 0x39b4484bfeebc2a0
          ;
        }
        dVar12 = (double)FUN_00526490(*(undefined8 *)
                                       (*(longlong *)(*param_2 + 8) + (longlong)local_98 * 8));
        *(double *)(*(longlong *)(*param_2 + 8) + (longlong)local_98 * 8) = dVar12 * 20.0;
        local_98 = local_98 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

