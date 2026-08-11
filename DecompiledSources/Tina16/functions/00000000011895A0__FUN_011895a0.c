/* Ghidra address: 011895a0 */
/* Ghidra symbol: FUN_011895a0 */


undefined8 FUN_011895a0(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar16 = *(double *)(*param_1 + 0x40) * 2.0;
  dVar17 = dVar16 * dVar16;
  iVar14 = *(int *)(*param_1 + 0x1fa0);
  bVar15 = iVar14 % 2 != 0;
  if (bVar15) {
    dVar19 = *(double *)(*param_1 + 0x60) + *(double *)(*param_1 + 0x58) * dVar16;
    dVar1 = *(double *)(*param_1 + 0x58);
    dVar2 = *(double *)(*param_1 + 0x60);
    dVar20 = *(double *)(*param_1 + 0x1008) + *(double *)(*param_1 + 0x1000) * dVar16;
    dVar3 = *(double *)(*param_1 + 0x1000);
    dVar4 = *(double *)(*param_1 + 0x1008);
    *(undefined8 *)(*param_1 + 0x50) = 0x3ff0000000000000;
    *(double *)(*param_1 + 0x58) = (dVar2 - dVar1 * dVar16) / dVar19;
    *(undefined8 *)(*param_1 + 0x60) = 0;
    *(undefined8 *)(*param_1 + 0xff8) = 0x3ff0000000000000;
    *(double *)(*param_1 + 0x1000) = (dVar4 - dVar3 * dVar16) / dVar20;
    *(undefined8 *)(*param_1 + 0x1008) = 0;
    *(double *)(*param_1 + 0x48) = *(double *)(*param_1 + 0x48) * (dVar19 / dVar20);
  }
  uVar9 = (uint)bVar15;
  iVar14 = (iVar14 + 1) / 2 + -1;
  if ((int)uVar9 <= iVar14) {
    iVar14 = (iVar14 - (uint)bVar15) + 1;
    do {
      iVar10 = uVar9 * 3;
      lVar11 = (longlong)iVar10;
      lVar12 = (longlong)(iVar10 + 1);
      lVar13 = (longlong)(iVar10 + 2);
      dVar18 = *(double *)(*param_1 + 0x50 + lVar11 * 8) * dVar17 +
               *(double *)(*param_1 + 0x50 + lVar12 * 8) * dVar16 +
               *(double *)(*param_1 + 0x50 + lVar13 * 8);
      dVar1 = *(double *)(*param_1 + 0x50 + (longlong)iVar10 * 8);
      dVar2 = *(double *)(*param_1 + 0x50 + (longlong)(iVar10 + 2) * 8);
      dVar3 = *(double *)(*param_1 + 0x50 + (longlong)iVar10 * 8);
      dVar4 = *(double *)(*param_1 + 0x50 + (longlong)(iVar10 + 1) * 8);
      dVar19 = *(double *)(*param_1 + 0x50 + (longlong)(iVar10 + 2) * 8);
      dVar21 = *(double *)(*param_1 + 0xff8 + lVar11 * 8) * dVar17 +
               *(double *)(*param_1 + 0xff8 + lVar12 * 8) * dVar16 +
               *(double *)(*param_1 + 0xff8 + lVar13 * 8);
      dVar20 = *(double *)(*param_1 + 0xff8 + lVar11 * 8);
      dVar5 = *(double *)(*param_1 + 0xff8 + lVar13 * 8);
      dVar6 = *(double *)(*param_1 + 0xff8 + lVar11 * 8);
      dVar7 = *(double *)(*param_1 + 0xff8 + lVar12 * 8);
      dVar8 = *(double *)(*param_1 + 0xff8 + lVar13 * 8);
      *(undefined8 *)(*param_1 + 0x50 + lVar11 * 8) = 0x3ff0000000000000;
      *(double *)(*param_1 + 0x50 + lVar12 * 8) = ((dVar2 - dVar1 * dVar17) * 2.0) / dVar18;
      *(double *)(*param_1 + 0x50 + lVar13 * 8) =
           ((dVar3 * dVar17 - dVar4 * dVar16) + dVar19) / dVar18;
      *(undefined8 *)(*param_1 + 0xff8 + lVar11 * 8) = 0x3ff0000000000000;
      *(double *)(*param_1 + 0xff8 + lVar12 * 8) = ((dVar5 - dVar20 * dVar17) * 2.0) / dVar21;
      *(double *)(*param_1 + 0xff8 + lVar13 * 8) =
           ((dVar6 * dVar17 - dVar7 * dVar16) + dVar8) / dVar21;
      *(double *)(*param_1 + 0x48) = *(double *)(*param_1 + 0x48) * (dVar18 / dVar21);
      uVar9 = uVar9 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return 0;
}

