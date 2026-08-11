/* Ghidra address: 00a133c0 */
/* Ghidra symbol: FUN_00a133c0 */


void FUN_00a133c0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  undefined2 uVar13;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar14;
  
  if (0 < (int)param_4) {
    lVar5 = *(longlong *)(param_1 + 0x270);
    iVar3 = *(int *)(param_1 + 0x88);
    uVar4 = *(uint *)(param_1 + 0x90);
    lVar6 = *(longlong *)(param_1 + 0x1a8);
    uVar9 = iVar3 - 1;
    uVar21 = 0;
    do {
      FUN_00a1bd20(*(undefined8 *)(param_3 + uVar21 * 8),iVar3);
      if (0 < (int)uVar4) {
        uVar15 = 0;
        do {
          pbVar11 = (byte *)(*(longlong *)(param_2 + uVar21 * 8) + uVar15);
          lVar20 = *(longlong *)(param_3 + uVar21 * 8);
          if (*(int *)(lVar5 + 0x90) == 0) {
            puVar16 = *(undefined2 **)(lVar5 + 0x70 + uVar15 * 8);
            lVar10 = 1;
            puVar17 = puVar16;
            uVar12 = uVar4;
            if (iVar3 != 0) goto LAB_00a134d2;
LAB_00a135d6:
            uVar13 = 0;
          }
          else {
            pbVar11 = pbVar11 + uVar9 * uVar4;
            lVar20 = lVar20 + (ulonglong)uVar9;
            puVar16 = (undefined2 *)
                      ((ulonglong)(iVar3 + 1) * 2 + *(longlong *)(lVar5 + 0x70 + uVar15 * 8));
            lVar10 = -1;
            puVar17 = puVar16;
            uVar12 = -uVar4;
            if (iVar3 == 0) goto LAB_00a135d6;
LAB_00a134d2:
            lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + uVar15 * 8);
            lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar15 * 8);
            puVar16 = (undefined2 *)(((ulonglong)uVar9 * 2 + 2) * lVar10 + (longlong)puVar17);
            lVar22 = 0;
            iVar18 = 0;
            iVar14 = 0;
            iVar24 = 0;
            iVar23 = iVar3;
            do {
              bVar1 = *(byte *)(lVar6 + (longlong)
                                        (iVar18 + 8 + (int)(short)puVar17[lVar10 + lVar22] >> 4) +
                                        (ulonglong)*pbVar11);
              bVar2 = *(byte *)(lVar7 + (ulonglong)bVar1);
              *(char *)(lVar20 + lVar22) = *(char *)(lVar20 + lVar22) + bVar2;
              iVar19 = (uint)bVar1 - (uint)*(byte *)(lVar8 + (ulonglong)bVar2);
              puVar17[lVar22] = (short)iVar19 * 3 + (short)iVar14;
              iVar14 = iVar19 * 5 + iVar24;
              uVar13 = (undefined2)iVar14;
              iVar18 = iVar19 * 7;
              pbVar11 = pbVar11 + (int)uVar12;
              lVar22 = lVar22 + lVar10;
              iVar23 = iVar23 + -1;
              iVar24 = iVar19;
            } while (iVar23 != 0);
          }
          *puVar16 = uVar13;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar4);
      }
      *(uint *)(lVar5 + 0x90) = (uint)(*(int *)(lVar5 + 0x90) == 0);
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_4);
  }
  return;
}

