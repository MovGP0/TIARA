/* Ghidra address: 0141d8f0 */
/* Ghidra symbol: FUN_0141d8f0 */


void FUN_0141d8f0(longlong param_1,longlong param_2)

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
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  uVar11 = FUN_01b05600(param_1,*(undefined1 *)(lVar6 + 1));
  *(undefined4 *)(lVar6 + 0x80) = uVar11;
  uVar11 = FUN_01b05600(param_1,*(undefined1 *)(lVar6 + 2));
  *(undefined4 *)(lVar6 + 0x84) = uVar11;
  uVar11 = FUN_01b05600(param_1,*(undefined1 *)(lVar6 + 3));
  *(undefined4 *)(lVar6 + 0x88) = uVar11;
  uVar11 = FUN_01b05600(param_1,*(undefined1 *)(lVar6 + 4));
  *(undefined4 *)(lVar6 + 0x8c) = uVar11;
  dVar16 = (double)FUN_016ed7b0(param_2,6);
  dVar17 = dVar16 - *(double *)(lVar6 + 0x10);
  pdVar1 = (double *)(*(longlong *)(lVar6 + 0x70) + 0x30);
  if (*pdVar1 <= dVar17 && dVar17 != *pdVar1) {
    iVar12 = 2;
    while ((iVar12 < *(int *)(lVar6 + 0x7c) &&
           (dVar17 = dVar16 - *(double *)(lVar6 + 0x10),
           pdVar1 = (double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar12 * 3) * 8),
           *pdVar1 <= dVar17 && dVar17 != *pdVar1))) {
      iVar12 = iVar12 + 1;
    }
    iVar12 = iVar12 + -2;
    if (iVar12 <= *(int *)(lVar6 + 0x7c)) {
      iVar15 = (*(int *)(lVar6 + 0x7c) - iVar12) + 1;
      iVar13 = iVar12;
      do {
        lVar7 = *(longlong *)(lVar6 + 0x70);
        iVar8 = (iVar13 - iVar12) * 3;
        iVar14 = iVar13 * 3;
        *(undefined8 *)(lVar7 + (longlong)iVar8 * 8) = *(undefined8 *)(lVar7 + (longlong)iVar14 * 8)
        ;
        *(undefined8 *)(lVar7 + (longlong)(iVar8 + 1) * 8) =
             *(undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar14 + 1) * 8);
        *(undefined8 *)(lVar7 + (longlong)(iVar8 + 2) * 8) =
             *(undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar14 + 2) * 8);
        iVar13 = iVar13 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    *(int *)(lVar6 + 0x7c) = *(int *)(lVar6 + 0x7c) - iVar12;
  }
  dVar17 = dVar16 - *(double *)
                     (*(longlong *)(lVar6 + 0x70) + (longlong)(*(int *)(lVar6 + 0x7c) * 3) * 8);
  if (dVar17 < *(double *)(param_2 + 0x380) || dVar17 == *(double *)(param_2 + 0x380)) {
    return;
  }
  if (*(int *)(lVar6 + 0x78) <= *(int *)(lVar6 + 0x7c)) {
    *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 5;
    FUN_00409620(lVar6 + 0x70,(longlong)((*(int *)(lVar6 + 0x78) + 1) * 0x18));
  }
  *(int *)(lVar6 + 0x7c) = *(int *)(lVar6 + 0x7c) + 1;
  *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(*(int *)(lVar6 + 0x7c) * 3) * 8) = dVar16;
  *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(*(int *)(lVar6 + 0x7c) * 3 + 1) * 8) =
       (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(lVar6 + 0x88) * 8) -
       *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(lVar6 + 0x8c) * 8)) +
       *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(lVar6 + 0x94) * 8) *
       *(double *)(lVar6 + 8);
  *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(*(int *)(lVar6 + 0x7c) * 3 + 2) * 8) =
       (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(lVar6 + 0x80) * 8) -
       *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(lVar6 + 0x84) * 8)) +
       *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(lVar6 + 0x90) * 8) *
       *(double *)(lVar6 + 8);
  iVar12 = *(int *)(lVar6 + 0x7c);
  dVar16 = *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar12 * 3 + 1) * 8);
  iVar13 = (iVar12 + -1) * 3;
  dVar17 = *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar13 + 1) * 8);
  dVar2 = *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)((iVar12 + -2) * 3 + 1) * 8);
  dVar3 = *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar12 * 3 + 2) * 8);
  dVar4 = *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)(iVar13 + 2) * 8);
  dVar5 = *(double *)(*(longlong *)(lVar6 + 0x70) + (longlong)((iVar12 + -2) * 3 + 2) * 8);
  dVar18 = (double)FUN_01b08a30(param_2,0);
  dVar18 = (dVar16 - dVar17) / dVar18;
  dVar19 = (double)FUN_01b08a30(param_2,1);
  dVar19 = (dVar17 - dVar2) / dVar19;
  dVar20 = (double)FUN_01b08a30(param_2,0);
  dVar20 = (dVar3 - dVar4) / dVar20;
  dVar21 = (double)FUN_01b08a30(param_2,1);
  dVar21 = (dVar4 - dVar5) / dVar21;
  dVar22 = (double)FUN_0040c850(dVar18 - dVar19);
  uVar23 = FUN_0040c850(dVar18);
  uVar24 = FUN_0040c850(dVar19);
  dVar18 = (double)FUN_00b90620(uVar23,uVar24);
  if ((dVar22 < *(double *)(lVar6 + 0x50) * dVar18 + *(double *)(lVar6 + 0x58)) ||
     (cVar10 = FUN_0141d7a0(param_2 + 0x5d8,dVar16,dVar17,dVar2), cVar10 == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    dVar16 = (double)FUN_0040c850(dVar20 - dVar21);
    uVar23 = FUN_0040c850(dVar20);
    uVar24 = FUN_0040c850(dVar21);
    dVar17 = (double)FUN_00b90620(uVar23,uVar24);
    if (dVar16 < *(double *)(lVar6 + 0x50) * dVar17 + *(double *)(lVar6 + 0x58)) {
      return;
    }
    cVar10 = FUN_0141d7a0(param_2 + 0x5d8,dVar3,dVar4,dVar5);
    if (cVar10 == '\0') {
      return;
    }
  }
  FUN_01b10f10(*(undefined8 *)(param_2 + 0x4b8),
               *(double *)
                (*(longlong *)(lVar6 + 0x70) + (longlong)(*(int *)(lVar6 + 0x7c) * 3 + -3) * 8) +
               *(double *)(lVar6 + 0x10));
  return;
}

