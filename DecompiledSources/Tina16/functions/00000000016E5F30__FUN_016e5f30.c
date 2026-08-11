/* Ghidra address: 016e5f30 */
/* Ghidra symbol: FUN_016e5f30 */


void FUN_016e5f30(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (*(double *)(param_1 + 0xa0) <= 0.0) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  dVar15 = (double)FUN_016ed7b0(*(undefined8 *)(param_1 + 0x58),6);
  dVar16 = dVar15 - *(double *)(param_1 + 0xa0);
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x90) + 0x30);
  if (*pdVar1 <= dVar16 && dVar16 != *pdVar1) {
    iVar11 = 2;
    while ((iVar11 < *(int *)(param_1 + 0x9c) &&
           (dVar16 = dVar15 - *(double *)(param_1 + 0xa0),
           pdVar1 = (double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar11 * 3) * 8),
           *pdVar1 <= dVar16 && dVar16 != *pdVar1))) {
      iVar11 = iVar11 + 1;
    }
    iVar11 = iVar11 + -2;
    if (iVar11 <= *(int *)(param_1 + 0x9c)) {
      iVar14 = (*(int *)(param_1 + 0x9c) - iVar11) + 1;
      iVar12 = iVar11;
      do {
        lVar7 = *(longlong *)(param_1 + 0x90);
        iVar8 = (iVar12 - iVar11) * 3;
        iVar13 = iVar12 * 3;
        *(undefined8 *)(lVar7 + (longlong)iVar8 * 8) = *(undefined8 *)(lVar7 + (longlong)iVar13 * 8)
        ;
        *(undefined8 *)(lVar7 + (longlong)(iVar8 + 1) * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar13 + 1) * 8);
        *(undefined8 *)(lVar7 + (longlong)(iVar8 + 2) * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar13 + 2) * 8);
        iVar12 = iVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) - iVar11;
  }
  dVar16 = dVar15 - *(double *)
                     (*(longlong *)(param_1 + 0x90) + (longlong)(*(int *)(param_1 + 0x9c) * 3) * 8);
  if (dVar16 < *(double *)(lVar6 + 0x380) || dVar16 == *(double *)(lVar6 + 0x380)) {
    return;
  }
  if (*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0x9c)) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 5;
    FUN_00409620(param_1 + 0x90,(longlong)((*(int *)(param_1 + 0x98) + 1) * 0x18));
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(*(int *)(param_1 + 0x9c) * 3) * 8) = dVar15
  ;
  *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)(*(int *)(param_1 + 0x9c) * 3 + 1) * 8)
       = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)(*(int *)(param_1 + 0x9c) * 3 + 2) * 8)
       = *(undefined8 *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 0x9c);
  dVar15 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar11 * 3 + 1) * 8);
  iVar12 = (iVar11 + -1) * 3;
  dVar16 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar12 + 1) * 8);
  iVar14 = (iVar11 + -2) * 3;
  dVar2 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar14 + 1) * 8);
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar11 * 3 + 2) * 8);
  dVar4 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar12 + 2) * 8);
  dVar5 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar14 + 2) * 8);
  dVar17 = (double)FUN_01b08a30(lVar6,0);
  dVar17 = (dVar15 - dVar16) / dVar17;
  dVar18 = (double)FUN_01b08a30(lVar6,1);
  dVar18 = (dVar16 - dVar2) / dVar18;
  dVar19 = (double)FUN_01b08a30(lVar6,0);
  dVar19 = (dVar3 - dVar4) / dVar19;
  dVar20 = (double)FUN_01b08a30(lVar6,1);
  dVar20 = (dVar4 - dVar5) / dVar20;
  dVar21 = (double)FUN_0040c850(dVar17 - dVar18);
  uVar22 = FUN_0040c850(dVar17);
  uVar23 = FUN_0040c850(dVar18);
  dVar17 = (double)FUN_00b90620(uVar22,uVar23);
  if ((dVar21 < *(double *)(param_1 + 0x70) * dVar17 + *(double *)(param_1 + 0x78)) ||
     (cVar10 = FUN_016e5de0(lVar6 + 0x5d8,dVar15,dVar16,dVar2), cVar10 == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    dVar15 = (double)FUN_0040c850(dVar19 - dVar20);
    uVar22 = FUN_0040c850(dVar19);
    uVar23 = FUN_0040c850(dVar20);
    dVar16 = (double)FUN_00b90620(uVar22,uVar23);
    if (dVar15 < *(double *)(param_1 + 0x70) * dVar16 + *(double *)(param_1 + 0x78)) {
      return;
    }
    cVar10 = FUN_016e5de0(lVar6 + 0x5d8,dVar3,dVar4,dVar5);
    if (cVar10 == '\0') {
      return;
    }
  }
  FUN_01b10f10(*(undefined8 *)(lVar6 + 0x4b8),
               *(double *)
                (*(longlong *)(param_1 + 0x90) + (longlong)(*(int *)(param_1 + 0x9c) * 3 + -3) * 8)
               + *(double *)(param_1 + 0xa0));
  return;
}

