/* Ghidra address: 016ddcd0 */
/* Ghidra symbol: FUN_016ddcd0 */


void FUN_016ddcd0(longlong param_1,longlong param_2,int param_3,int param_4,double *param_5,
                 char param_6)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double unaff_XMM10_Qa;
  double local_108 [8];
  double local_c8 [19];
  
  iVar3 = *(int *)(param_1 + 0x84) + param_4 + -1;
  dVar11 = 0.0;
  dVar13 = 0.0;
  dVar14 = 0.0;
  iVar7 = 0;
  if (param_3 == -1) {
    iVar7 = 1;
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84) + param_3 + -1;
    lVar6 = (longlong)iVar1;
    uVar9 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar6 * 8));
    uVar10 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar6 * 8));
    uVar9 = FUN_00b90630(uVar9,uVar10,
                         *(double *)(param_2 + 0x3c0) *
                         *(double *)(*(longlong *)(param_2 + 0x180) + lVar6 * 8));
    if (param_6 == '\0') {
      dVar11 = (double)FUN_00b90620(uVar9,*(undefined8 *)(param_2 + 0x3f0));
      dVar11 = (*(double *)(param_2 + 0x400) * dVar11) / *(double *)(param_2 + 0x10);
    }
    else {
      dVar11 = (double)FUN_00b90620(uVar9,*(undefined8 *)(param_2 + 1000));
      dVar11 = (*(double *)(param_2 + 0x400) * dVar11) / *(double *)(param_2 + 0x10);
    }
  }
  if (param_6 == '\0') {
    uVar9 = *(undefined8 *)(param_2 + 0x3d0);
    lVar6 = (longlong)iVar3;
    uVar10 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar6 * 8));
    uVar12 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar6 * 8));
    dVar14 = (double)FUN_00b90630(uVar10,uVar12,
                                  *(double *)(param_2 + 0x3c0) *
                                  *(double *)(*(longlong *)(param_2 + 0x180) + lVar6 * 8));
    dVar14 = *(double *)(param_2 + 0x3d0) + *(double *)(param_2 + 0x3c8) * dVar14;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x3d8);
    lVar6 = (longlong)iVar3;
    uVar10 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar6 * 8));
    uVar12 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar6 * 8));
    dVar13 = (double)FUN_00b90630(uVar10,uVar12,
                                  *(double *)(param_2 + 0x3c0) *
                                  *(double *)(*(longlong *)(param_2 + 0x180) + lVar6 * 8));
    dVar13 = *(double *)(param_2 + 0x3d8) + *(double *)(param_2 + 0x3c8) * dVar13;
  }
  uVar10 = FUN_00b90620(dVar14,dVar11);
  dVar13 = (double)FUN_00b90620(uVar10,dVar13);
  if (iVar1 == -1) {
    iVar1 = *(byte *)(param_2 + 0xb) + 1;
    pdVar2 = local_c8 + iVar1;
    do {
      *pdVar2 = *(double *)
                 (*(longlong *)(param_2 + 0x1b8 + (longlong)iVar1 * 8) + (longlong)iVar3 * 8);
      iVar1 = iVar1 + -1;
      pdVar2 = pdVar2 + -1;
    } while (iVar1 != -1);
  }
  else {
    iVar3 = *(byte *)(param_2 + 0xb) + 1;
    pdVar2 = local_c8 + iVar3;
    do {
      *pdVar2 = *(double *)
                 (*(longlong *)(param_2 + 0x1b8 + (longlong)iVar3 * 8) + (longlong)iVar1 * 8);
      iVar3 = iVar3 + -1;
      pdVar2 = pdVar2 + -1;
    } while (iVar3 != -1);
  }
  iVar1 = 0;
  iVar3 = *(byte *)(param_2 + 0xb) + 1;
  pdVar2 = local_108;
  do {
    if ((iVar1 < 1) || (dVar14 = (double)FUN_01b08a30(param_2,iVar1), dVar14 != 0.0)) {
      dVar14 = (double)FUN_01b08a30(param_2,iVar1);
      *pdVar2 = dVar14;
    }
    else {
      dVar14 = (double)FUN_01b08a30(param_2,iVar1 + -1);
      *pdVar2 = dVar14;
    }
    iVar1 = iVar1 + 1;
    pdVar2 = pdVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar5 = (uint)*(byte *)(param_2 + 0xb);
  while( true ) {
    uVar8 = uVar5;
    iVar3 = 0;
    if (-1 < (int)uVar8) {
      iVar1 = uVar8 + 1;
      pdVar2 = local_c8;
      pdVar4 = local_108;
      do {
        *pdVar2 = (*pdVar2 - local_c8[iVar3 + 1]) / *pdVar4;
        iVar3 = iVar3 + 1;
        pdVar4 = pdVar4 + 1;
        pdVar2 = pdVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    uVar5 = uVar8 - 1;
    if ((int)uVar5 < 0) break;
    iVar3 = 0;
    if (-1 < (int)uVar5) {
      pdVar2 = local_108;
      do {
        dVar14 = (double)FUN_01b08a30(param_2,iVar3);
        *pdVar2 = local_108[iVar3 + 1] + dVar14;
        iVar3 = iVar3 + 1;
        pdVar2 = pdVar2 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (*(char *)(param_2 + 0x886) == '\x01') {
    unaff_XMM10_Qa = *(double *)(&DAT_01f95618 + (longlong)(int)(*(byte *)(param_2 + 0xb) - 1) * 8);
  }
  else if (*(char *)(param_2 + 0x886) == '\x02') {
    unaff_XMM10_Qa = *(double *)(&DAT_01f955e8 + (longlong)(int)(*(byte *)(param_2 + 0xb) - 1) * 8);
  }
  dVar14 = (double)FUN_0040c850(local_c8[0]);
  dVar14 = (double)FUN_00b90620(uVar9,unaff_XMM10_Qa * dVar14);
  dVar14 = (*(double *)(param_2 + 0x3f8) * dVar13) / dVar14;
  uVar5 = (uint)*(byte *)(param_2 + 0xb) + iVar7;
  if (uVar5 == 2) {
    dVar14 = (double)FUN_0040c760();
  }
  else if (2 < uVar5) {
    dVar13 = (double)FUN_0040c2f0();
    dVar14 = (double)FUN_0040af80(dVar13 / (double)((uint)*(byte *)(param_2 + 0xb) + iVar7));
  }
  if (dVar14 < *param_5) {
    *param_5 = dVar14;
  }
  return;
}

