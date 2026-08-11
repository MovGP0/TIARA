/* Ghidra address: 0062db10 */
/* Ghidra symbol: FUN_0062db10 */


int FUN_0062db10(longlong *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  char cVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  ushort *puVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 *puVar34;
  uint uVar35;
  byte bVar36;
  ushort uVar37;
  uint uVar38;
  uint *puVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  int iVar43;
  uint uVar44;
  undefined4 uVar46;
  undefined1 auVar45 [16];
  ulonglong local_d8;
  int local_cc;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined8 *local_b8;
  byte *local_b0;
  ulonglong local_a8;
  uint local_9c;
  undefined1 *local_98;
  uint *local_90;
  uint *local_88;
  ulonglong local_80;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  
  local_80 = (ulonglong)param_2;
  if (param_1 == (longlong *)0x0) {
    return -2;
  }
  if (param_1[6] == 0) {
    return -2;
  }
  if (param_1[7] == 0) {
    return -2;
  }
  puVar4 = (undefined8 *)param_1[5];
  if (puVar4 == (undefined8 *)0x0) {
    return -2;
  }
  if ((longlong *)*puVar4 != param_1) {
    return -2;
  }
  uVar24 = *(uint *)(puVar4 + 1);
  if (0x1f < uVar24 - 0x3f34) {
    return -2;
  }
  local_98 = (undefined1 *)param_1[2];
  if (local_98 == (undefined1 *)0x0) {
    return -2;
  }
  pbVar42 = (byte *)*param_1;
  if ((pbVar42 == (byte *)0x0) && ((int)param_1[1] != 0)) {
    return -2;
  }
  local_90 = (uint *)(puVar4 + 1);
  if (uVar24 == 0x3f3f) {
    *local_90 = 0x3f40;
    uVar24 = 0x3f40;
  }
  local_6c = *(uint *)(param_1 + 1);
  uVar27 = *(uint *)(param_1 + 3);
  uVar33 = *(uint *)((longlong)puVar4 + 0x4c);
  local_88 = (uint *)(puVar4 + 4);
  local_70 = param_2 - 5;
  local_50 = puVar4 + 0xe;
  local_48 = (longlong)puVar4 + 0x74;
  local_58 = puVar4 + 0xaa;
  local_b8 = puVar4 + 0x11;
  local_60 = puVar4 + 0x12;
  local_68 = puVar4 + 0x62;
  local_cc = 0;
  local_d8 = (ulonglong)local_6c;
  uVar31 = (ulonglong)*(uint *)(puVar4 + 9);
  puVar34 = local_b8;
  puVar39 = local_90;
  local_9c = uVar27;
LAB_0062e869:
  puVar8 = local_88;
  puVar28 = local_98;
  uVar22 = (uint)local_d8;
  uVar35 = (uint)uVar31;
  bVar9 = (byte)uVar33;
  uVar13 = uVar31;
  pbVar41 = pbVar42;
  iVar16 = -3;
  iVar23 = 1;
  local_d8._0_4_ = uVar22;
  pbVar40 = pbVar42;
  uVar18 = uVar33;
  switch(uVar24) {
  case 0x3f34:
    uVar24 = *(uint *)(puVar4 + 2);
    if (uVar24 == 0) {
      *puVar39 = 0x3f40;
      uVar24 = *puVar39;
    }
    else {
      if (uVar33 < 0x10) {
        if (uVar22 != 0) {
          uVar26 = uVar22 - 1;
          pbVar41 = pbVar42 + 1;
          uVar35 = uVar35 + ((uint)*pbVar42 << (bVar9 & 0x1f));
          uVar31 = (ulonglong)uVar35;
          uVar18 = uVar33 + 8;
          if (uVar18 < 0x10) {
            if (uVar26 == 0) goto LAB_00630281;
            uVar26 = uVar22 - 2;
            pbVar41 = pbVar42 + 2;
            uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
            uVar31 = (ulonglong)uVar35;
            uVar18 = uVar33 + 0x10;
            if (0xffffffef < uVar33) {
              pbVar40 = pbVar41;
              if (uVar26 == 0) goto LAB_00630027;
              local_d8 = (ulonglong)(uVar22 - 3);
              pbVar41 = pbVar42 + 2;
              pbVar42 = pbVar42 + 3;
              uVar33 = uVar33 + 0x18;
              uVar13 = (ulonglong)(((uint)*pbVar41 << ((byte)uVar18 & 0x1f)) + uVar35);
              goto joined_r0x0062e931;
            }
          }
          local_d8 = (ulonglong)uVar26;
          pbVar42 = pbVar41;
          uVar33 = uVar18;
          uVar13 = uVar31;
          goto joined_r0x0062e931;
        }
LAB_00630281:
        uVar33 = uVar18;
        local_d8._0_4_ = 0;
        iVar16 = local_cc;
        goto switchD_0062e896_caseD_3f51;
      }
joined_r0x0062e931:
      uVar18 = (uint)uVar13;
      if (((uVar24 & 2) == 0) || (uVar18 != 0x8b1f)) {
        *(undefined4 *)(puVar4 + 3) = 0;
        if (puVar4[5] != 0) {
          *(undefined4 *)(puVar4[5] + 0x40) = 0xffffffff;
        }
        if (((uVar24 & 1) == 0) ||
           (uVar24 = ((uint)(uVar13 >> 8) & 0xffffff) + (uVar18 & 0xff) * 0x100,
           uVar24 != (uVar24 / 0x1f) * 0x1f)) {
          pcVar12 = s_incorrect_header_check_01df27f0;
          break;
        }
        if ((uVar18 & 0xf) != 8) goto LAB_0062e810;
        uVar31 = uVar13 >> 4 & 0xfffffff;
        uVar22 = (uint)uVar31 & 0xf;
        uVar24 = uVar22 + 8;
        uVar18 = *(uint *)(puVar4 + 6);
        if (*(uint *)(puVar4 + 6) == 0) {
          *(uint *)(puVar4 + 6) = uVar24;
          uVar18 = uVar24;
        }
        local_b0 = pbVar42;
        if ((uVar24 < 0x10) && (uVar24 <= uVar18)) {
          *(int *)((longlong)puVar4 + 0x1c) = 0x100 << (sbyte)uVar22;
          uVar33 = 0;
          uVar11 = FUN_006347b0(0,0,0);
          *(undefined4 *)(puVar4 + 4) = uVar11;
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
          *(uint *)(puVar4 + 1) = (uint)(uVar13 >> 0xc) & 2 ^ 0x3f3f;
          uVar31 = 0;
        }
        else {
          uVar33 = uVar33 - 4;
          param_1[4] = (longlong)s_invalid_window_size_01df2822;
          *puVar39 = 0x3f51;
        }
        uVar24 = *puVar39;
        puVar34 = local_b8;
        pbVar42 = local_b0;
      }
      else {
        if (*(int *)(puVar4 + 6) == 0) {
          *(undefined4 *)(puVar4 + 6) = 0xf;
        }
        uVar24 = FUN_00634c80(0,0,0);
        puVar8 = local_88;
        *local_88 = uVar24;
        local_bc = 0x8b1f;
        uVar24 = FUN_00634c80(uVar24,&local_bc,2);
        *puVar8 = uVar24;
        uVar31 = 0;
        *puVar39 = 0x3f35;
        uVar33 = 0;
        uVar24 = *puVar39;
        puVar34 = local_b8;
      }
    }
    goto LAB_0062e869;
  case 0x3f35:
    if (uVar33 < 0x10) {
      if (uVar22 != 0) {
        uVar24 = uVar22 - 1;
        pbVar40 = pbVar42 + 1;
        uVar35 = uVar35 + ((uint)*pbVar42 << (bVar9 & 0x1f));
        uVar31 = (ulonglong)uVar35;
        uVar18 = uVar33 + 8;
        if (0xf < uVar18) {
LAB_0062f32a:
          local_d8 = (ulonglong)uVar24;
          *(int *)(puVar4 + 3) = (int)uVar31;
          cVar21 = (char)uVar31;
          pbVar42 = pbVar40;
          uVar13 = uVar31;
          uVar33 = uVar18;
          goto joined_r0x0062f339;
        }
        if (uVar24 != 0) {
          uVar24 = uVar22 - 2;
          pbVar40 = pbVar42 + 2;
          uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
          uVar31 = (ulonglong)uVar35;
          uVar18 = uVar33 + 0x10;
          if (uVar33 < 0xfffffff0) goto LAB_0062f32a;
          if (uVar24 != 0) {
            local_d8 = (ulonglong)(uVar22 - 3);
            pbVar41 = pbVar42 + 2;
            pbVar42 = pbVar42 + 3;
            uVar35 = ((uint)*pbVar41 << ((byte)uVar18 & 0x1f)) + uVar35;
            uVar33 = uVar33 + 0x18;
            uVar13 = (ulonglong)uVar35;
            *(uint *)(puVar4 + 3) = uVar35;
            cVar21 = (char)uVar35;
            goto joined_r0x0062f339;
          }
        }
      }
      goto LAB_00630027;
    }
    *(uint *)(puVar4 + 3) = uVar35;
    cVar21 = (char)uVar31;
joined_r0x0062f339:
    if (cVar21 == '\b') {
      if ((uVar13 & 0xe000) != 0) {
        pcVar12 = s_unknown_header_flags_set_01df2836;
        break;
      }
      if ((uint *)puVar4[5] != (uint *)0x0) {
        *(uint *)puVar4[5] = (uint)(uVar13 >> 8) & 1;
      }
      if (((uVar13 & 0x200) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
        local_bc = (undefined2)uVar13;
        uVar24 = FUN_00634c80(*local_88,&local_bc,2);
        *puVar8 = uVar24;
        puVar34 = local_b8;
      }
      *puVar39 = 0x3f36;
      uVar33 = 0;
      uVar31 = 0;
      uVar22 = (uint)local_d8;
      pbVar40 = pbVar42;
      uVar18 = uVar33;
      if (uVar22 != 0) goto LAB_0062e9e4;
      goto LAB_00630027;
    }
LAB_0062e810:
    pcVar12 = s_unknown_compression_method_01df2807;
    break;
  case 0x3f36:
    uVar24 = uVar22;
    if (uVar33 < 0x20) {
      if (uVar22 == 0) goto LAB_00630027;
LAB_0062e9e4:
      uVar24 = uVar22 - 1;
      pbVar41 = pbVar42 + 1;
      uVar35 = (int)uVar31 + ((uint)*pbVar42 << ((byte)uVar33 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      uVar18 = uVar33 + 8;
      if (0x1f < uVar18) goto LAB_0062eebb;
      pbVar40 = pbVar41;
      if (uVar24 == 0) goto LAB_00630027;
      uVar24 = uVar22 - 2;
      pbVar41 = pbVar42 + 2;
      uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      uVar18 = uVar33 + 0x10;
      if (0x1f < uVar18) goto LAB_0062eebb;
      pbVar40 = pbVar41;
      if (uVar24 == 0) goto LAB_00630027;
      uVar24 = uVar22 - 3;
      pbVar41 = pbVar42 + 3;
      uVar35 = uVar35 + ((uint)pbVar42[2] << ((byte)uVar18 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      uVar18 = uVar33 + 0x18;
      if (0x1f < uVar18) goto LAB_0062eebb;
      pbVar40 = pbVar41;
      if (uVar24 == 0) goto LAB_00630027;
      uVar24 = uVar22 - 4;
      pbVar41 = pbVar42 + 4;
      uVar35 = uVar35 + ((uint)pbVar42[3] << ((byte)uVar18 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      if (uVar33 < 0xffffffe0) goto LAB_0062eebb;
      pbVar40 = pbVar41;
      uVar18 = uVar33 + 0x20;
      if (uVar24 == 0) goto LAB_00630027;
      uVar22 = uVar22 - 5;
      pbVar41 = pbVar42 + 5;
      iVar16 = ((uint)pbVar42[4] << ((byte)(uVar33 + 0x20) & 0x1f)) + uVar35;
      lVar25 = puVar4[5];
      puVar8 = local_88;
    }
    else {
LAB_0062eebb:
      iVar16 = (int)uVar31;
      lVar25 = puVar4[5];
      puVar8 = local_88;
      uVar22 = uVar24;
    }
    if (lVar25 != 0) {
      *(int *)(lVar25 + 4) = iVar16;
    }
    local_88 = puVar8;
    if (((*(byte *)((longlong)puVar4 + 0x19) & 2) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
      local_bc = (undefined2)iVar16;
      local_ba = (undefined1)((uint)iVar16 >> 0x10);
      local_b9 = (undefined1)((uint)iVar16 >> 0x18);
      uVar24 = FUN_00634c80(*puVar8,&local_bc,4);
      *puVar8 = uVar24;
      puVar34 = local_b8;
    }
    *puVar39 = 0x3f37;
    uVar33 = 0;
    uVar31 = 0;
LAB_0062ef31:
    pbVar40 = pbVar41;
    uVar18 = uVar33;
    if (uVar22 != 0) {
      uVar24 = uVar22 - 1;
      pbVar42 = pbVar41 + 1;
      uVar35 = (int)uVar31 + ((uint)*pbVar41 << ((byte)uVar33 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      uVar18 = uVar33 + 8;
      if (0xf < uVar18) {
LAB_0062ef9a:
        local_d8 = (ulonglong)uVar24;
        goto LAB_0062ef9f;
      }
      pbVar40 = pbVar42;
      if (uVar24 != 0) {
        uVar24 = uVar22 - 2;
        pbVar42 = pbVar41 + 2;
        uVar35 = uVar35 + ((uint)pbVar41[1] << ((byte)uVar18 & 0x1f));
        uVar31 = (ulonglong)uVar35;
        if (uVar33 < 0xfffffff0) goto LAB_0062ef9a;
        pbVar40 = pbVar42;
        uVar18 = uVar33 + 0x10;
        if (uVar24 != 0) {
          local_d8 = (ulonglong)(uVar22 - 3);
          pbVar42 = pbVar41 + 3;
          uVar31 = (ulonglong)(((uint)pbVar41[2] << ((byte)(uVar33 + 0x10) & 0x1f)) + uVar35);
          goto LAB_0062ef9f;
        }
      }
    }
    goto LAB_00630027;
  case 0x3f37:
    if (uVar33 < 0x10) goto LAB_0062ef31;
LAB_0062ef9f:
    puVar8 = local_88;
    lVar25 = puVar4[5];
    if (lVar25 != 0) {
      *(uint *)(lVar25 + 8) = (uint)uVar31 & 0xff;
      *(uint *)(lVar25 + 0xc) = (uint)(uVar31 >> 8) & 0xffffff;
    }
    if (((*(byte *)((longlong)puVar4 + 0x19) & 2) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
      local_bc = (undefined2)uVar31;
      uVar24 = FUN_00634c80(*local_88,&local_bc,2);
      *puVar8 = uVar24;
      puVar34 = local_b8;
    }
    *puVar39 = 0x3f38;
    uVar31 = 0;
    uVar33 = 0;
  case 0x3f38:
    puVar8 = local_88;
    uVar24 = *(uint *)(puVar4 + 3);
    if ((uVar24 & 0x400) != 0) {
      uVar22 = (uint)uVar31;
      if (0xf < uVar33) {
LAB_0062fbce:
        *(uint *)(puVar4 + 10) = uVar22;
        if (puVar4[5] != 0) {
          *(uint *)(puVar4[5] + 0x18) = uVar22;
        }
        if (((uVar24 & 0x200) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
          local_bc = (undefined2)uVar22;
          uVar24 = FUN_00634c80(*local_88,&local_bc,2);
          *puVar8 = uVar24;
          puVar34 = local_b8;
        }
        uVar31 = 0;
        uVar33 = 0;
        goto LAB_0062fc30;
      }
      iVar16 = (int)local_d8;
      pbVar40 = pbVar42;
      uVar18 = uVar33;
      if (iVar16 == 0) goto LAB_00630027;
      uVar35 = iVar16 - 1;
      pbVar41 = pbVar42 + 1;
      uVar22 = ((uint)*pbVar42 << ((byte)uVar33 & 0x1f)) + uVar22;
      uVar18 = uVar33 + 8;
      if (0xf < uVar18) {
LAB_0062fbc9:
        local_d8 = (ulonglong)uVar35;
        pbVar42 = pbVar41;
        goto LAB_0062fbce;
      }
      if (uVar35 != 0) {
        uVar35 = iVar16 - 2;
        pbVar41 = pbVar42 + 2;
        uVar22 = uVar22 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
        if (0xffffffef < uVar33) {
          uVar18 = uVar33 + 0x10;
          if (uVar35 == 0) goto LAB_006302bd;
          uVar35 = iVar16 - 3;
          pbVar41 = pbVar42 + 3;
          uVar22 = uVar22 + ((uint)pbVar42[2] << ((byte)(uVar33 + 0x10) & 0x1f));
        }
        goto LAB_0062fbc9;
      }
LAB_006302bd:
      uVar33 = uVar18;
      local_d8._0_4_ = 0;
      uVar31 = (ulonglong)uVar22;
      iVar16 = local_cc;
      goto switchD_0062e896_caseD_3f51;
    }
    if (puVar4[5] != 0) {
      *(undefined8 *)(puVar4[5] + 0x10) = 0;
    }
LAB_0062fc30:
    *puVar39 = 0x3f39;
    uVar13 = uVar31;
    pbVar41 = pbVar42;
switchD_0062e896_caseD_3f39:
    uVar24 = *(uint *)(puVar4 + 3);
    if ((uVar24 & 0x400) != 0) {
      uVar18 = *(uint *)(puVar4 + 10);
      uVar31 = (ulonglong)uVar18;
      if ((uint)local_d8 < uVar18) {
        uVar31 = local_d8 & 0xffffffff;
      }
      iVar16 = (int)uVar31;
      if (iVar16 != 0) {
        lVar25 = puVar4[5];
        if ((lVar25 != 0) && (*(longlong *)(lVar25 + 0x10) != 0)) {
          uVar18 = *(int *)(lVar25 + 0x18) - uVar18;
          uVar20 = (ulonglong)(*(uint *)(lVar25 + 0x1c) - uVar18);
          if (uVar18 + iVar16 <= *(uint *)(lVar25 + 0x1c)) {
            uVar20 = uVar31;
          }
          FUN_00626670(*(longlong *)(lVar25 + 0x10) + (ulonglong)uVar18,pbVar41,uVar20);
          uVar24 = *(uint *)(puVar4 + 3);
          puVar34 = local_b8;
        }
        puVar8 = local_88;
        if (((uVar24 & 0x200) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
          local_b0 = pbVar41;
          uVar24 = FUN_00634c80(*local_88,pbVar41,uVar31);
          *puVar8 = uVar24;
          puVar34 = local_b8;
          pbVar41 = local_b0;
        }
        local_d8 = (ulonglong)((uint)local_d8 - iVar16);
        pbVar41 = pbVar41 + uVar31;
        uVar18 = *(int *)(puVar4 + 10) - iVar16;
        *(uint *)(puVar4 + 10) = uVar18;
      }
      iVar23 = local_cc;
      if (uVar18 != 0) goto switchD_0062e896_caseD_3f50;
    }
    *(undefined4 *)(puVar4 + 10) = 0;
    *(undefined4 *)(puVar4 + 1) = 0x3f3a;
switchD_0062e896_caseD_3f3a:
    puVar8 = local_88;
    if ((*(byte *)((longlong)puVar4 + 0x19) & 8) != 0) {
      if ((uint)local_d8 == 0) {
LAB_0062fea4:
        local_d8._0_4_ = 0;
        iVar23 = local_cc;
      }
      else {
        uVar31 = 0;
        do {
          bVar9 = pbVar41[uVar31];
          lVar25 = puVar4[5];
          if ((lVar25 != 0) && (lVar14 = *(longlong *)(lVar25 + 0x20), lVar14 != 0)) {
            uVar24 = *(uint *)(puVar4 + 10);
            if (uVar24 < *(uint *)(lVar25 + 0x28)) {
              *(uint *)(puVar4 + 10) = uVar24 + 1;
              *(byte *)(lVar14 + (ulonglong)uVar24) = bVar9;
            }
          }
          uVar31 = uVar31 + 1;
        } while ((bVar9 != 0) && ((uint)uVar31 < (uint)local_d8));
        local_a8 = uVar13;
        if (((*(byte *)((longlong)puVar4 + 0x19) & 2) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
          local_b0 = pbVar41;
          uVar24 = FUN_00634c80(*local_88,pbVar41,uVar31 & 0xffffffff);
          *puVar8 = uVar24;
          puVar34 = local_b8;
          pbVar41 = local_b0;
        }
        uVar13 = local_a8;
        if (bVar9 == 0) {
          local_d8 = (local_d8 & 0xffffffff) - uVar31;
          pbVar41 = pbVar41 + uVar31;
          goto LAB_0062fe02;
        }
        pbVar41 = pbVar41 + uVar31;
        local_d8._0_4_ = (uint)local_d8 - (uint)uVar31;
        iVar23 = local_cc;
      }
      goto switchD_0062e896_caseD_3f50;
    }
    if (puVar4[5] != 0) {
      *(undefined8 *)(puVar4[5] + 0x20) = 0;
    }
LAB_0062fe02:
    *(undefined4 *)(puVar4 + 10) = 0;
    *(undefined4 *)(puVar4 + 1) = 0x3f3b;
switchD_0062e896_caseD_3f3b:
    puVar8 = local_88;
    if ((*(byte *)((longlong)puVar4 + 0x19) & 0x10) == 0) {
      uVar31 = uVar13;
      if (puVar4[5] != 0) {
        *(undefined8 *)(puVar4[5] + 0x30) = 0;
      }
    }
    else {
      if ((uint)local_d8 == 0) goto LAB_0062fea4;
      uVar31 = 0;
      do {
        bVar9 = pbVar41[uVar31];
        lVar25 = puVar4[5];
        if ((lVar25 != 0) && (lVar14 = *(longlong *)(lVar25 + 0x30), lVar14 != 0)) {
          uVar24 = *(uint *)(puVar4 + 10);
          if (uVar24 < *(uint *)(lVar25 + 0x38)) {
            *(uint *)(puVar4 + 10) = uVar24 + 1;
            *(byte *)(lVar14 + (ulonglong)uVar24) = bVar9;
          }
        }
        uVar31 = uVar31 + 1;
      } while ((bVar9 != 0) && ((uint)uVar31 < (uint)local_d8));
      local_a8 = uVar13;
      if (((*(byte *)((longlong)puVar4 + 0x19) & 2) != 0) && ((*(byte *)(puVar4 + 2) & 4) != 0)) {
        local_b0 = pbVar41;
        uVar24 = FUN_00634c80(*local_88,pbVar41,uVar31 & 0xffffffff);
        *puVar8 = uVar24;
        puVar34 = local_b8;
        pbVar41 = local_b0;
      }
      if (bVar9 != 0) {
        pbVar41 = pbVar41 + uVar31;
        local_d8._0_4_ = (uint)local_d8 - (uint)uVar31;
        uVar13 = local_a8;
        iVar23 = local_cc;
        goto switchD_0062e896_caseD_3f50;
      }
      local_d8 = (local_d8 & 0xffffffff) - uVar31;
      pbVar41 = pbVar41 + uVar31;
      uVar31 = local_a8;
    }
    *puVar39 = 0x3f3c;
    pbVar42 = pbVar41;
switchD_0062e896_caseD_3f3c:
    if ((*(uint *)(puVar4 + 3) & 0x200) != 0) {
      if (uVar33 < 0x10) {
        iVar16 = (int)local_d8;
        pbVar40 = pbVar42;
        uVar18 = uVar33;
        if (iVar16 == 0) goto LAB_00630027;
        uVar24 = iVar16 - 1;
        pbVar40 = pbVar42 + 1;
        uVar22 = (int)uVar31 + ((uint)*pbVar42 << ((byte)uVar33 & 0x1f));
        uVar31 = (ulonglong)uVar22;
        uVar18 = uVar33 + 8;
        if (uVar18 < 0x10) {
          if (uVar24 == 0) goto LAB_00630027;
          uVar24 = iVar16 - 2;
          pbVar40 = pbVar42 + 2;
          uVar22 = uVar22 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
          uVar31 = (ulonglong)uVar22;
          uVar18 = uVar33 + 0x10;
          if (uVar33 < 0xfffffff0) goto LAB_0062dd75;
          if (uVar24 == 0) goto LAB_00630027;
          uVar24 = iVar16 - 3;
          pbVar40 = pbVar42 + 3;
          bVar9 = (byte)uVar18;
          uVar18 = uVar33 + 0x18;
          uVar31 = (ulonglong)(((uint)pbVar42[2] << (bVar9 & 0x1f)) + uVar22);
          bVar9 = *(byte *)(puVar4 + 2);
        }
        else {
LAB_0062dd75:
          bVar9 = *(byte *)(puVar4 + 2);
        }
        local_d8 = (ulonglong)uVar24;
        pbVar42 = pbVar40;
        uVar13 = uVar31;
        uVar33 = uVar18;
      }
      else {
        bVar9 = *(byte *)(puVar4 + 2);
        uVar13 = uVar31;
      }
      if (((bVar9 & 4) != 0) && ((uint)uVar13 != (uint)(ushort)*local_88)) {
        pcVar12 = s_header_crc_mismatch_01df284f;
        break;
      }
      uVar31 = 0;
      uVar33 = 0;
    }
    lVar25 = puVar4[5];
    if (lVar25 != 0) {
      *(uint *)(lVar25 + 0x3c) = *(uint *)(puVar4 + 3) >> 9 & 1;
      *(undefined4 *)(lVar25 + 0x40) = 1;
    }
    uVar24 = FUN_00634c80(0,0,0);
    *local_88 = uVar24;
    *(uint *)((longlong)param_1 + 0x4c) = uVar24;
    *puVar39 = 0x3f3f;
LAB_0062dc52:
    uVar24 = *puVar39;
    puVar34 = local_b8;
    goto LAB_0062e869;
  case 0x3f39:
    goto switchD_0062e896_caseD_3f39;
  case 0x3f3a:
    goto switchD_0062e896_caseD_3f3a;
  case 0x3f3b:
    goto switchD_0062e896_caseD_3f3b;
  case 0x3f3c:
    goto switchD_0062e896_caseD_3f3c;
  case 0x3f3d:
    if (uVar33 < 0x20) {
      if (uVar22 == 0) goto LAB_00630027;
      local_d8 = (ulonglong)(uVar22 - 1);
      pbVar41 = pbVar42 + 1;
      uVar35 = uVar35 + ((uint)*pbVar42 << (bVar9 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      uVar18 = uVar33 + 8;
      if (uVar18 < 0x20) {
        pbVar40 = pbVar41;
        if (uVar22 - 1 == 0) goto LAB_00630027;
        local_d8 = (ulonglong)(uVar22 - 2);
        pbVar41 = pbVar42 + 2;
        uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
        uVar31 = (ulonglong)uVar35;
        uVar18 = uVar33 + 0x10;
        if (uVar18 < 0x20) {
          pbVar40 = pbVar41;
          if (uVar22 - 2 == 0) goto LAB_00630027;
          local_d8 = (ulonglong)(uVar22 - 3);
          pbVar41 = pbVar42 + 3;
          uVar35 = uVar35 + ((uint)pbVar42[2] << ((byte)uVar18 & 0x1f));
          uVar31 = (ulonglong)uVar35;
          uVar18 = uVar33 + 0x18;
          if (uVar18 < 0x20) {
            pbVar40 = pbVar41;
            if (uVar22 - 3 == 0) goto LAB_00630027;
            local_d8 = (ulonglong)(uVar22 - 4);
            pbVar41 = pbVar42 + 4;
            uVar35 = uVar35 + ((uint)pbVar42[3] << ((byte)uVar18 & 0x1f));
            uVar31 = (ulonglong)uVar35;
            if (0xffffffdf < uVar33) {
              pbVar40 = pbVar41;
              uVar18 = uVar33 + 0x20;
              if (uVar22 - 4 == 0) goto LAB_00630027;
              local_d8 = (ulonglong)(uVar22 - 5);
              pbVar41 = pbVar42 + 5;
              uVar31 = (ulonglong)(((uint)pbVar42[4] << ((byte)(uVar33 + 0x20) & 0x1f)) + uVar35);
            }
          }
        }
      }
    }
    uVar24 = (uint)uVar31;
    uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
    *local_88 = uVar24;
    *(uint *)((longlong)param_1 + 0x4c) = uVar24;
    *puVar39 = 0x3f3e;
    uVar31 = 0;
    uVar33 = 0;
  case 0x3f3e:
    if (*(int *)((longlong)puVar4 + 0x14) == 0) {
      param_1[2] = (longlong)local_98;
      *(uint *)(param_1 + 3) = uVar27;
      *param_1 = (longlong)pbVar41;
      *(int *)(param_1 + 1) = (int)local_d8;
      *(int *)(puVar4 + 9) = (int)uVar31;
      *(uint *)((longlong)puVar4 + 0x4c) = uVar33;
      return 2;
    }
    uVar24 = FUN_006347b0(0,0,0);
    *local_88 = uVar24;
    *(uint *)((longlong)param_1 + 0x4c) = uVar24;
    *puVar39 = 0x3f3f;
    puVar34 = local_b8;
switchD_0062e896_caseD_3f3f:
    uVar13 = uVar31;
    iVar23 = local_cc;
    if (local_70 < 2) goto switchD_0062e896_caseD_3f50;
switchD_0062e896_caseD_3f40:
    if (*(int *)((longlong)puVar4 + 0xc) == 0) {
      uVar24 = uVar33;
      if (uVar33 < 3) {
        if ((int)local_d8 != 0) {
          uVar24 = uVar33 + 8;
          bVar9 = *pbVar41;
          pbVar41 = pbVar41 + 1;
          local_d8 = (ulonglong)((int)local_d8 - 1);
          uVar13 = (ulonglong)(((uint)bVar9 << ((byte)uVar33 & 0x1f)) + (uint)uVar13);
          goto LAB_0062f1ab;
        }
        goto LAB_0062fea4;
      }
LAB_0062f1ab:
      uVar18 = (uint)uVar13;
      *(uint *)((longlong)puVar4 + 0xc) = uVar18 & 1;
      bVar9 = (byte)((uVar13 & 0xffffffff) >> 1) & 3;
      if (bVar9 == 3) {
        param_1[4] = (longlong)s_invalid_block_type_01df2863;
        uVar33 = 0x3f51;
LAB_0062f4a9:
        *puVar39 = uVar33;
      }
      else {
        if (bVar9 == 2) {
          uVar33 = 0x3f44;
          goto LAB_0062f4a9;
        }
        uVar33 = 0x3f41;
        if (bVar9 != 1) goto LAB_0062f4a9;
        puVar4[0xe] = 0x500000009;
        puVar4[0xc] = &DAT_01df1f70;
        puVar4[0xd] = &DAT_01df2770;
        *(undefined4 *)(puVar4 + 1) = 0x3f47;
        if ((int)local_80 == 6) {
          uVar33 = uVar24 - 3;
          uVar13 = (ulonglong)(uVar18 >> 3);
          iVar23 = local_cc;
          goto switchD_0062e896_caseD_3f50;
        }
      }
      uVar31 = (ulonglong)(uVar18 >> 3);
      uVar33 = uVar24 - 3;
      uVar24 = *puVar39;
      pbVar42 = pbVar41;
    }
    else {
      uVar31 = (ulonglong)((uint)uVar13 >> (sbyte)(uVar33 & 7));
      uVar33 = uVar33 - (uVar33 & 7);
      *puVar39 = 0x3f4e;
      uVar24 = *puVar39;
      pbVar42 = pbVar41;
    }
    goto LAB_0062e869;
  case 0x3f3f:
    goto switchD_0062e896_caseD_3f3f;
  case 0x3f40:
    goto switchD_0062e896_caseD_3f40;
  case 0x3f41:
    uVar35 = uVar35 >> (sbyte)(uVar33 & 7);
    uVar13 = (ulonglong)uVar35;
    uVar33 = uVar33 - (uVar33 & 7);
    uVar18 = uVar33;
    if (uVar33 < 0x20) {
      uVar31 = uVar13;
      if (uVar22 == 0) goto LAB_00630027;
      local_d8 = (ulonglong)(uVar22 - 1);
      pbVar41 = pbVar42 + 1;
      uVar35 = uVar35 + ((uint)*pbVar42 << ((byte)uVar33 & 0x1f));
      uVar13 = (ulonglong)uVar35;
      uVar18 = uVar33 + 8;
      if (uVar18 < 0x20) {
        uVar31 = uVar13;
        pbVar40 = pbVar41;
        if (uVar22 - 1 == 0) goto LAB_00630027;
        local_d8 = (ulonglong)(uVar22 - 2);
        pbVar41 = pbVar42 + 2;
        uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
        uVar13 = (ulonglong)uVar35;
        uVar18 = uVar33 + 0x10;
        if (uVar18 < 0x20) {
          uVar31 = uVar13;
          pbVar40 = pbVar41;
          if (uVar22 - 2 == 0) goto LAB_00630027;
          local_d8 = (ulonglong)(uVar22 - 3);
          pbVar41 = pbVar42 + 3;
          uVar35 = uVar35 + ((uint)pbVar42[2] << ((byte)uVar18 & 0x1f));
          uVar13 = (ulonglong)uVar35;
          uVar18 = uVar33 + 0x18;
          if (uVar18 < 0x20) {
            uVar31 = uVar13;
            pbVar40 = pbVar41;
            if (uVar22 - 3 == 0) goto LAB_00630027;
            local_d8 = (ulonglong)(uVar22 - 4);
            pbVar41 = pbVar42 + 4;
            uVar35 = uVar35 + ((uint)pbVar42[3] << ((byte)uVar18 & 0x1f));
            uVar13 = (ulonglong)uVar35;
            uVar18 = uVar33 + 0x20;
            if (0xffffffdf < uVar33) {
              uVar31 = uVar13;
              pbVar40 = pbVar41;
              if (uVar22 - 4 == 0) goto LAB_00630027;
              local_d8 = (ulonglong)(uVar22 - 5);
              uVar13 = (ulonglong)(((uint)pbVar42[4] << ((byte)uVar18 & 0x1f)) + uVar35);
              pbVar41 = pbVar42 + 5;
              uVar18 = uVar33 + 0x28;
            }
          }
        }
      }
    }
    uVar24 = (uint)uVar13 & 0xffff;
    if (uVar24 == ((uint)(uVar13 >> 0x10) ^ 0xffff)) {
      uVar31 = 0;
      *(uint *)(puVar4 + 10) = uVar24;
      *(undefined4 *)(puVar4 + 1) = 0x3f42;
      uVar33 = 0;
      uVar13 = 0;
      iVar23 = local_cc;
      if ((int)local_80 != 6) goto switchD_0062e896_caseD_3f42;
      goto switchD_0062e896_caseD_3f50;
    }
    pcVar12 = s_invalid_stored_block_lengths_01df2876;
    pbVar42 = pbVar41;
    uVar33 = uVar18;
    break;
  case 0x3f42:
switchD_0062e896_caseD_3f42:
    *puVar39 = 0x3f43;
  case 0x3f43:
    uVar24 = *(uint *)(puVar4 + 10);
    if (uVar24 == 0) {
      *puVar39 = 0x3f3f;
    }
    else {
      if ((uint)local_d8 < uVar24) {
        uVar24 = (uint)local_d8;
      }
      if (uVar27 < uVar24) {
        uVar24 = uVar27;
      }
      uVar13 = uVar31;
      iVar23 = local_cc;
      if (uVar24 == 0) goto switchD_0062e896_caseD_3f50;
      uVar13 = (ulonglong)uVar24;
      local_b0 = pbVar41;
      FUN_00626670(local_98,pbVar41,uVar13);
      local_d8 = (ulonglong)((uint)local_d8 - uVar24);
      pbVar41 = local_b0 + uVar13;
      uVar27 = uVar27 - uVar24;
      local_98 = puVar28 + uVar13;
      *(uint *)(puVar4 + 10) = *(int *)(puVar4 + 10) - uVar24;
      puVar34 = local_b8;
      puVar39 = local_90;
    }
    uVar24 = *puVar39;
    pbVar42 = pbVar41;
    goto LAB_0062e869;
  case 0x3f44:
    if (uVar33 < 0xe) {
      if (uVar22 != 0) {
        uVar24 = uVar22 - 1;
        pbVar40 = pbVar42 + 1;
        uVar35 = uVar35 + ((uint)*pbVar42 << (bVar9 & 0x1f));
        uVar31 = (ulonglong)uVar35;
        uVar18 = uVar33 + 8;
        if (0xd < uVar18) {
LAB_0062f344:
          uVar33 = uVar18;
          local_d8 = (ulonglong)uVar24;
          pbVar42 = pbVar40;
          goto LAB_0062f34c;
        }
        if (uVar24 != 0) {
          uVar24 = uVar22 - 2;
          pbVar40 = pbVar42 + 2;
          uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
          uVar31 = (ulonglong)uVar35;
          uVar18 = uVar33 + 0x10;
          if (0xd < uVar18) goto LAB_0062f344;
          if (uVar24 != 0) {
            local_d8 = (ulonglong)(uVar22 - 3);
            uVar33 = uVar33 + 0x18;
            uVar31 = (ulonglong)(((uint)pbVar42[2] << ((byte)uVar18 & 0x1f)) + uVar35);
            pbVar42 = pbVar42 + 3;
            goto LAB_0062f34c;
          }
        }
      }
      goto LAB_00630027;
    }
LAB_0062f34c:
    uVar22 = ((uint)uVar31 & 0x1f) + 0x101;
    *(uint *)((longlong)puVar4 + 0x7c) = uVar22;
    uVar18 = (uint)(uVar31 >> 5) & 0x1f;
    *(uint *)(puVar4 + 0x10) = uVar18 + 1;
    uVar24 = ((uint)(uVar31 >> 10) & 0xf) + 4;
    *(uint *)(puVar4 + 0xf) = uVar24;
    uVar13 = (ulonglong)((uint)uVar31 >> 0xe);
    uVar33 = uVar33 - 0xe;
    if ((uVar22 < 0x11f) && (uVar18 < 0x1e)) {
      *(undefined4 *)((longlong)puVar4 + 0x84) = 0;
      *(undefined4 *)(puVar4 + 1) = 0x3f45;
      uVar18 = 0;
      pbVar41 = pbVar42;
      goto LAB_0062f3af;
    }
    pcVar12 = s_too_many_length_or_distance_symb_01df2893;
    break;
  case 0x3f45:
    uVar24 = *(uint *)(puVar4 + 0xf);
    uVar18 = *(uint *)((longlong)puVar4 + 0x84);
    if (uVar18 < uVar24) {
LAB_0062f3af:
      do {
        uVar31 = (ulonglong)uVar18;
        uVar22 = uVar33;
        if (uVar33 < 3) {
          if ((int)local_d8 == 0) goto LAB_0062fea4;
          uVar22 = uVar33 + 8;
          uVar13 = (ulonglong)((int)uVar13 + ((uint)*pbVar41 << ((byte)uVar33 & 0x1f)));
          pbVar41 = pbVar41 + 1;
          local_d8 = (ulonglong)((int)local_d8 - 1);
        }
        uVar18 = uVar18 + 1;
        *(uint *)((longlong)puVar4 + 0x84) = uVar18;
        *(ushort *)
         ((longlong)puVar4 + (ulonglong)*(ushort *)(&DAT_01df1f40 + uVar31 * 2) * 2 + 0x90) =
             (ushort)uVar13 & 7;
        uVar31 = uVar13 >> 3 & 0x1fffffff;
        uVar33 = uVar22 - 3;
        uVar13 = uVar31;
        pbVar42 = pbVar41;
      } while (uVar18 < uVar24);
    }
    uVar13 = (ulonglong)uVar18;
    if (uVar18 < 0x13) {
      uVar20 = 0x12 - uVar13;
      uVar24 = 3 - uVar18 & 3;
      if (uVar24 != 0) {
        puVar30 = (ushort *)(&DAT_01df1f40 + uVar13 * 2);
        lVar25 = -(ulonglong)uVar24;
        do {
          uVar13 = uVar13 + 1;
          *(undefined2 *)((longlong)puVar4 + (ulonglong)*puVar30 * 2 + 0x90) = 0;
          puVar30 = puVar30 + 1;
          lVar25 = lVar25 + 1;
        } while (lVar25 != 0);
      }
      if (2 < uVar20) {
        lVar25 = uVar13 + 3;
        do {
          *(undefined2 *)
           ((longlong)puVar4 +
           (ulonglong)*(ushort *)(&UNWIND_INFO_01df1f28.field_0x12 + lVar25 * 2) * 2 + 0x90) = 0;
          *(undefined2 *)
           ((longlong)puVar4 +
           (ulonglong)*(ushort *)(&UNWIND_INFO_01df1f28.field_0x14 + lVar25 * 2) * 2 + 0x90) = 0;
          *(undefined2 *)
           ((longlong)puVar4 + (ulonglong)*(ushort *)(&DAT_01df1f3e + lVar25 * 2) * 2 + 0x90) = 0;
          *(undefined2 *)
           ((longlong)puVar4 + (ulonglong)*(ushort *)(&DAT_01df1f40 + lVar25 * 2) * 2 + 0x90) = 0;
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x16);
      }
      *(undefined4 *)((longlong)puVar4 + 0x84) = 0x13;
    }
    puVar4[0x11] = local_58;
    puVar4[0xc] = local_58;
    *(undefined4 *)(puVar4 + 0xe) = 7;
    uVar13 = 0;
    local_b0 = pbVar42;
    local_cc = FUN_006317a0(0,local_60,0x13,puVar34,local_50,local_68);
    puVar34 = local_b8;
    if (local_cc == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x84) = 0;
      *(undefined4 *)(puVar4 + 1) = 0x3f46;
      local_cc = 0;
      pbVar41 = local_b0;
      goto LAB_0062f745;
    }
    param_1[4] = (longlong)s_invalid_code_lengths_set_01df28b7;
    *puVar39 = 0x3f51;
    uVar24 = *puVar39;
    pbVar42 = local_b0;
    goto LAB_0062e869;
  case 0x3f46:
    uVar13 = (ulonglong)*(uint *)((longlong)puVar4 + 0x84);
LAB_0062f745:
    puVar29 = local_68;
    local_74 = *(int *)((longlong)puVar4 + 0x7c);
    uVar24 = *(int *)(puVar4 + 0x10) + local_74;
    puVar39 = local_90;
    if ((uint)uVar13 < uVar24) {
      lVar25 = puVar4[0xc];
      bVar9 = *(byte *)(puVar4 + 0xe);
      do {
        while( true ) {
          uVar18 = (uint)uVar31;
          uVar20 = (ulonglong)((1 << (bVar9 & 0x1f)) - 1U & uVar18);
          bVar36 = *(byte *)(lVar25 + 1 + uVar20 * 4);
          iVar23 = local_cc;
          if (bVar36 <= uVar33) break;
          if ((int)local_d8 == 0) {
            local_d8._0_4_ = 0;
            uVar13 = uVar31;
            goto switchD_0062e896_caseD_3f50;
          }
          local_d8 = (ulonglong)((int)local_d8 - 1);
          bVar36 = *pbVar41;
          pbVar41 = pbVar41 + 1;
          bVar15 = (byte)uVar33;
          uVar33 = uVar33 + 8;
          uVar31 = (ulonglong)(uVar18 + ((uint)bVar36 << (bVar15 & 0x1f)));
        }
        uVar37 = *(ushort *)(lVar25 + 2 + uVar20 * 4);
        uVar22 = (uint)uVar13;
        puVar34 = local_b8;
        if (0xf < uVar37) {
          if (uVar37 == 0x11) {
            for (; uVar33 < bVar36 + 3; uVar33 = uVar33 + 8) {
              if ((int)local_d8 == 0) goto LAB_0062ff16;
              local_d8 = (ulonglong)((int)local_d8 - 1);
              bVar15 = *pbVar41;
              pbVar41 = pbVar41 + 1;
              uVar18 = (int)uVar31 + ((uint)bVar15 << ((byte)uVar33 & 0x1f));
              uVar31 = (ulonglong)uVar18;
            }
            uVar18 = uVar18 >> (bVar36 & 0x1f);
            uVar35 = (uVar18 & 7) + 3;
            uVar18 = uVar18 >> 3;
            iVar16 = -3;
LAB_0062f900:
            local_a8 = (ulonglong)uVar18;
            uVar33 = uVar33 + (iVar16 - (uint)bVar36);
            uVar26 = 0;
            uVar18 = uVar35 + uVar22;
            if (uVar18 <= uVar24) {
LAB_0062f914:
              if ((uVar35 < 0x10) || (CARRY4(uVar35 - 1,uVar22))) {
LAB_0062fa21:
                uVar32 = (uint)uVar13;
                uVar22 = uVar35 - 1;
                uVar10 = (undefined2)uVar26;
                if ((uVar35 & 7) != 0) {
                  iVar16 = -(uVar35 & 7);
                  do {
                    uVar35 = uVar35 - 1;
                    uVar32 = (int)uVar13 + 1;
                    *(undefined2 *)((longlong)puVar4 + uVar13 * 2 + 0x90) = uVar10;
                    iVar16 = iVar16 + 1;
                    uVar13 = (ulonglong)uVar32;
                  } while (iVar16 != 0);
                }
                if (6 < uVar22) {
                  uVar22 = 0;
                  do {
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + uVar22) * 2 + 0x90) =
                         uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 1 + uVar22) * 2 + 0x90)
                         = uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 2 + uVar22) * 2 + 0x90)
                         = uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 3 + uVar22) * 2 + 0x90)
                         = uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 4 + uVar22) * 2 + 0x90)
                         = uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 5 + uVar22) * 2 + 0x90)
                         = uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 6 + uVar22) * 2 + 0x90)
                         = uVar10;
                    *(undefined2 *)((longlong)puVar4 + (ulonglong)(uVar32 + 7 + uVar22) * 2 + 0x90)
                         = uVar10;
                    uVar22 = uVar22 + 8;
                  } while (uVar35 != uVar22);
                }
              }
              else {
                uVar38 = uVar35 & 0xf0;
                auVar45 = pshuflw(ZEXT416(uVar26),ZEXT416(uVar26),0);
                uVar11 = auVar45._0_4_;
                uVar46 = auVar45._4_4_;
                uVar32 = uVar38 - 0x10 >> 4;
                uVar44 = uVar32 + 1 & 3;
                iVar16 = 0;
                if (0x2f < uVar38 - 0x10) {
                  iVar23 = (uVar44 - 1) - uVar32;
                  iVar16 = 0;
                  do {
                    puVar2 = (undefined4 *)
                             ((longlong)puVar4 + (ulonglong)(uVar22 + iVar16) * 2 + 0x90);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    puVar2 = (undefined4 *)
                             ((longlong)puVar4 + (ulonglong)(uVar22 + iVar16) * 2 + 0xa0);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    uVar31 = (ulonglong)(uVar22 + 0x10 + iVar16);
                    puVar2 = (undefined4 *)((longlong)puVar4 + uVar31 * 2 + 0x90);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    puVar2 = (undefined4 *)((longlong)puVar4 + uVar31 * 2 + 0xa0);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    uVar31 = (ulonglong)(uVar22 + 0x20 + iVar16);
                    puVar2 = (undefined4 *)((longlong)puVar4 + uVar31 * 2 + 0x90);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    puVar2 = (undefined4 *)((longlong)puVar4 + uVar31 * 2 + 0xa0);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    uVar31 = (ulonglong)(uVar22 + 0x30 + iVar16);
                    puVar2 = (undefined4 *)((longlong)puVar4 + uVar31 * 2 + 0x90);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    puVar2 = (undefined4 *)((longlong)puVar4 + uVar31 * 2 + 0xa0);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    iVar16 = iVar16 + 0x40;
                    iVar23 = iVar23 + 4;
                  } while (iVar23 != 0);
                }
                if (uVar44 != 0) {
                  uVar32 = iVar16 + uVar22;
                  iVar16 = -uVar44;
                  do {
                    puVar2 = (undefined4 *)((longlong)puVar4 + (ulonglong)uVar32 * 2 + 0x90);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    puVar2 = (undefined4 *)((longlong)puVar4 + (ulonglong)uVar32 * 2 + 0xa0);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar11;
                    puVar2[2] = uVar46;
                    puVar2[3] = uVar46;
                    uVar32 = uVar32 + 0x10;
                    iVar16 = iVar16 + 1;
                  } while (iVar16 != 0);
                }
                local_78 = uVar24;
                if (uVar35 != uVar38) {
                  uVar13 = (ulonglong)(uVar22 + uVar38);
                  uVar35 = uVar35 - uVar38;
                  goto LAB_0062fa21;
                }
              }
              *(uint *)((longlong)puVar4 + 0x84) = uVar18;
              local_b0 = pbVar41;
              goto LAB_0062fad7;
            }
          }
          else {
            if (uVar37 != 0x10) {
              for (; uVar33 < bVar36 + 7; uVar33 = uVar33 + 8) {
                if ((int)local_d8 == 0) goto LAB_0062ff16;
                local_d8 = (ulonglong)((int)local_d8 - 1);
                bVar15 = *pbVar41;
                pbVar41 = pbVar41 + 1;
                uVar18 = (int)uVar31 + ((uint)bVar15 << ((byte)uVar33 & 0x1f));
                uVar31 = (ulonglong)uVar18;
              }
              uVar18 = uVar18 >> (bVar36 & 0x1f);
              uVar35 = (uVar18 & 0x7f) + 0xb;
              uVar18 = uVar18 >> 7;
              iVar16 = -7;
              goto LAB_0062f900;
            }
            for (; uVar33 < bVar36 + 2; uVar33 = uVar33 + 8) {
              if ((int)local_d8 == 0) goto LAB_0062ff16;
              local_d8 = (ulonglong)((int)local_d8 - 1);
              bVar15 = *pbVar41;
              pbVar41 = pbVar41 + 1;
              uVar18 = (int)uVar31 + ((uint)bVar15 << ((byte)uVar33 & 0x1f));
              uVar31 = (ulonglong)uVar18;
            }
            uVar18 = uVar18 >> (bVar36 & 0x1f);
            local_a8 = (ulonglong)uVar18;
            uVar33 = uVar33 - bVar36;
            if (uVar22 != 0) {
              uVar26 = CONCAT22((short)(uVar22 - 1 >> 0x10),
                                *(undefined2 *)
                                 ((longlong)puVar4 + (ulonglong)(uVar22 - 1) * 2 + 0x90));
              uVar35 = (uVar18 & 3) + 3;
              local_a8 = (ulonglong)(uVar18 >> 2);
              uVar33 = uVar33 - 2;
              uVar18 = uVar35 + uVar22;
              if (uVar24 < uVar18) goto LAB_0062e840;
              goto LAB_0062f914;
            }
          }
LAB_0062e840:
          param_1[4] = (longlong)s_invalid_bit_length_repeat_01df28d0;
          *local_90 = 0x3f51;
          uVar24 = *local_90;
          uVar31 = local_a8;
          pbVar42 = pbVar41;
          goto LAB_0062e869;
        }
        local_a8 = (ulonglong)(uVar18 >> (bVar36 & 0x1f));
        uVar33 = uVar33 - bVar36;
        uVar18 = uVar22 + 1;
        *(uint *)((longlong)puVar4 + 0x84) = uVar18;
        *(ushort *)((longlong)puVar4 + uVar13 * 2 + 0x90) = uVar37;
LAB_0062fad7:
        uVar13 = (ulonglong)uVar18;
        uVar31 = local_a8;
      } while (uVar18 < uVar24);
    }
    pbVar42 = pbVar41;
    if (*(short *)(puVar4 + 0x52) == 0) {
      param_1[4] = (longlong)s_invalid_code____missing_end_of_b_01df28ea;
      *local_90 = 0x3f51;
      uVar24 = *local_90;
    }
    else {
      puVar4[0x11] = local_58;
      puVar4[0xc] = local_58;
      *(undefined4 *)(puVar4 + 0xe) = 9;
      local_a8 = uVar31;
      local_cc = FUN_006317a0(1,local_60,local_74,puVar34,local_50,local_68);
      if (local_cc == 0) {
        puVar4[0xd] = puVar4[0x11];
        *(undefined4 *)((longlong)puVar4 + 0x74) = 6;
        local_cc = FUN_006317a0(2,(longlong)puVar4 +
                                  (ulonglong)*(uint *)((longlong)puVar4 + 0x7c) * 2 + 0x90,
                                *(undefined4 *)(puVar4 + 0x10),puVar34,local_48,puVar29);
        uVar31 = local_a8;
        puVar39 = local_90;
        if (local_cc != 0) {
          param_1[4] = (longlong)s_invalid_distances_set_01df292b;
          *local_90 = 0x3f51;
          goto LAB_0062dc52;
        }
        local_cc = 0;
        *local_90 = 0x3f47;
        if ((int)local_80 == 6) {
          uVar13 = local_a8;
          iVar23 = 0;
          goto switchD_0062e896_caseD_3f50;
        }
switchD_0062e896_caseD_3f47:
        *puVar39 = 0x3f48;
switchD_0062e896_caseD_3f48:
        uVar24 = (uint)uVar31;
        if ((uVar27 < 0x102) || ((uint)local_d8 < 6)) {
          *(undefined4 *)((longlong)puVar4 + 0x1be4) = 0;
          lVar25 = puVar4[0xc];
          while( true ) {
            uVar13 = (ulonglong)((1 << (*(byte *)(puVar4 + 0xe) & 0x1f)) - 1U & uVar24);
            bVar9 = *(byte *)(lVar25 + 1 + uVar13 * 4);
            uVar18 = (uint)bVar9;
            uVar24 = (uint)uVar31;
            iVar23 = local_cc;
            if (uVar18 <= uVar33) break;
            if ((int)local_d8 == 0) {
              local_d8._0_4_ = 0;
              uVar13 = uVar31;
              goto switchD_0062e896_caseD_3f50;
            }
            local_d8 = (ulonglong)((int)local_d8 - 1);
            bVar9 = *pbVar41;
            pbVar41 = pbVar41 + 1;
            uVar24 = uVar24 + ((uint)bVar9 << ((byte)uVar33 & 0x1f));
            uVar31 = (ulonglong)uVar24;
            uVar33 = uVar33 + 8;
          }
          uVar37 = *(ushort *)(lVar25 + 2 + uVar13 * 4);
          bVar36 = *(byte *)(lVar25 + uVar13 * 4);
          if ((bVar36 == 0) || ((bVar36 & 0xf0) != 0)) {
            uVar18 = 0;
          }
          else {
            uVar22 = (1 << (bVar36 + bVar9 & 0x1f)) - 1;
            uVar13 = (ulonglong)(((uVar24 & uVar22) >> (bVar9 & 0x1f)) + (uint)uVar37);
            bVar15 = *(byte *)(lVar25 + 1 + uVar13 * 4);
            if (uVar33 < bVar15 + uVar18) {
              do {
                if ((int)local_d8 == 0) {
                  local_d8._0_4_ = 0;
                  uVar13 = uVar31;
                  goto switchD_0062e896_caseD_3f50;
                }
                local_d8 = (ulonglong)((int)local_d8 - 1);
                bVar36 = *pbVar41;
                pbVar41 = pbVar41 + 1;
                uVar24 = (int)uVar31 + ((uint)bVar36 << ((byte)uVar33 & 0x1f));
                uVar31 = (ulonglong)uVar24;
                uVar33 = uVar33 + 8;
                uVar13 = (ulonglong)(((uVar24 & uVar22) >> (bVar9 & 0x1f)) + (uint)uVar37);
                bVar15 = *(byte *)(lVar25 + 1 + uVar13 * 4);
              } while (uVar33 < uVar18 + bVar15);
            }
            uVar37 = *(ushort *)(lVar25 + 2 + uVar13 * 4);
            bVar36 = *(byte *)(lVar25 + uVar13 * 4);
            uVar24 = uVar24 >> (bVar9 & 0x1f);
            uVar33 = uVar33 - bVar9;
            *(uint *)((longlong)puVar4 + 0x1be4) = (uint)bVar9;
            bVar9 = bVar15;
          }
          uVar31 = (ulonglong)(uVar24 >> (bVar9 & 0x1f));
          uVar33 = uVar33 - bVar9;
          *(uint *)((longlong)puVar4 + 0x1be4) = uVar18 + bVar9;
          *(uint *)(puVar4 + 10) = (uint)uVar37;
          puVar34 = local_b8;
          pbVar42 = pbVar41;
          if (bVar36 == 0) {
            *puVar39 = 0x3f4d;
            uVar24 = *puVar39;
          }
          else if ((bVar36 & 0x20) == 0) {
            if ((bVar36 & 0x40) == 0) {
              uVar24 = bVar36 & 0xf;
              *(uint *)(puVar4 + 0xb) = uVar24;
              *(undefined4 *)(puVar4 + 1) = 0x3f49;
              if ((bVar36 & 0xf) == 0) {
LAB_0062e243:
                iVar16 = *(int *)(puVar4 + 10);
              }
              else {
LAB_0062ed2f:
                uVar18 = (uint)uVar31;
                uVar13 = uVar31;
                for (; uVar33 < uVar24; uVar33 = uVar33 + 8) {
                  if ((int)local_d8 == 0) goto LAB_0062fea4;
                  local_d8 = (ulonglong)((int)local_d8 - 1);
                  bVar9 = *pbVar41;
                  pbVar41 = pbVar41 + 1;
                  uVar18 = (int)uVar13 + ((uint)bVar9 << ((byte)uVar33 & 0x1f));
                  uVar13 = (ulonglong)uVar18;
                }
                iVar16 = ((1 << ((byte)uVar24 & 0x1f)) - 1U & uVar18) + *(int *)(puVar4 + 10);
                *(int *)(puVar4 + 10) = iVar16;
                uVar31 = (ulonglong)(uVar18 >> ((byte)uVar24 & 0x1f));
                uVar33 = uVar33 - uVar24;
                *(int *)((longlong)puVar4 + 0x1be4) = *(int *)((longlong)puVar4 + 0x1be4) + uVar24;
              }
              *(int *)(puVar4 + 0x37d) = iVar16;
              *(undefined4 *)(puVar4 + 1) = 0x3f4a;
switchD_0062e896_caseD_3f4a:
              lVar25 = puVar4[0xd];
              uVar18 = (1 << (*(byte *)((longlong)puVar4 + 0x74) & 0x1f)) - 1;
              uVar13 = (ulonglong)(uVar18 & (uint)uVar31);
              bVar9 = *(byte *)(lVar25 + 1 + uVar13 * 4);
              uVar24 = (uint)bVar9;
              puVar39 = local_90;
              iVar23 = local_cc;
              if (uVar33 < uVar24) {
                do {
                  if ((int)local_d8 == 0) {
                    local_d8._0_4_ = 0;
                    uVar13 = uVar31;
                    goto switchD_0062e896_caseD_3f50;
                  }
                  local_d8 = (ulonglong)((int)local_d8 - 1);
                  bVar9 = *pbVar41;
                  pbVar41 = pbVar41 + 1;
                  uVar24 = (int)uVar31 + ((uint)bVar9 << ((byte)uVar33 & 0x1f));
                  uVar31 = (ulonglong)uVar24;
                  uVar33 = uVar33 + 8;
                  uVar13 = (ulonglong)(uVar18 & uVar24);
                  bVar9 = *(byte *)(lVar25 + 1 + uVar13 * 4);
                  uVar24 = (uint)bVar9;
                } while (uVar33 < uVar24);
              }
              uVar18 = (uint)uVar31;
              uVar37 = *(ushort *)(lVar25 + 2 + uVar13 * 4);
              bVar36 = *(byte *)(lVar25 + uVar13 * 4);
              if ((bVar36 & 0xf0) == 0) {
                bVar15 = (byte)uVar24;
                uVar22 = (1 << (bVar36 + bVar15 & 0x1f)) - 1;
                uVar13 = (ulonglong)(((uVar18 & uVar22) >> (bVar15 & 0x1f)) + (uint)uVar37);
                bVar9 = *(byte *)(lVar25 + 1 + uVar13 * 4);
                if (uVar33 < bVar9 + uVar24) {
                  do {
                    if ((int)local_d8 == 0) {
                      local_d8._0_4_ = 0;
                      uVar13 = uVar31;
                      goto switchD_0062e896_caseD_3f50;
                    }
                    local_d8 = (ulonglong)((int)local_d8 - 1);
                    bVar9 = *pbVar41;
                    pbVar41 = pbVar41 + 1;
                    uVar18 = (int)uVar31 + ((uint)bVar9 << ((byte)uVar33 & 0x1f));
                    uVar31 = (ulonglong)uVar18;
                    uVar33 = uVar33 + 8;
                    uVar13 = (ulonglong)(((uVar18 & uVar22) >> (bVar15 & 0x1f)) + (uint)uVar37);
                    bVar9 = *(byte *)(lVar25 + 1 + uVar13 * 4);
                  } while (uVar33 < uVar24 + bVar9);
                }
                uVar37 = *(ushort *)(lVar25 + 2 + uVar13 * 4);
                bVar36 = *(byte *)(lVar25 + uVar13 * 4);
                uVar18 = uVar18 >> (bVar15 & 0x1f);
                uVar33 = uVar33 - uVar24;
                iVar16 = uVar24 + *(int *)((longlong)puVar4 + 0x1be4);
                *(int *)((longlong)puVar4 + 0x1be4) = iVar16;
              }
              else {
                iVar16 = *(int *)((longlong)puVar4 + 0x1be4);
              }
              uVar31 = (ulonglong)(uVar18 >> (bVar9 & 0x1f));
              uVar33 = uVar33 - bVar9;
              *(uint *)((longlong)puVar4 + 0x1be4) = iVar16 + (uint)bVar9;
              puVar34 = local_b8;
              if ((bVar36 & 0x40) == 0) {
                *(uint *)((longlong)puVar4 + 0x54) = (uint)uVar37;
                uVar24 = bVar36 & 0xf;
                *(uint *)(puVar4 + 0xb) = uVar24;
                *(undefined4 *)(puVar4 + 1) = 0x3f4b;
                if ((bVar36 & 0xf) != 0) {
LAB_0062e464:
                  uVar18 = (uint)uVar31;
                  uVar13 = uVar31;
                  for (; uVar33 < uVar24; uVar33 = uVar33 + 8) {
                    if ((int)local_d8 == 0) goto LAB_0062fea4;
                    local_d8 = (ulonglong)((int)local_d8 - 1);
                    bVar9 = *pbVar41;
                    pbVar41 = pbVar41 + 1;
                    uVar18 = (int)uVar13 + ((uint)bVar9 << ((byte)uVar33 & 0x1f));
                    uVar13 = (ulonglong)uVar18;
                  }
                  *(int *)((longlong)puVar4 + 0x54) =
                       *(int *)((longlong)puVar4 + 0x54) +
                       ((1 << ((byte)uVar24 & 0x1f)) - 1U & uVar18);
                  uVar31 = (ulonglong)(uVar18 >> ((byte)uVar24 & 0x1f));
                  uVar33 = uVar33 - uVar24;
                  *(int *)((longlong)puVar4 + 0x1be4) = *(int *)((longlong)puVar4 + 0x1be4) + uVar24
                  ;
                }
LAB_0062e4b9:
                *puVar39 = 0x3f4c;
                uVar13 = uVar31;
switchD_0062e896_caseD_3f4c:
                if (uVar27 == 0) {
LAB_0062ff6c:
                  uVar27 = 0;
                  iVar23 = local_cc;
                  goto switchD_0062e896_caseD_3f50;
                }
                uVar24 = *(uint *)((longlong)puVar4 + 0x54);
                pbVar42 = pbVar41;
                if (local_9c - uVar27 < uVar24) {
                  uVar24 = uVar24 - (local_9c - uVar27);
                  if ((*(uint *)(puVar4 + 7) < uVar24) && (*(int *)(puVar4 + 0x37c) != 0)) {
                    pcVar12 = s_invalid_distance_too_far_back_01df2973;
                    break;
                  }
                  uVar18 = *(uint *)((longlong)puVar4 + 0x3c);
                  uVar22 = uVar24 - uVar18;
                  if (uVar24 < uVar18 || uVar22 == 0) {
                    uVar18 = uVar18 - uVar24;
                  }
                  else {
                    uVar18 = *(int *)((longlong)puVar4 + 0x34) - uVar22;
                    uVar24 = uVar22;
                  }
                  puVar28 = (undefined1 *)((ulonglong)uVar18 + puVar4[8]);
                  uVar18 = *(uint *)(puVar4 + 10);
                  if (uVar18 < uVar24) {
                    uVar24 = uVar18;
                  }
                }
                else {
                  puVar28 = local_98 + -(ulonglong)uVar24;
                  uVar18 = *(uint *)(puVar4 + 10);
                  uVar24 = uVar18;
                }
                uVar22 = uVar24;
                if (uVar27 < uVar24) {
                  uVar22 = uVar27;
                }
                *(uint *)(puVar4 + 10) = uVar18 - uVar22;
                uVar31 = (ulonglong)(uVar22 - 1) + 1;
                puVar19 = local_98;
                uVar18 = uVar22;
                if (uVar31 < 0x20) {
LAB_0062e617:
                  uVar24 = uVar18 - 1;
                  if ((uVar18 & 7) != 0) {
                    iVar16 = -(uVar18 & 7);
                    do {
                      uVar3 = *puVar28;
                      puVar28 = puVar28 + 1;
                      *puVar19 = uVar3;
                      puVar19 = puVar19 + 1;
                      uVar18 = uVar18 - 1;
                      iVar16 = iVar16 + 1;
                    } while (iVar16 != 0);
                  }
                  if (6 < uVar24) {
                    do {
                      *puVar19 = *puVar28;
                      puVar19[1] = puVar28[1];
                      puVar19[2] = puVar28[2];
                      puVar19[3] = puVar28[3];
                      puVar19[4] = puVar28[4];
                      puVar19[5] = puVar28[5];
                      puVar19[6] = puVar28[6];
                      puVar19[7] = puVar28[7];
                      puVar28 = puVar28 + 8;
                      puVar19 = puVar19 + 8;
                      uVar18 = uVar18 - 8;
                    } while (uVar18 != 0);
                  }
                }
                else {
                  if (uVar27 < uVar24) {
                    uVar24 = uVar27;
                  }
                  if ((local_98 < puVar28 + (ulonglong)(uVar24 - 1) + 1) &&
                     (puVar28 < local_98 + (ulonglong)(uVar24 - 1) + 1)) goto LAB_0062e617;
                  lVar25 = uVar31 - (uVar22 & 0x1f);
                  puVar19 = local_98 + lVar25;
                  iVar16 = (int)lVar25;
                  puVar1 = puVar28 + lVar25;
                  puVar29 = (undefined8 *)(puVar28 + 0x10);
                  puVar34 = (undefined8 *)(local_98 + 0x10);
                  do {
                    uVar5 = puVar29[-1];
                    uVar6 = *puVar29;
                    uVar7 = puVar29[1];
                    puVar34[-2] = puVar29[-2];
                    puVar34[-1] = uVar5;
                    *puVar34 = uVar6;
                    puVar34[1] = uVar7;
                    puVar29 = puVar29 + 4;
                    puVar34 = puVar34 + 4;
                    lVar25 = lVar25 + -0x20;
                  } while (lVar25 != 0);
                  puVar28 = puVar1;
                  puVar34 = local_b8;
                  uVar18 = uVar22 - iVar16;
                  if ((uVar22 & 0x1f) != 0) goto LAB_0062e617;
                }
                uVar27 = uVar27 - uVar22;
                local_98 = local_98 + (ulonglong)(uVar22 - 1) + 1;
                if (*(int *)(puVar4 + 10) == 0) {
                  *puVar39 = 0x3f48;
                }
                uVar24 = *puVar39;
                uVar31 = uVar13;
                local_b0 = pbVar41;
                local_a8 = uVar13;
              }
              else {
                param_1[4] = (longlong)s_invalid_distance_code_01df295d;
                *local_90 = 0x3f51;
                uVar24 = *local_90;
                pbVar42 = pbVar41;
              }
            }
            else {
              param_1[4] = (longlong)s_invalid_literal_length_code_01df2941;
              *puVar39 = 0x3f51;
              uVar24 = *puVar39;
            }
          }
          else {
            *(undefined4 *)((longlong)puVar4 + 0x1be4) = 0xffffffff;
            *(undefined4 *)(puVar4 + 1) = 0x3f3f;
            uVar24 = *puVar39;
          }
        }
        else {
          param_1[2] = (longlong)local_98;
          *(uint *)(param_1 + 3) = uVar27;
          *param_1 = (longlong)pbVar41;
          *(uint *)(param_1 + 1) = (uint)local_d8;
          *(uint *)(puVar4 + 9) = uVar24;
          *(uint *)((longlong)puVar4 + 0x4c) = uVar33;
          FUN_00630cb0(param_1,local_9c);
          local_98 = (undefined1 *)param_1[2];
          uVar27 = *(uint *)(param_1 + 3);
          pbVar42 = (byte *)*param_1;
          local_d8 = (ulonglong)*(uint *)(param_1 + 1);
          uVar33 = *(uint *)((longlong)puVar4 + 0x4c);
          if (*(int *)(puVar4 + 1) == 0x3f3f) {
            *(undefined4 *)((longlong)puVar4 + 0x1be4) = 0xffffffff;
          }
          uVar24 = *puVar39;
          uVar31 = (ulonglong)*(uint *)(puVar4 + 9);
          puVar34 = local_b8;
        }
      }
      else {
        param_1[4] = (longlong)s_invalid_literal_lengths_set_01df290f;
        *local_90 = 0x3f51;
        uVar24 = *local_90;
        uVar31 = local_a8;
        puVar39 = local_90;
      }
    }
    goto LAB_0062e869;
  case 0x3f47:
    goto switchD_0062e896_caseD_3f47;
  case 0x3f48:
    goto switchD_0062e896_caseD_3f48;
  case 0x3f49:
    uVar24 = *(uint *)(puVar4 + 0xb);
    if (uVar24 != 0) goto LAB_0062ed2f;
    goto LAB_0062e243;
  case 0x3f4a:
    goto switchD_0062e896_caseD_3f4a;
  case 0x3f4b:
    uVar24 = *(uint *)(puVar4 + 0xb);
    if (uVar24 != 0) goto LAB_0062e464;
    goto LAB_0062e4b9;
  case 0x3f4c:
    goto switchD_0062e896_caseD_3f4c;
  case 0x3f4d:
    if (uVar27 == 0) goto LAB_0062ff6c;
    *local_98 = *(undefined1 *)(puVar4 + 10);
    local_98 = local_98 + 1;
    uVar27 = uVar27 - 1;
    *(undefined4 *)(puVar4 + 1) = 0x3f48;
    uVar24 = *puVar39;
    goto LAB_0062e869;
  case 0x3f4e:
    uVar24 = *(uint *)(puVar4 + 2);
    if (uVar24 == 0) {
LAB_0062df10:
      *puVar39 = 0x3f4f;
      uVar13 = uVar31;
      goto switchD_0062e896_caseD_3f4f;
    }
    if (0x1f < uVar33) goto LAB_0062f4f3;
    if (uVar22 == 0) goto LAB_00630281;
    local_d8 = (ulonglong)(uVar22 - 1);
    pbVar41 = pbVar42 + 1;
    uVar35 = uVar35 + ((uint)*pbVar42 << (bVar9 & 0x1f));
    uVar31 = (ulonglong)uVar35;
    uVar18 = uVar33 + 8;
    if (0x1f < uVar18) goto LAB_0062f4f3;
    if (uVar22 - 1 == 0) goto LAB_00630281;
    local_d8 = (ulonglong)(uVar22 - 2);
    pbVar41 = pbVar42 + 2;
    uVar35 = uVar35 + ((uint)pbVar42[1] << ((byte)uVar18 & 0x1f));
    uVar31 = (ulonglong)uVar35;
    uVar18 = uVar33 + 0x10;
    if (0x1f < uVar18) goto LAB_0062f4f3;
    if (uVar22 - 2 == 0) goto LAB_00630281;
    local_d8 = (ulonglong)(uVar22 - 3);
    pbVar41 = pbVar42 + 3;
    uVar35 = uVar35 + ((uint)pbVar42[2] << ((byte)uVar18 & 0x1f));
    uVar31 = (ulonglong)uVar35;
    uVar18 = uVar33 + 0x18;
    local_b0 = pbVar42;
    if (uVar18 < 0x20) {
      if (uVar22 - 3 == 0) {
        local_d8._0_4_ = 0;
        uVar33 = uVar18;
        iVar16 = local_cc;
        goto switchD_0062e896_caseD_3f51;
      }
      uVar26 = uVar22 - 4;
      pbVar41 = pbVar42 + 4;
      uVar35 = uVar35 + ((uint)pbVar42[3] << ((byte)uVar18 & 0x1f));
      uVar31 = (ulonglong)uVar35;
      uVar18 = uVar33 + 0x20;
      if (0xffffffdf < uVar33) {
        if (uVar26 == 0) {
          local_d8._0_4_ = 0;
          uVar33 = uVar18;
          iVar16 = local_cc;
          goto switchD_0062e896_caseD_3f51;
        }
        uVar26 = uVar22 - 5;
        pbVar41 = pbVar42 + 5;
        bVar9 = (byte)uVar18;
        uVar18 = uVar33 + 0x28;
        uVar31 = (ulonglong)(((uint)pbVar42[4] << (bVar9 & 0x1f)) + uVar35);
      }
      local_d8 = (ulonglong)uVar26;
      puVar34 = local_b8;
    }
LAB_0062f4f3:
    uVar33 = uVar18;
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + (local_9c - uVar27);
    *(int *)((longlong)puVar4 + 0x24) = *(int *)((longlong)puVar4 + 0x24) + (local_9c - uVar27);
    if ((local_9c - uVar27 != 0) && ((uVar24 & 4) != 0)) {
      if (*(int *)(puVar4 + 3) == 0) {
        uVar11 = FUN_006347b0(*(undefined4 *)(puVar4 + 4),
                              (longlong)local_98 - (ulonglong)(local_9c - uVar27));
      }
      else {
        uVar11 = FUN_00634c80();
      }
      *(undefined4 *)(puVar4 + 4) = uVar11;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
      uVar24 = *(uint *)(puVar4 + 2);
      puVar34 = local_b8;
    }
    local_9c = uVar27;
    if ((uVar24 & 4) == 0) {
LAB_0062dee0:
      uVar31 = 0;
      uVar33 = 0;
      goto LAB_0062df10;
    }
    uVar18 = (uint)uVar31;
    uVar24 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    if (*(int *)(puVar4 + 3) != 0) {
      uVar24 = uVar18;
    }
    if (uVar24 == *(uint *)(puVar4 + 4)) goto LAB_0062dee0;
    param_1[4] = (longlong)s_incorrect_data_check_01df2991;
    *puVar39 = 0x3f51;
    uVar24 = *puVar39;
    pbVar42 = pbVar41;
    goto LAB_0062e869;
  case 0x3f4f:
switchD_0062e896_caseD_3f4f:
    if ((*(int *)(puVar4 + 2) == 0) || (*(int *)(puVar4 + 3) == 0)) {
LAB_0062ffe5:
      *puVar39 = 0x3f50;
    }
    else {
      if (0x1f < uVar33) {
        uVar24 = (uint)local_d8;
        if ((int)uVar13 != *(int *)((longlong)puVar4 + 0x24)) {
LAB_0062e01f:
          pcVar12 = s_incorrect_length_check_01df29a6;
          pbVar42 = pbVar41;
          break;
        }
LAB_0062ffdb:
        local_d8._0_4_ = uVar24;
        uVar13 = 0;
        uVar33 = 0;
        goto LAB_0062ffe5;
      }
      uVar31 = uVar13;
      pbVar40 = pbVar41;
      uVar18 = uVar33;
      if ((uint)local_d8 != 0) {
        uVar31 = (ulonglong)((uint)local_d8 - 1);
        pbVar40 = pbVar41 + 1;
        uVar22 = (int)uVar13 + ((uint)*pbVar41 << ((byte)uVar33 & 0x1f));
        uVar13 = (ulonglong)uVar22;
        uVar18 = uVar33 + 8;
        if (0x1f < uVar18) {
LAB_0062e00d:
          uVar33 = uVar18;
          local_d8 = uVar31;
          pbVar41 = pbVar40;
          uVar24 = (uint)uVar31;
          if ((int)uVar13 != *(int *)((longlong)puVar4 + 0x24)) goto LAB_0062e01f;
          goto LAB_0062ffdb;
        }
        uVar31 = uVar13;
        if ((uint)local_d8 - 1 != 0) {
          uVar31 = (ulonglong)((uint)local_d8 - 2);
          pbVar40 = pbVar41 + 2;
          uVar22 = uVar22 + ((uint)pbVar41[1] << ((byte)uVar18 & 0x1f));
          uVar13 = (ulonglong)uVar22;
          uVar18 = uVar33 + 0x10;
          if (0x1f < uVar18) goto LAB_0062e00d;
          uVar31 = uVar13;
          if ((uint)local_d8 - 2 != 0) {
            uVar31 = (ulonglong)((uint)local_d8 - 3);
            pbVar40 = pbVar41 + 3;
            uVar22 = uVar22 + ((uint)pbVar41[2] << ((byte)uVar18 & 0x1f));
            uVar13 = (ulonglong)uVar22;
            uVar18 = uVar33 + 0x18;
            if (0x1f < uVar18) goto LAB_0062e00d;
            uVar31 = uVar13;
            if ((uint)local_d8 - 3 != 0) {
              uVar31 = (ulonglong)((uint)local_d8 - 4);
              pbVar40 = pbVar41 + 4;
              uVar22 = uVar22 + ((uint)pbVar41[3] << ((byte)uVar18 & 0x1f));
              uVar13 = (ulonglong)uVar22;
              uVar18 = uVar33 + 0x20;
              if (uVar33 < 0xffffffe0) goto LAB_0062e00d;
              uVar31 = uVar13;
              if ((uint)local_d8 - 4 != 0) {
                uVar24 = (uint)local_d8 - 5;
                pbVar42 = pbVar41 + 4;
                pbVar41 = pbVar41 + 5;
                uVar22 = ((uint)*pbVar42 << ((byte)uVar18 & 0x1f)) + uVar22;
                uVar33 = uVar33 + 0x28;
                uVar13 = (ulonglong)uVar22;
                local_d8 = (ulonglong)uVar24;
                if (uVar22 != *(uint *)((longlong)puVar4 + 0x24)) goto LAB_0062e01f;
                goto LAB_0062ffdb;
              }
            }
          }
        }
      }
LAB_00630027:
      pbVar41 = pbVar40;
      local_d8._0_4_ = 0;
      uVar33 = uVar18;
      iVar16 = local_cc;
switchD_0062e896_caseD_3f51:
      uVar13 = uVar31;
      iVar23 = iVar16;
    }
  case 0x3f50:
    goto switchD_0062e896_caseD_3f50;
  case 0x3f51:
    goto switchD_0062e896_caseD_3f51;
  case 0x3f52:
    return -4;
  default:
    return -2;
  }
  param_1[4] = (longlong)pcVar12;
  *puVar39 = 0x3f51;
  uVar24 = *puVar39;
  uVar31 = uVar13;
  goto LAB_0062e869;
LAB_0062ff16:
  local_d8._0_4_ = 0;
  uVar13 = uVar31;
switchD_0062e896_caseD_3f50:
  uVar24 = local_6c;
  param_1[2] = (longlong)local_98;
  *(uint *)(param_1 + 3) = uVar27;
  *param_1 = (longlong)pbVar41;
  *(uint *)(param_1 + 1) = (uint)local_d8;
  *(int *)(puVar4 + 9) = (int)uVar13;
  *(uint *)((longlong)puVar4 + 0x4c) = uVar33;
  if ((*(int *)((longlong)puVar4 + 0x34) != 0) ||
     (((local_9c != uVar27 && (*puVar39 < 0x3f51)) && (((int)local_80 != 4 || (*puVar39 < 0x3f4e))))
     )) {
    lVar25 = param_1[5];
    lVar14 = *(longlong *)(lVar25 + 0x40);
    if (lVar14 == 0) {
      lVar14 = (*(code *)param_1[6])(param_1[8],1 << (*(byte *)(lVar25 + 0x30) & 0x1f),1);
      *(longlong *)(lVar25 + 0x40) = lVar14;
      if (lVar14 == 0) {
        *puVar39 = 0x3f52;
        return -4;
      }
    }
    puVar28 = local_98;
    uVar27 = local_9c - uVar27;
    uVar33 = *(uint *)(lVar25 + 0x34);
    if (uVar33 == 0) {
      uVar33 = 1 << (*(byte *)(lVar25 + 0x30) & 0x1f);
      *(uint *)(lVar25 + 0x34) = uVar33;
      *(undefined8 *)(lVar25 + 0x38) = 0;
    }
    if (uVar27 < uVar33) {
      uVar33 = uVar33 - *(uint *)(lVar25 + 0x3c);
      if (uVar27 < uVar33) {
        uVar33 = uVar27;
      }
      FUN_00626670(lVar14 + (ulonglong)*(uint *)(lVar25 + 0x3c),
                   (longlong)local_98 - (ulonglong)uVar27,uVar33);
      uVar27 = uVar27 - uVar33;
      if (uVar27 == 0) {
        uVar18 = *(int *)(lVar25 + 0x3c) + uVar33;
        uVar27 = 0;
        if (uVar18 != *(uint *)(lVar25 + 0x34)) {
          uVar27 = uVar18;
        }
        *(uint *)(lVar25 + 0x3c) = uVar27;
        if (*(uint *)(lVar25 + 0x38) < *(uint *)(lVar25 + 0x34)) {
          *(uint *)(lVar25 + 0x38) = *(uint *)(lVar25 + 0x38) + uVar33;
        }
        goto LAB_0063015e;
      }
      FUN_00626670(*(undefined8 *)(lVar25 + 0x40),(longlong)puVar28 - (ulonglong)uVar27);
      *(uint *)(lVar25 + 0x3c) = uVar27;
    }
    else {
      FUN_00626670(lVar14,(longlong)local_98 - (ulonglong)uVar33);
      *(undefined4 *)(lVar25 + 0x3c) = 0;
    }
    *(undefined4 *)(lVar25 + 0x38) = *(undefined4 *)(lVar25 + 0x34);
  }
LAB_0063015e:
  uVar31 = local_80;
  iVar43 = uVar24 - (int)param_1[1];
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar43;
  lVar25 = param_1[3];
  iVar16 = local_9c - (int)lVar25;
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + iVar16;
  *(int *)((longlong)puVar4 + 0x24) = *(int *)((longlong)puVar4 + 0x24) + iVar16;
  uVar24 = local_9c - (int)lVar25;
  if ((uVar24 != 0) && ((*(uint *)(puVar4 + 2) & 4) != 0)) {
    if (*(int *)(puVar4 + 3) == 0) {
      uVar27 = FUN_006347b0(*(undefined4 *)(puVar4 + 4),param_1[2] - (ulonglong)uVar24,uVar24);
    }
    else {
      uVar27 = FUN_00634c80();
    }
    *local_88 = uVar27;
    *(uint *)((longlong)param_1 + 0x4c) = uVar27;
  }
  iVar16 = *(int *)(puVar4 + 1);
  iVar17 = 0x100;
  if (iVar16 != 0x3f47) {
    iVar17 = (uint)(iVar16 == 0x3f42) << 8;
  }
  *(uint *)(param_1 + 9) =
       iVar17 + (uint)(iVar16 == 0x3f3f) * 0x80 +
                (uint)(*(int *)((longlong)puVar4 + 0xc) != 0) * 0x40 +
                *(int *)((longlong)puVar4 + 0x4c);
  iVar16 = iVar23;
  if (uVar24 == 0 && iVar43 == 0) {
    iVar16 = -5;
  }
  if ((int)uVar31 == 4) {
    iVar16 = -5;
  }
  if (iVar23 != 0) {
    iVar16 = iVar23;
  }
  return iVar16;
}

