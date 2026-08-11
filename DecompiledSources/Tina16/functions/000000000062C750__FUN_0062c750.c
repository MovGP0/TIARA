/* Ghidra address: 0062c750 */
/* Ghidra symbol: FUN_0062c750 */


int FUN_0062c750(longlong *param_1,int param_2)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
LAB_0062c780:
  do {
    if (*(uint *)((longlong)param_1 + 0x9c) < 0x106) {
      FUN_00629c50(param_1);
      uVar10 = *(uint *)((longlong)param_1 + 0x9c);
      if ((param_2 == 0) && (uVar10 < 0x106)) {
        return 0;
      }
      if (uVar10 == 0) {
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
        uVar11 = 2;
        if (uVar10 < 2) {
          uVar11 = uVar10;
        }
        *(uint *)((longlong)param_1 + 0x170c) = uVar11;
        if (param_2 == 4) {
          uVar11 = *(uint *)((longlong)param_1 + 0x84);
          if ((int)uVar11 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[10] + (ulonglong)uVar11;
          }
          FUN_006325a0(param_1,lVar14,uVar10 - uVar11,1);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          lVar14 = *param_1;
          lVar6 = *(longlong *)(lVar14 + 0x28);
          FUN_00632390(lVar6);
          uVar10 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar14 + 0x18) < *(uint *)(lVar6 + 0x28)) {
            uVar10 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar10 != 0) {
            uVar15 = (ulonglong)uVar10;
            FUN_00626670(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar6 + 0x20),uVar15);
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + uVar15;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + uVar15;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + uVar10;
            *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) - uVar10;
            iVar12 = *(int *)(lVar6 + 0x28) - uVar10;
            *(int *)(lVar6 + 0x28) = iVar12;
            if (iVar12 == 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*param_1 + 0x18) == 0);
        }
        if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
          uVar11 = *(uint *)((longlong)param_1 + 0x84);
          if ((int)uVar11 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[10] + (ulonglong)uVar11;
          }
          FUN_006325a0(param_1,lVar14,uVar10 - uVar11,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          lVar14 = *param_1;
          lVar6 = *(longlong *)(lVar14 + 0x28);
          FUN_00632390(lVar6);
          uVar10 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar14 + 0x18) < *(uint *)(lVar6 + 0x28)) {
            uVar10 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar10 != 0) {
            uVar15 = (ulonglong)uVar10;
            FUN_00626670(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar6 + 0x20),uVar15);
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + uVar15;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + uVar15;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + uVar10;
            *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) - uVar10;
            iVar12 = *(int *)(lVar6 + 0x28) - uVar10;
            *(int *)(lVar6 + 0x28) = iVar12;
            if (iVar12 == 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x18) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar10) goto LAB_0062c7b9;
LAB_0062c814:
      uVar10 = *(uint *)(param_1 + 0x11);
      if (2 < uVar10) goto LAB_0062c824;
LAB_0062ca08:
      bVar2 = *(byte *)(param_1[10] + (ulonglong)*(uint *)((longlong)param_1 + 0x94));
      uVar10 = *(uint *)((longlong)param_1 + 0x16f4);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)uVar10 * 2) = 0;
      *(uint *)((longlong)param_1 + 0x16f4) = uVar10 + 1;
      *(byte *)(param_1[0x2dd] + (ulonglong)uVar10) = bVar2;
      psVar1 = (short *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xbc);
      *psVar1 = *psVar1 + 1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      uVar10 = *(int *)((longlong)param_1 + 0x94) + 1;
      *(uint *)((longlong)param_1 + 0x94) = uVar10;
      if (*(int *)((longlong)param_1 + 0x16f4) != (int)param_1[0x2de] + -1) goto LAB_0062c780;
    }
    else {
LAB_0062c7b9:
      uVar10 = *(uint *)((longlong)param_1 + 0x94);
      uVar11 = ((uint)*(byte *)(param_1[10] + (ulonglong)(uVar10 + 2)) ^
               (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar11;
      lVar14 = param_1[0xd];
      uVar3 = *(ushort *)(lVar14 + (ulonglong)uVar11 * 2);
      *(ushort *)(param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar10) * 2) =
           uVar3;
      *(short *)(lVar14 + (ulonglong)uVar11 * 2) = (short)uVar10;
      if ((uVar3 == 0) || (*(int *)((longlong)param_1 + 0x44) - 0x106U < uVar10 - uVar3))
      goto LAB_0062c814;
      uVar10 = FUN_0062d340(param_1);
      *(uint *)(param_1 + 0x11) = uVar10;
      if (uVar10 < 3) goto LAB_0062ca08;
LAB_0062c824:
      iVar12 = *(int *)((longlong)param_1 + 0x94) - (int)param_1[0x13];
      uVar11 = *(uint *)((longlong)param_1 + 0x16f4);
      *(short *)(param_1[0x2df] + (ulonglong)uVar11 * 2) = (short)iVar12;
      *(uint *)((longlong)param_1 + 0x16f4) = uVar11 + 1;
      *(char *)(param_1[0x2dd] + (ulonglong)uVar11) = (char)(uVar10 + 0xfd);
      psVar1 = (short *)((longlong)param_1 +
                        (ulonglong)(byte)(&DAT_01df2e10)[uVar10 + 0xfd & 0xff] * 4 + 0x4c0);
      *psVar1 = *psVar1 + 1;
      uVar10 = iVar12 - 1U & 0xffff;
      if (0xff < uVar10) {
        uVar10 = (uVar10 >> 7) + 0x100;
      }
      psVar1 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_01df2c10)[uVar10] * 4 + 0x9b0);
      *psVar1 = *psVar1 + 1;
      lVar14 = param_1[0x2de];
      iVar12 = *(int *)((longlong)param_1 + 0x16f4);
      uVar11 = *(uint *)(param_1 + 0x11);
      uVar10 = *(int *)((longlong)param_1 + 0x9c) - uVar11;
      *(uint *)((longlong)param_1 + 0x9c) = uVar10;
      if ((uVar10 < 3) || (*(uint *)(param_1 + 0x15) < uVar11)) {
        iVar13 = *(int *)((longlong)param_1 + 0x94);
        uVar10 = iVar13 + uVar11;
        *(uint *)((longlong)param_1 + 0x94) = uVar10;
        *(undefined4 *)(param_1 + 0x11) = 0;
        uVar16 = (uint)*(byte *)(param_1[10] + (ulonglong)uVar10);
        *(uint *)(param_1 + 0xe) = uVar16;
        *(uint *)(param_1 + 0xe) =
             ((uint)*(byte *)(param_1[10] + (ulonglong)(iVar13 + 1 + uVar11)) ^
             uVar16 << (*(byte *)(param_1 + 0x10) & 0x1f)) & *(uint *)((longlong)param_1 + 0x7c);
      }
      else {
        *(uint *)(param_1 + 0x11) = uVar11 - 1;
        uVar16 = *(uint *)(param_1 + 0xe);
        lVar9 = param_1[0x10];
        lVar6 = param_1[10];
        uVar4 = *(uint *)((longlong)param_1 + 0x7c);
        lVar7 = param_1[0xd];
        lVar8 = param_1[0xc];
        uVar5 = *(uint *)((longlong)param_1 + 0x4c);
        iVar13 = uVar11 - 2;
        uVar10 = *(int *)((longlong)param_1 + 0x94) + 1;
        do {
          *(uint *)((longlong)param_1 + 0x94) = uVar10;
          uVar16 = ((uint)*(byte *)(lVar6 + (ulonglong)(uVar10 + 2)) ^
                   uVar16 << ((byte)(int)lVar9 & 0x1f)) & uVar4;
          *(uint *)(param_1 + 0xe) = uVar16;
          *(undefined2 *)(lVar8 + (ulonglong)(uVar5 & uVar10) * 2) =
               *(undefined2 *)(lVar7 + (ulonglong)uVar16 * 2);
          *(short *)(lVar7 + (ulonglong)uVar16 * 2) = (short)uVar10;
          *(int *)(param_1 + 0x11) = iVar13;
          iVar13 = iVar13 + -1;
          uVar10 = uVar10 + 1;
        } while (iVar13 != -1);
        *(uint *)((longlong)param_1 + 0x94) = uVar10;
      }
      if (iVar12 != (int)lVar14 + -1) goto LAB_0062c780;
    }
    uVar11 = *(uint *)((longlong)param_1 + 0x84);
    if ((int)uVar11 < 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = param_1[10] + (ulonglong)uVar11;
    }
    FUN_006325a0(param_1,lVar14,uVar10 - uVar11,0);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
    lVar14 = *param_1;
    lVar6 = *(longlong *)(lVar14 + 0x28);
    FUN_00632390(lVar6);
    uVar10 = *(uint *)(lVar6 + 0x28);
    if (*(uint *)(lVar14 + 0x18) < *(uint *)(lVar6 + 0x28)) {
      uVar10 = *(uint *)(lVar14 + 0x18);
    }
    if (uVar10 == 0) {
LAB_0062caeb:
      iVar12 = *(int *)(*param_1 + 0x18);
    }
    else {
      uVar15 = (ulonglong)uVar10;
      FUN_00626670(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar6 + 0x20),uVar15);
      *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + uVar15;
      *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + uVar15;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + uVar10;
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) - uVar10;
      iVar12 = *(int *)(lVar6 + 0x28) - uVar10;
      *(int *)(lVar6 + 0x28) = iVar12;
      if (iVar12 != 0) goto LAB_0062caeb;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
      iVar12 = *(int *)(*param_1 + 0x18);
    }
    if (iVar12 == 0) {
      return 0;
    }
  } while( true );
}

