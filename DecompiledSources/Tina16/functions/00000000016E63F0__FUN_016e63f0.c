/* Ghidra address: 016e63f0 */
/* Ghidra symbol: FUN_016e63f0 */


ulonglong FUN_016e63f0(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  undefined8 unaff_RDI;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  dVar16 = *(double *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x9c) * 3;
  dVar17 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar5 + 1) * 8);
  iVar6 = (*(int *)(param_1 + 0x9c) + -1) * 3;
  dVar18 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 + 1) * 8);
  dVar1 = *(double *)(param_1 + 8);
  dVar2 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar5 + 2) * 8);
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 + 2) * 8);
  dVar9 = (double)FUN_01b08a30(lVar4,1);
  dVar9 = (dVar16 - dVar17) / dVar9;
  dVar10 = (double)FUN_01b08a30(lVar4,2);
  dVar10 = (dVar17 - dVar18) / dVar10;
  dVar11 = (double)FUN_01b08a30(lVar4,1);
  dVar11 = (dVar1 - dVar2) / dVar11;
  dVar12 = (double)FUN_01b08a30(lVar4,2);
  dVar12 = (dVar2 - dVar3) / dVar12;
  dVar13 = (double)FUN_0040c850(dVar9 - dVar10);
  uVar14 = FUN_0040c850(dVar9);
  uVar15 = FUN_0040c850(dVar10);
  dVar9 = (double)FUN_00b90620(uVar14,uVar15);
  if (dVar13 < *(double *)(param_1 + 0x70) * dVar9 + *(double *)(param_1 + 0x78)) {
LAB_016e65be:
    bVar7 = false;
  }
  else {
    cVar8 = FUN_016e5de0(lVar4 + 0x5d8,dVar16,dVar17,dVar18);
    if (cVar8 == '\0') goto LAB_016e65be;
    bVar7 = true;
  }
  if (!bVar7) {
    dVar16 = (double)FUN_0040c850(dVar11 - dVar12);
    uVar14 = FUN_0040c850(dVar11);
    uVar15 = FUN_0040c850(dVar12);
    dVar17 = (double)FUN_00b90620(uVar14,uVar15);
    if (dVar16 < *(double *)(param_1 + 0x70) * dVar17 + *(double *)(param_1 + 0x78))
    goto LAB_016e667e;
    cVar8 = FUN_016e5de0(lVar4 + 0x5d8,dVar1,dVar2,dVar3);
    if (cVar8 == '\0') goto LAB_016e667e;
  }
  dVar16 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(*(int *)(param_1 + 0x9c) * 3) * 8)
  ;
  dVar17 = *(double *)(param_1 + 0xa0);
  dVar18 = (double)FUN_016ed780(*(undefined8 *)(param_1 + 0x58),6);
  uVar14 = FUN_00b90650(*param_2,((dVar16 + dVar17) - dVar18) / *(double *)(lVar4 + 0x760));
  *param_2 = uVar14;
LAB_016e667e:
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1) & 0xffffffff;
}

