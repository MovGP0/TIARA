/* Ghidra address: 01672b90 */
/* Ghidra symbol: FUN_01672b90 */


bool FUN_01672b90(int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  byte local_b9 [145];
  
  bVar2 = false;
  *param_5 = 0x3ff0000000000000;
  iVar1 = 100;
  dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0x12),(char)param_1[4],0);
  dVar3 = (double)*param_1 * dVar3;
  dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0);
  dVar4 = (double)*param_1 * dVar4;
  dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
  dVar5 = (double)*param_1 * dVar5;
  dVar13 = dVar3 - dVar5;
  dVar14 = dVar4 - dVar5;
  dVar15 = *(double *)(param_1 + 0xe) - *(double *)(param_1 + 0x16);
  dVar6 = dVar3 - *(double *)(param_1 + 0x12);
  dVar7 = dVar13 - *(double *)(param_1 + 0x14);
  dVar12 = *(double *)(param_1 + 0xe);
  dVar11 = dVar5 - *(double *)(param_1 + 0x16);
  if (*(char *)(param_3 + 0x329) != '\0') {
    if (*(double *)(param_1 + 0x16) < 0.0) {
      dVar8 = (double)FUN_00c432f0(dVar14,dVar15,(double)*param_1 * *(double *)(param_1 + 0x38),
                                   local_b9);
      if (local_b9[0] != 0) {
        bVar2 = true;
        uVar9 = FUN_0040c850((dVar8 - dVar15) / (dVar14 - dVar15));
        *param_5 = uVar9;
        iVar1 = 0x6e;
        dVar5 = dVar4 - dVar8;
      }
    }
    else {
      dVar8 = (double)FUN_00c432f0(dVar4,*(undefined8 *)(param_1 + 0xe),
                                   (double)*param_1 * *(double *)(param_1 + 0x38),local_b9);
      bVar2 = local_b9[0] != 0;
      if (bVar2) {
        uVar9 = FUN_0040c850((dVar8 - *(double *)(param_1 + 0xe)) / (dVar4 - dVar12));
        *param_5 = uVar9;
        dVar5 = dVar8 - dVar14;
      }
      iVar1 = 100;
      dVar8 = (double)FUN_00c43230(dVar5,*(undefined8 *)(param_1 + 0x16),local_b9);
      if ((local_b9[0] != 0) && (1e-09 < dVar11)) {
        bVar2 = true;
        uVar9 = FUN_0040c850((dVar8 - *(double *)(param_1 + 0x16)) / dVar11);
        uVar9 = FUN_00b90650(*param_5,uVar9);
        *param_5 = uVar9;
        iVar1 = 0x65;
      }
    }
    if (dVar5 < 0.0) {
      dVar3 = (double)FUN_00c42ff0(dVar13,*(undefined8 *)(param_1 + 0x14),
                                   *(undefined8 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x34),
                                   local_b9);
      if (local_b9[0] != 0) {
        bVar2 = true;
        uVar9 = FUN_0040c850((dVar3 - *(double *)(param_1 + 0x14)) / dVar7);
        uVar9 = FUN_00b90650(*param_5,uVar9);
        *param_5 = uVar9;
        iVar1 = 0x69;
      }
    }
    else {
      dVar3 = (double)FUN_00c42ff0(dVar3,*(undefined8 *)(param_1 + 0x12),
                                   *(undefined8 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x36),
                                   local_b9);
      if (local_b9[0] != 0) {
        bVar2 = true;
        uVar9 = FUN_0040c850((dVar3 - *(double *)(param_1 + 0x12)) / dVar6);
        uVar9 = FUN_00b90650(*param_5,uVar9);
        *param_5 = uVar9;
        iVar1 = iVar1 + 4;
      }
    }
    if (bVar2 != false) {
      FUN_016e9f80(param_2,param_3,local_b9[0],iVar1);
    }
  }
  if ((*(char *)(param_3 + 0x331) == '\0') &&
     ((*(char *)((longlong)param_1 + 10) == '\0' || ((*(byte *)(param_3 + 0x88) & 8) != 0)))) {
    if (param_1[1] < 0) {
      dVar12 = ((*(double *)(param_1 + 0x20) -
                (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar7) -
               *(double *)(param_1 + 0x22) * (dVar14 - dVar15)) +
               *(double *)(param_1 + 0x24) * dVar11;
    }
    else {
      dVar12 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar7) +
               *(double *)(param_1 + 0x26) * dVar6 + *(double *)(param_1 + 0x22) * (dVar4 - dVar12)
               + *(double *)(param_1 + 0x24) * dVar11;
    }
    dVar6 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c) +
            *(double *)(param_1 + 0x1e) * dVar7 + *(double *)(param_1 + 0x1a) * dVar6;
    uVar9 = FUN_0040c850(dVar12);
    uVar10 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
    dVar5 = (double)FUN_00b90620(uVar9,uVar10);
    dVar3 = *(double *)(param_3 + 0x3c8);
    dVar4 = *(double *)(param_3 + 0x3d8);
    dVar12 = (double)FUN_0040c850(dVar12 - *(double *)(param_1 + 0x20));
    if (dVar12 < dVar3 * dVar5 + dVar4) {
      uVar9 = FUN_0040c850(dVar6);
      uVar10 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
      dVar4 = (double)FUN_00b90620(uVar9,uVar10);
      dVar12 = *(double *)(param_3 + 0x3c8);
      dVar3 = *(double *)(param_3 + 0x3d8);
      dVar5 = (double)FUN_0040c850(dVar6 - (*(double *)(param_1 + 0x18) +
                                           *(double *)(param_1 + 0x1c)));
      if (dVar12 * dVar4 + dVar3 < dVar5) {
        FUN_016e9f80(param_2,param_3,1,0xb);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return bVar2;
}

