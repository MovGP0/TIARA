/* Ghidra address: 00e91910 */
/* Ghidra symbol: FUN_00e91910 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00e91910(int *param_1,uint *param_2,ushort *param_3,int param_4,int param_5,uint param_6,
                undefined4 *param_7,uint param_8)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  ushort *puVar27;
  undefined4 *puVar28;
  ushort uVar29;
  undefined *puVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 in_stack_fffffffffffffdf8 [16];
  ushort local_1e4;
  ushort local_1c8;
  longlong local_1c0;
  longlong local_1b0;
  longlong local_1a8;
  ushort *local_198;
  ushort *local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 *local_158;
  uint local_150;
  int local_14c;
  undefined8 local_148;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  undefined4 local_128;
  undefined *local_120;
  undefined *local_118;
  longlong lStack_110;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  longlong local_d8;
  ushort *local_d0;
  ushort *local_c8;
  ushort *local_c0;
  longlong local_b8;
  ushort *local_b0;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ushort *local_58;
  longlong local_50;
  ulonglong local_48;
  
  if ((((param_1 == (int *)0x0) && (param_2 == (uint *)0x0)) && (param_3 == (ushort *)0x0)) &&
     ((param_4 == -999 && (param_5 == -999)))) {
    iVar12 = FUN_00e92bf0(0,0,0,0,(undefined1  [16])0x0,0);
    return iVar12;
  }
  if ((param_6 & 0xe20f5a6f) != 0) {
    return -3;
  }
  if (param_1 == (int *)0x0) {
    return -2;
  }
  if (param_3 == (ushort *)0x0) {
    return -2;
  }
  if ((param_7 == (undefined4 *)0x0) && (0 < (int)param_8)) {
    return -2;
  }
  if ((int)param_8 < 0) {
    return -0xf;
  }
  if (param_4 < 0) {
    return -0x20;
  }
  if (param_5 < 0) {
    return -0x18;
  }
  if (param_4 < param_5) {
    return -0x18;
  }
  if (*param_1 != 0x50435245) {
    if (*param_1 != 0x45524350) {
      return -4;
    }
    return -0x1d;
  }
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
    return -0x1c;
  }
  local_50 = (longlong)param_5;
  puVar1 = param_3 + local_50;
  uVar17 = param_1[2] & 0x800;
  uVar18 = uVar17 >> 0xb;
  local_a8 = 2;
  if ((param_6 & 0x8000000) == 0) {
    local_a8 = param_6 >> 0xf & 1;
  }
  local_100 = uVar18;
  if (((param_6 & 0x2000) == 0) && (uVar17 != 0)) {
    iVar12 = FUN_00ea1420(param_3,param_4,&local_16c);
    if (iVar12 != 0) {
      if (1 < (int)param_8) {
        *param_7 = local_16c;
        param_7[1] = iVar12;
      }
      iVar15 = -0x19;
      if ((int)local_a8 < 2) {
        iVar15 = -10;
      }
      if (iVar12 < 2) {
        return iVar15;
      }
      return -10;
    }
    if (((0 < param_5) && (param_5 < param_4)) && ((*puVar1 & 0xfc00) == 0xdc00)) {
      return -0xb;
    }
  }
  local_130 = (longlong)param_1 + (ulonglong)*(ushort *)((longlong)param_1 + 0x22) * 2;
  local_140 = (uint)*(ushort *)((longlong)param_1 + 0x26);
  local_13c = (uint)*(ushort *)(param_1 + 9);
  local_164 = 0x98968000989680;
  local_78 = 0;
  puVar30 = *(undefined **)(param_1 + 0xc);
  if (param_2 == (uint *)0x0) {
    uVar14 = 10000000;
    local_1a8 = 0;
    uVar13 = 10000000;
  }
  else {
    uVar5 = *param_2;
    if ((uVar5 & 1) == 0) {
      local_1a8 = 0;
    }
    else {
      local_1a8 = *(longlong *)(param_2 + 2);
    }
    uVar14 = 10000000;
    uVar13 = 10000000;
    if ((uVar5 & 2) != 0) {
      uVar13 = param_2[4];
      local_164 = CONCAT44(10000000,uVar13);
    }
    if ((uVar5 & 0x10) != 0) {
      uVar14 = param_2[10];
      local_164 = CONCAT44(uVar14,(undefined4)local_164);
    }
    if ((uVar5 & 4) != 0) {
      local_78 = *(undefined8 *)(param_2 + 6);
    }
    if ((uVar5 & 8) != 0) {
      puVar30 = *(undefined **)(param_2 + 8);
    }
  }
  uVar5 = param_1[3];
  if (((uVar5 & 0x2000) != 0) && ((uint)param_1[4] < uVar13)) {
    local_164 = CONCAT44(local_164._4_4_,param_1[4]);
  }
  if (((uVar5 & 0x4000) != 0) && ((uint)param_1[5] < uVar14)) {
    local_164 = CONCAT44(param_1[5],(undefined4)local_164);
  }
  local_120 = &DAT_01ef3ce0;
  if (puVar30 != (undefined *)0x0) {
    local_120 = puVar30;
  }
  uVar13 = param_1[2];
  local_d8 = local_130 +
             (ulonglong)*(ushort *)(param_1 + 9) * (ulonglong)*(ushort *)((longlong)param_1 + 0x26)
             * 2;
  local_9c = param_5;
  puVar2 = param_3 + param_4;
  local_f4 = uVar13 >> 5 & 1;
  local_f8 = uVar13 >> 0x1d & 1;
  local_fc = uVar13 >> 0x19 & 1;
  local_134 = 0;
  local_108 = param_6 >> 7 & 1;
  local_104 = param_6 >> 8 & 1;
  local_f0 = param_6 >> 10 & 1;
  local_ec = param_6 >> 0x1c & 1;
  local_e8 = 0;
  local_80 = 0;
  local_e0 = uVar5 >> 0xc & 1;
  local_70 = 0;
  uStack_68 = 0;
  auVar32._8_4_ = (int)local_120;
  auVar32._0_8_ = local_120;
  auVar32._12_4_ = (int)((ulonglong)local_120 >> 0x20);
  local_118 = local_120 + _DAT_01ee13c0;
  lStack_110 = auVar32._8_8_ + lRam0000000001ee13c8;
  uVar14 = param_6 & 0x1800000;
  iVar12 = -0x17;
  if (uVar14 == 0x1000000) {
LAB_00e91d3b:
    local_e4 = 0;
  }
  else if (uVar14 == 0x800000) {
    local_e4 = 1;
  }
  else {
    if (uVar14 != 0) {
      return -0x17;
    }
    if ((uVar13 & 0x1800000) == 0) goto LAB_00e91d3b;
    local_e4 = uVar13 >> 0x17 & 1;
  }
  uVar14 = param_6;
  if ((param_6 & 0x700000) == 0) {
    uVar14 = uVar13;
  }
  uVar11 = 10;
  switch(uVar14 >> 0x14 & 7) {
  case 1:
    uVar11 = 0xd;
  case 0:
  case 2:
    local_148 = 0x100000000;
    local_128 = CONCAT22(local_128._2_2_,uVar11);
    break;
  case 3:
    local_148 = 0x200000000;
    local_128 = 0xa000d;
    break;
  case 4:
    local_148 = CONCAT44(local_148._4_4_,1);
    break;
  case 5:
    local_148 = CONCAT44(local_148._4_4_,2);
    break;
  default:
    goto switchD_00e91dc5_default;
  }
  if (((uVar5 & 0x200) != 0) && (iVar12 = -0xd, local_a8 != 0)) {
switchD_00e91dc5_default:
    return iVar12;
  }
  local_150 = (param_8 / 3) * 3;
  uVar25 = (ulonglong)local_150;
  uVar3 = *(ushort *)(param_1 + 8);
  local_d0 = param_3;
  local_c8 = puVar2;
  if ((uVar3 == 0) || ((uint)uVar3 < param_8 / 3)) {
    bVar9 = false;
    local_158 = param_7;
  }
  else {
    local_158 = (undefined4 *)(*(code *)PTR_FUN_01edf908)((ulonglong)uVar3 * 0xc + 0xc);
    if (local_158 == (undefined4 *)0x0) {
      return -6;
    }
    local_150 = (uint)uVar3 * 3 + 3;
    bVar9 = true;
  }
  uVar14 = (uVar13 | param_6) & 0x10;
  local_14c = (int)(local_150 * 2) / 3;
  local_a0 = 0;
  if (local_158 != (undefined4 *)0x0) {
    puVar28 = local_158 + (longlong)(int)local_150 + -1;
    lVar26 = (longlong)(int)local_150 - (ulonglong)*(ushort *)((longlong)param_1 + 0x1e);
    puVar21 = local_158 + 2;
    if (1 < lVar26) {
      puVar21 = local_158 + lVar26;
    }
    for (; puVar21 <= puVar28; puVar28 = puVar28 + -1) {
      *puVar28 = 0xffffffff;
    }
    if ((0 < (int)param_8) && (*local_158 = 0xffffffff, param_8 != 1)) {
      local_158[1] = 0xffffffff;
    }
  }
  iVar12 = (int)((param_8 / 3) * 6) / 3;
  uVar19 = param_1[3];
  if (uVar14 == 0) {
    if ((uVar19 & 0x10) == 0) {
      if ((local_1a8 == 0) || ((uVar5 & 0x100) != 0)) {
        uVar3 = 0;
        local_1b0 = 0;
        local_1c0 = 0;
        uVar29 = 0;
      }
      else {
        local_1c0 = 0;
        if ((*(byte *)(local_1a8 + 4) & 1) != 0) {
          local_1c0 = local_1a8 + 8;
        }
        uVar3 = 0;
        local_1b0 = 0;
        uVar29 = uVar3;
      }
      goto joined_r0x00e921ee;
    }
    uVar3 = *(ushort *)(param_1 + 6);
    local_1b0 = 1;
    if ((uVar19 & 0x20) != 0) {
      uVar29 = uVar3;
      if (uVar3 < 0x100) {
        uVar29 = (ushort)(byte)local_118[uVar3];
      }
      if ((uVar17 != 0) && (0x7f < uVar3)) {
        uVar29 = uVar3 + (short)*(undefined4 *)
                                 (&DAT_01ee2144 +
                                 (ulonglong)
                                 *(ushort *)
                                  (&DAT_01ee59c0 +
                                  ((ulonglong)(uVar3 & 0x7f) |
                                  (ulonglong)(byte)(&DAT_01ee37c0)[uVar3 >> 7] << 7) * 2) * 8);
      }
      local_1c0 = 0;
      goto joined_r0x00e921ee;
    }
  }
  else {
    uVar3 = 0;
    local_1b0 = 0;
  }
  local_1c0 = 0;
  uVar29 = uVar3;
joined_r0x00e921ee:
  if ((uVar19 & 0x40) == 0) {
    bVar8 = true;
    local_1c8 = 0;
    local_1e4 = 0;
  }
  else {
    local_1c8 = *(ushort *)((longlong)param_1 + 0x1a);
    local_1e4 = local_1c8;
    if ((char)uVar19 < '\0') {
      if (local_1c8 < 0x100) {
        local_1e4 = (ushort)(byte)local_118[local_1c8];
      }
      if ((uVar17 != 0) && (0x7f < local_1c8)) {
        local_1e4 = local_1c8 +
                    (short)*(undefined4 *)
                            (&DAT_01ee2144 +
                            (ulonglong)
                            *(ushort *)
                             (&DAT_01ee59c0 +
                             ((ulonglong)(local_1c8 & 0x7f) |
                             (ulonglong)(byte)(&DAT_01ee37c0)[local_1c8 >> 7] << 7) * 2) * 8);
      }
      bVar8 = false;
    }
    else {
      bVar8 = false;
    }
  }
  local_58 = param_3 + local_50 + -1;
  local_178 = (ushort *)0x0;
  local_198 = (ushort *)0x0;
  puVar23 = puVar1;
  local_48 = uVar25;
  do {
    puVar16 = puVar2;
    if ((uVar13 & 0x40000) != 0) {
      puVar16 = puVar23;
      if (uVar17 == 0) {
        puVar22 = local_c8;
        if (puVar23 < local_c8) {
          do {
            if ((int)local_148 == 0) {
              if (((puVar16 <= puVar22 + -(longlong)local_148._4_4_) &&
                  (*puVar16 == (ushort)local_128)) &&
                 ((local_148._4_4_ == 1 || (puVar16[1] == local_128._2_2_)))) break;
            }
            else {
              auVar6._12_4_ = 0;
              auVar6._0_12_ = in_stack_fffffffffffffdf8._4_12_;
              in_stack_fffffffffffffdf8 = auVar6 << 0x20;
              iVar15 = FUN_00ea10c0(puVar16,local_148 & 0xffffffff,puVar22,(longlong)&local_148 + 4,
                                    in_stack_fffffffffffffdf8);
              puVar22 = local_c8;
              if (iVar15 != 0) break;
            }
            puVar16 = puVar16 + 1;
          } while (puVar16 < puVar22);
        }
      }
      else {
        puVar22 = puVar23;
        if (puVar23 < local_c8) {
          do {
            puVar16 = puVar22;
            if ((int)local_148 == 0) {
              if (((puVar22 <= local_c8 + -(longlong)local_148._4_4_) &&
                  (*puVar22 == (ushort)local_128)) &&
                 ((local_148._4_4_ == 1 || (puVar22[1] == local_128._2_2_)))) break;
            }
            else {
              in_stack_fffffffffffffdf8._0_4_ = uVar18;
              iVar15 = FUN_00ea10c0(puVar22,local_148 & 0xffffffff,local_c8,(longlong)&local_148 + 4
                                    ,in_stack_fffffffffffffdf8);
              if (iVar15 != 0) break;
            }
            puVar16 = puVar22 + 1;
            if ((puVar16 < puVar2) && ((puVar22[1] & 0xfc00) == 0xdc00)) {
              puVar16 = puVar22 + 2;
            }
            puVar22 = puVar16;
          } while (puVar16 < local_c8);
        }
      }
    }
    if (((param_1[2] | param_6) & 0x4000000) == 0) {
      if ((int)local_1b0 == 0) {
        if ((uVar5 & 0x100) == 0) {
          if (local_1c0 != 0) {
            for (; puVar23 < puVar16; puVar23 = puVar23 + 1) {
              uVar19 = (uint)*puVar23;
              if (0xfe < *puVar23) {
                uVar19 = 0xff;
              }
              if ((1 << ((byte)uVar19 & 7) & (uint)*(byte *)(local_1c0 + (ulonglong)(uVar19 >> 3)))
                  != 0) break;
            }
          }
        }
        else if (local_d0 + local_50 < puVar23) {
          puVar22 = puVar23;
          uVar25 = local_148;
          uVar10 = local_128;
          if (uVar17 == 0) {
            while (puVar24 = puVar23, local_148 = uVar25, local_128 = uVar10, puVar22 < puVar16) {
              puVar27 = puVar22 + 1;
              local_148._0_4_ = (int)uVar25;
              if ((int)local_148 == 0) {
                local_148._4_4_ = (int)(uVar25 >> 0x20);
                lVar26 = (longlong)local_148._4_4_;
                if (local_d0 + lVar26 <= puVar22) {
                  local_128._0_2_ = (ushort)uVar10;
                  bVar31 = (puVar27 + -lVar26)[-1] == (ushort)local_128;
                  if ((bVar31) &&
                     ((bVar31 = local_148._4_4_ == 1, bVar31 ||
                      (local_128._2_2_ = (ushort)((uint)uVar10 >> 0x10),
                      bVar31 = puVar27[-lVar26] == local_128._2_2_, bVar31)))) break;
                }
              }
              else if (local_d0 < puVar22) {
                auVar7._12_4_ = 0;
                auVar7._0_12_ = in_stack_fffffffffffffdf8._4_12_;
                in_stack_fffffffffffffdf8 = auVar7 << 0x20;
                iVar15 = FUN_00ea11a0(puVar22,uVar25 & 0xffffffff,local_d0,(longlong)&local_148 + 4,
                                      in_stack_fffffffffffffdf8);
                puVar24 = puVar22;
                uVar25 = local_148;
                if (iVar15 != 0) break;
              }
              local_148 = uVar25;
              puVar23 = puVar23 + 1;
              puVar22 = puVar27;
              uVar25 = local_148;
              uVar10 = local_128;
            }
          }
          else {
            while (puVar24 = puVar23, local_148 = uVar25, local_128 = uVar10, puVar24 < puVar16) {
              local_148._0_4_ = (int)uVar25;
              if ((int)local_148 == 0) {
                local_148._4_4_ = (int)(uVar25 >> 0x20);
                lVar26 = (longlong)local_148._4_4_;
                if (((local_d0 + lVar26 <= puVar24) &&
                    (local_128._0_2_ = (ushort)uVar10,
                    bVar31 = puVar24[-lVar26] == (ushort)local_128, bVar31)) &&
                   ((bVar31 = local_148._4_4_ == 1, bVar31 ||
                    (local_128._2_2_ = (ushort)((uint)uVar10 >> 0x10),
                    bVar31 = puVar24[1 - lVar26] == local_128._2_2_, bVar31)))) break;
              }
              else if (local_d0 < puVar24) {
                in_stack_fffffffffffffdf8._0_4_ = uVar18;
                iVar15 = FUN_00ea11a0(puVar24,uVar25 & 0xffffffff,local_d0,(longlong)&local_148 + 4,
                                      in_stack_fffffffffffffdf8);
                uVar25 = local_148;
                if (iVar15 != 0) break;
              }
              local_148 = uVar25;
              puVar23 = puVar24 + 1;
              uVar25 = local_148;
              uVar10 = local_128;
              if ((puVar23 < puVar16) && ((puVar24[1] & 0xfc00) == 0xdc00)) {
                puVar23 = puVar24 + 2;
              }
            }
          }
          puVar23 = puVar24;
          if ((((puVar24[-1] == 0xd) && (puVar24 < puVar16)) && ((int)local_148 - 1U < 2)) &&
             (puVar23 = puVar24 + 1, *puVar24 != 10)) {
            puVar23 = puVar24;
          }
        }
      }
      else if (uVar3 == uVar29) {
        for (; (puVar23 < puVar16 && (*puVar23 != uVar29)); puVar23 = puVar23 + 1) {
        }
      }
      else {
        for (; ((puVar23 < puVar16 && (*puVar23 != uVar3)) && (*puVar23 != uVar29));
            puVar23 = puVar23 + 1) {
        }
      }
    }
    if (((param_1[2] | param_6) & 0x4000000) == 0 && local_a8 == 0) {
      if (((local_1a8 != 0) && ((*(byte *)(local_1a8 + 4) & 2) != 0)) &&
         ((uint)((ulonglong)((longlong)puVar2 - (longlong)puVar23) >> 1) <
          *(uint *)(local_1a8 + 0x28))) {
switchD_00e92345_caseD_fffffc1c:
        iVar15 = 0;
        if (bVar9) {
LAB_00e92991:
          (*(code *)PTR_FUN_01edf910)(local_158);
LAB_00e929a2:
          if ((iVar15 != 0) && (iVar15 != -0xc)) {
            return iVar15;
          }
        }
        if (local_198 == (ushort *)0x0) {
          iVar12 = -1;
        }
        else {
          iVar12 = -0xc;
          if (1 < (int)param_8) {
            *param_7 = (int)((ulonglong)((longlong)local_178 - (longlong)param_3) >> 1);
            param_7[1] = param_4;
            if (param_8 != 2) {
              param_7[2] = (int)((ulonglong)((longlong)local_198 - (longlong)param_3) >> 1);
            }
          }
        }
        if (param_2 == (uint *)0x0) {
          return iVar12;
        }
        local_70 = uStack_68;
        if ((*param_2 & 0x20) == 0) {
          return iVar12;
        }
LAB_00e92a2c:
        **(undefined8 **)(param_2 + 0xc) = local_70;
        return iVar12;
      }
      if (((!bVar8) && ((longlong)puVar2 - (longlong)puVar23 < 2000)) &&
         (puVar16 = puVar23 + local_1b0, local_58 < puVar16)) {
        if (local_1c8 == local_1e4) {
          for (; (puVar16 < puVar2 && (*puVar16 != local_1c8)); puVar16 = puVar16 + 1) {
          }
        }
        else if (puVar16 < puVar2) {
          do {
            uVar4 = *puVar16;
            puVar22 = puVar16;
            if (uVar4 != local_1e4) {
              puVar22 = puVar16 + 1;
            }
            if (uVar4 != local_1c8) {
              puVar16 = puVar22;
            }
          } while (((puVar16 < puVar2) && (uVar4 != local_1c8)) && (uVar4 != local_1e4));
        }
        local_58 = puVar16;
        if (puVar2 <= puVar16) goto switchD_00e92345_caseD_fffffc1c;
      }
    }
    local_168 = 0;
    local_98 = 0;
    local_a4 = 0;
    local_138 = 0;
    in_stack_fffffffffffffdf8._8_8_ = 0;
    in_stack_fffffffffffffdf8._0_8_ = &local_168;
    local_c0 = puVar23;
    local_b0 = puVar23;
    iVar15 = FUN_00e92bf0(puVar23,local_d8,puVar23,2,&local_168,0,0);
    if (local_178 == (ushort *)0x0 && local_e8 != 0) {
      local_198 = puVar23;
      local_178 = local_b0;
    }
    switch(iVar15) {
    case -0x3e4:
      goto switchD_00e92345_caseD_fffffc1c;
    case -0x3e3:
    case -0x3e0:
      goto switchD_00e92345_caseD_fffffc1d;
    case -0x3e2:
      puVar16 = local_c0;
      if (local_c0 <= puVar23) goto switchD_00e92345_caseD_fffffc1d;
      break;
    case -0x3e1:
      local_134 = local_138;
      puVar16 = puVar23;
      break;
    default:
      if (iVar15 == 0) {
switchD_00e92345_caseD_fffffc1d:
        puVar16 = puVar23 + 1;
        local_134 = 0;
        if ((uVar17 == 0) || (puVar2 <= puVar16)) break;
        if ((puVar23[1] & 0xfc00) == 0xdc00) {
          puVar16 = puVar23 + 2;
        }
        if ((uVar13 & 0x40000) != 0) goto LAB_00e923c1;
        goto LAB_00e92453;
      }
      if ((iVar15 != 1) && (iVar15 != -999)) {
        if (bVar9) goto LAB_00e92991;
        goto LAB_00e929a2;
      }
      if (bVar9) {
        if (5 < (int)local_48) {
          FUN_00626670(param_7 + 2,local_158 + 2,(longlong)iVar12 * 4 + -8);
        }
        if (iVar12 < local_a4) {
          local_a0 = local_a0 | 0x10000;
        }
        (*(code *)PTR_FUN_01edf910)(local_158);
      }
      lVar26 = (longlong)local_a4;
      iVar20 = local_a4 / 2;
      iVar15 = 0;
      if (local_a4 < iVar12) {
        iVar15 = iVar20;
      }
      if ((local_a0 & 0x10000) == 0) {
        iVar15 = iVar20;
      }
      if ((param_7 != (undefined4 *)0x0) &&
         (uVar3 = *(ushort *)((longlong)param_1 + 0x1e), iVar20 <= (int)(uint)uVar3)) {
        uVar17 = uVar3 + 2 + (uint)uVar3;
        if ((int)param_8 < (int)uVar17) {
          uVar17 = param_8;
        }
        if (local_a4 < (int)uVar17) {
          puVar28 = param_7 + lVar26 + 1;
          if (param_7 + lVar26 + 1 < param_7 + (int)uVar17) {
            puVar28 = param_7 + (int)uVar17;
          }
          FUN_00626680(param_7 + lVar26,0xff,
                       (longlong)puVar28 + ~(ulonglong)param_7 + lVar26 * -4 + 4 &
                       0xfffffffffffffffc);
        }
      }
      iVar12 = 0;
      if (1 < (int)param_8) {
        *param_7 = (int)((ulonglong)((longlong)local_c0 - (longlong)local_d0) >> 1);
        param_7[1] = (int)((ulonglong)(local_b8 - (longlong)local_d0) >> 1);
        iVar12 = iVar15;
      }
      if (param_2 == (uint *)0x0) {
        return iVar12;
      }
      if ((*param_2 & 0x20) == 0) {
        return iVar12;
      }
      goto LAB_00e92a2c;
    }
    if ((uVar13 & 0x40000) == 0) {
LAB_00e92453:
      if (uVar14 != 0) goto switchD_00e92345_caseD_fffffc1c;
LAB_00e9245e:
      if (puVar2 < puVar16) goto switchD_00e92345_caseD_fffffc1c;
    }
    else {
LAB_00e923c1:
      if ((int)local_148 != 0) {
        if (local_c8 <= puVar23) goto LAB_00e92453;
        in_stack_fffffffffffffdf8._0_4_ = uVar18;
        iVar15 = FUN_00ea10c0(puVar23,local_148 & 0xffffffff,local_c8,(longlong)&local_148 + 4,
                              in_stack_fffffffffffffdf8);
        if (iVar15 == 0 && uVar14 == 0) goto LAB_00e9245e;
        goto switchD_00e92345_caseD_fffffc1c;
      }
      if ((local_c8 + -(longlong)local_148._4_4_ < puVar23) || (*puVar23 != (ushort)local_128))
      goto LAB_00e92453;
      if ((local_148._4_4_ == 1) ||
         (((uVar14 != 0 || (puVar2 < puVar16)) || (puVar23[1] == local_128._2_2_))))
      goto switchD_00e92345_caseD_fffffc1c;
    }
    puVar23 = puVar16;
    if (((puVar1 < puVar16) && (puVar16 < puVar2)) &&
       ((puVar16[-1] == 0xd && ((*puVar16 == 10 && ((*(byte *)((longlong)param_1 + 0xd) & 8) == 0)))
        ))) {
      if (local_148._4_4_ == 2) {
        puVar23 = puVar16 + 1;
      }
      if ((int)local_148 - 1U < 2) {
        puVar23 = puVar16 + 1;
      }
    }
    local_70 = 0;
  } while( true );
}

