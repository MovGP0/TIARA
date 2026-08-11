/* Ghidra address: 0145a7f0 */
/* Ghidra symbol: FUN_0145a7f0 */


void FUN_0145a7f0(int param_1,int param_2,double *param_3,undefined8 param_4,longlong param_5,
                 int *param_6,int *param_7,char *param_8,longlong param_9)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_5b0;
  int local_5ac;
  double local_5a8 [175];
  
  pdVar5 = local_5a8 + 2;
  for (lVar3 = 0xa0; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *param_3;
    param_3 = param_3 + 1;
    pdVar5 = pdVar5 + 1;
  }
  FUN_019b7940(param_9);
  if (*(char *)(param_9 + 0x92) == '\0') {
    *param_8 = '\x01';
    *param_7 = 0;
    iVar4 = 0;
    local_5b0 = param_1 + 1;
    if (local_5b0 <= param_1 + param_2) {
      iVar6 = ((param_1 + param_2) - local_5b0) + 1;
      pdVar5 = local_5a8 + (longlong)local_5b0 * 2;
      do {
        if (*param_8 != '\0') {
          FUN_019b7940(param_9);
          dVar1 = *pdVar5;
          dVar2 = pdVar5[1];
          dVar12 = 1.0;
          dVar13 = 0.0;
          if (0 < param_1) {
            pdVar8 = local_5a8;
            iVar7 = param_1;
            do {
              pdVar8 = pdVar8 + 2;
              if (*param_8 != '\0') {
                FUN_019b7940(param_9);
                dVar10 = *pdVar8;
                dVar11 = pdVar8[1];
                dVar9 = (double)FUN_0040c850(dVar1 - dVar10);
                if (dVar9 < 1e-20) {
                  dVar9 = (double)FUN_0040c850(dVar2 - dVar11);
                  if (dVar9 < 1e-20) {
                    *param_7 = *param_7 + 1;
                    *param_7 = *param_7 + 1;
                    *param_8 = '\0';
                  }
                }
                local_5a8[0] = dVar1 - dVar10;
                local_5a8[1] = dVar2 - dVar11;
                dVar10 = (double)FUN_00c44590(local_5a8);
                dVar11 = (double)FUN_00c445d0(local_5a8);
                dVar9 = (double)FUN_0040c850(dVar11 - 3.141592653589793);
                if (dVar9 < 1e-06) {
                  dVar10 = -dVar10;
                }
                dVar12 = dVar12 * dVar10;
                dVar13 = dVar13 + dVar11;
              }
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_5ac = param_1 + 1;
          if (local_5ac <= param_1 + param_2) {
            iVar7 = ((param_1 + param_2) - local_5ac) + 1;
            pdVar8 = local_5a8 + (longlong)local_5ac * 2;
            do {
              if (*param_8 != '\0') {
                FUN_019b7940(param_9);
                if (local_5ac != local_5b0) {
                  dVar10 = *pdVar8;
                  dVar11 = pdVar8[1];
                  dVar9 = (double)FUN_0040c850(dVar1 - dVar10);
                  if (dVar9 < 1e-20) {
                    dVar9 = (double)FUN_0040c850(dVar2 - dVar11);
                    if (dVar9 < 1e-20) {
                      *param_7 = *param_7 + 1;
                      *param_8 = '\0';
                    }
                  }
                  local_5a8[0] = dVar1 - dVar10;
                  local_5a8[1] = dVar2 - dVar11;
                  dVar10 = (double)FUN_00c44590(local_5a8);
                  dVar11 = (double)FUN_00c445d0(local_5a8);
                  dVar9 = (double)FUN_0040c850(dVar11 - 3.141592653589793);
                  if (dVar9 < 1e-06) {
                    dVar10 = -dVar10;
                  }
                  dVar12 = dVar12 / dVar10;
                  dVar13 = dVar13 - dVar11;
                }
              }
              local_5ac = local_5ac + 1;
              pdVar8 = pdVar8 + 2;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (0.0 <= dVar2) {
            iVar4 = iVar4 + 1;
            lVar3 = (longlong)iVar4;
            *(double *)(param_5 + -0x28 + lVar3 * 0x28) = dVar12;
            *(double *)(param_5 + -0x20 + lVar3 * 0x28) = dVar1;
            *(double *)(param_5 + -0x18 + lVar3 * 0x28) = dVar2;
            *(double *)(param_5 + -0x10 + lVar3 * 0x28) = dVar13;
            *(undefined8 *)(param_5 + -8 + lVar3 * 0x28) = 0;
          }
        }
        local_5b0 = local_5b0 + 1;
        pdVar5 = pdVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *param_6 = iVar4;
  }
  return;
}

