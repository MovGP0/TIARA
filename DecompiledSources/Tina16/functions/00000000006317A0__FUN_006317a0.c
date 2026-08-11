/* Ghidra address: 006317a0 */
/* Ghidra symbol: FUN_006317a0 */


/* WARNING: Removing unreachable block (ram,0x00631ae6) */

undefined8
FUN_006317a0(int param_1,longlong param_2,uint param_3,longlong *param_4,uint *param_5,
            undefined *param_6)

{
  short *psVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 uVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ushort auStack_78 [5];
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  longlong *local_50;
  uint local_44;
  ulonglong uVar15;
  
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (param_3 == 0) {
    uVar21 = *param_5;
LAB_006317fa:
    if (uStack_a0._2_2_ != 0) {
      uVar19 = 0xd;
LAB_00631897:
      uVar24 = 0;
      goto LAB_0063189a;
    }
    if ((ushort)uStack_a0 != 0) {
      uVar19 = 0xc;
      goto LAB_00631897;
    }
    if (local_a8._6_2_ != 0) {
      uVar19 = 0xb;
      goto LAB_00631897;
    }
    if (local_a8._4_2_ != 0) {
      uVar19 = 10;
      goto LAB_00631897;
    }
    if (local_a8._2_2_ != 0) {
      uVar19 = 9;
      goto LAB_00631897;
    }
    if ((ushort)local_a8 != 0) {
      uVar19 = 8;
      goto LAB_00631897;
    }
    if (uStack_b0._6_2_ != 0) {
      uVar19 = 7;
      goto LAB_00631897;
    }
    if (uStack_b0._4_2_ != 0) {
      uVar19 = 6;
      goto LAB_00631897;
    }
    if (uStack_b0._2_2_ != 0) {
      uVar19 = 5;
      goto LAB_00631897;
    }
    if ((ushort)uStack_b0 != 0) {
      uVar19 = 4;
      goto LAB_00631897;
    }
    if (local_b8._6_2_ != 0) {
      uVar19 = 3;
      goto LAB_00631897;
    }
    if (local_b8._4_2_ != 0) {
      uVar19 = 2;
      goto LAB_00631897;
    }
    if (local_b8._2_2_ == 0) {
      puVar3 = (undefined4 *)*param_4;
      *param_4 = (longlong)(puVar3 + 1);
      *puVar3 = 0x140;
      puVar3 = (undefined4 *)*param_4;
      *param_4 = (longlong)(puVar3 + 1);
      *puVar3 = 0x140;
      *param_5 = 1;
      return 0;
    }
    uVar19 = 1;
    uVar24 = 0;
    uVar21 = (uint)(uVar21 != 0);
    uVar20 = 1;
  }
  else {
    uVar20 = (ulonglong)(param_3 & 3);
    if ((ulonglong)param_3 - 1 < 3) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        psVar1 = (short *)((longlong)&local_b8 + (ulonglong)*(ushort *)(param_2 + lVar8 * 2) * 2);
        *psVar1 = *psVar1 + 1;
        psVar1 = (short *)((longlong)&local_b8 + (ulonglong)*(ushort *)(param_2 + 2 + lVar8 * 2) * 2
                          );
        *psVar1 = *psVar1 + 1;
        psVar1 = (short *)((longlong)&local_b8 + (ulonglong)*(ushort *)(param_2 + 4 + lVar8 * 2) * 2
                          );
        *psVar1 = *psVar1 + 1;
        psVar1 = (short *)((longlong)&local_b8 + (ulonglong)*(ushort *)(param_2 + 6 + lVar8 * 2) * 2
                          );
        *psVar1 = *psVar1 + 1;
        lVar8 = lVar8 + 4;
      } while (param_3 - uVar20 != lVar8);
    }
    if (uVar20 != 0) {
      puVar18 = (ushort *)(param_2 + lVar8 * 2);
      lVar8 = -uVar20;
      do {
        psVar1 = (short *)((longlong)&local_b8 + (ulonglong)*puVar18 * 2);
        *psVar1 = *psVar1 + 1;
        puVar18 = puVar18 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
    }
    uVar24 = (uint)uStack_a0._6_2_;
    uVar21 = *param_5;
    uVar19 = 0xf;
    if (uStack_a0._6_2_ == 0) {
      if (uStack_a0._4_2_ == 0) goto LAB_006317fa;
      uVar19 = 0xe;
      goto LAB_00631897;
    }
LAB_0063189a:
    if (uVar19 < uVar21) {
      uVar21 = uVar19;
    }
    uVar20 = 1;
    do {
      if (*(short *)((longlong)&local_b8 + uVar20 * 2) != 0) break;
      uVar20 = uVar20 + 1;
    } while ((uint)uVar20 < uVar19);
  }
  uVar22 = (ulonglong)uVar21;
  if (uVar21 < (uint)uVar20) {
    uVar22 = uVar20 & 0xffffffff;
  }
  if ((int)(2 - (uint)local_b8._2_2_) < 0) {
    return 0xffffffff;
  }
  iVar23 = (2 - (uint)local_b8._2_2_) * 2 - (uint)local_b8._4_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)local_b8._6_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)(ushort)uStack_b0;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  local_50 = param_4;
  iVar23 = iVar23 * 2 - (uint)uStack_b0._2_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)uStack_b0._4_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  local_94 = (uint)uStack_b0._4_2_;
  iVar23 = iVar23 * 2 - (uint)uStack_b0._6_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)(ushort)local_a8;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  local_98 = (uint)uStack_b0._2_2_;
  iVar23 = iVar23 * 2 - (uint)local_a8._2_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,(uint)local_a8._2_2_);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,(uint)(ushort)local_a8);
  local_90 = CONCAT44(local_90._4_4_,(uint)local_a8._4_2_);
  iVar23 = iVar23 * 2 - (uint)local_a8._4_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)local_a8._6_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)(ushort)uStack_a0;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)uStack_a0._2_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  iVar23 = iVar23 * 2 - (uint)uStack_a0._4_2_;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  local_44 = (uint)uStack_a0._4_2_;
  iVar23 = iVar23 * 2 - uVar24;
  if (iVar23 < 0) {
    return 0xffffffff;
  }
  if (iVar23 != 0) {
    if (param_1 == 0) {
      return 0xffffffff;
    }
    if (uVar19 != 1) {
      return 0xffffffff;
    }
  }
  auStack_78[1] = 0;
  auStack_78[2] = local_b8._2_2_;
  auStack_78[4] = local_b8._6_2_ + local_b8._4_2_ + local_b8._2_2_;
  auStack_78[3] = local_b8._4_2_ + local_b8._2_2_;
  local_6e = (ushort)uStack_b0 + auStack_78[4];
  local_6c = uStack_b0._2_2_ + local_6e;
  local_6a = uStack_b0._4_2_ + local_6c;
  local_68 = uStack_b0._6_2_ + local_6a;
  local_66 = (ushort)local_a8 + local_68;
  local_64 = local_a8._2_2_ + local_66;
  local_62 = local_a8._4_2_ + local_64;
  local_60 = local_a8._6_2_ + local_62;
  local_5e = (ushort)uStack_a0 + local_60;
  local_5c = uStack_a0._2_2_ + local_5e;
  local_5a = uStack_a0._4_2_ + local_5c;
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        uVar14 = (ulonglong)*(ushort *)(param_2 + lVar8 * 2);
        if (uVar14 != 0) {
          uVar12 = auStack_78[uVar14];
          auStack_78[uVar14] = uVar12 + 1;
          *(short *)(param_6 + (ulonglong)uVar12 * 2) = (short)lVar8;
        }
        uVar14 = (ulonglong)*(ushort *)(param_2 + 2 + lVar8 * 2);
        if (uVar14 != 0) {
          uVar12 = auStack_78[uVar14];
          auStack_78[uVar14] = uVar12 + 1;
          *(short *)(param_6 + (ulonglong)uVar12 * 2) = (short)lVar8 + 1;
        }
        lVar8 = lVar8 + 2;
      } while ((ulonglong)param_3 - (ulonglong)(param_3 & 1) != lVar8);
      if ((ulonglong)(param_3 & 1) == 0) goto LAB_00631bf5;
    }
    uVar14 = (ulonglong)*(ushort *)(param_2 + lVar8 * 2);
    if (uVar14 != 0) {
      uVar12 = auStack_78[uVar14];
      auStack_78[uVar14] = uVar12 + 1;
      *(short *)(param_6 + (ulonglong)uVar12 * 2) = (short)lVar8;
    }
  }
LAB_00631bf5:
  uVar14 = 0;
  uVar21 = (uint)uVar22;
  if (param_1 == 0) {
    uVar24 = 0x14;
    bVar26 = false;
    local_88 = param_6;
    local_80 = param_6;
  }
  else {
    if (param_1 == 1) {
      if (9 < uVar21) {
        return 1;
      }
      bVar4 = 1;
      uVar24 = 0x101;
      local_80 = &DAT_01df2b30;
      local_88 = &DAT_01df2af0;
      bVar26 = false;
      goto LAB_00631ca5;
    }
    uVar24 = 0;
    bVar26 = param_1 == 2;
    local_80 = &DAT_01df2bb0;
    local_88 = &DAT_01df2b70;
    if (bVar26) {
      bVar4 = 0;
      if (9 < uVar21) {
        return 1;
      }
      goto LAB_00631ca5;
    }
  }
  bVar4 = 0;
LAB_00631ca5:
  bVar9 = (byte)uVar22;
  uVar5 = 1 << (bVar9 & 0x1f);
  local_90 = (ulonglong)uVar5;
  local_98 = uVar5 - 1;
  lVar8 = *local_50;
  local_bc = 0xffffffff;
  uVar5 = 0;
  uVar25 = 0;
  local_94 = uVar24;
  do {
    uVar6 = 1 << ((byte)uVar22 & 0x1f);
    uVar11 = uVar24;
    do {
      do {
        uVar24 = local_94;
        bVar10 = (char)uVar20 - (byte)uVar5;
        uVar12 = *(ushort *)(param_6 + uVar14 * 2);
        if (uVar12 + 1 < uVar11) {
          uVar16 = 0;
        }
        else if (uVar12 < uVar11) {
          uVar16 = 0x60;
          uVar12 = 0;
        }
        else {
          uVar16 = local_80[(ulonglong)(uVar12 - uVar11) * 2];
          uVar12 = *(ushort *)(local_88 + (ulonglong)(uVar12 - uVar11) * 2);
        }
        iVar23 = 1 << (bVar10 & 0x1f);
        uVar11 = uVar6;
        do {
          uVar22 = (ulonglong)(((uVar25 >> ((byte)uVar5 & 0x1f)) - iVar23) + uVar11);
          uVar11 = uVar11 - iVar23;
          *(undefined1 *)(lVar8 + uVar22 * 4) = uVar16;
          *(byte *)(lVar8 + 1 + uVar22 * 4) = bVar10;
          *(ushort *)(lVar8 + 2 + uVar22 * 4) = uVar12;
        } while (uVar11 != 0);
        uVar11 = 1 << ((char)uVar20 - 1U & 0x1f);
        do {
          uVar17 = uVar11;
          uVar11 = uVar17 >> 1;
        } while ((uVar17 & uVar25) != 0);
        if (uVar17 == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = (uVar17 - 1 & uVar25) + uVar17;
        }
        uVar14 = (ulonglong)((int)uVar14 + 1);
        psVar1 = (short *)((longlong)&local_b8 + (uVar20 & 0xffffffff) * 2);
        *psVar1 = *psVar1 + -1;
        if (*psVar1 == 0) {
          if ((uint)uVar20 == uVar19) {
            if (uVar25 != 0) {
              uVar20 = (ulonglong)uVar25;
              *(undefined1 *)(lVar8 + uVar20 * 4) = 0x40;
              *(byte *)(lVar8 + 1 + uVar20 * 4) = bVar10;
              *(undefined2 *)(lVar8 + 2 + uVar20 * 4) = 0;
            }
            *local_50 = *local_50 + (local_90 & 0xffffffff) * 4;
            *param_5 = uVar21;
            return 0;
          }
          uVar20 = (ulonglong)
                   *(ushort *)(param_2 + (ulonglong)*(ushort *)(param_6 + uVar14 * 2) * 2);
        }
        uVar17 = (uint)uVar20;
        uVar11 = uVar24;
      } while (uVar17 <= uVar21);
      uVar13 = uVar25 & local_98;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 == local_bc);
    if (uVar5 == 0) {
      uVar5 = uVar21;
    }
    uVar11 = uVar17 - uVar5;
    if (uVar17 < uVar19) {
      iVar23 = 1 << ((byte)uVar11 & 0x1f);
      uVar22 = uVar20 & 0xffffffff;
      do {
        uVar11 = (uint)*(ushort *)((longlong)&local_b8 + uVar22 * 2);
        iVar7 = iVar23 - uVar11;
        if (iVar7 == 0 || iVar23 < (int)uVar11) break;
        iVar23 = iVar7 * 2;
        uVar22 = uVar22 + 1;
      } while ((uint)uVar22 < uVar19);
      uVar11 = (int)uVar22 - uVar5;
    }
    uVar22 = (ulonglong)uVar11;
    uVar17 = (int)local_90 + (1 << ((byte)uVar11 & 0x1f));
    local_90 = (ulonglong)uVar17;
    if ((bool)(bVar4 & 0x354 < uVar17)) {
      return 1;
    }
    if ((bool)(0x250 < uVar17 & bVar26)) {
      return 1;
    }
    lVar8 = lVar8 + (ulonglong)uVar6 * 4;
    lVar2 = *local_50;
    *(byte *)(lVar2 + uVar15 * 4) = (byte)uVar11;
    *(byte *)(lVar2 + 1 + uVar15 * 4) = bVar9;
    *(short *)(lVar2 + 2 + uVar15 * 4) = (short)((uint)((int)lVar8 - (int)lVar2) >> 2);
    local_bc = uVar13;
  } while( true );
}

