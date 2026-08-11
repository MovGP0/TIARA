/* Ghidra address: 01d382c0 */
/* Ghidra symbol: FUN_01d382c0 */


char FUN_01d382c0(undefined8 param_1,undefined8 param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined2 uVar15;
  int iVar16;
  bool bVar17;
  char local_91;
  uint local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ushort *local_40 [2];
  
  local_80[0] = 0;
  local_91 = '\x01';
  if ((int)param_3 <= param_4) {
    iVar16 = (param_4 - param_3) + 1;
    local_88 = param_3;
    do {
      uVar12 = (ulonglong)local_88;
      bVar4 = FUN_01d36f50(param_1,uVar12,local_40);
      uVar15 = (undefined2)((uint)param_4 >> 0x10);
      if (bVar4 < 0xd) {
        if (bVar4 == 0xc) {
          local_48 = (longlong *)FUN_004095c0((uint)*local_40[0] * 2);
          if (local_48 == (longlong *)0x0) {
            local_91 = '\0';
          }
          else {
            FUN_00409a70(*(undefined8 *)(local_40[0] + 4),local_48,(uint)*local_40[0] * 2);
            cVar5 = FUN_01d36f50(param_2,local_88,local_40);
            if (cVar5 == '\f') {
              *(longlong **)(local_40[0] + 4) = local_48;
            }
          }
        }
        else if (bVar4 < 7) {
          if (bVar4 == 6) {
            FUN_01d36f50(param_2,local_88,&local_50);
            if (*(longlong *)(local_40[0] + 4) == 0) {
              *(undefined8 *)(local_50 + 8) = 0;
            }
            else {
              iVar13 = FUN_00414ce0(*(undefined8 *)(local_40[0] + 4));
              uVar8 = FUN_00409570(iVar13 + 1);
              *(undefined8 *)(local_50 + 8) = uVar8;
              uVar7 = FUN_00414ce0(*(undefined8 *)(local_40[0] + 4));
              FUN_00442450(*(undefined8 *)(local_50 + 8),*(undefined8 *)(local_40[0] + 4),uVar7);
            }
            if (*(longlong *)(local_40[0] + 0x10) != 0) {
              FUN_00b909a0(&local_48,0x13);
              if (local_48 == (longlong *)0x0) {
                local_91 = '\0';
              }
              else {
                FUN_00409a70(*(undefined8 *)(local_40[0] + 0x10),local_48,0x13);
                *(longlong **)(local_50 + 0x20) = local_48;
              }
            }
          }
          else if (bVar4 == 3) {
            FUN_01d36f50(param_2,local_88,&local_50);
            if (*(longlong *)(local_40[0] + 4) == 0) {
              *(undefined8 *)(local_50 + 8) = 0;
            }
            else {
              iVar13 = FUN_00414ce0(*(undefined8 *)(local_40[0] + 4));
              uVar8 = FUN_00409570(iVar13 + 1);
              *(undefined8 *)(local_50 + 8) = uVar8;
              uVar7 = FUN_00414ce0(*(undefined8 *)(local_40[0] + 4));
              FUN_00442450(*(undefined8 *)(local_50 + 8),*(undefined8 *)(local_40[0] + 4),uVar7);
            }
          }
          else if (bVar4 == 4) {
            if (*(longlong *)(local_40[0] + 0x13) != 0) {
              iVar13 = FUN_01d43610();
              if (iVar13 < 0x26) {
                local_91 = '\0';
                *PTR_DAT_02002ce0 = 1;
              }
              else {
                cVar5 = FUN_01d36f50(param_2,local_88,&local_50);
                if (cVar5 == '\x04') {
                  uVar8 = FUN_004095c0(0x25);
                  *(undefined8 *)(local_50 + 0x26) = uVar8;
                }
                lVar10 = *(longlong *)(local_40[0] + 0x13);
                FUN_00b909a0(&local_48,*(undefined2 *)(lVar10 + 0x21));
                if (local_48 == (longlong *)0x0) {
                  local_91 = '\0';
                }
                else {
                  FUN_00409a70(*(undefined8 *)(lVar10 + 1),local_48,*(undefined2 *)(lVar10 + 0x21));
                  FUN_00b909a0(&local_58,*(undefined2 *)(lVar10 + 0x23));
                  if (local_58 == 0) {
                    local_91 = '\0';
                  }
                  else {
                    FUN_00409a70(*(undefined8 *)(lVar10 + 9),local_58,*(undefined2 *)(lVar10 + 0x23)
                                );
                    FUN_00b909a0(&local_60,*(undefined2 *)(lVar10 + 0x21));
                    if (local_60 != 0) {
                      FUN_00409a70(*(undefined8 *)(lVar10 + 0x19),local_60,
                                   *(undefined2 *)(lVar10 + 0x21));
                      puVar2 = *(undefined8 **)(local_50 + 0x26);
                      puVar3 = *(undefined8 **)(local_40[0] + 0x13);
                      *puVar2 = *puVar3;
                      puVar2[1] = puVar3[1];
                      puVar2[2] = puVar3[2];
                      puVar2[3] = puVar3[3];
                      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
                      *(undefined1 *)((longlong)puVar2 + 0x24) =
                           *(undefined1 *)((longlong)puVar3 + 0x24);
                      lVar10 = *(longlong *)(local_50 + 0x26);
                      *(longlong **)(lVar10 + 1) = local_48;
                      *(longlong *)(lVar10 + 9) = local_58;
                      *(ulonglong *)(lVar10 + 0x19) = local_60;
                    }
                  }
                }
              }
            }
          }
          else if (bVar4 == 5) {
            bVar4 = (byte)*local_40[0];
            if (bVar4 < 8) {
              uVar11 = (int)CONCAT71((int7)(uVar12 >> 8),1) << (bVar4 & 0x1f);
              uVar12 = (ulonglong)uVar11;
              bVar17 = (uVar11 & 0xfe) != 0;
            }
            else {
              bVar17 = false;
            }
            if (!bVar17) {
              if ((byte)(bVar4 - 8) < 8) {
                bVar17 = ((int)CONCAT71((int7)(uVar12 >> 8),1) << (bVar4 - 8 & 0x1f) & 0x70U) != 0;
              }
              else {
                bVar17 = false;
              }
              if (!bVar17) {
                if (bVar4 == 9) {
                  FUN_01d36f50(param_2,local_88,&local_50);
                  *(undefined8 *)(local_50 + 0x11) = 0;
                  *(undefined8 *)(local_50 + 9) = 0;
                  if (*(longlong *)((longlong)local_40[0] + 0x11) != 0) {
                    plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
                    (**(code **)(**(longlong **)((longlong)local_40[0] + 0x11) + 0x38))
                              (*(longlong **)((longlong)local_40[0] + 0x11),local_80);
                    (**(code **)(*plVar9 + 0x60))(plVar9,local_80[0]);
                    FUN_01d36f50(param_2,local_88,&local_50);
                    *(longlong **)(local_50 + 0x11) = plVar9;
                  }
                  if ((*(longlong *)((longlong)local_40[0] + 9) != 0) &&
                     (FUN_00b909a0(&local_48,*(int *)((longlong)local_40[0] + 1) << 4),
                     local_48 != (longlong *)0x0)) {
                    FUN_00409a70(*(undefined8 *)((longlong)local_40[0] + 9),local_48,
                                 (longlong)(*(int *)((longlong)local_40[0] + 1) << 4));
                    FUN_01d36f50(param_2,local_88,&local_50);
                    *(longlong **)(local_50 + 9) = local_48;
                  }
                }
                else if (bVar4 == 8) {
                  plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
                  (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)((longlong)local_40[0] + 9));
                  local_48 = *(longlong **)((longlong)local_40[0] + 1);
                  local_70 = *(undefined8 *)((longlong)local_40[0] + 0x11);
                  uStack_68 = *(undefined8 *)((longlong)local_40[0] + 0x19);
                  FUN_01d36f50(param_2,local_88,local_40);
                  *(longlong **)((longlong)local_40[0] + 9) = plVar9;
                  pbVar1 = (byte *)((longlong)local_40[0] + 1);
                  pbVar1[0] = 0;
                  pbVar1[1] = 0;
                  pbVar1[2] = 0;
                  pbVar1[3] = 0;
                  pbVar1[4] = 0;
                  pbVar1[5] = 0;
                  pbVar1[6] = 0;
                  pbVar1[7] = 0;
                  if (local_48 != (longlong *)0x0) {
                    *(undefined8 *)((longlong)local_40[0] + 0x11) = local_70;
                    *(undefined8 *)((longlong)local_40[0] + 0x19) = uStack_68;
                  }
                }
                else if (bVar4 == 10) {
                  FUN_01d36f50(param_2,local_88,&local_50);
                  uVar8 = FUN_00442bd0(*(undefined8 *)(local_40[0] + 1));
                  *(undefined8 *)(local_50 + 2) = uVar8;
                  *(byte *)(local_50 + 1) = *(byte *)((longlong)local_40[0] + 1);
                  *(undefined4 *)(local_50 + 10) = *(undefined4 *)(local_40[0] + 5);
                  *(undefined8 *)(local_50 + 0x16) = *(undefined8 *)(local_40[0] + 0xb);
                  if (*(longlong *)(local_40[0] + 7) == 0) {
                    *(undefined8 *)(local_50 + 0xe) = 0;
                  }
                  else {
                    uVar8 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
                    *(undefined8 *)(local_50 + 0xe) = uVar8;
                    FUN_004b8ba0(*(undefined8 *)(local_50 + 0xe),*(undefined8 *)(local_40[0] + 7),0)
                    ;
                    FUN_004b6dc0(*(undefined8 *)(local_40[0] + 7),0);
                    FUN_004b6dc0(*(undefined8 *)(local_50 + 0xe),0);
                  }
                }
                else if (bVar4 == 0xb) {
                  FUN_01d36f50(param_2,local_88,&local_50);
                  *(byte *)(local_50 + 1) = *(byte *)((longlong)local_40[0] + 1);
                  *(byte *)(local_50 + 2) = (byte)local_40[0][1];
                  *(undefined8 *)(local_50 + 3) = *(undefined8 *)((longlong)local_40[0] + 3);
                  *(undefined8 *)(local_50 + 0xb) = *(undefined8 *)((longlong)local_40[0] + 0xb);
                  *(undefined8 *)(local_50 + 0x17) = 0;
                }
                else if (bVar4 == 0xf) {
                  FUN_01d36f50(param_2,local_88,&local_48);
                  FUN_00b909a0(&local_48,0x68);
                  if (local_48 == (longlong *)0x0) {
                    local_91 = '\0';
                  }
                  else {
                    FUN_00409a70(*(undefined8 *)((longlong)local_40[0] + 1),local_48,0x68);
                    *(longlong **)((longlong)local_48 + 1) = local_48;
                  }
                }
                goto LAB_01d39605;
              }
            }
            FUN_01d36f50(param_2,local_88,&local_50);
            FUN_00b909a0(&local_48,*(undefined2 *)((longlong)local_40[0] + 0x11));
            if (local_48 == (longlong *)0x0) {
              local_91 = '\0';
            }
            else {
              FUN_00409a70(*(undefined8 *)((longlong)local_40[0] + 1),local_48,
                           *(undefined2 *)((longlong)local_40[0] + 0x11));
              *(longlong **)(local_50 + 1) = local_48;
              *(undefined2 *)(local_50 + 0x11) = *(undefined2 *)((longlong)local_40[0] + 0x11);
            }
            uVar8 = FUN_00409570((ulonglong)(byte)(&DAT_01ff4ec2)[(byte)*local_40[0]] << 3);
            *(undefined8 *)(local_50 + 9) = uVar8;
            uVar11 = (uint)(byte)(&DAT_01ff4ec2)[(byte)*local_40[0]];
            iVar13 = 0;
            if (-1 < (int)(uVar11 - 1)) {
              do {
                lVar14 = (longlong)iVar13;
                lVar10 = *(longlong *)(*(longlong *)((longlong)local_40[0] + 9) + lVar14 * 8);
                if (lVar10 == 0) {
                  *(undefined8 *)(*(longlong *)(local_50 + 9) + lVar14 * 8) = 0;
                }
                else {
                  iVar6 = FUN_00414ce0(lVar10);
                  uVar8 = FUN_00409570(iVar6 + 1);
                  *(undefined8 *)(*(longlong *)(local_50 + 9) + lVar14 * 8) = uVar8;
                  uVar8 = *(undefined8 *)(*(longlong *)((longlong)local_40[0] + 9) + lVar14 * 8);
                  uVar7 = FUN_00414ce0(uVar8);
                  FUN_00442450(*(undefined8 *)(*(longlong *)(local_50 + 9) + lVar14 * 8),uVar8,uVar7
                              );
                }
                iVar13 = iVar13 + 1;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
        }
        else if (bVar4 == 7) {
          if (*(longlong *)(local_40[0] + 0x13) != 0) {
            iVar13 = FUN_01d43610();
            if (iVar13 < 0x26) {
              local_91 = '\0';
              *PTR_DAT_02002ce0 = 1;
            }
            else {
              cVar5 = FUN_01d36f50(param_2,local_88,&local_50);
              if (cVar5 == '\a') {
                uVar8 = FUN_004095c0(0x25);
                *(undefined8 *)(local_50 + 0x26) = uVar8;
              }
              lVar10 = *(longlong *)(local_40[0] + 0x13);
              FUN_00b909a0(&local_48,*(undefined2 *)(lVar10 + 0x21));
              if (local_48 == (longlong *)0x0) {
                local_91 = '\0';
              }
              else {
                FUN_00409a70(*(undefined8 *)(lVar10 + 1),local_48,*(undefined2 *)(lVar10 + 0x21));
                FUN_00b909a0(&local_58,*(undefined2 *)(lVar10 + 0x23));
                if (local_58 == 0) {
                  local_91 = '\0';
                }
                else {
                  FUN_00409a70(*(undefined8 *)(lVar10 + 9),local_58,*(undefined2 *)(lVar10 + 0x23));
                  FUN_00b909a0(&local_60,*(undefined2 *)(lVar10 + 0x21));
                  if (local_60 != 0) {
                    FUN_00409a70(*(undefined8 *)(lVar10 + 0x19),local_60,
                                 *(undefined2 *)(lVar10 + 0x21));
                    puVar2 = *(undefined8 **)(local_50 + 0x26);
                    puVar3 = *(undefined8 **)(local_40[0] + 0x13);
                    *puVar2 = *puVar3;
                    puVar2[1] = puVar3[1];
                    puVar2[2] = puVar3[2];
                    puVar2[3] = puVar3[3];
                    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
                    *(undefined1 *)((longlong)puVar2 + 0x24) =
                         *(undefined1 *)((longlong)puVar3 + 0x24);
                    lVar10 = *(longlong *)(local_50 + 0x26);
                    *(longlong **)(lVar10 + 1) = local_48;
                    *(longlong *)(lVar10 + 9) = local_58;
                    *(ulonglong *)(lVar10 + 0x19) = local_60;
                  }
                }
              }
              if ((*(byte *)((longlong)local_40[0] + 0x2f) == 0) ||
                 (*(longlong *)(local_40[0] + 0x18) == 0)) {
                *(undefined8 *)(local_50 + 0x30) = 0;
              }
              else {
                uVar8 = FUN_004b6930(&PTR_FUN_00478280,1);
                *(undefined8 *)(local_50 + 0x30) = uVar8;
                (**(code **)(**(longlong **)(local_50 + 0x30) + 0x10))
                          (*(longlong **)(local_50 + 0x30),*(undefined8 *)(local_40[0] + 0x18));
              }
              if ((*(byte *)((longlong)local_40[0] + 0x2f) == 0) ||
                 (*(longlong *)(local_40[0] + 0x9c) == 0)) {
                *(undefined8 *)(local_50 + 0x138) = 0;
              }
              else {
                uVar8 = FUN_00442bd0(*(undefined8 *)(local_40[0] + 0x9c));
                *(undefined8 *)(local_50 + 0x138) = uVar8;
              }
            }
          }
          if ((local_91 != '\0') && (*(longlong *)(local_40[0] + 0xa0) != 0)) {
            iVar13 = FUN_01d43610();
            if (iVar13 < 0x21) {
              local_91 = '\0';
              *PTR_DAT_02002ce0 = 1;
            }
            else {
              cVar5 = FUN_01d36f50(param_2,local_88,&local_50);
              if (cVar5 == '\a') {
                uVar8 = FUN_004095c0(0x20);
                *(undefined8 *)(local_50 + 0x140) = uVar8;
              }
              lVar10 = *(longlong *)(local_40[0] + 0xa0);
              FUN_00b909a0(&local_48,*(undefined1 *)(lVar10 + 0x19));
              if (local_48 == (longlong *)0x0) {
                local_91 = '\0';
              }
              else {
                FUN_00409a70(*(undefined8 *)(lVar10 + 8),local_48,*(undefined1 *)(lVar10 + 0x19));
                FUN_00b909a0(&local_58,*(undefined2 *)(lVar10 + 0x1a));
                if (local_58 == 0) {
                  local_91 = '\0';
                }
                else {
                  FUN_00409a70(*(undefined8 *)(lVar10 + 0x10),local_58,
                               *(undefined2 *)(lVar10 + 0x1a));
                  puVar2 = *(undefined8 **)(local_50 + 0x140);
                  puVar3 = *(undefined8 **)(local_40[0] + 0xa0);
                  *puVar2 = *puVar3;
                  puVar2[1] = puVar3[1];
                  puVar2[2] = puVar3[2];
                  puVar2[3] = puVar3[3];
                  lVar10 = *(longlong *)(local_50 + 0x140);
                  *(longlong **)(lVar10 + 8) = local_48;
                  *(longlong *)(lVar10 + 0x10) = local_58;
                }
              }
            }
          }
        }
        else if (bVar4 == 10) {
          param_4 = CONCAT22(uVar15,2);
          uVar8 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,param_4);
          FUN_01d3bb20(uVar8,*(undefined8 *)(local_40[0] + 4));
          cVar5 = FUN_01d36f50(param_2,local_88,local_40);
          if (cVar5 == '\n') {
            *(undefined8 *)(local_40[0] + 4) = uVar8;
          }
        }
        else if (bVar4 == 0xb) {
          FUN_01d36f50(param_2,local_88,local_40);
          FUN_01d36f50(param_1,local_88,&local_48);
          if (local_48[7] != 0) {
            uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
            FUN_004134c0(uVar8);
          }
          if (local_48[1] != 0) {
            uVar8 = FUN_004b6930(&PTR_FUN_00478280,1);
            *(undefined8 *)(local_40[0] + 4) = uVar8;
            (**(code **)(**(longlong **)(local_40[0] + 4) + 0x10))
                      (*(longlong **)(local_40[0] + 4),local_48[1]);
          }
          if (local_48[4] != 0) {
            iVar13 = FUN_00414ce0(local_48[4]);
            uVar8 = FUN_00409570(iVar13 + 1);
            *(undefined8 *)(local_40[0] + 0x10) = uVar8;
            uVar7 = FUN_00414ce0(local_48[4]);
            FUN_00442450(*(undefined8 *)(local_40[0] + 0x10),local_48[4],uVar7);
          }
          uVar8 = FUN_016a92e0(local_48[5],0);
          *(undefined8 *)(local_40[0] + 0x14) = uVar8;
          if ((byte)local_40[0][0x20] == 4) {
            uVar8 = FUN_016a92e0(local_48[9],0);
            *(undefined8 *)(local_40[0] + 0x24) = uVar8;
          }
          if ((byte)local_40[0][0x20] < 8) {
            bVar17 = ((int)CONCAT71((int7)((ulonglong)local_40[0] >> 8),1) <<
                      ((byte)local_40[0][0x20] & 0x1f) & 0x28U) != 0;
          }
          else {
            bVar17 = false;
          }
          if (bVar17) {
            local_48 = (longlong *)FUN_00409570((ulonglong)local_40[0][0x24] << 3);
            FUN_00409a70(*(undefined8 *)(local_40[0] + 0x28),local_48,
                         (ulonglong)local_40[0][0x24] << 3);
            *(longlong **)(local_40[0] + 0x28) = local_48;
          }
          if (*(longlong *)(local_40[0] + 0xc) != 0) {
            if ((byte)local_40[0][0x20] < 8) {
              bVar17 = ((int)CONCAT71((int7)((ulonglong)local_40[0] >> 8),1) <<
                        ((byte)local_40[0][0x20] & 0x1f) & 0xfcU) != 0;
            }
            else {
              bVar17 = false;
            }
            if (bVar17) {
              local_48 = (longlong *)FUN_00409570((ulonglong)local_40[0][8] << 3);
            }
            else {
              local_48 = (longlong *)FUN_00409570((ulonglong)local_40[0][8] << 3);
            }
            if (local_48 == (longlong *)0x0) {
              local_91 = '\0';
            }
            else {
              if ((byte)local_40[0][0x20] < 8) {
                bVar17 = ((int)CONCAT71((int7)((ulonglong)local_40[0] >> 8),1) <<
                          ((byte)local_40[0][0x20] & 0x1f) & 0xfcU) != 0;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                uVar11 = (uint)local_40[0][8];
                iVar13 = 0;
                if (-1 < (int)(uVar11 - 1)) {
                  do {
                    lVar10 = FUN_016a92e0(*(undefined8 *)
                                           (*(longlong *)(local_40[0] + 0xc) + (longlong)iVar13 * 8)
                                          ,1);
                    local_48[iVar13] = lVar10;
                    iVar13 = iVar13 + 1;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
              }
              else {
                FUN_00409a70(*(undefined8 *)(local_40[0] + 0xc),local_48,
                             (ulonglong)local_40[0][8] << 3);
              }
              *(longlong **)(local_40[0] + 0xc) = local_48;
            }
          }
        }
      }
      else if (bVar4 < 0x12) {
        if (bVar4 == 0x11) {
          FUN_01d36f50(param_2,local_88,local_40);
          FUN_01d36f50(param_1,local_88,&local_48);
          if (*local_48 == 0) {
            local_91 = '\0';
          }
          else {
            uVar8 = FUN_004b6930(&PTR_FUN_00478280,1);
            *(undefined8 *)local_40[0] = uVar8;
            (**(code **)(**(longlong **)local_40[0] + 0x10))(*(longlong **)local_40[0],*local_48);
          }
        }
        else if (bVar4 == 0xd) {
          FUN_01d36f50(param_2,local_88,&local_50);
          if (*(longlong *)(local_40[0] + 8) == 0) {
            *(undefined8 *)(local_50 + 0x10) = 0;
          }
          else {
            iVar13 = FUN_00414ce0(*(undefined8 *)(local_40[0] + 8));
            uVar8 = FUN_00409570(iVar13 + 1);
            *(undefined8 *)(local_50 + 0x10) = uVar8;
            uVar7 = FUN_00414ce0(*(undefined8 *)(local_40[0] + 8));
            FUN_00442450(*(undefined8 *)(local_50 + 0x10),*(undefined8 *)(local_40[0] + 8),uVar7);
          }
        }
        else if (bVar4 == 0xe) {
          uVar7 = CONCAT22(uVar15,2);
          uVar8 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,uVar7);
          uVar15 = (undefined2)((uint)uVar7 >> 0x10);
          FUN_01d3c090(uVar8,*(undefined8 *)(local_40[0] + 4));
          cVar5 = FUN_01d36f50(param_2,local_88,local_40);
          if (cVar5 == '\x0e') {
            *(undefined8 *)(local_40[0] + 4) = uVar8;
          }
          param_4 = CONCAT22(uVar15,2);
          uVar8 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,param_4);
          FUN_01d3c090(uVar8,*(undefined8 *)(local_40[0] + 8));
          cVar5 = FUN_01d36f50(param_2,local_88,local_40);
          if (cVar5 == '\x0e') {
            *(undefined8 *)(local_40[0] + 8) = uVar8;
          }
        }
        else if (bVar4 == 0xf) {
          param_4 = CONCAT22(uVar15,0x19);
          uVar8 = FUN_01d3c1c0(0,&PTR_FUN_01d35570,0x32,param_4);
          FUN_01d3c2d0(uVar8,*(undefined8 *)(local_40[0] + 8));
          cVar5 = FUN_01d36f50(param_2,local_88,local_40);
          if (cVar5 == '\x0f') {
            *(undefined8 *)(local_40[0] + 8) = uVar8;
          }
        }
      }
      else if (bVar4 == 0x12) {
        local_48 = (longlong *)FUN_004095c0((uint)*local_40[0] * 2);
        if (local_48 == (longlong *)0x0) {
          local_91 = '\0';
        }
        else {
          FUN_00409a70(*(undefined8 *)(local_40[0] + 4),local_48,(uint)*local_40[0] * 2);
          cVar5 = FUN_01d36f50(param_2,local_88,local_40);
          if (cVar5 == '\x12') {
            *(longlong **)(local_40[0] + 4) = local_48;
          }
        }
      }
      else if (bVar4 == 0x14) {
        local_48 = (longlong *)FUN_004095c0((longlong)(*(int *)local_40[0] * 4));
        if (local_48 == (longlong *)0x0) {
          local_91 = '\0';
        }
        else {
          FUN_00409a70(*(undefined8 *)(local_40[0] + 4),local_48,(longlong)(*(int *)local_40[0] * 4)
                      );
          cVar5 = FUN_01d36f50(param_2,local_88,local_40);
          if (cVar5 == '\x14') {
            *(longlong **)(local_40[0] + 4) = local_48;
          }
        }
      }
LAB_01d39605:
      local_88 = local_88 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  FUN_00414480(local_80);
  return local_91;
}

