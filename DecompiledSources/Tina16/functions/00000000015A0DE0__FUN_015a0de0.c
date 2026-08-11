/* Ghidra address: 015a0de0 */
/* Ghidra symbol: FUN_015a0de0 */


void FUN_015a0de0(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined1 *local_a8;
  uint local_a0;
  undefined1 *local_98;
  byte *local_90;
  undefined4 local_88;
  int local_30;
  int local_20;
  
  puVar5 = (undefined4 *)param_1[5];
  local_90 = (byte *)(*param_1 + -1);
  pbVar18 = local_90 + ((int)param_1[1] - 5);
  local_a8 = (undefined1 *)(param_1[2] + -1);
  lVar10 = param_1[3];
  iVar9 = (int)local_a8;
  puVar19 = local_a8 + ((int)param_1[3] - 0x101);
  iVar17 = puVar5[0xb];
  uVar1 = puVar5[0xc];
  uVar2 = puVar5[0xd];
  lVar6 = *(longlong *)(puVar5 + 0xe);
  local_b0 = puVar5[0x10];
  local_b4 = puVar5[0x11];
  lVar7 = *(longlong *)(puVar5 + 0x15);
  lVar8 = *(longlong *)(puVar5 + 0x17);
  uVar3 = puVar5[0x19];
  uVar4 = puVar5[0x1a];
LAB_015a0f44:
  if (local_b4 < 0xf) {
    pbVar13 = local_90 + 1;
    local_90 = local_90 + 2;
    local_b0 = local_b0 + ((uint)*pbVar13 << ((byte)local_b4 & 0x1f)) +
               ((uint)*local_90 << ((byte)local_b4 + 8 & 0x1f));
    local_b4 = local_b4 + 0x10;
  }
  local_88 = *(uint *)(lVar7 + (ulonglong)(local_b0 & (1 << ((byte)uVar3 & 0x1f)) - 1U) * 4);
  while( true ) {
    local_b0 = local_b0 >> (local_88._1_1_ & 0x1f);
    local_b4 = local_b4 - local_88._1_1_;
    if ((local_88 & 0xff) == 0) break;
    if ((local_88 & 0x10) != 0) {
      local_a0 = (uint)local_88._2_2_;
      local_88 = local_88 & 0xf;
      if (local_88 != 0) {
        if (local_b4 < local_88) {
          local_90 = local_90 + 1;
          local_b0 = local_b0 + ((uint)*local_90 << ((byte)local_b4 & 0x1f));
          local_b4 = local_b4 + 8;
        }
        local_a0 = local_a0 + (local_b0 & (1 << (sbyte)local_88) - 1U);
        local_b0 = local_b0 >> (sbyte)local_88;
        local_b4 = local_b4 - local_88;
      }
      if (local_b4 < 0xf) {
        pbVar13 = local_90 + 1;
        local_90 = local_90 + 2;
        local_b0 = local_b0 + ((uint)*pbVar13 << ((byte)local_b4 & 0x1f)) +
                   ((uint)*local_90 << ((byte)local_b4 + 8 & 0x1f));
        local_b4 = local_b4 + 0x10;
      }
      local_88 = *(uint *)(lVar8 + (ulonglong)(local_b0 & (1 << ((byte)uVar4 & 0x1f)) - 1U) * 4);
      goto LAB_015a1156;
    }
    if ((local_88 & 0x40) != 0) {
      if ((local_88 & 0x20) == 0) {
        param_1[4] = (longlong)s_invalid_literal_length_code_01f69188;
        *puVar5 = 0x1d;
      }
      else {
        *puVar5 = 0xb;
      }
      goto LAB_015a17f9;
    }
    local_88 = *(uint *)(lVar7 + (ulonglong)
                                 ((uint)local_88._2_2_ +
                                 (local_b0 & (1 << ((byte)local_88 & 0x1f)) - 1U)) * 4);
  }
  local_a8[1] = local_88._2_1_;
  puVar15 = local_a8 + 1;
  goto LAB_015a17dd;
LAB_015a1156:
  local_b0 = local_b0 >> (local_88._1_1_ & 0x1f);
  uVar16 = local_b4 - local_88._1_1_;
  local_b4 = uVar16;
  if ((local_88 & 0x10) != 0) goto code_r0x015a1193;
  if ((local_88 & 0x40) != 0) {
    param_1[4] = (longlong)s_invalid_distance_code_01f691c8;
    *puVar5 = 0x1d;
    goto LAB_015a17f9;
  }
  local_88 = *(uint *)(lVar8 + (ulonglong)
                               ((uint)local_88._2_2_ +
                               (local_b0 & (1 << ((byte)local_88 & 0x1f)) - 1U)) * 4);
  goto LAB_015a1156;
code_r0x015a1193:
  uVar12 = local_88 & 0xf;
  pbVar13 = local_90;
  if (uVar16 < uVar12) {
    local_b0 = local_b0 + ((uint)local_90[1] << ((byte)uVar16 & 0x1f));
    local_b4 = uVar16 + 8;
    pbVar13 = local_90 + 1;
    if (local_b4 < uVar12) {
      local_b0 = local_b0 + ((uint)local_90[2] << ((byte)local_b4 & 0x1f));
      local_b4 = uVar16 + 0x10;
      pbVar13 = local_90 + 2;
    }
  }
  local_90 = pbVar13;
  uVar16 = (uint)local_88._2_2_ + (local_b0 & (1 << (sbyte)uVar12) - 1U);
  local_b0 = local_b0 >> (sbyte)uVar12;
  local_b4 = local_b4 - uVar12;
  local_b8 = (int)local_a8 - (iVar9 - (param_2 - (int)lVar10));
  if (local_b8 < uVar16) {
    local_b8 = uVar16 - local_b8;
    if ((uVar1 < local_b8) && (puVar5[0x6f5] != 0)) {
      param_1[4] = (longlong)s_invalid_distance_too_far_back_01f691a8;
      *puVar5 = 0x1d;
LAB_015a17f9:
      local_90 = local_90 + -(ulonglong)(local_b4 >> 3);
      iVar17 = local_b4 + (local_b4 >> 3) * -8;
      *param_1 = (longlong)(local_90 + 1);
      param_1[2] = (longlong)(local_a8 + 1);
      if (local_90 < pbVar18) {
        local_30 = (int)pbVar18 - (int)local_90;
      }
      else {
        local_30 = -((int)local_90 - (int)pbVar18);
      }
      local_30 = local_30 + 5;
      *(int *)(param_1 + 1) = local_30;
      if (local_a8 < puVar19) {
        local_20 = (int)puVar19 - (int)local_a8;
      }
      else {
        local_20 = -((int)local_a8 - (int)puVar19);
      }
      local_20 = local_20 + 0x101;
      *(int *)(param_1 + 3) = local_20;
      puVar5[0x10] = local_b0 & (1 << ((byte)iVar17 & 0x1f)) - 1U;
      puVar5[0x11] = iVar17;
      return;
    }
    lVar14 = lVar6 + -1;
    if (uVar2 == 0) {
      local_98 = (undefined1 *)(lVar14 + (ulonglong)(iVar17 - local_b8));
      if (local_b8 < local_a0) {
        local_a0 = local_a0 - local_b8;
        do {
          local_98 = local_98 + 1;
          local_a8 = local_a8 + 1;
          *local_a8 = *local_98;
          local_b8 = local_b8 - 1;
        } while (local_b8 != 0);
        local_98 = local_a8 + -(ulonglong)uVar16;
      }
    }
    else if (uVar2 < local_b8) {
      local_98 = (undefined1 *)(lVar14 + (ulonglong)((iVar17 + uVar2) - local_b8));
      local_b8 = local_b8 - uVar2;
      if (local_b8 < local_a0) {
        local_a0 = local_a0 - local_b8;
        do {
          local_98 = local_98 + 1;
          local_a8 = local_a8 + 1;
          *local_a8 = *local_98;
          local_b8 = local_b8 - 1;
        } while (local_b8 != 0);
        local_98 = (undefined1 *)(lVar6 + -1);
        if (uVar2 < local_a0) {
          local_a0 = local_a0 - uVar2;
          local_b8 = uVar2;
          do {
            local_98 = local_98 + 1;
            local_a8 = local_a8 + 1;
            *local_a8 = *local_98;
            local_b8 = local_b8 - 1;
          } while (local_b8 != 0);
          local_98 = local_a8 + -(ulonglong)uVar16;
        }
      }
    }
    else {
      local_98 = (undefined1 *)(lVar14 + (ulonglong)(uVar2 - local_b8));
      if (local_b8 < local_a0) {
        local_a0 = local_a0 - local_b8;
        do {
          local_98 = local_98 + 1;
          local_a8 = local_a8 + 1;
          *local_a8 = *local_98;
          local_b8 = local_b8 - 1;
        } while (local_b8 != 0);
        local_98 = local_a8 + -(ulonglong)uVar16;
      }
    }
    for (; 2 < local_a0; local_a0 = local_a0 - 3) {
      local_a8[1] = local_98[1];
      local_a8[2] = local_98[2];
      local_98 = local_98 + 3;
      local_a8 = local_a8 + 3;
      *local_a8 = *local_98;
    }
    puVar15 = local_a8;
    if (local_a0 != 0) {
      local_a8[1] = local_98[1];
      puVar15 = local_a8 + 1;
      if (1 < local_a0) {
        local_a8[2] = local_98[2];
        puVar15 = local_a8 + 2;
      }
    }
  }
  else {
    puVar15 = local_a8;
    puVar11 = local_a8 + -(ulonglong)uVar16;
    do {
      local_98 = puVar11;
      local_a8 = puVar15;
      local_a8[1] = local_98[1];
      local_a8[2] = local_98[2];
      puVar15 = local_a8 + 3;
      *puVar15 = local_98[3];
      local_a0 = local_a0 - 3;
      puVar11 = local_98 + 3;
    } while (2 < local_a0);
    if (local_a0 != 0) {
      local_a8[4] = local_98[4];
      puVar15 = local_a8 + 4;
      if (1 < local_a0) {
        local_a8[5] = local_98[5];
        puVar15 = local_a8 + 5;
      }
    }
  }
LAB_015a17dd:
  local_a8 = puVar15;
  if ((pbVar18 <= local_90) || (puVar19 <= local_a8)) goto LAB_015a17f9;
  goto LAB_015a0f44;
}

