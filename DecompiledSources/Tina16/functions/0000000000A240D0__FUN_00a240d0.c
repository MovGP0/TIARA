/* Ghidra address: 00a240d0 */
/* Ghidra symbol: FUN_00a240d0 */


undefined8 FUN_00a240d0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  
  lVar3 = param_1[0x3e];
  lVar14 = param_1[0x34];
  lVar15 = param_1[0x35];
  puVar4 = (undefined4 *)param_1[5];
  uVar9 = puVar4[1];
  uVar10 = puVar4[2];
  uVar11 = puVar4[3];
  *(undefined4 *)(lVar3 + 0x20) = *puVar4;
  *(undefined4 *)(lVar3 + 0x24) = uVar9;
  *(undefined4 *)(lVar3 + 0x28) = uVar10;
  *(undefined4 *)(lVar3 + 0x2c) = uVar11;
  if (((int)param_1[0x23] != 0) && (*(int *)(lVar3 + 0x68) == 0)) {
    FUN_00a248a0(lVar3,*(undefined4 *)(lVar3 + 0x6c));
  }
  if (*(int *)((longlong)param_1 + 0x19c) <= (int)lVar14) {
    lVar5 = *param_2;
    uVar21 = 0;
    lVar20 = (longlong)*(int *)((longlong)param_1 + 0x19c);
    do {
      sVar2 = *(short *)(lVar5 + (longlong)(int)(&DAT_01e6fbe0)[lVar20] * 2);
      if (sVar2 == 0) {
LAB_00a24250:
        uVar21 = uVar21 + 1;
      }
      else {
        bVar17 = (byte)(int)lVar15;
        if (sVar2 < 0) {
          uVar19 = -(int)sVar2 >> (bVar17 & 0x1f);
          uVar13 = ~uVar19;
        }
        else {
          uVar19 = (int)sVar2 >> (bVar17 & 0x1f);
          uVar13 = uVar19;
        }
        if (uVar19 == 0) goto LAB_00a24250;
        if (*(int *)(lVar3 + 0x54) != 0) {
          FUN_00a24b00(lVar3);
        }
        if (0xf < (int)uVar21) {
          iVar22 = uVar21 + 0x10;
          uVar16 = ~uVar21;
          if ((int)uVar16 < -0x20) {
            uVar16 = 0xffffffe0;
          }
          do {
            if (*(int *)(lVar3 + 0x18) == 0) {
              lVar7 = *(longlong *)(lVar3 + 0x70 + (longlong)*(int *)(lVar3 + 0x50) * 8);
              FUN_00a249a0(lVar3,*(undefined4 *)(lVar7 + 0x3c0),(int)*(char *)(lVar7 + 0x4f0));
            }
            else {
              piVar1 = (int *)(*(longlong *)(lVar3 + 0x90 + (longlong)*(int *)(lVar3 + 0x50) * 8) +
                              0x3c0);
              *piVar1 = *piVar1 + 1;
            }
            iVar22 = iVar22 + -0x10;
          } while (0x1f < iVar22);
          uVar21 = (uVar21 - 0x10) - (uVar21 + 0x10 + uVar16 & 0xfffffff0);
        }
        uVar19 = (int)uVar19 >> 1;
        if (uVar19 == 0) {
          uVar16 = 0x20;
        }
        else {
          uVar16 = 0x1f;
          if (uVar19 != 0) {
            for (; uVar19 >> uVar16 == 0; uVar16 = uVar16 - 1) {
            }
          }
          uVar16 = uVar16 ^ 0x1f;
        }
        if (9 < (int)(0x20 - uVar16)) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 6;
          (*(code *)*puVar6)();
        }
        iVar22 = uVar21 * 0x10 + (0x21 - uVar16);
        if (*(int *)(lVar3 + 0x18) == 0) {
          lVar7 = *(longlong *)(lVar3 + 0x70 + (longlong)*(int *)(lVar3 + 0x50) * 8);
          FUN_00a249a0(lVar3,*(undefined4 *)(lVar7 + (longlong)iVar22 * 4),
                       (int)*(char *)(lVar7 + 0x400 + (longlong)iVar22));
        }
        else {
          piVar1 = (int *)(*(longlong *)(lVar3 + 0x90 + (longlong)*(int *)(lVar3 + 0x50) * 8) +
                          (longlong)iVar22 * 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_00a249a0(lVar3,uVar13,0x21 - uVar16);
        uVar21 = 0;
      }
      bVar8 = lVar20 < (int)lVar14;
      lVar20 = lVar20 + 1;
    } while (bVar8);
    if ((0 < (int)uVar21) &&
       (iVar22 = *(int *)(lVar3 + 0x54) + 1, *(int *)(lVar3 + 0x54) = iVar22, iVar22 == 0x7fff)) {
      FUN_00a24b00(lVar3);
    }
  }
  puVar6 = (undefined8 *)param_1[5];
  uVar12 = *(undefined8 *)(lVar3 + 0x28);
  *puVar6 = *(undefined8 *)(lVar3 + 0x20);
  puVar6[1] = uVar12;
  iVar22 = (int)param_1[0x23];
  if (iVar22 != 0) {
    iVar18 = *(int *)(lVar3 + 0x68);
    if (*(int *)(lVar3 + 0x68) == 0) {
      *(int *)(lVar3 + 0x68) = iVar22;
      *(uint *)(lVar3 + 0x6c) = *(int *)(lVar3 + 0x6c) + 1U & 7;
      iVar18 = iVar22;
    }
    *(int *)(lVar3 + 0x68) = iVar18 + -1;
  }
  return 1;
}

