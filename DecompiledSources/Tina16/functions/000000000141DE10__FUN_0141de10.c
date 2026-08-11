/* Ghidra address: 0141de10 */
/* Ghidra symbol: FUN_0141de10 */


undefined4 FUN_0141de10(char *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  undefined4 unaff_R13D;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  
  dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],param_1[4],0);
  dVar5 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x04',1,0);
  dVar4 = dVar4 + dVar5 * *(double *)(param_1 + 8);
  dVar5 = *(double *)
           (*(longlong *)(param_1 + 0x70) + (longlong)(*(int *)(param_1 + 0x7c) * 3 + 1) * 8);
  dVar15 = *(double *)
            (*(longlong *)(param_1 + 0x70) + (longlong)((*(int *)(param_1 + 0x7c) + -1) * 3 + 1) * 8
            );
  dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0);
  dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,0);
  dVar6 = dVar6 + dVar7 * *(double *)(param_1 + 8);
  dVar7 = *(double *)
           (*(longlong *)(param_1 + 0x70) + (longlong)(*(int *)(param_1 + 0x7c) * 3 + 2) * 8);
  dVar1 = *(double *)
           (*(longlong *)(param_1 + 0x70) + (longlong)((*(int *)(param_1 + 0x7c) + -1) * 3 + 2) * 8)
  ;
  dVar8 = (double)FUN_01b08a30(param_3,1);
  dVar8 = (dVar4 - dVar5) / dVar8;
  dVar9 = (double)FUN_01b08a30(param_3,2);
  dVar9 = (dVar5 - dVar15) / dVar9;
  dVar10 = (double)FUN_01b08a30(param_3,1);
  dVar10 = (dVar6 - dVar7) / dVar10;
  dVar11 = (double)FUN_01b08a30(param_3,2);
  dVar11 = (dVar7 - dVar1) / dVar11;
  dVar12 = (double)FUN_0040c850(dVar8 - dVar9);
  uVar13 = FUN_0040c850(dVar8);
  uVar14 = FUN_0040c850(dVar9);
  dVar8 = (double)FUN_00b90620(uVar13,uVar14);
  if ((dVar12 < *(double *)(param_1 + 0x50) * dVar8 + *(double *)(param_1 + 0x58)) ||
     (cVar3 = FUN_0141d7a0(param_3 + 0x5d8,dVar4,dVar5,dVar15), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    dVar5 = (double)FUN_0040c850(dVar10 - dVar11);
    uVar13 = FUN_0040c850(dVar10);
    uVar14 = FUN_0040c850(dVar11);
    dVar15 = (double)FUN_00b90620(uVar13,uVar14);
    if (dVar5 < *(double *)(param_1 + 0x50) * dVar15 + *(double *)(param_1 + 0x58)) {
      return unaff_R13D;
    }
    cVar3 = FUN_0141d7a0(param_3 + 0x5d8,dVar6,dVar7,dVar1);
    if (cVar3 == '\0') {
      return unaff_R13D;
    }
  }
  dVar5 = *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(*(int *)(param_1 + 0x7c) * 3) * 8);
  dVar15 = *(double *)(param_1 + 0x10);
  dVar7 = (double)FUN_016ed780(param_3,6);
  uVar13 = FUN_00b90650(*param_4,((dVar5 + dVar15) - dVar7) / *(double *)(param_3 + 0x760));
  *param_4 = uVar13;
  return unaff_R13D;
}

