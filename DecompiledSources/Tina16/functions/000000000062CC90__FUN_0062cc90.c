/* Ghidra address: 0062cc90 */
/* Ghidra symbol: FUN_0062cc90 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0062cc90(longlong *param_1,int param_2)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar7 = *(uint *)((longlong)param_1 + 0x9c);
  do {
    while (uVar7 < 0x106) {
      FUN_00629c50(param_1);
      uVar7 = *(uint *)((longlong)param_1 + 0x9c);
      if ((param_2 == 0) && (uVar7 < 0x106)) {
        return 0;
      }
      if (uVar7 == 0) {
        if ((int)param_1[0x12] != 0) {
          bVar2 = *(byte *)(param_1[10] + (ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1));
          uVar7 = *(uint *)((longlong)param_1 + 0x16f4);
          *(undefined2 *)(param_1[0x2df] + (ulonglong)uVar7 * 2) = 0;
          *(uint *)((longlong)param_1 + 0x16f4) = uVar7 + 1;
          *(byte *)(param_1[0x2dd] + (ulonglong)uVar7) = bVar2;
          psVar1 = (short *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xbc);
          *psVar1 = *psVar1 + 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        uVar7 = *(uint *)((longlong)param_1 + 0x94);
        uVar9 = 2;
        if (uVar7 < 2) {
          uVar9 = uVar7;
        }
        *(uint *)((longlong)param_1 + 0x170c) = uVar9;
        if (param_2 == 4) {
          uVar9 = *(uint *)((longlong)param_1 + 0x84);
          if ((int)uVar9 < 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = param_1[10] + (ulonglong)uVar9;
          }
          FUN_006325a0(param_1,lVar8,uVar7 - uVar9,1);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          lVar8 = *param_1;
          lVar5 = *(longlong *)(lVar8 + 0x28);
          FUN_00632390(lVar5);
          uVar7 = *(uint *)(lVar5 + 0x28);
          if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar5 + 0x28)) {
            uVar7 = *(uint *)(lVar8 + 0x18);
          }
          if (uVar7 != 0) {
            uVar12 = (ulonglong)uVar7;
            FUN_00626670(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar5 + 0x20),uVar12);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + uVar12;
            *(longlong *)(lVar5 + 0x20) = *(longlong *)(lVar5 + 0x20) + uVar12;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + uVar7;
            *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar7;
            iVar6 = *(int *)(lVar5 + 0x28) - uVar7;
            *(int *)(lVar5 + 0x28) = iVar6;
            if (iVar6 == 0) {
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*param_1 + 0x18) == 0);
        }
        if (*(int *)((longlong)param_1 + 0x16f4) != 0) {
          uVar9 = *(uint *)((longlong)param_1 + 0x84);
          if ((int)uVar9 < 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = param_1[10] + (ulonglong)uVar9;
          }
          FUN_006325a0(param_1,lVar8,uVar7 - uVar9,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          lVar8 = *param_1;
          lVar5 = *(longlong *)(lVar8 + 0x28);
          FUN_00632390(lVar5);
          uVar7 = *(uint *)(lVar5 + 0x28);
          if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar5 + 0x28)) {
            uVar7 = *(uint *)(lVar8 + 0x18);
          }
          if (uVar7 != 0) {
            uVar12 = (ulonglong)uVar7;
            FUN_00626670(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar5 + 0x20),uVar12);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + uVar12;
            *(longlong *)(lVar5 + 0x20) = *(longlong *)(lVar5 + 0x20) + uVar12;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + uVar7;
            *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar7;
            iVar6 = *(int *)(lVar5 + 0x28) - uVar7;
            *(int *)(lVar5 + 0x28) = iVar6;
            if (iVar6 == 0) {
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x18) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar7) break;
      uVar7 = *(uint *)(param_1 + 0x11);
      *(uint *)(param_1 + 0x14) = uVar7;
      *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x13];
      *(undefined4 *)(param_1 + 0x11) = 2;
joined_r0x0062ccfa:
      uVar9 = 2;
      if (uVar7 < 3) goto LAB_0062cd00;
LAB_0062d050:
      if (uVar7 < uVar9) goto LAB_0062cd00;
      iVar6 = *(int *)((longlong)param_1 + 0x94);
      iVar4 = *(int *)((longlong)param_1 + 0x9c);
      iVar10 = (iVar6 + 0xffff) - *(int *)((longlong)param_1 + 0x8c);
      uVar9 = *(uint *)((longlong)param_1 + 0x16f4);
      *(short *)(param_1[0x2df] + (ulonglong)uVar9 * 2) = (short)iVar10;
      *(uint *)((longlong)param_1 + 0x16f4) = uVar9 + 1;
      *(char *)(param_1[0x2dd] + (ulonglong)uVar9) = (char)(uVar7 + 0xfd);
      psVar1 = (short *)((longlong)param_1 +
                        (ulonglong)(byte)(&DAT_01df2e10)[uVar7 + 0xfd & 0xff] * 4 + 0x4c0);
      *psVar1 = *psVar1 + 1;
      uVar7 = iVar10 - 1U & 0xffff;
      if (0xff < uVar7) {
        uVar7 = (uVar7 >> 7) + 0x100;
      }
      psVar1 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_01df2c10)[uVar7] * 4 + 0x9b0);
      *psVar1 = *psVar1 + 1;
      iVar10 = *(int *)((longlong)param_1 + 0x16f4);
      lVar8 = param_1[0x2de];
      iVar11 = (int)param_1[0x14];
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + (1 - iVar11);
      *(int *)(param_1 + 0x14) = iVar11 + -2;
      iVar11 = iVar11 + -3;
      uVar7 = *(int *)((longlong)param_1 + 0x94) + 1;
      do {
        *(uint *)((longlong)param_1 + 0x94) = uVar7;
        if (uVar7 <= (uint)(iVar6 + -3 + iVar4)) {
          uVar9 = ((uint)*(byte *)(param_1[10] + (ulonglong)(uVar7 + 2)) ^
                  (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
                  *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar9;
          lVar5 = param_1[0xd];
          *(undefined2 *)
           (param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar7) * 2) =
               *(undefined2 *)(lVar5 + (ulonglong)uVar9 * 2);
          *(short *)(lVar5 + (ulonglong)uVar9 * 2) = (short)uVar7;
        }
        *(int *)(param_1 + 0x14) = iVar11;
        iVar11 = iVar11 + -1;
        uVar7 = uVar7 + 1;
      } while (iVar11 != -1);
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x11) = 2;
      *(uint *)((longlong)param_1 + 0x94) = uVar7;
      if (iVar10 == (int)lVar8 + -1) {
        uVar9 = *(uint *)((longlong)param_1 + 0x84);
        if ((int)uVar9 < 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = param_1[10] + (ulonglong)uVar9;
        }
        FUN_006325a0(param_1,lVar8,uVar7 - uVar9,0);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        lVar8 = *param_1;
        lVar5 = *(longlong *)(lVar8 + 0x28);
        FUN_00632390(lVar5);
        uVar7 = *(uint *)(lVar5 + 0x28);
        if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar5 + 0x28)) {
          uVar7 = *(uint *)(lVar8 + 0x18);
        }
        if (uVar7 == 0) {
LAB_0062cf27:
          iVar6 = *(int *)(*param_1 + 0x18);
        }
        else {
          uVar12 = (ulonglong)uVar7;
          FUN_00626670(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar5 + 0x20),uVar12);
          *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + uVar12;
          *(longlong *)(lVar5 + 0x20) = *(longlong *)(lVar5 + 0x20) + uVar12;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + uVar7;
          *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar7;
          iVar6 = *(int *)(lVar5 + 0x28) - uVar7;
          *(int *)(lVar5 + 0x28) = iVar6;
          if (iVar6 != 0) goto LAB_0062cf27;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
          iVar6 = *(int *)(*param_1 + 0x18);
        }
        goto joined_r0x0062ce13;
      }
LAB_0062cf34:
      uVar7 = *(uint *)((longlong)param_1 + 0x9c);
    }
    uVar7 = *(uint *)((longlong)param_1 + 0x94);
    uVar9 = ((uint)*(byte *)(param_1[10] + (ulonglong)(uVar7 + 2)) ^
            (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
            *(uint *)((longlong)param_1 + 0x7c);
    *(uint *)(param_1 + 0xe) = uVar9;
    lVar8 = param_1[0xd];
    uVar3 = *(ushort *)(lVar8 + (ulonglong)uVar9 * 2);
    *(ushort *)(param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar7) * 2) = uVar3
    ;
    *(short *)(lVar8 + (ulonglong)uVar9 * 2) = (short)uVar7;
    uVar7 = *(uint *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x14) = uVar7;
    *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x13];
    *(undefined4 *)(param_1 + 0x11) = 2;
    uVar9 = 2;
    if (uVar3 == 0) goto joined_r0x0062ccfa;
    if ((uVar7 < *(uint *)(param_1 + 0x15)) &&
       (*(int *)((longlong)param_1 + 0x94) - (uint)uVar3 <=
        *(int *)((longlong)param_1 + 0x44) - 0x106U)) {
      uVar9 = FUN_0062d340(param_1);
      *(uint *)(param_1 + 0x11) = uVar9;
      if ((uVar9 < 6) &&
         (((int)param_1[0x16] == 1 ||
          ((uVar9 == 3 &&
           (uVar9 = 3, 0x1000 < (uint)(*(int *)((longlong)param_1 + 0x94) - (int)param_1[0x13]))))))
         ) {
        *(undefined4 *)(param_1 + 0x11) = 2;
        uVar7 = *(uint *)(param_1 + 0x14);
        goto joined_r0x0062ccfa;
      }
    }
    uVar7 = *(uint *)(param_1 + 0x14);
    if (2 < uVar7) goto LAB_0062d050;
LAB_0062cd00:
    if ((int)param_1[0x12] != 0) {
      bVar2 = *(byte *)(param_1[10] + (ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1));
      uVar7 = *(uint *)((longlong)param_1 + 0x16f4);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)uVar7 * 2) = 0;
      *(uint *)((longlong)param_1 + 0x16f4) = uVar7 + 1;
      *(byte *)(param_1[0x2dd] + (ulonglong)uVar7) = bVar2;
      psVar1 = (short *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xbc);
      *psVar1 = *psVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1) {
        uVar7 = *(uint *)((longlong)param_1 + 0x84);
        if ((int)uVar7 < 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = param_1[10] + (ulonglong)uVar7;
        }
        FUN_006325a0(param_1,lVar8,*(int *)((longlong)param_1 + 0x94) - uVar7,0);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        lVar8 = *param_1;
        lVar5 = *(longlong *)(lVar8 + 0x28);
        FUN_00632390(lVar5);
        uVar7 = *(uint *)(lVar5 + 0x28);
        if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar5 + 0x28)) {
          uVar7 = *(uint *)(lVar8 + 0x18);
        }
        uVar12 = (ulonglong)uVar7;
        if (uVar7 != 0) {
          FUN_00626670(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar5 + 0x20),uVar12);
          *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + uVar12;
          *(longlong *)(lVar5 + 0x20) = *(longlong *)(lVar5 + 0x20) + uVar12;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + uVar7;
          *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar7;
          iVar6 = *(int *)(lVar5 + 0x28) - uVar7;
          *(int *)(lVar5 + 0x28) = iVar6;
          if (iVar6 == 0) {
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
          }
        }
      }
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      iVar6 = *(int *)(*param_1 + 0x18);
joined_r0x0062ce13:
      if (iVar6 == 0) {
        return 0;
      }
      goto LAB_0062cf34;
    }
    *(undefined4 *)(param_1 + 0x12) = 1;
    *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
    uVar7 = *(uint *)((longlong)param_1 + 0x9c);
  } while( true );
}

