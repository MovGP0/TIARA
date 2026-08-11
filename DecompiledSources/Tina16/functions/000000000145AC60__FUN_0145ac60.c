/* Ghidra address: 0145ac60 */
/* Ghidra symbol: FUN_0145ac60 */


void FUN_0145ac60(int param_1,int param_2,double *param_3,double *param_4,longlong *param_5,
                 undefined8 param_6,longlong param_7,int *param_8,int *param_9,char *param_10,
                 longlong param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_628;
  int local_624;
  int local_61c;
  double local_618;
  double local_610;
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  double *local_5e8;
  int local_5e0;
  longlong local_5d8;
  uint local_5d0;
  double local_5c8;
  double local_5c0;
  longlong local_5b8;
  ulonglong local_5b0;
  double local_5a8 [175];
  
  pdVar4 = local_5a8 + 2;
  for (lVar2 = 0xa0; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *param_3;
    param_3 = param_3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_5a8[0] = *param_4;
  local_5a8[1] = param_4[1];
  local_5b8 = *param_5;
  local_5b0 = param_5[1];
  FUN_019b7940(param_11);
  if (*(char *)(param_11 + 0x92) == '\0') {
    *param_10 = '\x01';
    *param_9 = 0;
    FUN_0144a230(local_5a8 + 2,param_2);
    local_628 = 0;
    iVar8 = param_1;
    while (((local_61c = iVar8 + 1, local_61c < param_1 + param_2 &&
            (local_5a8[(longlong)local_61c * 2] == local_5a8[(longlong)(iVar8 + 2) * 2])) &&
           (iVar1 = iVar8 + 2, iVar8 = local_61c,
           local_5a8[(longlong)local_61c * 2 + 1] == local_5a8[(longlong)iVar1 * 2 + 1]))) {
      while (((iVar8 < param_1 + param_2 &&
              (local_5a8[(longlong)iVar8 * 2] == local_5a8[(longlong)(iVar8 + 1) * 2])) &&
             (local_5a8[(longlong)iVar8 * 2 + 1] == local_5a8[(longlong)(iVar8 + 1) * 2 + 1]))) {
        iVar8 = iVar8 + 1;
      }
      local_618 = local_5a8[(longlong)local_61c * 2];
      local_610 = local_5a8[(longlong)local_61c * 2 + 1];
      FUN_01449ab0(0,local_5b0 & 0xffffffff,&local_5d8,param_11);
      iVar1 = 0;
      if (local_5d0 < 0x80000000) {
        iVar6 = local_5d0 + 1;
        do {
          lVar2 = (longlong)iVar1;
          *(undefined8 *)(local_5d8 + lVar2 * 0x10) = *(undefined8 *)(local_5b8 + lVar2 * 0x10);
          *(undefined8 *)(local_5d8 + 8 + lVar2 * 0x10) =
               *(undefined8 *)(local_5b8 + 8 + lVar2 * 0x10);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_01449ab0(0,1,&local_5e8,param_11);
      *local_5e8 = -local_618;
      local_5e8[1] = -local_610;
      local_5e8[2] = 1.0;
      local_5e8[3] = 0.0;
      iVar1 = (iVar8 - local_61c) + 1;
      FUN_01449ab0(0,local_5d0 - local_5e0,local_5f8,param_11);
      iVar6 = 0;
      if (-1 < (int)local_5d0) {
        iVar7 = local_5d0 + 1;
        do {
          lVar2 = (longlong)iVar6;
          *(undefined8 *)(local_5d8 + lVar2 * 0x10) = *(undefined8 *)(local_5b8 + lVar2 * 0x10);
          *(undefined8 *)(local_5d8 + 8 + lVar2 * 0x10) =
               *(undefined8 *)(local_5b8 + 8 + lVar2 * 0x10);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      for (; 0 < iVar1; iVar1 = iVar1 + -1) {
        FUN_01449ab0(0,local_5d0 - local_5e0,local_5f8,param_11);
        FUN_01449f70(&local_5d8,&local_5e8,local_5f8,param_11);
        FUN_01449b90(&local_5d8);
        FUN_0144a100(local_5f8,&local_5d8,param_11);
        FUN_01449b90();
      }
      iVar1 = (iVar8 - local_61c) + 1;
      local_624 = 1;
      if (0 < iVar1) {
        do {
          FUN_0144a460(local_5a8,&local_5d8,&local_618,local_624,(iVar8 - local_61c) + 1,local_608,
                       param_11);
          local_628 = local_628 + 1;
          lVar3 = (longlong)local_628;
          dVar9 = (double)FUN_00c44590(local_608);
          dVar10 = (double)FUN_0144a420(local_624 + -1);
          *(double *)(param_7 + -0x28 + lVar3 * 0x28) = dVar9 / dVar10;
          *(double *)(param_7 + -0x20 + lVar3 * 0x28) = local_618;
          *(double *)(param_7 + -0x18 + lVar3 * 0x28) = local_610;
          uVar11 = FUN_00c445d0(local_608);
          *(undefined8 *)(param_7 + -0x10 + lVar3 * 0x28) = uVar11;
          lVar2 = FUN_0040c770((double)(local_624 + -1));
          *(double *)(param_7 + -8 + lVar3 * 0x28) = (double)lVar2;
          local_624 = local_624 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_01449b90(&local_5d8);
      FUN_01449b90(&local_5e8);
    }
    if (local_61c <= param_1 + param_2) {
      iVar8 = ((param_1 + param_2) - local_61c) + 1;
      pdVar4 = local_5a8 + (longlong)local_61c * 2;
      do {
        if (*param_10 != '\0') {
          FUN_019b7940(param_11);
          dVar9 = *pdVar4;
          dVar10 = pdVar4[1];
          dVar15 = 1.0;
          dVar16 = 0.0;
          if (0 < param_1) {
            pdVar5 = local_5a8;
            iVar1 = param_1;
            do {
              pdVar5 = pdVar5 + 2;
              if (*param_10 != '\0') {
                FUN_019b7940(param_11);
                dVar13 = *pdVar5;
                dVar14 = pdVar5[1];
                dVar12 = (double)FUN_0040c850(dVar9 - dVar13);
                if ((dVar12 < 1e-20) &&
                   (dVar12 = (double)FUN_0040c850(dVar10 - dVar14), dVar12 < 1e-20)) {
                  *param_9 = *param_9 + 1;
                  *param_9 = *param_9 + 1;
                  *param_10 = '\0';
                }
                local_5c8 = dVar9 - dVar13;
                local_5c0 = dVar10 - dVar14;
                dVar13 = (double)FUN_00c44590(&local_5c8);
                dVar14 = (double)FUN_00c445d0(&local_5c8);
                dVar12 = (double)FUN_0040c850(dVar14 - 3.141592653589793);
                if (dVar12 < 1e-06) {
                  dVar13 = -dVar13;
                }
                dVar15 = dVar15 * dVar13;
                dVar16 = dVar16 + dVar14;
              }
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          local_624 = param_1 + 1;
          if (local_624 <= param_1 + param_2) {
            iVar1 = ((param_1 + param_2) - local_624) + 1;
            pdVar5 = local_5a8 + (longlong)local_624 * 2;
            do {
              if ((*param_10 != '\0') && (FUN_019b7940(param_11), local_624 != local_61c)) {
                dVar13 = *pdVar5;
                dVar14 = pdVar5[1];
                dVar12 = (double)FUN_0040c850(dVar9 - dVar13);
                if ((dVar12 < 1e-20) &&
                   (dVar12 = (double)FUN_0040c850(dVar10 - dVar14), dVar12 < 1e-20)) {
                  *param_9 = *param_9 + 1;
                  *param_10 = '\0';
                }
                local_5c8 = dVar9 - dVar13;
                local_5c0 = dVar10 - dVar14;
                dVar13 = (double)FUN_00c44590(&local_5c8);
                dVar14 = (double)FUN_00c445d0(&local_5c8);
                dVar12 = (double)FUN_0040c850(dVar14 - 3.141592653589793);
                if (dVar12 < 1e-06) {
                  dVar13 = -dVar13;
                }
                dVar15 = dVar15 / dVar13;
                dVar16 = dVar16 - dVar14;
              }
              local_624 = local_624 + 1;
              pdVar5 = pdVar5 + 2;
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          if (dVar10 <= 0.0) {
            local_628 = local_628 + 1;
            *(double *)(param_7 + -0x28 + (longlong)local_628 * 0x28) = dVar15;
            *(double *)(param_7 + -0x20 + (longlong)local_628 * 0x28) = dVar9;
            *(double *)(param_7 + -0x18 + (longlong)local_628 * 0x28) = dVar10;
            *(double *)(param_7 + -0x10 + (longlong)local_628 * 0x28) = dVar16;
            *(undefined8 *)(param_7 + -8 + (longlong)local_628 * 0x28) = 0;
          }
        }
        local_61c = local_61c + 1;
        pdVar4 = pdVar4 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *param_8 = local_628;
  }
  return;
}

