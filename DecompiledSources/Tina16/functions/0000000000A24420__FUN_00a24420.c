/* Ghidra address: 00a24420 */
/* Ghidra symbol: FUN_00a24420 */


undefined8 FUN_00a24420(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  longlong lVar22;
  longlong lVar23;
  char *pcVar24;
  int aiStack_148 [66];
  
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  iVar13 = *(int *)(param_1 + 0x1a0);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  *(undefined4 *)(lVar2 + 0x20) = *puVar3;
  *(undefined4 *)(lVar2 + 0x24) = uVar8;
  *(undefined4 *)(lVar2 + 0x28) = uVar9;
  *(undefined4 *)(lVar2 + 0x2c) = uVar10;
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(lVar2 + 0x68) == 0)) {
    FUN_00a248a0(lVar2);
  }
  iVar16 = *(int *)(param_1 + 0x19c);
  if (iVar13 < iVar16) {
    uVar18 = 0;
    iVar12 = 0;
LAB_00a24490:
    if (iVar12 < 1) goto LAB_00a24702;
  }
  else {
    lVar4 = *param_2;
    lVar23 = (longlong)iVar16;
    piVar21 = &DAT_01e6fbe0 + lVar23;
    lVar22 = lVar23 + -1;
    iVar17 = 0;
    iVar12 = iVar16;
    do {
      iVar15 = (int)*(short *)(lVar4 + (longlong)*piVar21 * 2);
      iVar19 = -iVar15;
      if (0 < iVar15) {
        iVar19 = iVar15;
      }
      bVar7 = (byte)uVar1 & 0x1f;
      aiStack_148[lVar22 + 1] = iVar19 >> bVar7;
      if (iVar19 >> bVar7 == 1) {
        iVar17 = iVar12;
      }
      lVar22 = lVar22 + 1;
      piVar21 = piVar21 + 1;
      iVar12 = iVar12 + 1;
    } while (lVar22 < iVar13);
    uVar18 = 0 >> bVar7;
    iVar12 = 0;
    if (iVar16 <= iVar13) {
      pcVar24 = (char *)((ulonglong)*(uint *)(lVar2 + 0x58) + *(longlong *)(lVar2 + 0x60));
      iVar12 = 0;
      uVar18 = 0 >> bVar7;
      do {
        iVar16 = aiStack_148[lVar23];
        if (iVar16 == 0) {
          iVar12 = iVar12 + 1;
        }
        else {
          if ((lVar23 <= iVar17) && (0xf < iVar12)) {
            do {
              FUN_00a24b00(lVar2);
              if (*(int *)(lVar2 + 0x18) == 0) {
                lVar22 = *(longlong *)(lVar2 + 0x70 + (longlong)*(int *)(lVar2 + 0x50) * 8);
                FUN_00a249a0(lVar2,*(undefined4 *)(lVar22 + 0x3c0),(int)*(char *)(lVar22 + 0x4f0));
                if ((uVar18 != 0) && (*(int *)(lVar2 + 0x18) == 0)) {
                  do {
                    FUN_00a249a0(lVar2,(int)*pcVar24,1);
                    pcVar24 = pcVar24 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              else {
                piVar21 = (int *)(*(longlong *)(lVar2 + 0x90 + (longlong)*(int *)(lVar2 + 0x50) * 8)
                                 + 0x3c0);
                *piVar21 = *piVar21 + 1;
              }
              iVar19 = iVar12 + -0x10;
              pcVar24 = *(char **)(lVar2 + 0x60);
              uVar18 = 0;
              bVar6 = 0x1f < iVar12;
              iVar12 = iVar19;
            } while (bVar6);
          }
          if (iVar16 < 2) {
            FUN_00a24b00(lVar2);
            uVar20 = iVar12 << 4 | 1;
            if (*(int *)(lVar2 + 0x18) == 0) {
              lVar22 = *(longlong *)(lVar2 + 0x70 + (longlong)*(int *)(lVar2 + 0x50) * 8);
              FUN_00a249a0(lVar2,*(undefined4 *)(lVar22 + (longlong)(int)uVar20 * 4),
                           (int)*(char *)(lVar22 + 0x400 + (longlong)(int)uVar20));
            }
            else {
              piVar21 = (int *)(*(longlong *)(lVar2 + 0x90 + (longlong)*(int *)(lVar2 + 0x50) * 8) +
                               (longlong)(int)uVar20 * 4);
              *piVar21 = *piVar21 + 1;
            }
            FUN_00a249a0(lVar2,~(*(ushort *)(lVar4 + (longlong)(int)(&DAT_01e6fbe0)[lVar23] * 2) >>
                                0xf) & 1,1);
            if ((uVar18 != 0) && (*(int *)(lVar2 + 0x18) == 0)) {
              do {
                FUN_00a249a0(lVar2,(int)*pcVar24,1);
                pcVar24 = pcVar24 + 1;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            pcVar24 = *(char **)(lVar2 + 0x60);
            uVar18 = 0;
            iVar12 = 0;
          }
          else {
            uVar14 = (ulonglong)uVar18;
            uVar18 = uVar18 + 1;
            pcVar24[uVar14] = (byte)iVar16 & 1;
          }
        }
        bVar6 = lVar23 < iVar13;
        lVar23 = lVar23 + 1;
      } while (bVar6);
    }
    if (uVar18 == 0) goto LAB_00a24490;
  }
  iVar13 = *(int *)(lVar2 + 0x54) + 1;
  *(int *)(lVar2 + 0x54) = iVar13;
  uVar18 = uVar18 + *(int *)(lVar2 + 0x58);
  *(uint *)(lVar2 + 0x58) = uVar18;
  if ((iVar13 == 0x7fff) || (0x3a9 < uVar18)) {
    FUN_00a24b00(lVar2);
  }
LAB_00a24702:
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(lVar2 + 0x28);
  *puVar5 = *(undefined8 *)(lVar2 + 0x20);
  puVar5[1] = uVar11;
  iVar13 = *(int *)(param_1 + 0x118);
  if (iVar13 != 0) {
    iVar16 = *(int *)(lVar2 + 0x68);
    if (*(int *)(lVar2 + 0x68) == 0) {
      *(int *)(lVar2 + 0x68) = iVar13;
      *(uint *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + 1U & 7;
      iVar16 = iVar13;
    }
    *(int *)(lVar2 + 0x68) = iVar16 + -1;
  }
  return 1;
}

