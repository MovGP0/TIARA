/* Ghidra address: 017db330 */
/* Ghidra symbol: FUN_017db330 */


void FUN_017db330(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  double dVar13;
  int local_64;
  undefined8 local_60 [2];
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  
  local_60[0] = 0;
  uVar12 = FUN_00b92140(0);
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar11 = *(int *)(param_1 + 8) + -1;
    local_64 = 1;
    if (0 < iVar11) {
      do {
        lVar9 = (longlong)local_64;
        if (*(double *)(*(longlong *)(param_1 + 0x1b8) + lVar9 * 8) != 0.0) {
          dVar13 = (double)FUN_017d99c0(param_1,local_64,local_64);
          *(double *)(*(longlong *)(param_1 + 0x1b8) + lVar9 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x1b8) + lVar9 * 8) / dVar13;
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 0x18);
          local_50 = *plVar1;
          lStack_48 = plVar1[1];
          local_40 = plVar1[2];
          iVar8 = 0;
          iVar10 = (int)local_40;
          if (-1 < (int)local_40 + -1) {
            do {
              sVar2 = *(short *)(local_50 + (longlong)iVar8 * 2);
              if (local_64 < sVar2) {
                iVar4 = (int)sVar2;
                dVar13 = (double)FUN_017d99c0(param_1,iVar4,local_64);
                *(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar4 * 8) =
                     *(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar4 * 8) -
                     *(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)local_64 * 8) * dVar13;
              }
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        local_64 = local_64 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    local_64 = *(int *)(param_1 + 8) + -1;
    if (0 < local_64) {
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)local_64 * 0x18);
        dVar13 = 0.0;
        iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)local_64 * 0x18);
        iVar10 = 0;
        if (-1 < iVar11 + -1) {
          do {
            iVar8 = *(int *)(lVar9 + 0x10 + (longlong)iVar10 * 0x18);
            if ((local_64 < iVar8) &&
               (*(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar8 * 8) != 0.0)) {
              dVar13 = dVar13 + *(double *)(lVar9 + (longlong)iVar10 * 0x18) *
                                *(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar8 * 8);
            }
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        lVar9 = (longlong)local_64;
        *(double *)(*(longlong *)(param_1 + 0x1b8) + lVar9 * 8) =
             *(double *)(*(longlong *)(param_1 + 0x1b8) + lVar9 * 8) - dVar13;
        param_2[*(short *)(*(longlong *)(param_1 + 0x80) + lVar9 * 2)] =
             *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar9 * 8);
        local_64 = local_64 + -1;
      } while (local_64 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x18) == '\x01') && (1 < *(int *)(param_1 + 8))) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      thunk_FUN_041ad70f(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1c8),param_2,0
                        );
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x10);
      lVar5 = FUN_0041f930();
      *(undefined8 *)(lVar5 + 0x288) = *(undefined8 *)(lVar9 + 0x110);
      if (*(char *)(*(longlong *)(lVar9 + 0x110) + 0xe) == '\0') {
        if (*(char *)(*(longlong *)(lVar9 + 0x110) + 0xd) == '\0') {
          thunk_FUN_041ad70f(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1c8),
                             param_2,0);
          iVar11 = *(int *)(lVar9 + 0x30c) + *(int *)(lVar9 + 0x310) + *(int *)(lVar9 + 0x314) + -1;
          local_64 = 1;
          if (0 < iVar11) {
            do {
              lVar5 = (longlong)local_64;
              cVar3 = FUN_00526f10(param_2[lVar5]);
              if (cVar3 != '\0') {
                FUN_0040d200(param_2,(longlong)
                                     ((*(int *)(lVar9 + 0x30c) + *(int *)(lVar9 + 0x310) +
                                      *(int *)(lVar9 + 0x314)) * 8),0);
                uVar6 = FUN_00b89270();
                FUN_00b8e520(uVar6,local_60,0x104);
                uVar6 = FUN_0044d9f0(&PTR_FUN_00435a90,1,local_60[0],0x1581);
                FUN_004134c0(uVar6);
              }
              if ((double)param_2[lVar5] <= 100000000000000.0) {
                if ((double)param_2[local_64] <= -100000000000000.0 &&
                    (double)param_2[local_64] != -100000000000000.0) {
                  param_2[lVar5] = 0xc2d6bcc41e900000;
                }
              }
              else {
                param_2[lVar5] = 0x42d6bcc41e900000;
              }
              local_64 = local_64 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
      else {
        thunk_FUN_041ad70f(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1c8),param_2
                           ,FUN_01662ae0);
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      pcVar7 = (code *)0x0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
      if ((*(char *)(lVar9 + 0xe) == '\0') || (*(char *)(lVar9 + 0xf) == '\0')) {
        pcVar7 = (code *)0x0;
      }
      else {
        lVar5 = FUN_0041f930();
        *(longlong *)(lVar5 + 0x288) = lVar9;
        pcVar7 = FUN_01662ae0;
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110) + 0xd) == '\0') {
      thunk_FUN_03ff8094(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                         (*(int *)(param_1 + 8) - *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) +
                         -1,1,*(undefined8 *)(param_1 + 0x1c8),param_1 + 0xe8,pcVar7);
    }
    FUN_00409a70(*(undefined8 *)(param_1 + 0x1c8),param_2 + 1,(longlong)*(int *)(param_1 + 0xb8));
    *param_2 = 0;
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10);
    if ((0 < iVar11) && (local_64 = 0, -1 < iVar11 + -1)) {
      do {
        iVar10 = FUN_017d7500(*(undefined8 *)(param_1 + 0x1b0),local_64);
        iVar8 = FUN_017d7500(*(undefined8 *)(param_1 + 0x1b0),local_64);
        iVar4 = FUN_017d7500(*(undefined8 *)(param_1 + 0x1b0),local_64);
        FUN_00409a70(param_2 + (iVar10 + 1),param_2 + (iVar8 + 2),
                     (longlong)(((*(int *)(param_1 + 8) - iVar4) + -2) * 8));
        iVar10 = FUN_017d7500(*(undefined8 *)(param_1 + 0x1b0),local_64);
        param_2[iVar10 + 1] = 0;
        local_64 = local_64 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  dVar13 = (double)FUN_00b92140(uVar12);
  *(double *)PTR_DAT_02005448 = dVar13 + *(double *)PTR_DAT_02005448;
  FUN_00414480(local_60);
  return;
}

