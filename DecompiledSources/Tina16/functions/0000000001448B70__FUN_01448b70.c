/* Ghidra address: 01448b70 */
/* Ghidra symbol: FUN_01448b70 */


void FUN_01448b70(longlong param_1,int *param_2,double param_3,double *param_4,undefined8 *param_5,
                 longlong param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_e0;
  int local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  
  if (0x28 < *param_2) {
    FUN_00ef4260(6);
  }
  if (param_1 == 0) {
    FUN_00ef4260(0xc);
  }
  if (*(char *)(param_6 + 0x92) == '\0') {
    if (*param_2 == 0) {
      *param_4 = 0.0;
      *param_5 = 0;
      *param_2 = 0;
    }
    else {
      local_e0 = *param_2;
      local_d8 = 0;
      cVar1 = '\0';
      if (-1 < local_e0) {
        iVar6 = local_e0 + 1;
        pdVar4 = param_4;
        do {
          dVar7 = (double)FUN_019b9700(param_1,CONCAT31((int3)((uint)local_e0 >> 8),
                                                        (char)local_e0 - cVar1),param_6);
          *pdVar4 = dVar7;
          cVar1 = cVar1 + '\x01';
          pdVar4 = pdVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      for (; iVar6 = local_e0, param_4[local_e0] == 0.0; local_e0 = local_e0 + -1) {
        local_d8 = local_d8 + 1;
      }
      while (0 < iVar6) {
        iVar2 = iVar6 + -1;
        dVar7 = 0.0;
        dVar14 = 0.0;
        local_d0 = param_4[iVar6] * param_4[iVar6];
        dVar11 = 0.0;
        dVar8 = (double)FUN_0040c850(*param_4);
        if (dVar8 < 1e-100) {
          cVar1 = FUN_00527050(*param_4);
          *param_4 = (double)(int)cVar1 * 1e-100;
        }
        dVar8 = (double)FUN_0040c850(param_4[iVar6] / *param_4);
        if (1e-15 <= dVar8) {
          dVar8 = (double)FUN_0040c2f0();
          dVar8 = (double)FUN_0040af80(dVar8 * (1.0 / (double)iVar6));
        }
        else {
          dVar8 = 0.0;
        }
        dVar16 = 0.0;
        do {
          if (*(char *)(param_6 + 0x92) != '\0') {
            return;
          }
          FUN_019b7940(param_6);
          dVar13 = local_d0 * 2.0 + 1.0;
          iVar3 = 4;
          do {
            dVar15 = dVar8;
            dVar9 = -dVar11;
            dVar17 = dVar7 + dVar9;
            dVar18 = dVar14 + dVar15;
            dVar12 = dVar17 * dVar17 + dVar18 * dVar18;
            dVar8 = 0.0;
            dVar10 = 0.0;
            pdVar4 = param_4;
            dVar11 = dVar10;
            iVar5 = iVar6;
            if (-1 < iVar2) {
              do {
                dVar10 = dVar8;
                dVar8 = (*pdVar4 + dVar17 * 2.0 * dVar10) - dVar12 * dVar11;
                iVar5 = iVar5 + -1;
                pdVar4 = pdVar4 + 1;
                dVar11 = dVar10;
              } while (iVar5 != 0);
            }
            dVar11 = (param_4[iVar6] + dVar8 * dVar17) - dVar12 * dVar10;
            dVar11 = dVar11 * dVar11 + dVar8 * dVar18 * dVar8 * dVar18;
            if (dVar11 <= dVar13) {
              dVar13 = dVar11;
              local_c8 = dVar17;
              local_c0 = dVar18;
            }
            iVar3 = iVar3 + -1;
            dVar8 = dVar9;
            dVar11 = dVar15;
          } while (iVar3 != 0);
          if (local_d0 < dVar13) {
            dVar8 = dVar9 * 0.4 - dVar15 * 0.3;
            dVar11 = dVar15 * 0.4 - dVar9 * 0.3;
          }
          else {
            dVar8 = dVar9 * 1.5;
            dVar11 = dVar15 * 1.5;
            dVar7 = local_c8;
            dVar14 = local_c0;
            local_d0 = dVar13;
          }
          dVar16 = dVar16 + 1.0;
        } while (((dVar16 <= 10000.0) && (local_d0 != 0.0)) &&
                ((dVar7 * dVar7 + dVar14 * dVar14) * param_3 * param_3 <
                 dVar8 * dVar8 + dVar11 * dVar11));
        if (10000.0 < dVar16) {
          FUN_00ef4260(CONCAT71((int7)(int3)((uint)iVar6 >> 8),0xf),param_6);
        }
        dVar8 = 0.0;
        dVar16 = 0.0;
        pdVar4 = param_4;
        dVar11 = dVar16;
        iVar3 = iVar6;
        if (-1 < iVar2) {
          do {
            dVar16 = dVar8;
            dVar8 = (*pdVar4 + dVar7 * 2.0 * dVar16) - dVar7 * dVar7 * dVar11;
            iVar3 = iVar3 + -1;
            pdVar4 = pdVar4 + 1;
            dVar11 = dVar16;
          } while (iVar3 != 0);
        }
        dVar11 = (param_4[iVar6] + dVar8 * dVar7) - dVar7 * dVar7 * dVar16;
        if (local_d0 < dVar11 * dVar11) {
          param_4[1] = param_4[1] + dVar7 * 2.0 * *param_4;
          iVar2 = 2;
          if (1 < iVar6 + -2) {
            iVar3 = iVar6 + -3;
            pdVar4 = param_4 + 2;
            do {
              *pdVar4 = (*pdVar4 + dVar7 * 2.0 * param_4[iVar2 + -1]) -
                        (dVar7 * dVar7 + dVar14 * dVar14) * param_4[iVar2 + -2];
              iVar2 = iVar2 + 1;
              pdVar4 = pdVar4 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          param_4[iVar6 + -1] = dVar7;
          param_4[iVar6] = dVar7;
          param_5[iVar6] = dVar14;
          param_5[iVar6 + -1] = -dVar14;
          iVar6 = iVar6 + -2;
        }
        else {
          iVar3 = 1;
          pdVar4 = param_4;
          if (0 < iVar2) {
            do {
              pdVar4 = pdVar4 + 1;
              *pdVar4 = param_4[iVar3 + -1] * dVar7 + *pdVar4;
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          param_4[iVar6] = dVar7;
          param_5[iVar6] = 0;
          iVar6 = iVar6 + -1;
        }
      }
      for (; 0 < local_d8; local_d8 = local_d8 + -1) {
        local_e0 = local_e0 + 1;
        param_4[local_e0] = 0.0;
        param_5[local_e0] = 0;
      }
      *param_4 = (double)local_e0;
      *param_5 = 0;
      *param_2 = local_e0;
    }
  }
  return;
}

