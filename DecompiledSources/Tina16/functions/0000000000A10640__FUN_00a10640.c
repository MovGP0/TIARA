/* Ghidra address: 00a10640 */
/* Ghidra symbol: FUN_00a10640 */


undefined8 FUN_00a10640(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  lVar3 = *(longlong *)(param_1 + 0x250);
  if ((*(int *)(param_1 + 0x170) != 0) && (*(int *)(lVar3 + 0x30) == 0)) {
    lVar16 = *(longlong *)(param_1 + 0x248);
    piVar1 = (int *)(lVar16 + 0x24);
    *piVar1 = *piVar1 + ((int)(((uint)(*(int *)(lVar3 + 0x1c) >> 0x1f) >> 0x1d) +
                              *(int *)(lVar3 + 0x1c)) >> 3);
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    iVar6 = (**(code **)(lVar16 + 0x10))(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar16 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x20 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x1b0));
    }
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_1 + 0x170);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar3 + 0x10) = 0;
      iVar6 = *(int *)(lVar3 + 0x10);
      goto joined_r0x00a10711;
    }
  }
  iVar6 = *(int *)(lVar3 + 0x10);
joined_r0x00a10711:
  if (iVar6 == 0) {
    puVar11 = *(undefined4 **)(param_1 + 0x28);
    local_78 = *puVar11;
    uStack_74 = puVar11[1];
    uStack_70 = puVar11[2];
    uStack_6c = puVar11[3];
    iVar6 = *(int *)(lVar3 + 0x18);
    iVar15 = *(int *)(lVar3 + 0x1c);
    local_58 = *(undefined8 *)(lVar3 + 0x20);
    uStack_50 = *(undefined8 *)(lVar3 + 0x28);
    if (0 < *(int *)(param_1 + 0x1e0)) {
      lVar16 = 0;
      local_48 = param_2;
      local_60 = param_1;
      do {
        puVar4 = *(undefined2 **)(local_48 + lVar16 * 8);
        lVar12 = *(longlong *)(lVar3 + 0x78 + lVar16 * 8);
        lVar5 = *(longlong *)(lVar3 + 200 + lVar16 * 8);
        if (iVar15 < 8) {
          iVar6 = FUN_00a10240(&local_78,iVar6,iVar15,0);
          if (iVar6 == 0) {
            return 0;
          }
          iVar6 = local_68;
          iVar15 = local_64;
          if (7 < local_64) goto LAB_00a10794;
LAB_00a107d4:
          uVar8 = FUN_00a10390(&local_78);
          if ((int)uVar8 < 0) {
            return 0;
          }
          iVar6 = local_68;
          iVar15 = local_64;
          if (uVar8 != 0) goto LAB_00a107fc;
LAB_00a107b9:
          uVar13 = 0;
          iVar14 = *(int *)(lVar3 + 0x118 + lVar16 * 4);
        }
        else {
LAB_00a10794:
          uVar10 = (ulonglong)(iVar6 >> ((char)iVar15 - 8U & 0x1f) & 0xff);
          iVar14 = *(int *)(lVar12 + 0x98 + uVar10 * 4);
          if (iVar14 == 0) goto LAB_00a107d4;
          iVar15 = iVar15 - iVar14;
          bVar2 = *(byte *)(lVar12 + 0x498 + uVar10);
          uVar8 = (uint)bVar2;
          if (bVar2 == 0) goto LAB_00a107b9;
LAB_00a107fc:
          if ((iVar15 < (int)uVar8) &&
             (iVar14 = FUN_00a10240(&local_78,iVar6,iVar15,uVar8), iVar6 = local_68,
             iVar15 = local_64, iVar14 == 0)) {
            return 0;
          }
          iVar15 = iVar15 - uVar8;
          uVar13 = (1 << ((byte)uVar8 & 0x1f)) - 1U & iVar6 >> ((byte)iVar15 & 0x1f);
          if ((int)uVar13 < *(int *)(&DAT_01e6f060 + (longlong)(int)uVar8 * 4)) {
            uVar13 = uVar13 + *(int *)(&DAT_01e6f0a0 + (longlong)(int)uVar8 * 4);
          }
          iVar14 = *(int *)(lVar3 + 0x118 + lVar16 * 4);
        }
        if (iVar14 != 0) {
          lVar12 = (longlong)*(int *)(param_1 + 0x1e4 + lVar16 * 4);
          iVar14 = uVar13 + *(int *)((longlong)&local_58 + lVar12 * 4);
          *(int *)((longlong)&local_58 + lVar12 * 4) = iVar14;
          *puVar4 = (short)iVar14;
        }
        if (*(int *)(lVar3 + 0x140 + lVar16 * 4) == 0) {
          iVar14 = 1;
          do {
            if (iVar15 < 8) {
              iVar6 = FUN_00a10240(&local_78,iVar6,iVar15,0);
              if (iVar6 == 0) {
                return 0;
              }
              iVar6 = local_68;
              iVar15 = local_64;
              if (7 < local_64) goto LAB_00a109f1;
LAB_00a10a25:
              uVar8 = FUN_00a10390(&local_78);
              iVar15 = local_64;
              iVar6 = local_68;
              if ((int)uVar8 < 0) {
                return 0;
              }
            }
            else {
LAB_00a109f1:
              uVar10 = (ulonglong)(iVar6 >> ((char)iVar15 - 8U & 0x1f) & 0xff);
              iVar7 = *(int *)(lVar5 + 0x98 + uVar10 * 4);
              if (iVar7 == 0) goto LAB_00a10a25;
              uVar8 = (uint)*(byte *)(lVar5 + 0x498 + uVar10);
              iVar15 = iVar15 - iVar7;
            }
            iVar7 = (int)uVar8 >> 4;
            uVar8 = uVar8 & 0xf;
            if (uVar8 == 0) {
              bVar17 = iVar7 != 0xf;
              iVar7 = 0xf;
              if (bVar17) break;
            }
            else {
              if ((iVar15 < (int)uVar8) &&
                 (iVar9 = FUN_00a10240(&local_78,iVar6,iVar15,uVar8), iVar15 = local_64,
                 iVar6 = local_68, iVar9 == 0)) {
                return 0;
              }
              iVar15 = iVar15 - uVar8;
            }
            iVar14 = iVar14 + 1 + iVar7;
          } while (iVar14 < 0x40);
        }
        else {
          iVar14 = 1;
          do {
            if (iVar15 < 8) {
              iVar6 = FUN_00a10240(&local_78,iVar6,iVar15,0);
              if (iVar6 == 0) {
                return 0;
              }
              iVar6 = local_68;
              iVar15 = local_64;
              if (7 < local_64) goto LAB_00a108c1;
LAB_00a108f5:
              uVar8 = FUN_00a10390(&local_78);
              iVar15 = local_64;
              iVar6 = local_68;
              if ((int)uVar8 < 0) {
                return 0;
              }
            }
            else {
LAB_00a108c1:
              uVar10 = (ulonglong)(iVar6 >> ((char)iVar15 - 8U & 0x1f) & 0xff);
              iVar7 = *(int *)(lVar5 + 0x98 + uVar10 * 4);
              if (iVar7 == 0) goto LAB_00a108f5;
              uVar8 = (uint)*(byte *)(lVar5 + 0x498 + uVar10);
              iVar15 = iVar15 - iVar7;
            }
            uVar13 = uVar8 & 0xf;
            if (uVar13 == 0) {
              if ((int)uVar8 >> 4 != 0xf) break;
              iVar7 = iVar14 + 0xf;
            }
            else {
              if ((iVar15 < (int)uVar13) &&
                 (iVar7 = FUN_00a10240(&local_78,iVar6,iVar15,uVar13), iVar15 = local_64,
                 iVar6 = local_68, iVar7 == 0)) {
                return 0;
              }
              iVar7 = ((int)uVar8 >> 4) + iVar14;
              iVar15 = iVar15 - uVar13;
              uVar8 = (1 << (sbyte)uVar13) - 1U & iVar6 >> ((byte)iVar15 & 0x1f);
              if ((int)uVar8 < *(int *)(&DAT_01e6f060 + (ulonglong)uVar13 * 4)) {
                uVar8 = uVar8 + *(int *)(&DAT_01e6f0a0 + (ulonglong)uVar13 * 4);
              }
              puVar4[(int)(&DAT_01e6fbe0)[iVar7]] = (short)uVar8;
            }
            iVar14 = iVar7 + 1;
          } while (iVar7 < 0x3f);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x1e0));
      puVar11 = *(undefined4 **)(param_1 + 0x28);
    }
    *puVar11 = local_78;
    puVar11[1] = uStack_74;
    puVar11[2] = uStack_70;
    puVar11[3] = uStack_6c;
    *(int *)(lVar3 + 0x18) = iVar6;
    *(int *)(lVar3 + 0x1c) = iVar15;
    *(undefined8 *)(lVar3 + 0x20) = local_58;
    *(undefined8 *)(lVar3 + 0x28) = uStack_50;
  }
  *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
  return 1;
}

