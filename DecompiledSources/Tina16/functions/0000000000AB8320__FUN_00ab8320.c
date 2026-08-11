/* Ghidra address: 00ab8320 */
/* Ghidra symbol: FUN_00ab8320 */


void FUN_00ab8320(longlong param_1)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  int *local_88;
  ushort **local_80;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong *local_60;
  undefined4 local_54;
  ushort *local_50;
  int local_48;
  char local_41;
  longlong local_40;
  ushort *local_38;
  ushort *local_30;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x88) = 0;
  local_70 = 0;
  local_68 = *(int *)(param_1 + 0x78);
  local_30 = *(ushort **)(*(longlong *)(param_1 + 0x60) + 0xd8);
  local_38 = (ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8) + -2 +
             (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x6c) * 2);
  if (*(int *)(*(longlong *)(param_1 + 0x60) + 0x6c) == 0) {
    uVar6 = FUN_00a93460(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xa8),
                         *(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x8c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x88) = *(undefined4 *)(param_1 + 0x3c);
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x80) =
         *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x3c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x84) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x80);
    **(undefined4 **)(param_1 + 0xb0) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xac) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x90) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x94) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x78);
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x98) =
         *(int *)(*(longlong *)(param_1 + 0x60) + 0x90) +
         *(int *)(*(longlong *)(param_1 + 0x60) + 0xac);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x9c) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x84);
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0x60) + 0xb0) != 0) {
      *(int *)(*(longlong *)(param_1 + 0x60) + 300) =
           (*(int *)(*(longlong *)(param_1 + 0x60) + 0xb0) * *(int *)(param_1 + 0x90)) / 100;
    }
    local_41 = '\0';
    iVar7 = FUN_00a73fa0(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78));
    *(int *)(*(longlong *)(param_1 + 0x60) + 0xac) = iVar7 - *(int *)(param_1 + 0x70);
    iVar7 = FUN_00a73fa0(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78));
    iVar8 = FUN_00a73eb0(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78));
    local_6c = iVar7 - iVar8;
    if (*(int *)(param_1 + 0x90) <= iVar7 - iVar8) {
      local_6c = *(int *)(param_1 + 0x90);
    }
    **(int **)(param_1 + 0xb0) = local_6c;
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0xa0);
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xf8) + 0x10);
    local_64 = 0;
    if (-1 < iVar7 + -1) {
      do {
        local_60 = (longlong *)
                   FUN_00ac50c0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xf8),local_64);
        uVar9 = FUN_00a94a50(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x118),
                             (int)local_60[0xd]);
        local_a8 = uVar6;
        (**(code **)(*local_60 + 0xe0))(local_60,*(undefined8 *)(param_1 + 0x68),uVar9,local_6c);
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20) + 0x50e) == '\0') {
          iVar8 = **(int **)(param_1 + 0xb0);
          iVar13 = (**(code **)(*local_60 + 200))(local_60);
          if (iVar13 < iVar8) {
            iVar13 = iVar8;
          }
          **(int **)(param_1 + 0xb0) = iVar13;
        }
        else {
          iVar8 = (**(code **)(*local_60 + 200))(local_60);
          if (local_6c < iVar8) {
            (**(code **)(*local_60 + 0xd8))(local_60,local_6c);
          }
        }
        local_64 = local_64 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x100) + 0x10);
    local_64 = 0;
    if (-1 < iVar7 + -1) {
      do {
        local_60 = (longlong *)
                   FUN_00ac1a90(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x100),local_64);
        uVar9 = FUN_00a94a50(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x118),
                             (int)local_60[0xd]);
        local_a8 = uVar6;
        (**(code **)(*local_60 + 0xe0))(local_60,*(undefined8 *)(param_1 + 0x68),uVar9,local_6c);
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20) + 0x50e) == '\0') {
          iVar8 = **(int **)(param_1 + 0xb0);
          iVar13 = (**(code **)(*local_60 + 200))(local_60);
          if (iVar13 < iVar8) {
            iVar13 = iVar8;
          }
          **(int **)(param_1 + 0xb0) = iVar13;
        }
        else {
          iVar8 = (**(code **)(*local_60 + 200))(local_60);
          if (local_6c < iVar8) {
            (**(code **)(*local_60 + 0xd8))(local_60,local_6c);
          }
        }
        local_64 = local_64 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_54 = *(undefined4 *)(param_1 + 0x78);
    local_50 = local_30 + -1;
    while (local_41 == '\0') {
      iVar7 = (int)(((longlong)local_38 - (longlong)local_30) / 2) + 1;
      if (iVar7 < 1) break;
      uVar9 = CONCAT71((int7)((ulonglong)(((longlong)local_38 - (longlong)local_30) % 2) >> 8),1);
      local_40 = FUN_00abf8f0(&DAT_00a84538,uVar9,
                              *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18));
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xf0) + 0x10) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0xa8);
        iVar8 = FUN_00a93460(*(undefined8 *)(param_1 + 0x60),uVar9,*(undefined4 *)(param_1 + 0x78));
        if (0 < iVar8) {
          *(int *)(local_40 + 0x18) = iVar8;
          piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0x88);
          *piVar2 = *piVar2 + iVar8;
          *(undefined4 *)(local_40 + 0x20) = 0;
          *(ushort **)(local_40 + 8) = local_30;
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar8;
          lVar10 = local_40;
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xf0),local_40);
          uVar9 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          local_40 = FUN_00abf8f0(&DAT_00a84538,uVar9,
                                  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18));
        }
      }
      local_48 = 0;
      iVar8 = 0;
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x60) + 0x128);
      if (bVar3 < 8) {
        bVar14 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (bVar3 & 0x1f) & 0x16U) != 0;
      }
      else {
        bVar14 = false;
      }
      if ((!bVar14) || (iVar13 = iVar7, *(char *)(*(longlong *)(param_1 + 0x60) + 0xa8) != '\0')) {
        local_a8 = *(undefined4 *)(param_1 + 0x70);
        local_a0 = *(undefined4 *)(param_1 + 0x78);
        local_98 = *(undefined8 *)(param_1 + 0xa8);
        local_90 = &local_54;
        local_88 = &local_48;
        local_80 = &local_50;
        iVar8 = FUN_00ab6f60(param_1,*(undefined8 *)(param_1 + 0x68),local_30,iVar7);
        iVar13 = iVar8;
        if (iVar8 < 2) {
          iVar13 = 1;
        }
      }
      iVar11 = *(int *)(param_1 + 0x78) + local_48;
      if (iVar11 < local_70) {
        iVar11 = local_70;
      }
      local_70 = iVar11;
      if (iVar8 == 0) {
        iVar8 = FUN_00a74740(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78));
        iVar8 = iVar8 - *(int *)(param_1 + 0x78);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 < 1) {
        if (iVar13 == iVar7) {
          local_41 = '\x01';
          FUN_00ab76e0(auStack_c8,iVar13);
        }
        else {
          puVar12 = local_30 + (longlong)iVar13 + -1;
          uVar5 = *puVar12;
          if (((uVar5 == 0x20) || (uVar5 == 2)) || (uVar5 == 4)) {
            bVar14 = true;
          }
          else {
            bVar14 = 0x2fff < uVar5;
          }
          if (((bVar14) &&
              (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) +
                        ((longlong)puVar12 - *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8)) /
                        2) != '\0')) || (*puVar12 == 8)) {
            for (; (iVar13 < iVar7 && (puVar12[1] == 0x20)); puVar12 = puVar12 + 1) {
              iVar13 = iVar13 + 1;
            }
            local_41 = iVar7 <= iVar13;
            FUN_00ab76e0(auStack_c8,iVar13);
          }
          else if (((iVar13 < iVar7) && (puVar12[1] == 0x20)) &&
                  (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) + 1 +
                            ((longlong)puVar12 - *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8)
                            ) / 2) != '\0')) {
            do {
              iVar13 = iVar13 + 1;
              if (iVar7 <= iVar13) break;
              puVar1 = puVar12 + 2;
              puVar12 = puVar12 + 1;
            } while (*puVar1 == 0x20);
            local_41 = iVar7 <= iVar13;
            FUN_00ab76e0(auStack_c8,iVar13);
          }
          else if ((iVar13 < iVar7) &&
                  (((puVar12[1] == 2 || (puVar12[1] == 4)) &&
                   (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) + -1 +
                              ((longlong)local_30 -
                              *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8)) / 2 +
                             (longlong)iVar13) != '\0')))) {
            local_41 = '\0';
            FUN_00ab76e0(auStack_c8,iVar13);
          }
          else {
            for (; local_30 < puVar12; puVar12 = puVar12 + -1) {
              cVar4 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) +
                               ((longlong)puVar12 -
                               *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8)) / 2);
              if (cVar4 != '\0') {
                if ((byte)(cVar4 - 2U) < 2) break;
                uVar5 = *puVar12;
                if (uVar5 < 0x21) {
                  if (((uVar5 == 0x20) || (uVar5 == 2)) || ((uVar5 == 4 || (uVar5 == 8)))) {
LAB_00ab8e78:
                    bVar14 = true;
                  }
                  else {
LAB_00ab8e7c:
                    bVar14 = 0x2fff < *puVar12;
                  }
                }
                else {
                  if (uVar5 != 0x2d) {
                    if ((uVar5 == 0x2f) || (uVar5 == 0x3f)) goto LAB_00ab8e78;
                    goto LAB_00ab8e7c;
                  }
                  if ((ushort)(puVar12[1] - 0x30) < 10) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                }
                if (bVar14) {
                  bVar14 = true;
                }
                else {
                  bVar14 = 0x2fff < puVar12[1];
                }
                if (bVar14) break;
              }
            }
            if ((puVar12 == local_30) &&
               (((*puVar12 != 2 && (*puVar12 != 4)) ||
                (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) +
                          ((longlong)local_30 - *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8))
                          / 2) == '\0')))) {
              if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xa8) == '\0') {
                puVar12 = local_30 + (longlong)iVar13 + -1;
                while( true ) {
                  if (puVar12 == local_38) {
                    bVar14 = false;
                  }
                  else {
                    uVar5 = *puVar12;
                    if (uVar5 == 0x2d) {
                      if ((ushort)(puVar12[1] - 0x30) < 10) {
                        bVar14 = false;
                      }
                      else {
                        bVar14 = true;
                      }
                    }
                    else if ((uVar5 == 0x2f) || (uVar5 == 0x3f)) {
                      bVar14 = true;
                    }
                    else {
                      bVar14 = false;
                    }
                    bVar14 = !bVar14;
                  }
                  if (!bVar14) break;
                  lVar10 = ((longlong)puVar12 - *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8))
                           / 2;
                  bVar3 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) + lVar10);
                  if (bVar3 < 8) {
                    bVar14 = ((int)CONCAT71((int7)((ulonglong)lVar10 >> 8),1) << (bVar3 & 0x1f) &
                             0xcU) != 0;
                  }
                  else {
                    bVar14 = false;
                  }
                  if ((bVar14) ||
                     ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) + 1 +
                                ((longlong)puVar12 -
                                *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8)) / 2) != '\0' &&
                      (((uVar5 = puVar12[1], uVar5 == 2 || (uVar5 == 4)) ||
                       ((uVar5 == 8 || ((uVar5 == 0x20 || (0x2fff < puVar12[1])))))))))) break;
                  puVar12 = puVar12 + 1;
                }
                for (; (puVar12 != local_38 && (puVar12[1] == 0x20)); puVar12 = puVar12 + 1) {
                }
                if ((puVar12 != local_38) && (puVar12[1] == 8)) {
                  puVar12 = puVar12 + 1;
                }
                iVar7 = FUN_00a74740(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x78)
                                    );
                iVar7 = iVar7 - *(int *)(param_1 + 0x78);
                if (iVar7 < 1) {
                  iVar7 = **(int **)(param_1 + 0xb0);
                  local_a8 = CONCAT31(local_a8._1_3_,1);
                  iVar8 = FUN_00ab6950(*(undefined8 *)(param_1 + 0x60),
                                       *(undefined8 *)(param_1 + 0x68),local_30,
                                       (int)(((longlong)puVar12 - (longlong)local_30) / 2) + 1);
                  if (iVar8 < iVar7) {
                    iVar8 = iVar7;
                  }
                  **(int **)(param_1 + 0xb0) = iVar8;
                  local_41 = puVar12 == local_38;
                  FUN_00ab76e0(auStack_c8,(int)(((longlong)puVar12 - (longlong)local_30) / 2) + 1);
                }
                else {
                  *(int *)(local_40 + 0x18) = iVar7;
                  piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0x88);
                  *piVar2 = *piVar2 + iVar7;
                  *(undefined4 *)(local_40 + 0x20) = 0;
                  *(ushort **)(local_40 + 8) = local_30;
                  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar7;
                  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xf0),local_40);
                }
              }
              else {
                FUN_00ab76e0(auStack_c8,iVar13);
              }
            }
            else {
              for (; puVar12[1] == 0x20; puVar12 = puVar12 + 1) {
              }
              FUN_00ab76e0(auStack_c8,(int)(((longlong)puVar12 - (longlong)local_30) / 2) + 1);
            }
          }
        }
      }
      else {
        puVar12 = local_30 + (longlong)iVar13 + -1;
        uVar5 = *puVar12;
        if ((uVar5 == 0x20) || (uVar5 == 4)) {
          bVar14 = true;
        }
        else {
          bVar14 = 0x2fff < uVar5;
        }
        if (((bVar14) &&
            (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe0) +
                      ((longlong)puVar12 - *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xd8)) / 2)
             != '\0')) || (*puVar12 == 8)) {
          for (; (iVar13 < iVar7 && (puVar12[1] == 0x20)); puVar12 = puVar12 + 1) {
            iVar13 = iVar13 + 1;
          }
          local_41 = iVar7 <= iVar13;
          FUN_00ab76e0(auStack_c8,iVar13);
        }
        else {
          *(int *)(local_40 + 0x18) = iVar8;
          piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0x88);
          *piVar2 = *piVar2 + iVar8;
          *(undefined4 *)(local_40 + 0x20) = 0;
          *(ushort **)(local_40 + 8) = local_30;
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar8;
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xf0),local_40);
        }
      }
    }
    **(int **)(param_1 + 0xb8) =
         *(int *)(*(longlong *)(param_1 + 0x60) + 0x68) +
         *(int *)(*(longlong *)(param_1 + 0x60) + 0x6c);
    if (((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 0x290) != 0) &&
        (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xf0) + 0x10))) &&
       (lVar10 = FUN_00ac5680(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xf0),0),
       **(int **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 0x290) == 0)) {
      **(int **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 0x290) =
           ((*(int *)(*(longlong *)(param_1 + 0x60) + 0x74) + *(int *)(lVar10 + 0x18)) -
           *(int *)(lVar10 + 0x24)) + *(int *)(lVar10 + 0x10);
    }
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x8c) = local_70 - local_68;
    if (*(int *)(*(longlong *)(param_1 + 0x60) + 0x8c) <
        *(int *)(*(longlong *)(param_1 + 0x60) + 0x88)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x8c) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x88);
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x88);
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x80) =
         local_68 + *(int *)(*(longlong *)(param_1 + 0x60) + 0x88);
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x84) =
         local_68 + *(int *)(*(longlong *)(param_1 + 0x60) + 0x8c);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18);
    if (((*(char *)(lVar10 + 700) == '\0') &&
        (*(int *)(*(longlong *)(param_1 + 0x60) + 200) % 0x32 == 0)) &&
       ((*(int *)(*(longlong *)(param_1 + 0x60) + 0xcc) != *(int *)(lVar10 + 0x2b4) &&
        (0 < *(int *)(lVar10 + 0x2b0))))) {
      (**(code **)(**(longlong **)(lVar10 + 0xb8) + 0x460))
                (*(longlong **)(lVar10 + 0xb8),
                 *(int *)(lVar10 + 0x2b8) +
                 ((100 - *(int *)(lVar10 + 0x2b8)) * *(int *)(*(longlong *)(param_1 + 0x60) + 200))
                 / *(int *)(lVar10 + 0x2b0));
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xcc) = *(undefined4 *)(lVar10 + 0x2b4);
    if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20) + 0x50e) != '\0') &&
       (local_6c < **(int **)(param_1 + 0xb0))) {
      **(int **)(param_1 + 0xb0) = local_6c;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x90) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x94) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x78);
    *(int *)(*(longlong *)(param_1 + 0x60) + 0x98) =
         *(int *)(*(longlong *)(param_1 + 0x60) + 0x90) + **(int **)(param_1 + 0xb0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x9c) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x84);
  }
  return;
}

