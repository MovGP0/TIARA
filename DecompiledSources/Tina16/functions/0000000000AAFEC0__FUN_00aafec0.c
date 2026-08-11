/* Ghidra address: 00aafec0 */
/* Ghidra symbol: FUN_00aafec0 */


void FUN_00aafec0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  byte local_3e;
  byte local_3d;
  int local_3c [5];
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) + 0x10) !=
      0) {
    param_3 = param_3 - *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x13c);
    FUN_00419260(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160,&DAT_00a8b940,1,
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168)
                         + 0x10));
    FUN_00419260(&local_50,&DAT_00a8b940,1,
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168)
                         + 0x10));
    FUN_00419260(&local_48,&DAT_00a8b940,1,
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168)
                         + 0x10));
    FUN_00419260(&local_58,&DAT_00aaee60,1,
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168)
                         + 0x10));
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) +
                    0x10);
    iVar6 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = (longlong)iVar6;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) + lVar3 * 4) =
             0;
        *(undefined4 *)(local_50 + lVar3 * 4) = 0;
        *(undefined4 *)(local_48 + lVar3 * 4) = 0;
        *(undefined1 *)(local_58 + lVar3) = 0;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_5c = 1;
    bVar7 = 1;
    iVar5 = param_3 - *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) + 0x10
                              ) *
                      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x13c);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    while (bVar7 != 0) {
      bVar7 = 0;
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) +
                      0x10);
      local_64 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar4 = FUN_00ac4a60(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168),
                               local_64);
          iVar9 = *(int *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) + 0x10);
          if (iVar9 < local_64 + local_5c) break;
          iVar10 = FUN_00aab490(uVar4,param_2,
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x158),
                                local_5c,*(undefined4 *)
                                          (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) +
                                          0x138),
                                *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x13c),iVar5
                                ,iVar9,local_3c,&local_3e,&local_3d);
          iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x13c);
          iVar10 = iVar10 + iVar9;
          local_3c[0] = local_3c[0] + iVar9;
          bVar7 = bVar7 | local_3d;
          if (local_5c == 1) {
            lVar3 = (longlong)local_64;
            *(int *)(local_48 + lVar3 * 4) = iVar10;
            *(int *)(local_50 + lVar3 * 4) = local_3c[0];
            *(byte *)(local_58 + lVar3) = *(byte *)(local_58 + lVar3) | local_3e;
          }
          else if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x13c) < iVar10) {
            iVar9 = 0;
            local_60 = 0;
            iVar8 = local_64 + local_5c + -1;
            if (local_64 <= iVar8) {
              iVar11 = (iVar8 - local_64) + 1;
              iVar8 = local_64;
              do {
                lVar3 = (longlong)iVar8;
                iVar9 = iVar9 + *(int *)(local_48 + lVar3 * 4);
                local_60 = local_60 + *(int *)(local_50 + lVar3 * 4);
                *(byte *)(local_58 + lVar3) = *(byte *)(local_58 + lVar3) | local_3e;
                iVar8 = iVar8 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            if (iVar9 < iVar10) {
              iVar8 = (iVar10 - iVar9) / local_5c;
              iVar11 = 0;
              iVar12 = local_64 + local_5c + -1;
              if (local_64 <= iVar12) {
                iVar13 = (iVar12 - local_64) + 1;
                iVar12 = local_64;
                do {
                  piVar1 = (int *)(local_48 + (longlong)iVar12 * 4);
                  *piVar1 = *piVar1 + iVar8;
                  iVar11 = iVar11 + iVar8;
                  iVar12 = iVar12 + 1;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              piVar1 = (int *)(local_48 + (longlong)(local_64 + local_5c + -1) * 4);
              *piVar1 = *piVar1 + ((iVar10 - iVar9) - iVar11);
            }
            if (local_60 < local_3c[0]) {
              iVar9 = (local_3c[0] - local_60) / local_5c;
              iVar8 = 0;
              iVar10 = local_64 + local_5c + -1;
              if (local_64 <= iVar10) {
                iVar11 = (iVar10 - local_64) + 1;
                iVar10 = local_64;
                do {
                  piVar1 = (int *)(local_50 + (longlong)iVar10 * 4);
                  *piVar1 = *piVar1 + iVar9;
                  iVar8 = iVar8 + iVar9;
                  iVar10 = iVar10 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              piVar1 = (int *)(local_50 + (longlong)(local_64 + local_5c + -1) * 4);
              *piVar1 = *piVar1 + ((local_3c[0] - local_60) - iVar8);
            }
          }
          local_64 = local_64 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_5c = local_5c + 1;
    }
    iVar10 = 0;
    local_60 = 0;
    iVar9 = 0;
    iVar6 = 0;
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) +
                    0x10);
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = (longlong)iVar6;
        iVar10 = iVar10 + *(int *)(local_48 + lVar3 * 4);
        local_60 = local_60 + *(int *)(local_50 + lVar3 * 4);
        if (*(char *)(local_58 + lVar3) == '\0') {
          iVar9 = iVar9 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar10 < param_3) {
      if (local_60 < param_3) {
        if (iVar9 < 1) {
          if (0 < local_60) {
            iVar9 = 0;
            iVar6 = 0;
            iVar5 = *(int *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) + 0x10);
            if (-1 < iVar5 + -2) {
              iVar5 = iVar5 + -1;
              do {
                uVar2 = FUN_0040c770(((double)param_3 / (double)local_60) *
                                     (double)*(int *)(local_50 + (longlong)iVar6 * 4));
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) +
                 (longlong)iVar6 * 4) = uVar2;
                iVar9 = iVar9 + *(int *)(*(longlong *)
                                          (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) +
                                          0x160) + (longlong)iVar6 * 4);
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) +
                    (longlong)
                    (*(int *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) + 0x10)
                    + -1) * 4) = param_3 - iVar9;
          }
        }
        else {
          FUN_004192a0(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160,local_50,
                       &DAT_00a8b940);
          iVar6 = (param_3 - local_60) / iVar9;
          iVar8 = 0;
          iVar5 = *(int *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168) + 0x10);
          iVar10 = 0;
          if (-1 < iVar5 + -1) {
            do {
              if (*(char *)(local_58 + iVar10) == '\0') {
                iVar9 = iVar9 + -1;
                if (iVar9 < 1) {
                  piVar1 = (int *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) +
                                  (longlong)iVar10 * 4);
                  *piVar1 = *piVar1 + ((param_3 - local_60) - iVar8);
                  break;
                }
                piVar1 = (int *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) +
                                (longlong)iVar10 * 4);
                *piVar1 = *piVar1 + iVar6;
                iVar8 = iVar8 + iVar6;
              }
              iVar10 = iVar10 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      else if (local_60 != iVar10) {
        iVar9 = 0;
        iVar6 = 0;
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168)
                        + 0x10);
        if (-1 < iVar5 + -2) {
          iVar5 = iVar5 + -1;
          do {
            iVar8 = FUN_0040c770(((double)(param_3 - iVar10) / (double)(local_60 - iVar10)) *
                                 (double)(*(int *)(local_50 + (longlong)iVar6 * 4) -
                                         *(int *)(local_48 + (longlong)iVar6 * 4)));
            *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) +
                    (longlong)iVar6 * 4) = *(int *)(local_48 + (longlong)iVar6 * 4) + iVar8;
            iVar9 = iVar9 + *(int *)(*(longlong *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160)
                                    + (longlong)iVar6 * 4);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160) +
                (longlong)
                (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x168)
                         + 0x10) + -1) * 4) = param_3 - iVar9;
      }
    }
    else {
      FUN_004192a0(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x70) + 0x160,local_48,
                   &DAT_00a8b940);
    }
  }
  FUN_00419430(&local_58,&DAT_00aaee60);
  FUN_00417840(&local_50,&DAT_00a8b940,2);
  return;
}

