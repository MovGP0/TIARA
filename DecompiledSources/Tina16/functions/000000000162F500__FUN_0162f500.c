/* Ghidra address: 0162f500 */
/* Ghidra symbol: FUN_0162f500 */


void FUN_0162f500(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong local_b8;
  longlong local_b0;
  int local_8c;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [5];
  
  local_70 = 0;
  local_78 = 0;
  lVar3 = *(longlong *)(param_3 + 0x13980);
  lVar4 = *(longlong *)(param_2 + 0x80);
  if ((*(int *)(lVar3 + 0xc) != 0) && (lVar4 != 0)) {
    FUN_016ee260(lVar4,local_50,0xd0,0);
    iVar1 = *(int *)(param_2 + 0x68);
    *(undefined1 *)(param_3 + 0x139e4) = 1;
    FUN_0162f410(lVar3,param_2,param_3);
    if ((*(char *)(param_3 + 0x139e4) != '\0') &&
       (local_8c = *(int *)(lVar3 + 0x18) + -1, -1 < local_8c)) {
      do {
        iVar2 = *(int *)(lVar3 + 0xc0 + (longlong)local_8c * 4);
        if (-1 < iVar2) {
          lVar7 = (longlong)iVar2;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x6a0) + lVar7 * 0x10) == 0) {
            local_b8 = 0;
            local_b0 = 0;
          }
          else {
            local_b8 = *(longlong *)
                        (*(longlong *)(*(longlong *)(lVar3 + 0x6a0) + lVar7 * 0x10) + 0x90);
            local_b0 = *(longlong *)
                        (*(longlong *)(*(longlong *)(lVar3 + 0x6a0) + lVar7 * 0x10) + 0x98);
          }
        }
        if (-1 < iVar2) {
          if ((local_b8 != 0) && (*(char *)(param_3 + 0x139b8) != '\b')) {
            uVar11 = 0;
            bVar5 = 0;
            if ((*(char *)(param_3 + 0x139e7) == '\0') ||
               (((*(byte *)(local_b8 + 0xb1) & 1) == 0 || ((*(byte *)(local_b8 + 0xb1) & 4) == 0))))
            {
              if (((*(char *)(param_3 + 0x139e6) != '\0') &&
                  (*(char *)(*(longlong *)(*(longlong *)(lVar3 + 0x6a0) + (longlong)iVar2 * 0x10) +
                            200) != '\0')) || (*(char *)(param_3 + 0x139e6) == '\0')) {
                uVar11 = FUN_016586b0(lVar4,*(undefined8 *)(param_3 + 0x38),local_b8,1,
                                      *(undefined8 *)(local_50[0] + 0x28),local_50[0],
                                      *(undefined1 *)(param_3 + 0x139b8),
                                      *(undefined1 *)(local_50[0] + 0x60));
                bVar5 = 1;
                *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + 1;
              }
            }
            else {
              uVar11 = *(undefined8 *)(local_b8 + 0xb8);
              bVar5 = 1;
            }
            if (((bVar5 & *(byte *)(param_3 + 0x139e7)) != 0) &&
               ((*(byte *)(local_b8 + 0xb1) & 1) != 0)) {
              *(byte *)(local_b8 + 0xb1) = *(byte *)(local_b8 + 0xb1) | 4;
              *(undefined8 *)(local_b8 + 0xb8) = uVar11;
            }
          }
          local_7c = 0;
          iVar9 = iVar1;
          if (-1 < iVar1 + -1) {
            do {
              uVar11 = 0;
              if (local_b0 == 0) {
                uVar12 = 0;
              }
              else if (*(char *)(param_3 + 0x139b8) == '\b') {
                FUN_0165adb0(&local_60,*(undefined8 *)(param_3 + 0x38),
                             *(undefined8 *)(local_b0 + (longlong)local_7c * 8),
                             *(undefined8 *)(local_50[0] + 0x28));
                uVar12 = local_60;
                uVar11 = local_58;
              }
              else {
                lVar7 = *(longlong *)(local_b0 + (longlong)local_7c * 8);
                if (((*(char *)(param_3 + 0x139e7) == '\0') || ((*(byte *)(lVar7 + 0xb1) & 1) == 0))
                   || ((*(byte *)(lVar7 + 0xb1) & 4) == 0)) {
                  uVar12 = FUN_0165a4e0(lVar4,*(undefined8 *)(param_3 + 0x38),lVar7,1,
                                        *(undefined8 *)(local_50[0] + 0x28),local_7c + 1,local_50[0]
                                        ,*(undefined1 *)(param_3 + 0x139b8),
                                        *(undefined1 *)(local_50[0] + 0x60),1);
                  *(int *)(param_3 + 0x13a28) = *(int *)(param_3 + 0x13a28) + 1;
                  *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
                }
                else {
                  uVar12 = *(undefined8 *)(lVar7 + 0xb8);
                }
                if ((*(char *)(param_3 + 0x139e7) != '\0') && ((*(byte *)(lVar7 + 0xb1) & 1) != 0))
                {
                  *(byte *)(lVar7 + 0xb1) = *(byte *)(lVar7 + 0xb1) | 4;
                  *(undefined8 *)(lVar7 + 0xb8) = uVar12;
                }
              }
              lVar7 = *(longlong *)
                       (*(longlong *)(*(longlong *)(lVar3 + 0x6a8) + (longlong)iVar2 * 8) +
                       (longlong)local_7c * 8);
              iVar10 = *(int *)(lVar7 + 0x10);
              iVar8 = 0;
              if (-1 < iVar10 + -1) {
                do {
                  lVar6 = FUN_004aeac0(lVar7,iVar8);
                  *(undefined8 *)(lVar6 + 0x28) = uVar12;
                  *(undefined8 *)(lVar6 + 0x30) = uVar11;
                  iVar8 = iVar8 + 1;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              local_7c = local_7c + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        local_8c = local_8c + -1;
      } while (local_8c != -1);
    }
  }
  FUN_00414560(&local_78,2);
  return;
}

