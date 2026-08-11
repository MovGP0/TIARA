/* Ghidra address: 00a26600 */
/* Ghidra symbol: FUN_00a26600 */


undefined8 FUN_00a26600(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  char *local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  uint *local_80;
  int local_78;
  uint local_74;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  short *local_48;
  
  lVar8 = param_1[0x3e];
  local_b8 = *(char **)param_1[5];
  lStack_b0 = ((undefined8 *)param_1[5])[1];
  local_98 = *(undefined8 *)(lVar8 + 0x28);
  uVar4 = *(undefined8 *)(lVar8 + 0x18);
  uStack_a0 = *(undefined8 *)(lVar8 + 0x20);
  local_90 = param_1;
  local_a8 = uVar4;
  if (((int)param_1[0x23] != 0) && (*(int *)(lVar8 + 0x30) == 0)) {
    uVar2 = *(undefined4 *)(lVar8 + 0x34);
    local_a8._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
    if (0 < local_a8._4_4_) {
      local_a8._0_4_ = (uint)uVar4;
      local_a8._0_4_ = 0x7f << (0x11U - (char)((ulonglong)uVar4 >> 0x20) & 0x1f) | (uint)local_a8;
      local_a8._4_4_ = local_a8._4_4_ + 7;
      while( true ) {
        cVar11 = (char)((uint)local_a8 >> 0x10);
        *local_b8 = cVar11;
        lStack_b0 = lStack_b0 + -1;
        local_b8 = local_b8 + 1;
        if (lStack_b0 == 0) {
          puVar3 = (undefined8 *)local_90[5];
          iVar15 = (*(code *)puVar3[3])();
          if (iVar15 == 0) {
            return 0;
          }
          local_b8 = (char *)*puVar3;
          lStack_b0 = puVar3[1];
        }
        if (cVar11 == -1) {
          *local_b8 = '\0';
          lStack_b0 = lStack_b0 + -1;
          local_b8 = local_b8 + 1;
          if (lStack_b0 == 0) {
            puVar3 = (undefined8 *)local_90[5];
            iVar15 = (*(code *)puVar3[3])();
            if (iVar15 == 0) {
              return 0;
            }
            local_b8 = (char *)*puVar3;
            lStack_b0 = puVar3[1];
          }
        }
        if (local_a8._4_4_ < 0x10) break;
        local_a8._4_4_ = local_a8._4_4_ + -8;
        local_a8._0_4_ = (uint)local_a8 << 8;
      }
    }
    local_a8 = 0;
    pcVar9 = local_b8 + 1;
    *local_b8 = -1;
    lStack_b0 = lStack_b0 + -1;
    if (lStack_b0 == 0) {
      puVar3 = (undefined8 *)local_90[5];
      iVar15 = (*(code *)puVar3[3])();
      if (iVar15 == 0) {
        return 0;
      }
      pcVar9 = (char *)*puVar3;
      lStack_b0 = puVar3[1];
    }
    plVar5 = local_90;
    local_b8 = pcVar9 + 1;
    *pcVar9 = (char)uVar2 + -0x30;
    lStack_b0 = lStack_b0 + -1;
    if (lStack_b0 == 0) {
      puVar3 = (undefined8 *)local_90[5];
      iVar15 = (*(code *)puVar3[3])(local_90);
      if (iVar15 == 0) {
        return 0;
      }
      local_b8 = (char *)*puVar3;
      lStack_b0 = puVar3[1];
    }
    if (0 < *(int *)((longlong)plVar5 + 0x144)) {
      lVar10 = 0;
      do {
        *(undefined4 *)((longlong)&uStack_a0 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((longlong)plVar5 + 0x144));
    }
  }
  lVar10 = lStack_b0;
  local_60 = lVar8;
  if (0 < (int)param_1[0x2e]) {
    lVar12 = 0;
    local_68 = param_1;
    local_70 = param_2;
    do {
      local_58 = (longlong)*(int *)((longlong)local_68 + lVar12 * 4 + 0x174);
      local_48 = *(short **)(param_2 + lVar12 * 8);
      lVar8 = *(longlong *)
               (local_60 + 0x38 + (longlong)*(int *)(local_68[local_58 + 0x29] + 0x14) * 8);
      local_80 = *(uint **)(local_60 + 0x58 +
                           (longlong)*(int *)(local_68[local_58 + 0x29] + 0x18) * 8);
      iVar15 = (int)*local_48 - *(int *)((longlong)&uStack_a0 + local_58 * 4);
      uVar6 = iVar15 >> 0x1f;
      uVar16 = iVar15 + uVar6;
      uVar6 = uVar6 ^ uVar16;
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar13 == 0; uVar13 = uVar13 - 1) {
          }
        }
        uVar13 = (uVar13 ^ 0xffffffe0) + 0x21;
        if (0xb < uVar13) {
          puVar3 = (undefined8 *)*local_90;
          *(undefined4 *)(puVar3 + 5) = 6;
          (*(code *)*puVar3)();
        }
      }
      local_50 = lVar12;
      uVar6 = *(uint *)(lVar8 + (longlong)(int)uVar13 * 4);
      bVar1 = *(byte *)(lVar8 + 0x400 + (longlong)(int)uVar13);
      if (bVar1 == 0) {
        puVar3 = (undefined8 *)*local_90;
        *(undefined4 *)(puVar3 + 5) = 0x28;
        (*(code *)*puVar3)();
      }
      iVar15 = local_a8._4_4_ + (char)bVar1;
      uVar6 = ((1 << (bVar1 & 0x1f)) - 1U & uVar6) << (0x18U - (char)iVar15 & 0x1f) | (uint)local_a8
      ;
      if (7 < iVar15) {
        iVar7 = local_a8._4_4_ + 8 + (int)(char)bVar1;
        do {
          iVar15 = iVar7;
          cVar11 = (char)(uVar6 >> 0x10);
          *local_b8 = cVar11;
          lStack_b0 = lStack_b0 + -1;
          local_b8 = local_b8 + 1;
          if (lStack_b0 == 0) {
            puVar3 = (undefined8 *)local_90[5];
            iVar7 = (*(code *)puVar3[3])();
            if (iVar7 == 0) {
              return 0;
            }
            local_b8 = (char *)*puVar3;
            lStack_b0 = puVar3[1];
          }
          if (cVar11 == -1) {
            *local_b8 = '\0';
            lStack_b0 = lStack_b0 + -1;
            local_b8 = local_b8 + 1;
            if (lStack_b0 == 0) {
              puVar3 = (undefined8 *)local_90[5];
              iVar7 = (*(code *)puVar3[3])();
              if (iVar7 == 0) {
                return 0;
              }
              local_b8 = (char *)*puVar3;
              lStack_b0 = puVar3[1];
            }
          }
          uVar6 = uVar6 << 8;
          iVar7 = iVar15 + -8;
        } while (0xf < iVar7);
        iVar15 = iVar15 + -0x10;
        lVar10 = lStack_b0;
      }
      puVar18 = local_80;
      local_a8 = CONCAT44(iVar15,uVar6);
      if (uVar13 != 0) {
        iVar7 = iVar15 + uVar13;
        uVar6 = ((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar16) << (0x18U - (char)iVar7 & 0x1f) | uVar6
        ;
        if (7 < iVar7) {
          iVar15 = uVar13 + 8 + iVar15;
          do {
            iVar7 = iVar15;
            cVar11 = (char)(uVar6 >> 0x10);
            *local_b8 = cVar11;
            lStack_b0 = lStack_b0 + -1;
            local_b8 = local_b8 + 1;
            if (lStack_b0 == 0) {
              puVar3 = (undefined8 *)local_90[5];
              iVar15 = (*(code *)puVar3[3])();
              if (iVar15 == 0) {
                return 0;
              }
              local_b8 = (char *)*puVar3;
              lStack_b0 = puVar3[1];
            }
            if (cVar11 == -1) {
              *local_b8 = '\0';
              lStack_b0 = lStack_b0 + -1;
              local_b8 = local_b8 + 1;
              if (lStack_b0 == 0) {
                puVar3 = (undefined8 *)local_90[5];
                iVar15 = (*(code *)puVar3[3])();
                if (iVar15 == 0) {
                  return 0;
                }
                local_b8 = (char *)*puVar3;
                lStack_b0 = puVar3[1];
              }
            }
            uVar6 = uVar6 << 8;
            iVar15 = iVar7 + -8;
          } while (0xf < iVar15);
          lVar10 = lStack_b0;
          iVar7 = iVar7 + -0x10;
        }
        iVar15 = iVar7;
        local_a8 = CONCAT44(iVar15,uVar6);
      }
      iVar7 = 0;
      uVar14 = 1;
      do {
        if (local_48[(int)(&DAT_01e6fbe0)[uVar14]] == 0) {
          iVar7 = iVar7 + 1;
        }
        else {
          local_78 = (int)local_48[(int)(&DAT_01e6fbe0)[uVar14]];
          iVar19 = iVar7;
          if (0xf < iVar7) {
            do {
              uVar13 = puVar18[0xf0];
              bVar1 = (byte)puVar18[0x13c];
              if (bVar1 == 0) {
                puVar3 = (undefined8 *)*local_90;
                *(undefined4 *)(puVar3 + 5) = 0x28;
                (*(code *)*puVar3)();
              }
              iVar7 = iVar15 + (char)bVar1;
              uVar6 = uVar6 | ((1 << (bVar1 & 0x1f)) - 1U & uVar13) << (0x18U - (char)iVar7 & 0x1f);
              if (7 < iVar7) {
                iVar15 = iVar15 + 8 + (int)(char)bVar1;
                do {
                  iVar7 = iVar15;
                  cVar11 = (char)(uVar6 >> 0x10);
                  *local_b8 = cVar11;
                  lStack_b0 = lStack_b0 + -1;
                  local_b8 = local_b8 + 1;
                  if (lStack_b0 == 0) {
                    puVar3 = (undefined8 *)local_90[5];
                    iVar15 = (*(code *)puVar3[3])();
                    if (iVar15 == 0) {
                      return 0;
                    }
                    local_b8 = (char *)*puVar3;
                    lStack_b0 = puVar3[1];
                  }
                  if (cVar11 == -1) {
                    *local_b8 = '\0';
                    lStack_b0 = lStack_b0 + -1;
                    local_b8 = local_b8 + 1;
                    if (lStack_b0 == 0) {
                      puVar3 = (undefined8 *)local_90[5];
                      iVar15 = (*(code *)puVar3[3])();
                      if (iVar15 == 0) {
                        return 0;
                      }
                      local_b8 = (char *)*puVar3;
                      lStack_b0 = puVar3[1];
                    }
                  }
                  uVar6 = uVar6 << 8;
                  iVar15 = iVar7 + -8;
                } while (0xf < iVar15);
                lVar10 = lStack_b0;
                iVar7 = iVar7 + -0x10;
              }
              iVar15 = iVar7;
              iVar7 = iVar19 + -0x10;
              bVar20 = 0x1f < iVar19;
              iVar19 = iVar7;
            } while (bVar20);
          }
          iVar19 = -local_78;
          if (-1 < (short)local_78) {
            iVar19 = local_78;
          }
          uVar13 = iVar19 >> 1;
          if (uVar13 == 0) {
            local_74 = 0x20;
          }
          else {
            local_74 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> local_74 == 0; local_74 = local_74 - 1) {
              }
            }
            local_74 = local_74 ^ 0x1f;
          }
          iVar19 = 0x21 - local_74;
          if (9 < (int)(0x20 - local_74)) {
            puVar3 = (undefined8 *)*local_90;
            *(undefined4 *)(puVar3 + 5) = 6;
            (*(code *)*puVar3)();
          }
          lVar8 = (longlong)(iVar7 * 0x10 + iVar19);
          uVar13 = puVar18[lVar8];
          bVar1 = *(byte *)((longlong)puVar18 + lVar8 + 0x400);
          iVar7 = (int)(char)bVar1;
          if (iVar7 == 0) {
            puVar3 = (undefined8 *)*local_90;
            *(undefined4 *)(puVar3 + 5) = 0x28;
            (*(code *)*puVar3)();
          }
          iVar17 = iVar15 + iVar7;
          uVar6 = uVar6 | ((1 << (bVar1 & 0x1f)) - 1U & uVar13) << (0x18U - (char)iVar17 & 0x1f);
          if (7 < iVar17) {
            iVar15 = iVar15 + 8 + iVar7;
            do {
              iVar17 = iVar15;
              cVar11 = (char)(uVar6 >> 0x10);
              *local_b8 = cVar11;
              lStack_b0 = lStack_b0 + -1;
              local_b8 = local_b8 + 1;
              if (lStack_b0 == 0) {
                puVar3 = (undefined8 *)local_90[5];
                iVar15 = (*(code *)puVar3[3])();
                if (iVar15 == 0) {
                  return 0;
                }
                local_b8 = (char *)*puVar3;
                lStack_b0 = puVar3[1];
              }
              if (cVar11 == -1) {
                *local_b8 = '\0';
                lStack_b0 = lStack_b0 + -1;
                local_b8 = local_b8 + 1;
                if (lStack_b0 == 0) {
                  puVar3 = (undefined8 *)local_90[5];
                  iVar15 = (*(code *)puVar3[3])();
                  if (iVar15 == 0) {
                    return 0;
                  }
                  local_b8 = (char *)*puVar3;
                  lStack_b0 = puVar3[1];
                }
              }
              uVar6 = uVar6 << 8;
              iVar15 = iVar17 + -8;
            } while (0xf < iVar15);
            iVar17 = iVar17 + -0x10;
            lVar10 = lStack_b0;
          }
          uVar13 = (short)((short)local_78 >> 0xf) + local_78;
          if (iVar19 == 0) {
            puVar3 = (undefined8 *)*local_90;
            *(undefined4 *)(puVar3 + 5) = 0x28;
            (*(code *)*puVar3)();
          }
          iVar15 = iVar19 + iVar17;
          uVar6 = uVar6 | ((1 << ((byte)iVar19 & 0x1f)) - 1U & uVar13) <<
                          (0x18U - (char)iVar15 & 0x1f);
          if (7 < iVar15) {
            iVar7 = (iVar17 + 0x29) - local_74;
            do {
              iVar15 = iVar7;
              cVar11 = (char)(uVar6 >> 0x10);
              *local_b8 = cVar11;
              lStack_b0 = lStack_b0 + -1;
              local_b8 = local_b8 + 1;
              if (lStack_b0 == 0) {
                puVar3 = (undefined8 *)local_90[5];
                iVar7 = (*(code *)puVar3[3])();
                if (iVar7 == 0) {
                  return 0;
                }
                local_b8 = (char *)*puVar3;
                lStack_b0 = puVar3[1];
              }
              if (cVar11 == -1) {
                *local_b8 = '\0';
                lStack_b0 = lStack_b0 + -1;
                local_b8 = local_b8 + 1;
                if (lStack_b0 == 0) {
                  puVar3 = (undefined8 *)local_90[5];
                  iVar7 = (*(code *)puVar3[3])();
                  if (iVar7 == 0) {
                    return 0;
                  }
                  local_b8 = (char *)*puVar3;
                  lStack_b0 = puVar3[1];
                }
              }
              uVar6 = uVar6 << 8;
              iVar7 = iVar15 + -8;
            } while (0xf < iVar7);
            iVar15 = iVar15 + -0x10;
            lVar10 = lStack_b0;
          }
          local_a8 = CONCAT44(iVar15,uVar6);
          iVar7 = 0;
          puVar18 = local_80;
        }
        bVar20 = uVar14 < 0x3f;
        uVar14 = uVar14 + 1;
      } while (bVar20);
      param_2 = local_70;
      if (0 < iVar7) {
        uVar13 = *puVar18;
        bVar1 = (byte)puVar18[0x100];
        if (bVar1 == 0) {
          puVar3 = (undefined8 *)*local_90;
          *(undefined4 *)(puVar3 + 5) = 0x28;
          (*(code *)*puVar3)();
        }
        param_2 = local_70;
        iVar7 = iVar15 + (char)bVar1;
        uVar6 = uVar6 | ((1 << (bVar1 & 0x1f)) - 1U & uVar13) << (0x18U - (char)iVar7 & 0x1f);
        if (7 < iVar7) {
          iVar15 = (char)bVar1 + 8 + iVar15;
          do {
            iVar7 = iVar15;
            cVar11 = (char)(uVar6 >> 0x10);
            *local_b8 = cVar11;
            lStack_b0 = lStack_b0 + -1;
            local_b8 = local_b8 + 1;
            if (lStack_b0 == 0) {
              puVar3 = (undefined8 *)local_90[5];
              iVar15 = (*(code *)puVar3[3])();
              if (iVar15 == 0) {
                return 0;
              }
              local_b8 = (char *)*puVar3;
              lStack_b0 = puVar3[1];
            }
            if (cVar11 == -1) {
              *local_b8 = '\0';
              lStack_b0 = lStack_b0 + -1;
              local_b8 = local_b8 + 1;
              if (lStack_b0 == 0) {
                puVar3 = (undefined8 *)local_90[5];
                iVar15 = (*(code *)puVar3[3])();
                if (iVar15 == 0) {
                  return 0;
                }
                local_b8 = (char *)*puVar3;
                lStack_b0 = puVar3[1];
              }
            }
            uVar6 = uVar6 << 8;
            iVar15 = iVar7 + -8;
          } while (0xf < iVar15);
          iVar7 = iVar7 + -0x10;
          lVar10 = lStack_b0;
        }
        local_a8 = CONCAT44(iVar7,uVar6);
      }
      lVar12 = local_50;
      *(int *)((longlong)&uStack_a0 + local_58 * 4) = (int)**(short **)(param_2 + local_50 * 8);
      lVar12 = lVar12 + 1;
      param_1 = local_68;
    } while (lVar12 < (int)local_68[0x2e]);
  }
  puVar3 = (undefined8 *)param_1[5];
  *puVar3 = local_b8;
  puVar3[1] = lVar10;
  *(undefined8 *)(local_60 + 0x28) = local_98;
  *(undefined8 *)(local_60 + 0x18) = local_a8;
  *(undefined8 *)(local_60 + 0x20) = uStack_a0;
  iVar15 = (int)param_1[0x23];
  if (iVar15 != 0) {
    iVar7 = *(int *)(local_60 + 0x30);
    if (*(int *)(local_60 + 0x30) == 0) {
      *(int *)(local_60 + 0x30) = iVar15;
      *(uint *)(local_60 + 0x34) = *(int *)(local_60 + 0x34) + 1U & 7;
      iVar7 = iVar15;
    }
    *(int *)(local_60 + 0x30) = iVar7 + -1;
  }
  return 1;
}

