/* Ghidra address: 00aae210 */
/* Ghidra symbol: FUN_00aae210 */


void FUN_00aae210(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  undefined7 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  int local_98;
  int local_90;
  undefined8 local_88;
  uint local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40 [4];
  int local_30;
  int local_2c [3];
  
  local_50 = 0;
  local_58 = param_1 + 0x100;
  bVar2 = 0;
  do {
    *(undefined4 *)(local_58 + (ulonglong)bVar2 * 4) = 0;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 4);
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    local_78 = 0;
  }
  else {
    local_78 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x10);
  }
  local_60 = 0;
  iVar10 = *(int *)(param_1 + 0x128);
  local_7c = 0;
  local_88 = param_2;
  if (-1 < iVar10 + -1) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)local_7c * 4) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)(int)local_7c * 4) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + (longlong)(int)local_7c * 4) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + (longlong)(int)local_7c * 4) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)local_7c) = 0;
      if ((int)local_7c < local_78) {
        lVar4 = FUN_00ac4a70(*(undefined8 *)(param_1 + 0xd8),local_7c);
        piVar13 = (int *)(lVar4 + 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)local_7c) =
             *(undefined1 *)(lVar4 + 0xc);
        piVar1 = (int *)(param_1 + 0x100 + (ulonglong)*(byte *)(lVar4 + 0xc) * 4);
        *piVar1 = *piVar1 + 1;
        cVar7 = *(char *)(lVar4 + 0xc);
        if (cVar7 == '\x01') {
          *(int *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)local_7c * 4) = *piVar13;
          *(int *)(*(longlong *)(param_1 + 0xf0) + (longlong)(int)local_7c * 4) = *piVar13;
        }
        else if (cVar7 == '\x02') {
          *(int *)(*(longlong *)(param_1 + 0xe0) + (longlong)(int)local_7c * 4) = *piVar13;
        }
        else if ((cVar7 == '\x03') &&
                (*(int *)(*(longlong *)(param_1 + 0xe8) + (longlong)(int)local_7c * 4) = *piVar13,
                0 < *piVar13)) {
          local_60 = local_60 + 1;
        }
      }
      local_7c = local_7c + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  local_74 = 1;
  local_64 = 1;
  FUN_00419260(&local_50,&DAT_00a8b940,1,(longlong)*(int *)(*(longlong *)(param_1 + 0x168) + 0x10));
  iVar10 = 0;
  if (local_50 != 0) {
    iVar10 = (int)*(undefined8 *)(local_50 + -8);
  }
  iVar3 = 0;
  if (iVar10 - 1U < 0x80000000) {
    do {
      *(int *)(local_50 + (longlong)iVar3 * 4) = local_64;
      iVar3 = iVar3 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  do {
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x168) + 0x10);
    local_5c = iVar10 + -1;
    local_78 = 0;
    if (-1 < local_5c) {
      do {
        local_5c = iVar10;
        if (local_74 <= *(int *)(local_50 + (longlong)local_78 * 4)) {
          local_70 = FUN_00ac4a60(*(undefined8 *)(param_1 + 0x168),local_78);
          iVar10 = *(int *)(local_70 + 0x10) - local_74;
          local_7c = 0;
          if (-1 < iVar10) {
            iVar10 = iVar10 + 1;
            do {
              puVar5 = (undefined8 *)FUN_004aeac0(local_70,local_7c);
              if (puVar5 != (undefined8 *)0x0) {
                if (*(int *)(puVar5 + 1) == local_74) {
                  plVar6 = (longlong *)(**(code **)*puVar5)(puVar5);
                  local_a8 = 0;
                  local_a0 = 0;
                  (**(code **)(*plVar6 + 0x48))(plVar6,local_88,local_2c,&local_44);
                  iVar14 = 0;
                  iVar3 = 0;
                  piVar13 = (int *)(puVar5 + 3);
                  cVar7 = *(char *)((longlong)puVar5 + 0x1c);
                  iVar11 = iVar14;
                  if (cVar7 == '\x01') {
                    local_44 = local_2c[0];
                    if (local_2c[0] < *piVar13) {
                      local_44 = *piVar13;
                    }
                  }
                  else if (cVar7 == '\x02') {
                    iVar11 = *piVar13;
                  }
                  else {
                    iVar11 = 0;
                    iVar3 = 0;
                    if (cVar7 == '\x03') {
                      iVar3 = *piVar13;
                      iVar11 = iVar14;
                    }
                  }
                  local_2c[0] = local_2c[0] + *(int *)(param_1 + 0x138) + *(int *)(puVar5 + 2);
                  local_44 = local_44 + *(int *)(param_1 + 0x138) + *(int *)(puVar5 + 2);
                  if (local_74 == 1) {
                    lVar4 = (longlong)(int)local_7c;
                    iVar14 = *(int *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 4);
                    if (iVar14 <= local_2c[0]) {
                      iVar14 = local_2c[0];
                    }
                    *(int *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 4) = iVar14;
                    iVar14 = *(int *)(*(longlong *)(param_1 + 0xf0) + lVar4 * 4);
                    if (iVar14 <= local_44) {
                      iVar14 = local_44;
                    }
                    *(int *)(*(longlong *)(param_1 + 0xf0) + lVar4 * 4) = iVar14;
                    iVar14 = *(int *)(*(longlong *)(param_1 + 0xe0) + lVar4 * 4);
                    if (iVar11 < iVar14) {
                      iVar11 = iVar14;
                    }
                    *(int *)(*(longlong *)(param_1 + 0xe0) + lVar4 * 4) = iVar11;
                    iVar11 = *(int *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 4);
                    if (iVar11 <= iVar3) {
                      iVar11 = iVar3;
                    }
                    *(int *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 4) = iVar11;
                    FUN_00aad9a0(auStack_c8,param_1 + 0x100,*(longlong *)(param_1 + 0x110) + lVar4,
                                 cVar7);
                  }
                  else {
                    iVar3 = local_7c + local_74 + -1;
                    local_30 = 0;
                    if ((int)local_7c <= iVar3) {
                      iVar14 = (iVar3 - local_7c) + 1;
                      uVar12 = local_7c;
                      do {
                        local_30 = local_30 +
                                   *(int *)(*(longlong *)(param_1 + 0xf8) +
                                           (longlong)(int)uVar12 * 4);
                        uVar12 = uVar12 + 1;
                        iVar14 = iVar14 + -1;
                      } while (iVar14 != 0);
                    }
                    local_48 = 0;
                    if ((int)local_7c <= iVar3) {
                      iVar14 = (iVar3 - local_7c) + 1;
                      uVar12 = local_7c;
                      do {
                        local_48 = local_48 +
                                   *(int *)(*(longlong *)(param_1 + 0xf0) +
                                           (longlong)(int)uVar12 * 4);
                        uVar12 = uVar12 + 1;
                        iVar14 = iVar14 + -1;
                      } while (iVar14 != 0);
                    }
                    if ((local_30 < local_2c[0]) || (local_48 < local_44)) {
                      lVar4 = *(longlong *)(param_1 + 0x110);
                      cVar7 = '\0';
                      piVar13 = local_40;
                      do {
                        *piVar13 = 0;
                        cVar7 = cVar7 + '\x01';
                        piVar13 = piVar13 + 1;
                      } while (cVar7 != '\x04');
                      uVar8 = (ulonglong)local_7c;
                      if ((int)local_7c <= iVar3) {
                        iVar14 = (iVar3 - local_7c) + 1;
                        do {
                          local_40[*(byte *)(lVar4 + (int)uVar8)] =
                               local_40[*(byte *)(lVar4 + (int)uVar8)] + 1;
                          uVar8 = (ulonglong)((int)uVar8 + 1);
                          iVar14 = iVar14 + -1;
                        } while (iVar14 != 0);
                      }
                      if (iVar11 < 1) {
LAB_00aae91c:
                        if (local_40[0] < 1) {
                          if (local_40[3] < 1) {
                            uVar9 = (undefined7)(uVar8 >> 8);
                            if (local_40[2] < 1) {
                              FUN_00aadc00(auStack_c8,CONCAT71(uVar9,1),local_7c,iVar3);
                            }
                            else if (local_30 < local_48) {
                              FUN_00aaddf0(auStack_c8,CONCAT71(uVar9,2),local_7c,iVar3);
                            }
                            else {
                              iVar11 = 0;
                              uVar8 = (ulonglong)local_7c;
                              if ((int)local_7c <= iVar3) {
                                iVar14 = (iVar3 - local_7c) + 1;
                                do {
                                  iVar15 = (int)uVar8;
                                  if (*(char *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar15)
                                      == '\x02') {
                                    iVar11 = iVar11 + *(int *)(*(longlong *)(param_1 + 0xe0) +
                                                              (longlong)iVar15 * 4);
                                  }
                                  uVar8 = (ulonglong)(iVar15 + 1);
                                  iVar14 = iVar14 + -1;
                                } while (iVar14 != 0);
                              }
                              if (iVar11 < 1) {
                                FUN_00aadc00(auStack_c8,CONCAT71((int7)(uVar8 >> 8),2),local_7c,
                                             iVar3);
                              }
                              else {
                                if (local_30 < local_2c[0]) {
                                  local_a8 = local_2c[0];
                                  local_a0 = local_30;
                                  local_90 = local_40[2];
                                  local_98 = iVar11;
                                  FUN_00aad430(param_1,param_1 + 0xf8,local_7c,iVar3);
                                }
                                if (local_48 < local_44) {
                                  local_a8 = local_44;
                                  local_a0 = local_48;
                                  local_90 = local_40[2];
                                  local_98 = iVar11;
                                  FUN_00aad430(param_1,param_1 + 0xf0,local_7c,iVar3);
                                }
                              }
                            }
                          }
                          else {
                            iVar11 = 0;
                            uVar8 = (ulonglong)local_7c;
                            if ((int)local_7c <= iVar3) {
                              iVar14 = (iVar3 - local_7c) + 1;
                              do {
                                iVar15 = (int)uVar8;
                                if (*(char *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar15) ==
                                    '\x03') {
                                  iVar11 = iVar11 + *(int *)(*(longlong *)(param_1 + 0xe8) +
                                                            (longlong)iVar15 * 4);
                                }
                                uVar8 = (ulonglong)(iVar15 + 1);
                                iVar14 = iVar14 + -1;
                              } while (iVar14 != 0);
                            }
                            if (iVar11 < 1) {
                              uVar9 = (undefined7)(uVar8 >> 8);
                              if (local_30 < local_48) {
                                FUN_00aaddf0(auStack_c8,CONCAT71(uVar9,3),local_7c,iVar3);
                              }
                              else {
                                FUN_00aadc00(auStack_c8,CONCAT71(uVar9,3),local_7c,iVar3);
                              }
                            }
                            else {
                              if (local_30 < local_2c[0]) {
                                local_a8 = local_2c[0];
                                local_98 = CONCAT31(local_98._1_3_,1);
                                local_a0 = iVar11;
                                FUN_00aad6f0(param_1,param_1 + 0xf8,local_7c,iVar3);
                              }
                              if (local_48 < local_44) {
                                local_a8 = local_44;
                                local_98 = CONCAT31(local_98._1_3_,1);
                                local_a0 = iVar11;
                                FUN_00aad6f0(param_1,param_1 + 0xf0,local_7c,iVar3);
                              }
                            }
                          }
                        }
                        else {
                          FUN_00aadc00(auStack_c8,0,local_7c,iVar3);
                        }
                      }
                      else {
                        uVar8 = *(ulonglong *)(param_1 + 0xe0);
                        iVar14 = 0;
                        if ((int)local_7c <= iVar3) {
                          iVar15 = (iVar3 - local_7c) + 1;
                          uVar12 = local_7c;
                          do {
                            if (*(char *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)uVar12) ==
                                '\x02') {
                              iVar14 = iVar14 + *(int *)(uVar8 + (longlong)(int)uVar12 * 4);
                            }
                            uVar12 = uVar12 + 1;
                            iVar15 = iVar15 + -1;
                          } while (iVar15 != 0);
                        }
                        if (iVar14 <= iVar11) {
                          if (local_40[0] < 1) goto LAB_00aae91c;
                          local_a0 = iVar11 - iVar14;
                          local_98 = 0;
                          local_90 = local_40[0];
                          local_a8 = iVar3;
                          FUN_00aad8f0(param_1,0,param_1 + 0xe0,local_7c);
                          if ((int)local_7c <= iVar3) {
                            iVar3 = (iVar3 - local_7c) + 1;
                            uVar12 = local_7c;
                            do {
                              *(undefined1 *)
                               (*(longlong *)(param_1 + 0x110) + (longlong)(int)uVar12) = 2;
                              uVar12 = uVar12 + 1;
                              iVar3 = iVar3 + -1;
                            } while (iVar3 != 0);
                          }
                        }
                      }
                    }
                  }
                }
                else if (((local_74 == 1) &&
                         (*(int *)(local_50 + (longlong)local_78 * 4) < *(int *)(puVar5 + 1))) &&
                        (*(undefined4 *)(local_50 + (longlong)local_78 * 4) =
                              *(undefined4 *)(puVar5 + 1),
                        local_64 < *(int *)(local_50 + (longlong)local_78 * 4))) {
                  local_64 = *(int *)(local_50 + (longlong)local_78 * 4);
                }
              }
              local_7c = local_7c + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        local_78 = local_78 + 1;
        local_5c = local_5c + -1;
        iVar10 = local_5c;
      } while (local_5c != 0);
    }
    local_74 = local_74 + 1;
    if (local_64 < local_74) {
      if (0 < local_60) {
        local_a8 = *(int *)(param_1 + 0x128) + -1;
        FUN_00aada50(auStack_c8,param_1 + 0xf8,*(undefined8 *)(param_1 + 0x110),0);
        local_a8 = *(int *)(param_1 + 0x128) + -1;
        FUN_00aada50(auStack_c8,param_1 + 0xf0,*(undefined8 *)(param_1 + 0x110),0);
      }
      FUN_00419430(&local_50,&DAT_00a8b940);
      return;
    }
  } while( true );
}

