/* Ghidra address: 00bc89c0 */
/* Ghidra symbol: FUN_00bc89c0 */


char FUN_00bc89c0(undefined8 *param_1,ushort *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  ushort *puVar16;
  undefined4 uVar17;
  char local_d9;
  ushort *local_d8;
  short *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_60 [48];
  
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_d9 = '\0';
joined_r0x00bc8a4b:
  puVar12 = param_2;
  if (puVar12 == (ushort *)0x0) {
    (**(code **)*param_1)(param_1,0x3ea);
    goto LAB_00bc9cef;
  }
  if (*(int *)(puVar12 + 1) == 0) {
    local_d8 = (ushort *)0x0;
  }
  else {
    local_d8 = puVar12 + *(int *)(puVar12 + 1);
  }
  uVar7 = *puVar12;
  uVar10 = (ulonglong)uVar7;
  if (uVar10 < 0x14) {
    param_2 = local_d8;
    if (uVar10 == 0x13) goto joined_r0x00bc8a4b;
    if (uVar10 < 10) {
      param_2 = local_d8;
      if (uVar10 == 9) goto joined_r0x00bc8a4b;
      if (uVar10 < 5) {
        if (uVar10 == 4) {
          if ((*(short *)param_1[0x27] == 0) ||
             (lVar11 = FUN_00bc3cd0(puVar12 + 3,*(undefined2 *)param_1[0x27]), lVar11 == 0))
          goto LAB_00bc9cef;
          param_1[0x27] = param_1[0x27] + 2;
          param_2 = local_d8;
          goto joined_r0x00bc8a4b;
        }
        if (uVar10 == 0) {
          local_d9 = '\x01';
          goto LAB_00bc9cef;
        }
        if (uVar10 == 1) {
          param_2 = local_d8;
          if (param_1[0x27] != param_1[0x28]) goto LAB_00bc9cef;
          goto joined_r0x00bc8a4b;
        }
        if (uVar10 == 2) {
          param_2 = local_d8;
          if (*(short *)param_1[0x27] != 0) goto LAB_00bc9cef;
          goto joined_r0x00bc8a4b;
        }
        if (uVar10 == 3) {
          if (*(short *)param_1[0x27] == 0) goto LAB_00bc9cef;
          param_1[0x27] = param_1[0x27] + 2;
          param_2 = local_d8;
          goto joined_r0x00bc8a4b;
        }
      }
      else {
        if (uVar10 == 5) {
          if ((*(short *)param_1[0x27] == 0) ||
             (lVar11 = FUN_00bc3cd0(puVar12 + 3,*(undefined2 *)param_1[0x27]), lVar11 != 0))
          goto LAB_00bc9cef;
          param_1[0x27] = param_1[0x27] + 2;
          param_2 = local_d8;
          goto joined_r0x00bc8a4b;
        }
        if (uVar10 == 6) {
          if (*local_d8 == 6) goto LAB_00bc9793;
          param_2 = puVar12 + 3;
          goto joined_r0x00bc8a4b;
        }
        param_2 = local_d8;
        if (uVar10 == 7) goto joined_r0x00bc8a4b;
        if (uVar10 == 8) {
          puVar12 = puVar12 + 3;
          if (*puVar12 != *(ushort *)param_1[0x27]) goto LAB_00bc9cef;
          iVar9 = FUN_00bc3b80(puVar12);
          puVar16 = (ushort *)param_1[0x27];
          for (iVar13 = iVar9; 1 < iVar13; iVar13 = iVar13 + -1) {
            puVar16 = puVar16 + 1;
            puVar12 = puVar12 + 1;
            if (*puVar12 != *puVar16) goto LAB_00bc9cef;
          }
          param_1[0x27] = param_1[0x27] + (longlong)iVar9 * 2;
          param_2 = local_d8;
          goto joined_r0x00bc8a4b;
        }
      }
    }
    else if (uVar10 < 0x10) {
      if (uVar10 == 0xf) {
        if (*(short *)param_1[0x27] == 0) goto LAB_00bc9cef;
        FUN_00416780(&local_b0,*(undefined2 *)param_1[0x27]);
        iVar13 = FUN_004170c0(local_b0,param_1[0x36],1);
        if (0 < iVar13) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
        goto joined_r0x00bc8a4b;
      }
      if (uVar10 - 10 < 2) {
LAB_00bc9aad:
        uVar7 = 0;
        if (*local_d8 == 8) {
          uVar7 = local_d8[3];
        }
        uVar17 = 0x7fffffff;
        if ((*puVar12 == 10) || (*puVar12 == 0x1e)) {
          iVar13 = 0;
        }
        else if ((*puVar12 == 0xb) || (*puVar12 == 0x1f)) {
          iVar13 = 1;
        }
        else {
          iVar13 = *(int *)(puVar12 + 3);
          uVar17 = *(undefined4 *)(puVar12 + 5);
        }
        lVar11 = param_1[0x27];
        puVar16 = puVar12 + 3;
        if ((*puVar12 == 0x12) || (*puVar12 == 0x20)) {
          puVar16 = puVar12 + 7;
        }
        uVar2 = *puVar12;
        if (((uVar2 != 0x1f) && (uVar2 != 0x1e)) && (uVar2 != 0x20)) {
          iVar9 = FUN_00bc8300(param_1,puVar16,uVar17);
          goto joined_r0x00bc9c0a;
        }
        iVar9 = FUN_00bc8300(param_1,puVar16,uVar17);
        goto joined_r0x00bc9b4a;
      }
      if (uVar10 == 0xc) {
        uVar7 = *(ushort *)param_1[0x27];
        if (((uVar7 == 0) || (uVar7 < 0x30)) || (0x39 < uVar7)) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
        goto joined_r0x00bc8a4b;
      }
      if (uVar10 == 0xd) {
        if ((*(short *)param_1[0x27] == 0) ||
           ((0x2f < *(ushort *)param_1[0x27] && (*(ushort *)param_1[0x27] < 0x3a))))
        goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
        goto joined_r0x00bc8a4b;
      }
      if (uVar10 == 0xe) {
        if (*(short *)param_1[0x27] == 0) goto LAB_00bc9cef;
        FUN_00416780(&local_a8,*(short *)param_1[0x27]);
        iVar13 = FUN_004170c0(local_a8,param_1[0x36],1);
        if (iVar13 < 1) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
        goto joined_r0x00bc8a4b;
      }
    }
    else {
      if (uVar10 == 0x10) {
        if (*(short *)param_1[0x27] == 0) goto LAB_00bc9cef;
        FUN_00416780(&local_b8,*(undefined2 *)param_1[0x27]);
        iVar13 = FUN_004170c0(local_b8,param_1[0x35],1);
        if (iVar13 < 1) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
        goto joined_r0x00bc8a4b;
      }
      if (uVar10 == 0x11) {
        if (*(short *)param_1[0x27] == 0) goto LAB_00bc9cef;
        FUN_00416780(&local_c0,*(undefined2 *)param_1[0x27]);
        iVar13 = FUN_004170c0(local_c0,param_1[0x35],1);
        if (0 < iVar13) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
        goto joined_r0x00bc8a4b;
      }
      if (uVar10 == 0x12) goto LAB_00bc9aad;
    }
  }
  else {
    if (0x1d < uVar10) {
      if (uVar10 < 0x25) {
        if (uVar10 != 0x24) {
          if (uVar10 - 0x1e < 3) goto LAB_00bc9aad;
          if (uVar10 == 0x21) goto LAB_00bc9885;
          if (uVar10 == 0x22) {
            param_2 = local_d8;
            if (((ulonglong)param_1[0x27] <= (ulonglong)param_1[0x28]) ||
               (((sVar6 = *(short *)(param_1[0x27] + -2),
                 sVar6 == *(short *)((longlong)param_1 + 0x1d4) &&
                 ((ulonglong)param_1[0x28] < param_1[0x27] - 2)) &&
                (param_2 = local_d8,
                *(short *)(param_1[0x27] + -4) == *(short *)((longlong)param_1 + 0x1d2)))))
            goto joined_r0x00bc8a4b;
            if ((sVar6 == *(short *)((longlong)param_1 + 0x1d2)) &&
               (*(short *)param_1[0x27] == *(short *)((longlong)param_1 + 0x1d4)))
            goto LAB_00bc9cef;
            FUN_00416780(&local_90,sVar6);
            iVar13 = FUN_004170c0(local_90,param_1[0x39],1);
          }
          else {
            if (uVar10 != 0x23) goto LAB_00bc9cba;
            param_2 = local_d8;
            if ((*(short *)param_1[0x27] == 0) ||
               ((sVar6 = *(short *)param_1[0x27], sVar6 == *(short *)((longlong)param_1 + 0x1d2) &&
                (param_2 = local_d8,
                *(short *)(param_1[0x27] + 2) == *(short *)((longlong)param_1 + 0x1d4)))))
            goto joined_r0x00bc8a4b;
            if ((sVar6 == *(short *)((longlong)param_1 + 0x1d4)) &&
               (((ulonglong)param_1[0x28] < (ulonglong)param_1[0x27] &&
                (*(short *)(param_1[0x27] + -2) == *(short *)((longlong)param_1 + 0x1d2)))))
            goto LAB_00bc9cef;
            FUN_00416780(&local_98,sVar6);
            iVar13 = FUN_004170c0(local_98,param_1[0x39],1);
          }
          param_2 = local_d8;
          if (iVar13 < 1) goto LAB_00bc9cef;
          goto joined_r0x00bc8a4b;
        }
        if ((*(short *)param_1[0x27] == 0) ||
           ((*(short *)param_1[0x27] == *(short *)((longlong)param_1 + 0x1d2) &&
            (((short *)param_1[0x27])[1] == *(short *)((longlong)param_1 + 0x1d4)))))
        goto LAB_00bc9cef;
        FUN_00416780(&local_a0,*(undefined2 *)param_1[0x27]);
        iVar13 = FUN_004170c0(local_a0,param_1[0x39],1);
        if (0 < iVar13) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
      }
      else {
        if (1 < uVar10 - 0x25) {
          if (uVar10 - 0x28 < 0xe) {
            lVar11 = (longlong)(int)(uVar7 - 0x27);
            uVar3 = param_1[lVar11 + 1];
            param_1[lVar11 + 1] = param_1[0x27];
            local_d9 = FUN_00bc89c0(param_1,local_d8);
            if (local_d9 == '\0') {
              param_1[lVar11 + 1] = uVar3;
            }
          }
          else {
            if (0xd < uVar10 - 0x37) goto LAB_00bc9cba;
            lVar11 = (longlong)(int)(uVar7 - 0x36);
            uVar3 = param_1[lVar11 + 0x10];
            param_1[lVar11 + 0x10] = param_1[0x27];
            local_d9 = FUN_00bc89c0(param_1,local_d8);
            if (local_d9 == '\0') {
              param_1[lVar11 + 0x10] = uVar3;
            }
          }
          goto LAB_00bc9cef;
        }
        if (param_1[0x27] == param_1[0x28]) {
LAB_00bc8cd4:
          if (*(short *)param_1[0x27] == 0) goto LAB_00bc8d25;
          FUN_00416780(&local_78,*(undefined2 *)param_1[0x27]);
          iVar13 = FUN_004170c0(local_78,param_1[0x36],1);
          if (iVar13 < 1) goto LAB_00bc8d25;
          goto LAB_00bc8db6;
        }
        FUN_00416780(local_70,*(undefined2 *)(param_1[0x27] + -2));
        iVar13 = FUN_004170c0(local_70[0],param_1[0x36],1);
        if (iVar13 < 1) goto LAB_00bc8cd4;
LAB_00bc8d25:
        if (param_1[0x27] == param_1[0x28]) {
LAB_00bc8db2:
          bVar4 = false;
        }
        else {
          FUN_00416780(&local_80,*(undefined2 *)(param_1[0x27] + -2));
          iVar13 = FUN_004170c0(local_80,param_1[0x36],1);
          if (iVar13 < 1) goto LAB_00bc8db2;
          if (*(short *)param_1[0x27] != 0) {
            FUN_00416780(&local_88,*(short *)param_1[0x27]);
            iVar13 = FUN_004170c0(local_88,param_1[0x36],1);
            if (0 < iVar13) goto LAB_00bc8db2;
          }
LAB_00bc8db6:
          bVar4 = true;
        }
        param_2 = local_d8;
        if ((uVar7 == 0x25) != bVar4) goto LAB_00bc9cef;
      }
      goto joined_r0x00bc8a4b;
    }
    if (uVar10 == 0x1d) {
      uVar14 = (uint)puVar12[3];
      if ((param_1[(longlong)(int)uVar14 + 1] == 0) || (param_1[(longlong)(int)uVar14 + 0x10] == 0))
      goto LAB_00bc9cef;
      local_d0 = (short *)param_1[0x27];
      for (psVar15 = (short *)param_1[(longlong)(int)uVar14 + 1];
          psVar15 < (short *)param_1[(longlong)(int)uVar14 + 0x10]; psVar15 = psVar15 + 1) {
        if ((short *)param_1[0x29] <= local_d0) goto LAB_00bc9cef;
        sVar6 = *local_d0;
        if ((sVar6 != *psVar15) &&
           (sVar8 = (*(code *)param_1[0x37])(param_1[0x38],*psVar15), sVar6 != sVar8))
        goto LAB_00bc9cef;
        local_d0 = local_d0 + 1;
      }
      param_1[0x27] = local_d0;
      param_2 = local_d8;
      goto joined_r0x00bc8a4b;
    }
    if (0x18 < uVar10) {
      if (uVar10 == 0x19) {
        if ((*(short *)param_1[0x27] == 0) ||
           (((uVar7 = *(ushort *)param_1[0x27], uVar7 != puVar12[3] && (uVar7 != puVar12[4])) &&
            (uVar7 != puVar12[5])))) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
      }
      else if (uVar10 == 0x1a) {
        uVar7 = *(ushort *)param_1[0x27];
        if (((uVar7 == 0) || (uVar7 == puVar12[3])) ||
           ((uVar7 == puVar12[4] || (uVar7 == puVar12[5])))) goto LAB_00bc9cef;
        param_1[0x27] = param_1[0x27] + 2;
        param_2 = local_d8;
      }
      else {
        if (uVar10 != 0x1c) goto LAB_00bc9cba;
        uVar14 = (uint)puVar12[3];
        if ((param_1[(longlong)(int)uVar14 + 1] == 0) ||
           (param_1[(longlong)(int)uVar14 + 0x10] == 0)) goto LAB_00bc9cef;
        local_d0 = (short *)param_1[0x27];
        for (psVar15 = (short *)param_1[(longlong)(int)uVar14 + 1];
            psVar15 < (short *)param_1[(longlong)(int)uVar14 + 0x10]; psVar15 = psVar15 + 1) {
          if (((short *)param_1[0x29] <= local_d0) || (*local_d0 != *psVar15)) goto LAB_00bc9cef;
          local_d0 = local_d0 + 1;
        }
        param_1[0x27] = local_d0;
        param_2 = local_d8;
      }
      goto joined_r0x00bc8a4b;
    }
    if (uVar10 == 0x18) {
LAB_00bc9885:
      if (*(int *)(param_1 + 0x24) < 1) {
        (**(code **)*param_1)(param_1,0x3f7);
        goto LAB_00bc9cef;
      }
      puVar16 = puVar12 + *(int *)(puVar12 + 7);
      iVar13 = *(int *)(puVar12 + 5);
      uVar3 = param_1[0x27];
      if (*(int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4) <
          *(int *)(puVar12 + 3)) {
        piVar1 = (int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4);
        *piVar1 = *piVar1 + 1;
        uVar17 = *(undefined4 *)(param_1 + 0x24);
        local_d9 = FUN_00bc89c0(param_1,puVar16);
        *(undefined4 *)(param_1 + 0x24) = uVar17;
        if (local_d9 == '\0') {
          piVar1 = (int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4);
          *piVar1 = *piVar1 + -1;
          param_1[0x27] = uVar3;
        }
        goto LAB_00bc9cef;
      }
      if (*puVar12 == 0x18) {
        if (*(int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4) < iVar13) {
          piVar1 = (int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4);
          *piVar1 = *piVar1 + 1;
          uVar17 = *(undefined4 *)(param_1 + 0x24);
          local_d9 = FUN_00bc89c0(param_1,puVar16);
          *(undefined4 *)(param_1 + 0x24) = uVar17;
          if (local_d9 != '\0') goto LAB_00bc9cef;
          param_1[0x27] = uVar3;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        local_d9 = FUN_00bc89c0(param_1,local_d8);
        if (local_d9 == '\0') {
          param_1[0x27] = uVar3;
        }
      }
      else {
        local_d9 = FUN_00bc89c0(param_1,local_d8);
        if (local_d9 != '\0') goto LAB_00bc9cef;
        param_1[0x27] = uVar3;
        if (*(int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4) < iVar13) {
          piVar1 = (int *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4);
          *piVar1 = *piVar1 + 1;
          uVar17 = *(undefined4 *)(param_1 + 0x24);
          local_d9 = FUN_00bc89c0(param_1,puVar16);
          *(undefined4 *)(param_1 + 0x24) = uVar17;
          if (local_d9 != '\0') goto LAB_00bc9cef;
          param_1[0x27] = uVar3;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      }
      goto LAB_00bc9cef;
    }
    if (uVar10 == 0x14) {
      puVar12 = puVar12 + 3;
      if ((*puVar12 != *(ushort *)param_1[0x27]) &&
         (sVar6 = (*(code *)param_1[0x37])(param_1[0x38],*puVar12), sVar6 != *(short *)param_1[0x27]
         )) goto LAB_00bc9cef;
      iVar9 = FUN_00bc3b80(puVar12);
      puVar16 = (ushort *)param_1[0x27];
      for (iVar13 = iVar9; 1 < iVar13; iVar13 = iVar13 + -1) {
        puVar16 = puVar16 + 1;
        puVar12 = puVar12 + 1;
        if ((*puVar12 != *puVar16) &&
           (uVar7 = (*(code *)param_1[0x37])(param_1[0x38],*puVar12), uVar7 != *puVar16))
        goto LAB_00bc9cef;
      }
      param_1[0x27] = param_1[0x27] + (longlong)iVar9 * 2;
      param_2 = local_d8;
      goto joined_r0x00bc8a4b;
    }
    if (uVar10 == 0x15) {
      if ((*(short *)param_1[0x27] == 0) ||
         (lVar11 = FUN_00bc82a0(param_1,puVar12 + 3,*(undefined2 *)param_1[0x27]), lVar11 == 0))
      goto LAB_00bc9cef;
      param_1[0x27] = param_1[0x27] + 2;
      param_2 = local_d8;
      goto joined_r0x00bc8a4b;
    }
    if (uVar10 == 0x16) {
      if ((*(short *)param_1[0x27] == 0) ||
         (lVar11 = FUN_00bc82a0(param_1,puVar12 + 3,*(undefined2 *)param_1[0x27]), lVar11 != 0))
      goto LAB_00bc9cef;
      param_1[0x27] = param_1[0x27] + 2;
      param_2 = local_d8;
      goto joined_r0x00bc8a4b;
    }
    if (uVar10 == 0x17) {
      uVar17 = *(undefined4 *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      if (*(int *)(param_1 + 0x24) < 0xb) {
        uVar3 = param_1[0x27];
        *(undefined4 *)((longlong)param_1 + (longlong)*(int *)(param_1 + 0x24) * 4 + 0xf4) = 0;
        local_d9 = FUN_00bc89c0(param_1,local_d8);
        *(undefined4 *)(param_1 + 0x24) = uVar17;
        if (local_d9 == '\0') {
          param_1[0x27] = uVar3;
        }
      }
      else {
        (**(code **)*param_1)(param_1,0x3f6);
      }
      goto LAB_00bc9cef;
    }
  }
LAB_00bc9cba:
  (**(code **)*param_1)(param_1,0x3e9);
  goto LAB_00bc9cef;
joined_r0x00bc9b4a:
  if (iVar9 < iVar13) goto LAB_00bc9cef;
  param_1[0x27] = lVar11 + (longlong)iVar13 * 2;
  if ((uVar7 == 0) || (*(ushort *)param_1[0x27] == uVar7)) {
    FUN_00409a70(param_1 + 0x1f,local_60,0x28);
    uVar17 = *(undefined4 *)(param_1 + 0x24);
    cVar5 = FUN_00bc89c0(param_1,local_d8);
    if (cVar5 != '\0') {
      local_d9 = '\x01';
      goto LAB_00bc9cef;
    }
    FUN_00409a70(local_60,param_1 + 0x1f,0x28);
    *(undefined4 *)(param_1 + 0x24) = uVar17;
  }
  iVar13 = iVar13 + 1;
  goto joined_r0x00bc9b4a;
joined_r0x00bc9c0a:
  if (iVar9 < iVar13) goto LAB_00bc9cef;
  if ((uVar7 == 0) || (*(ushort *)param_1[0x27] == uVar7)) {
    FUN_00409a70(param_1 + 0x1f,local_60,0x28);
    uVar17 = *(undefined4 *)(param_1 + 0x24);
    cVar5 = FUN_00bc89c0(param_1,local_d8);
    if (cVar5 != '\0') {
      local_d9 = '\x01';
      goto LAB_00bc9cef;
    }
    FUN_00409a70(local_60,param_1 + 0x1f,0x28);
    *(undefined4 *)(param_1 + 0x24) = uVar17;
  }
  iVar9 = iVar9 + -1;
  param_1[0x27] = lVar11 + (longlong)iVar9 * 2;
  goto joined_r0x00bc9c0a;
LAB_00bc9793:
  uVar3 = param_1[0x27];
  local_d9 = FUN_00bc89c0(param_1,puVar12 + 3);
  if (local_d9 != '\0') {
LAB_00bc9cef:
    FUN_00414560(&local_c0,0xb);
    return local_d9;
  }
  param_1[0x27] = uVar3;
  puVar12 = (ushort *)FUN_00bc8990(param_1,puVar12);
  if ((puVar12 == (ushort *)0x0) || (*puVar12 != 6)) goto LAB_00bc9cef;
  goto LAB_00bc9793;
}

