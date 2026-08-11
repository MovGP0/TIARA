/* Ghidra address: 00a14350 */
/* Ghidra symbol: FUN_00a14350 */


void FUN_00a14350(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  undefined2 *puVar28;
  char *pcVar29;
  int iVar30;
  undefined2 uVar31;
  undefined2 uVar33;
  undefined2 uVar35;
  bool bVar37;
  int local_114;
  int local_110;
  longlong local_100;
  int iVar32;
  int iVar34;
  int iVar36;
  
  if (0 < (int)param_4) {
    lVar5 = *(longlong *)(param_1 + 0x270);
    lVar6 = *(longlong *)(lVar5 + 0x30);
    lVar7 = *(longlong *)(lVar5 + 0x50);
    iVar4 = *(int *)(param_1 + 0x88);
    lVar8 = *(longlong *)(param_1 + 0x1a8);
    plVar9 = *(longlong **)(param_1 + 0xa0);
    lVar10 = *plVar9;
    lVar11 = plVar9[1];
    lVar12 = plVar9[2];
    uVar23 = 0;
    do {
      lVar27 = *(longlong *)(param_2 + uVar23 * 8);
      pcVar29 = *(char **)(param_3 + uVar23 * 8);
      bVar37 = *(int *)(lVar5 + 0x48) == 0;
      if (bVar37) {
        puVar28 = *(undefined2 **)(lVar5 + 0x40);
        iVar13 = 3;
        local_100 = 1;
      }
      else {
        lVar27 = lVar27 + (ulonglong)(iVar4 * 3 - 3);
        pcVar29 = pcVar29 + (iVar4 - 1);
        puVar28 = (undefined2 *)((ulonglong)(iVar4 * 3 + 3) * 2 + *(longlong *)(lVar5 + 0x40));
        iVar13 = -3;
        local_100 = -1;
      }
      *(uint *)(lVar5 + 0x48) = (uint)bVar37;
      if (iVar4 == 0) {
        uVar35 = 0;
        uVar33 = 0;
        uVar31 = 0;
        puVar14 = puVar28;
      }
      else {
        lVar19 = (longlong)iVar13;
        puVar14 = (undefined2 *)(((ulonglong)(iVar4 - 1) * 2 + 2) * lVar19 + (longlong)puVar28);
        iVar13 = 0;
        lVar22 = 2;
        iVar18 = 0;
        iVar20 = 0;
        local_114 = 0;
        local_110 = 0;
        iVar32 = 0;
        iVar34 = 0;
        iVar36 = 0;
        iVar24 = 0;
        iVar30 = iVar4;
        do {
          bVar1 = *(byte *)(lVar8 + (ulonglong)*(byte *)(lVar27 + -2 + lVar22) +
                                    (longlong)
                                    *(int *)(lVar7 + (longlong)
                                                     (iVar13 + 8 +
                                                      (int)(short)puVar28[lVar19 + lVar22 + -2] >> 4
                                                     ) * 4));
          bVar2 = *(byte *)(lVar8 + (ulonglong)*(byte *)(lVar27 + -1 + lVar22) +
                                    (longlong)
                                    *(int *)(lVar7 + (longlong)
                                                     (iVar18 + 8 +
                                                      (int)(short)puVar28[lVar19 + lVar22 + -1] >> 4
                                                     ) * 4));
          bVar3 = *(byte *)(lVar8 + (ulonglong)*(byte *)(lVar27 + lVar22) +
                                    (longlong)
                                    *(int *)(lVar7 + (longlong)
                                                     (iVar20 + 8 +
                                                      (int)(short)puVar28[lVar19 + lVar22] >> 4) * 4
                                            ));
          uVar16 = (ulonglong)(bVar3 >> 3);
          lVar15 = (ulonglong)(bVar2 >> 2) * 0x40 +
                   *(longlong *)(lVar6 + (ulonglong)((uint)(bVar1 >> 3) * 8));
          uVar17 = *(ushort *)(lVar15 + uVar16 * 2);
          if (uVar17 == 0) {
            FUN_00a14d20(param_1);
            uVar17 = *(ushort *)(lVar15 + uVar16 * 2);
          }
          uVar16 = (ulonglong)uVar17;
          *pcVar29 = (char)uVar17 + -1;
          iVar25 = (uint)bVar1 - (uint)*(byte *)(lVar10 + -1 + uVar16);
          iVar21 = (uint)bVar2 - (uint)*(byte *)(lVar11 + -1 + uVar16);
          iVar26 = (uint)bVar3 - (uint)*(byte *)(lVar12 + -1 + uVar16);
          puVar28[lVar22 + -2] = (short)iVar25 * 3 + (short)iVar32;
          iVar32 = iVar25 * 5 + local_114;
          uVar31 = (undefined2)iVar32;
          iVar13 = iVar25 * 7;
          puVar28[lVar22 + -1] = (short)iVar21 * 3 + (short)iVar34;
          iVar34 = iVar21 * 5 + local_110;
          uVar33 = (undefined2)iVar34;
          iVar18 = iVar21 * 7;
          puVar28[lVar22] = (short)iVar26 * 3 + (short)iVar36;
          iVar36 = iVar26 * 5 + iVar24;
          uVar35 = (undefined2)iVar36;
          iVar20 = iVar26 * 7;
          pcVar29 = pcVar29 + local_100;
          lVar22 = lVar22 + lVar19;
          iVar30 = iVar30 + -1;
          local_114 = iVar25;
          local_110 = iVar21;
          iVar24 = iVar26;
        } while (iVar30 != 0);
      }
      *puVar14 = uVar31;
      puVar14[1] = uVar33;
      puVar14[2] = uVar35;
      uVar23 = uVar23 + 1;
    } while (uVar23 != param_4);
  }
  return;
}

