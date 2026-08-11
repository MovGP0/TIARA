/* Ghidra address: 00a19f90 */
/* Ghidra symbol: FUN_00a19f90 */


undefined8 FUN_00a19f90(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  uint uVar19;
  byte *pbVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  uint uVar25;
  bool bVar26;
  byte local_158 [256];
  undefined4 local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  byte local_48;
  
  uVar25 = *(uint *)((longlong)param_1 + 0x21c);
  do {
    if (uVar25 == 0) {
      if (*(int *)(param_1[0x49] + 0x18) == 0) {
        puVar13 = (undefined8 *)param_1[5];
        lVar23 = puVar13[1];
        if (lVar23 == 0) {
          iVar10 = (*(code *)puVar13[3])(param_1);
          if (iVar10 == 0) {
            return 0;
          }
          lVar23 = puVar13[1];
        }
        bVar1 = *(byte *)*puVar13;
        lVar23 = lVar23 + -1;
        if (lVar23 == 0) {
          iVar10 = (*(code *)puVar13[3])(param_1);
          if (iVar10 == 0) {
            return 0;
          }
          pbVar20 = (byte *)*puVar13;
          lVar23 = puVar13[1];
        }
        else {
          pbVar20 = (byte *)*puVar13 + 1;
        }
        bVar2 = *pbVar20;
        uVar25 = (uint)bVar2;
        if ((bVar1 != 0xff) || (bVar2 != 0xd8)) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x35;
          *(uint *)((longlong)puVar6 + 0x2c) = (uint)bVar1;
          *(uint *)(puVar6 + 6) = (uint)bVar2;
          (*(code *)*puVar6)(param_1);
        }
        *(uint *)((longlong)param_1 + 0x21c) = (uint)bVar2;
        *puVar13 = pbVar20 + 1;
        puVar13[1] = lVar23 + -1;
      }
      else {
        iVar10 = FUN_00a19c80(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        uVar25 = *(uint *)((longlong)param_1 + 0x21c);
      }
    }
    if (uVar25 < 0xc0) {
      if (uVar25 != 1) goto switchD_00a1a0c9_caseD_de;
switchD_00a1a0c9_caseD_d0:
      lVar23 = *param_1;
      *(undefined4 *)(lVar23 + 0x28) = 0x5c;
      *(undefined4 *)(lVar23 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x21c);
      (**(code **)(lVar23 + 8))(param_1);
      goto LAB_00a19fc0;
    }
    switch(uVar25) {
    case 0xc0:
    case 0xc1:
      uVar17 = 0;
      goto LAB_00a1a16c;
    case 0xc2:
      uVar17 = 1;
LAB_00a1a16c:
      iVar10 = FUN_00a1b8f0(param_1,uVar17,0);
      break;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      puVar13 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar13 + 5) = 0x3c;
      goto LAB_00a1a10a;
    case 0xc4:
      puVar13 = (undefined8 *)param_1[5];
      lVar23 = puVar13[1];
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        lVar23 = puVar13[1];
      }
      uVar3 = *(undefined1 *)*puVar13;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        puVar18 = (undefined1 *)*puVar13 + 1;
      }
      iVar10 = CONCAT11(uVar3,*puVar18) - 2;
      pbVar20 = puVar18 + 1;
      lVar23 = lVar23 + -1;
      while (0x10 < iVar10) {
        if (lVar23 == 0) {
          iVar11 = (*(code *)puVar13[3])(param_1);
          if (iVar11 == 0) {
            return 0;
          }
          pbVar20 = (byte *)*puVar13;
          lVar23 = puVar13[1];
        }
        bVar1 = *pbVar20;
        uVar25 = (uint)bVar1;
        lVar15 = *param_1;
        *(undefined4 *)(lVar15 + 0x28) = 0x50;
        *(uint *)(lVar15 + 0x2c) = (uint)bVar1;
        (**(code **)(lVar15 + 8))(param_1,1);
        local_58 = local_58 & 0xffffff00;
        lVar23 = lVar23 + -1;
        pbVar20 = pbVar20 + 1;
        iVar11 = 0;
        lVar15 = 1;
        do {
          if (lVar23 == 0) {
            iVar12 = (*(code *)puVar13[3])(param_1);
            if (iVar12 == 0) {
              return 0;
            }
            pbVar20 = (byte *)*puVar13;
            lVar23 = puVar13[1];
          }
          bVar2 = *pbVar20;
          *(byte *)((longlong)&local_58 + lVar15) = bVar2;
          uVar8 = uStack_4c;
          uVar19 = uStack_50;
          iVar11 = iVar11 + (uint)bVar2;
          lVar23 = lVar23 + -1;
          pbVar20 = pbVar20 + 1;
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < 0x11);
        lVar15 = *param_1;
        *(uint *)(lVar15 + 0x2c) = local_58 >> 8 & 0xff;
        *(uint *)(lVar15 + 0x30) = local_58 >> 0x10 & 0xff;
        *(uint *)(lVar15 + 0x34) = local_58 >> 0x18;
        *(uint *)(lVar15 + 0x38) = uStack_54 & 0xff;
        *(uint *)(lVar15 + 0x3c) = uStack_54 >> 8 & 0xff;
        *(uint *)(lVar15 + 0x40) = uStack_54 >> 0x10 & 0xff;
        *(uint *)(lVar15 + 0x44) = uStack_54 >> 0x18;
        uVar17 = CONCAT44(uStack_4c,uStack_50);
        uVar7 = uStack_50 >> 0x18;
        *(uint *)(lVar15 + 0x48) = uStack_50 & 0xff;
        *(undefined4 *)(lVar15 + 0x28) = 0x56;
        (**(code **)(lVar15 + 8))(param_1,2);
        lVar15 = *param_1;
        *(uint *)(lVar15 + 0x2c) = uVar19 >> 8 & 0xff;
        *(uint *)(lVar15 + 0x30) = (uint)((ulonglong)uVar17 >> 0x10) & 0xff;
        *(uint *)(lVar15 + 0x34) = uVar7;
        *(uint *)(lVar15 + 0x38) = uVar8 & 0xff;
        *(uint *)(lVar15 + 0x3c) = (uVar8 & 0xff00) >> 8;
        *(uint *)(lVar15 + 0x40) = (uint)((ushort)(uVar8 >> 0x10) & 0xff);
        *(uint *)(lVar15 + 0x44) = uVar8 >> 0x18;
        *(uint *)(lVar15 + 0x48) = (uint)local_48;
        *(undefined4 *)(lVar15 + 0x28) = 0x56;
        (**(code **)(lVar15 + 8))(param_1,2);
        if ((0x100 < iVar11) || (iVar10 + -0x11 < iVar11)) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 8;
          (*(code *)*puVar6)();
        }
        lVar15 = 0;
        if (0 < iVar11) {
          do {
            if (lVar23 == 0) {
              iVar12 = (*(code *)puVar13[3])(param_1);
              if (iVar12 == 0) {
                return 0;
              }
              pbVar20 = (byte *)*puVar13;
              lVar23 = puVar13[1];
            }
            local_158[lVar15] = *pbVar20;
            pbVar20 = pbVar20 + 1;
            lVar23 = lVar23 + -1;
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < iVar11);
        }
        iVar10 = (iVar10 + -0x11) - iVar11;
        if ((bVar1 & 0x10) == 0) {
          lVar15 = (ulonglong)bVar1 + 0x1d;
        }
        else {
          uVar25 = bVar1 - 0x10;
          lVar15 = (longlong)(int)uVar25 + 0x21;
        }
        plVar21 = param_1 + lVar15;
        if (3 < uVar25) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x1e;
          *(uint *)((longlong)puVar6 + 0x2c) = uVar25;
          (*(code *)*puVar6)();
        }
        puVar14 = (uint *)*plVar21;
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)FUN_00a1bde0(param_1);
          *plVar21 = (longlong)puVar14;
        }
        *(byte *)(puVar14 + 4) = local_48;
        *puVar14 = local_58;
        puVar14[1] = uStack_54;
        puVar14[2] = uStack_50;
        puVar14[3] = uStack_4c;
        FUN_00626670(*plVar21 + 0x11,local_158,0x100);
      }
      if (iVar10 != 0) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0xb;
        (*(code *)*puVar6)();
      }
      *puVar13 = pbVar20;
      puVar13[1] = lVar23;
      goto LAB_00a19fc0;
    case 0xc9:
      iVar10 = FUN_00a1b8f0(param_1,0,1);
      break;
    case 0xca:
      iVar10 = FUN_00a1b8f0(param_1,1,1);
      break;
    case 0xcc:
    case 0xdc:
      iVar10 = FUN_00a1af10(param_1);
      break;
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      goto switchD_00a1a0c9_caseD_d0;
    case 0xd8:
      lVar23 = *param_1;
      *(undefined4 *)(lVar23 + 0x28) = 0x66;
      (**(code **)(lVar23 + 8))(param_1,1);
      lVar23 = param_1[0x49];
      if (*(int *)(lVar23 + 0x18) != 0) {
        puVar13 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar13 + 5) = 0x3d;
        (*(code *)*puVar13)(param_1);
        lVar23 = param_1[0x49];
      }
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      *(undefined1 *)(param_1 + 0x2c) = 5;
      *(undefined1 *)((longlong)param_1 + 0x141) = 0;
      *(undefined1 *)((longlong)param_1 + 0x151) = 1;
      *(undefined1 *)((longlong)param_1 + 0x161) = 5;
      *(undefined1 *)((longlong)param_1 + 0x142) = 0;
      *(undefined1 *)((longlong)param_1 + 0x152) = 1;
      *(undefined1 *)((longlong)param_1 + 0x162) = 5;
      *(undefined1 *)((longlong)param_1 + 0x143) = 0;
      *(undefined1 *)((longlong)param_1 + 0x153) = 1;
      *(undefined1 *)((longlong)param_1 + 0x163) = 5;
      *(undefined1 *)((longlong)param_1 + 0x144) = 0;
      *(undefined1 *)((longlong)param_1 + 0x154) = 1;
      *(undefined1 *)((longlong)param_1 + 0x164) = 5;
      *(undefined1 *)((longlong)param_1 + 0x145) = 0;
      *(undefined1 *)((longlong)param_1 + 0x155) = 1;
      *(undefined1 *)((longlong)param_1 + 0x165) = 5;
      *(undefined1 *)((longlong)param_1 + 0x146) = 0;
      *(undefined1 *)((longlong)param_1 + 0x156) = 1;
      *(undefined1 *)((longlong)param_1 + 0x166) = 5;
      *(undefined1 *)((longlong)param_1 + 0x147) = 0;
      *(undefined1 *)((longlong)param_1 + 0x157) = 1;
      *(undefined1 *)((longlong)param_1 + 0x167) = 5;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 1;
      *(undefined1 *)(param_1 + 0x2d) = 5;
      *(undefined1 *)((longlong)param_1 + 0x149) = 0;
      *(undefined1 *)((longlong)param_1 + 0x159) = 1;
      *(undefined1 *)((longlong)param_1 + 0x169) = 5;
      *(undefined1 *)((longlong)param_1 + 0x14a) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
      *(undefined1 *)((longlong)param_1 + 0x16a) = 5;
      *(undefined1 *)((longlong)param_1 + 0x14b) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15b) = 1;
      *(undefined1 *)((longlong)param_1 + 0x16b) = 5;
      *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15c) = 1;
      *(undefined1 *)((longlong)param_1 + 0x16c) = 5;
      *(undefined1 *)((longlong)param_1 + 0x14d) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15d) = 1;
      *(undefined1 *)((longlong)param_1 + 0x16d) = 5;
      *(undefined1 *)((longlong)param_1 + 0x14e) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15e) = 1;
      *(undefined1 *)((longlong)param_1 + 0x16e) = 5;
      *(undefined1 *)((longlong)param_1 + 0x14f) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15f) = 1;
      *(undefined1 *)((longlong)param_1 + 0x16f) = 5;
      *(undefined4 *)(param_1 + 0x2e) = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x31) = 0;
      *(undefined4 *)((longlong)param_1 + 0x174) = 0;
      *(undefined1 *)(param_1 + 0x2f) = 1;
      *(undefined1 *)((longlong)param_1 + 0x179) = 1;
      *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
      *(undefined2 *)((longlong)param_1 + 0x17c) = 1;
      *(undefined2 *)((longlong)param_1 + 0x17e) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)((longlong)param_1 + 0x184) = 0;
      *(undefined4 *)(lVar23 + 0x18) = 1;
      goto LAB_00a19fc0;
    case 0xd9:
      lVar23 = *param_1;
      *(undefined4 *)(lVar23 + 0x28) = 0x55;
      (**(code **)(lVar23 + 8))(param_1,1);
      *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
      return 2;
    case 0xda:
      puVar13 = (undefined8 *)param_1[5];
      puVar18 = (undefined1 *)*puVar13;
      lVar23 = puVar13[1];
      if (*(int *)(param_1[0x49] + 0x1c) == 0) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x3e;
        (*(code *)*puVar6)(param_1);
      }
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      uVar3 = *puVar18;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        puVar18 = puVar18 + 1;
      }
      uVar4 = *puVar18;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        pbVar20 = (byte *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        pbVar20 = puVar18 + 1;
      }
      bVar1 = *pbVar20;
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + 0x28) = 0x67;
      *(uint *)(lVar15 + 0x2c) = (uint)bVar1;
      (**(code **)(lVar15 + 8))(param_1,1);
      if (((CONCAT11(uVar3,uVar4) != (ushort)(bVar1 + 6 + (ushort)bVar1)) || (bVar1 == 0)) ||
         (4 < bVar1)) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0xb;
        (*(code *)*puVar6)();
      }
      *(uint *)(param_1 + 0x36) = (uint)bVar1;
      pbVar20 = pbVar20 + 1;
      lVar23 = lVar23 + -1;
      bVar26 = lVar23 == 0;
      if (bVar1 != 0) {
        lVar15 = 0;
        do {
          if (bVar26) {
            iVar10 = (*(code *)puVar13[3])(param_1);
            if (iVar10 == 0) {
              return 0;
            }
            pbVar20 = (byte *)*puVar13;
            lVar23 = puVar13[1];
          }
          bVar2 = *pbVar20;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) {
            iVar10 = (*(code *)puVar13[3])(param_1);
            if (iVar10 == 0) {
              return 0;
            }
            pbVar20 = (byte *)*puVar13;
            lVar23 = puVar13[1];
          }
          else {
            pbVar20 = pbVar20 + 1;
          }
          puVar14 = (uint *)param_1[0x26];
          bVar5 = *pbVar20;
          iVar10 = 0;
          uVar25 = (uint)bVar2;
          if (0 < (int)param_1[7]) {
            do {
              if (uVar25 == *puVar14) goto LAB_00a1ac04;
              puVar14 = puVar14 + 0x18;
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)param_1[7]);
          }
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 5;
          *(uint *)((longlong)puVar6 + 0x2c) = uVar25;
          (*(code *)*puVar6)(param_1);
LAB_00a1ac04:
          param_1[lVar15 + 0x37] = (longlong)puVar14;
          puVar14[5] = (uint)(bVar5 >> 4);
          puVar14[6] = bVar5 & 0xf;
          lVar16 = *param_1;
          *(uint *)(lVar16 + 0x2c) = uVar25;
          *(uint *)(lVar16 + 0x30) = puVar14[5];
          *(uint *)(lVar16 + 0x34) = puVar14[6];
          *(undefined4 *)(lVar16 + 0x28) = 0x68;
          (**(code **)(lVar16 + 8))(param_1,1);
          pbVar20 = pbVar20 + 1;
          lVar23 = lVar23 + -1;
          bVar26 = lVar23 == 0;
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < (int)(uint)bVar1);
      }
      if (bVar26) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        pbVar20 = (byte *)*puVar13;
        lVar23 = puVar13[1];
      }
      *(uint *)((longlong)param_1 + 0x20c) = (uint)*pbVar20;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])();
        if (iVar10 == 0) {
          return 0;
        }
        pbVar20 = (byte *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        pbVar20 = pbVar20 + 1;
      }
      *(uint *)(param_1 + 0x42) = (uint)*pbVar20;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])();
        if (iVar10 == 0) {
          return 0;
        }
        pbVar20 = (byte *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        pbVar20 = pbVar20 + 1;
      }
      bVar1 = *pbVar20;
      *(uint *)((longlong)param_1 + 0x214) = (uint)(bVar1 >> 4);
      *(uint *)(param_1 + 0x43) = bVar1 & 0xf;
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x20c);
      *(int *)(lVar15 + 0x30) = (int)param_1[0x42];
      *(undefined4 *)(lVar15 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x214);
      *(int *)(lVar15 + 0x38) = (int)param_1[0x43];
      *(undefined4 *)(lVar15 + 0x28) = 0x69;
      (**(code **)(lVar15 + 8))(param_1,1);
      *(undefined4 *)(param_1[0x49] + 0x20) = 0;
      *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
      *puVar13 = pbVar20 + 1;
      puVar13[1] = lVar23 + -1;
      *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
      return 1;
    case 0xdb:
      puVar13 = (undefined8 *)param_1[5];
      lVar23 = puVar13[1];
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        lVar23 = puVar13[1];
      }
      uVar3 = *(undefined1 *)*puVar13;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        puVar18 = (undefined1 *)*puVar13 + 1;
      }
      pbVar20 = puVar18 + 1;
      lVar23 = lVar23 + -1;
      for (iVar10 = CONCAT11(uVar3,*puVar18) - 2; 0 < iVar10; iVar10 = iVar10 + iVar11) {
        if (lVar23 == 0) {
          iVar11 = (*(code *)puVar13[3])(param_1);
          if (iVar11 == 0) {
            return 0;
          }
          pbVar20 = (byte *)*puVar13;
          lVar23 = puVar13[1];
        }
        bVar1 = *pbVar20;
        lVar15 = *param_1;
        *(undefined4 *)(lVar15 + 0x28) = 0x51;
        uVar19 = bVar1 & 0xf;
        *(uint *)(lVar15 + 0x2c) = uVar19;
        uVar25 = (uint)(bVar1 >> 4);
        *(uint *)(lVar15 + 0x30) = uVar25;
        (**(code **)(lVar15 + 8))(param_1,1);
        if (3 < uVar19) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x1f;
          *(uint *)((longlong)puVar6 + 0x2c) = uVar19;
          (*(code *)*puVar6)(param_1);
        }
        lVar15 = param_1[(ulonglong)uVar19 + 0x19];
        if (lVar15 == 0) {
          lVar15 = FUN_00a1bdb0(param_1);
          param_1[(ulonglong)uVar19 + 0x19] = lVar15;
        }
        lVar23 = lVar23 + -1;
        pbVar20 = pbVar20 + 1;
        iVar11 = 0;
        piVar24 = &DAT_01e6fbe0;
        do {
          if (uVar25 == 0) {
            if (lVar23 == 0) {
              iVar12 = (*(code *)puVar13[3])(param_1);
              if (iVar12 == 0) {
                return 0;
              }
              pbVar20 = (byte *)*puVar13;
              lVar23 = puVar13[1];
            }
            uVar9 = (ushort)*pbVar20;
          }
          else {
            if (lVar23 == 0) {
              iVar12 = (*(code *)puVar13[3])(param_1);
              if (iVar12 == 0) {
                return 0;
              }
              pbVar20 = (byte *)*puVar13;
              lVar23 = puVar13[1];
            }
            bVar1 = *pbVar20;
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) {
              iVar12 = (*(code *)puVar13[3])(param_1);
              if (iVar12 == 0) {
                return 0;
              }
              pbVar20 = (byte *)*puVar13;
              lVar23 = puVar13[1];
            }
            else {
              pbVar20 = pbVar20 + 1;
            }
            uVar9 = CONCAT11(bVar1,*pbVar20);
          }
          *(ushort *)(lVar15 + (longlong)*piVar24 * 2) = uVar9;
          piVar24 = piVar24 + 1;
          lVar23 = lVar23 + -1;
          pbVar20 = pbVar20 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0x40);
        lVar16 = *param_1;
        lVar22 = 7;
        if (1 < *(int *)(lVar16 + 0x7c)) {
          while( true ) {
            *(uint *)(lVar16 + 0x2c) = (uint)*(ushort *)(lVar15 + -0xe + lVar22 * 2);
            *(uint *)(lVar16 + 0x30) = (uint)*(ushort *)(lVar15 + -0xc + lVar22 * 2);
            *(uint *)(lVar16 + 0x34) = (uint)*(ushort *)(lVar15 + -10 + lVar22 * 2);
            *(uint *)(lVar16 + 0x38) = (uint)*(ushort *)(lVar15 + -8 + lVar22 * 2);
            *(uint *)(lVar16 + 0x3c) = (uint)*(ushort *)(lVar15 + -6 + lVar22 * 2);
            *(uint *)(lVar16 + 0x40) = (uint)*(ushort *)(lVar15 + -4 + lVar22 * 2);
            *(uint *)(lVar16 + 0x44) = (uint)*(ushort *)(lVar15 + -2 + lVar22 * 2);
            *(uint *)(lVar16 + 0x48) = (uint)*(ushort *)(lVar15 + lVar22 * 2);
            *(undefined4 *)(lVar16 + 0x28) = 0x5d;
            (**(code **)(lVar16 + 8))(param_1,2);
            if (0x3f < (int)lVar22 + 1) break;
            lVar22 = lVar22 + 8;
            lVar16 = *param_1;
          }
        }
        iVar11 = -0x81;
        if (uVar25 == 0) {
          iVar11 = -0x41;
        }
      }
      if (iVar10 != 0) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0xb;
        (*(code *)*puVar6)(param_1);
      }
      *puVar13 = pbVar20;
      puVar13[1] = lVar23;
      goto LAB_00a19fc0;
    case 0xdd:
      puVar13 = (undefined8 *)param_1[5];
      lVar23 = puVar13[1];
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        lVar23 = puVar13[1];
      }
      uVar3 = *(undefined1 *)*puVar13;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        puVar18 = (undefined1 *)*puVar13 + 1;
      }
      lVar23 = lVar23 + -1;
      if (CONCAT11(uVar3,*puVar18) != 4) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0xb;
        (*(code *)*puVar6)(param_1);
      }
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        puVar18 = puVar18 + 1;
      }
      uVar3 = *puVar18;
      lVar23 = lVar23 + -1;
      if (lVar23 == 0) {
        iVar10 = (*(code *)puVar13[3])(param_1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar18 = (undefined1 *)*puVar13;
        lVar23 = puVar13[1];
      }
      else {
        puVar18 = puVar18 + 1;
      }
      uVar4 = *puVar18;
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + 0x28) = 0x52;
      *(uint *)(lVar15 + 0x2c) = (uint)CONCAT11(uVar3,uVar4);
      (**(code **)(lVar15 + 8))(param_1,1);
      *(uint *)(param_1 + 0x2e) = (uint)CONCAT11(uVar3,uVar4);
      *puVar13 = puVar18 + 1;
      puVar13[1] = lVar23 + -1;
      goto LAB_00a19fc0;
    default:
switchD_00a1a0c9_caseD_de:
      puVar13 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar13 + 5) = 0x44;
LAB_00a1a10a:
      *(undefined4 *)((longlong)puVar13 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x21c);
      (*(code *)*puVar13)(param_1);
      goto LAB_00a19fc0;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      iVar10 = (**(code **)(param_1[0x49] + 0x30 + (longlong)(int)(uVar25 - 0xe0) * 8))(param_1);
      break;
    case 0xfe:
      iVar10 = (**(code **)(param_1[0x49] + 0x28))(param_1);
    }
    if (iVar10 == 0) {
      return 0;
    }
LAB_00a19fc0:
    *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
    uVar25 = 0;
  } while( true );
}

