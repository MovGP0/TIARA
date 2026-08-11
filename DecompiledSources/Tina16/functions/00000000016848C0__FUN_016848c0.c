/* Ghidra address: 016848c0 */
/* Ghidra symbol: FUN_016848c0 */


char FUN_016848c0(short *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 double *param_5)

{
  short sVar1;
  short sVar2;
  int unaff_EDI;
  char cVar3;
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
  char local_a9 [129];
  
  cVar3 = '\0';
  *param_5 = 1.0;
  dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                               (char)param_1[5],0);
  sVar1 = *param_1;
  dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                               *(undefined1 *)((longlong)param_1 + 9),0);
  sVar2 = *param_1;
  dVar6 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),(char)param_1[4],
                               (char)param_1[5]);
  dVar6 = (double)(int)*param_1 * dVar6;
  dVar7 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),(char)param_1[4],
                               *(undefined1 *)((longlong)param_1 + 9));
  dVar7 = (double)(int)*param_1 * dVar7;
  dVar11 = (double)(int)sVar1 * dVar4 - dVar6;
  dVar12 = (double)(int)sVar2 * dVar5 - dVar7;
  if (*(char *)(param_3 + 0x329) != '\0') {
    dVar4 = (double)FUN_00c42ff0((double)(int)sVar1 * dVar4,dVar6,*(undefined8 *)(param_1 + 0x3c),
                                 *(undefined8 *)(param_1 + 0x38),local_a9);
    if (local_a9[0] != '\0') {
      cVar3 = '\x01';
      dVar8 = (double)FUN_0040c850(dVar11);
      dVar13 = *(double *)(param_3 + 0x3c8) * dVar6 + *(double *)(param_3 + 0x3d0);
      if (dVar13 < dVar8) {
        uVar9 = FUN_0040c850(dVar4 - dVar6);
        dVar4 = (double)FUN_00b90620(uVar9,dVar13);
        if (dVar4 / dVar8 < *param_5) {
          *param_5 = dVar4 / dVar8;
        }
      }
      unaff_EDI = 100;
    }
    dVar4 = (double)FUN_00c42ff0((double)(int)sVar2 * dVar5,dVar7,*(undefined8 *)(param_1 + 0x3c),
                                 *(undefined8 *)(param_1 + 0x38),local_a9);
    if (local_a9[0] != '\0') {
      cVar3 = '\x01';
      dVar5 = (double)FUN_0040c850(dVar12);
      dVar6 = *(double *)(param_3 + 0x3c8) * dVar7 + *(double *)(param_3 + 0x3d0);
      if (dVar6 < dVar5) {
        uVar9 = FUN_0040c850(dVar4 - dVar7);
        dVar4 = (double)FUN_00b90620(uVar9,dVar6);
        if (dVar4 / dVar5 < *param_5) {
          *param_5 = dVar4 / dVar5;
        }
      }
      unaff_EDI = unaff_EDI + 1;
    }
    if (1e-100 < *(double *)(param_1 + 0x128)) {
      dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                   *(undefined1 *)((longlong)param_1 + 0xb),
                                   *(undefined1 *)((longlong)param_1 + 9),0);
      sVar1 = *param_1;
      dVar5 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),
                                   *(undefined1 *)((longlong)param_1 + 0xb),
                                   *(undefined1 *)((longlong)param_1 + 9));
      dVar5 = (double)(int)*param_1 * dVar5;
      dVar6 = (double)FUN_00c42ff0((double)(int)sVar1 * dVar4,dVar5,*(undefined8 *)(param_1 + 0x3c),
                                   *(undefined8 *)(param_1 + 0x38),local_a9);
      if (local_a9[0] != '\0') {
        cVar3 = '\x01';
        dVar4 = (double)FUN_0040c850((double)(int)sVar1 * dVar4 - dVar5);
        dVar7 = *(double *)(param_3 + 0x3c8) * dVar5 + *(double *)(param_3 + 0x3d0);
        if (dVar7 < dVar4) {
          uVar9 = FUN_0040c850(dVar6 - dVar5);
          dVar5 = (double)FUN_00b90620(uVar9,dVar7);
          if (dVar5 / dVar4 < *param_5) {
            *param_5 = dVar5 / dVar4;
          }
        }
        unaff_EDI = unaff_EDI + 2;
      }
    }
    if (cVar3 != '\0') {
      FUN_016e9f80(param_2,param_3,local_a9[0],unaff_EDI);
    }
  }
  if ((*(char *)(param_3 + 0x331) == '\0') &&
     (((char)param_1[2] == '\0' || ((*(byte *)(param_3 + 0x88) & 8) != 0)))) {
    dVar4 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),param_1[0x5c] + 0xd,0);
    dVar6 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),param_1[0x5c] + 0xe,0);
    dVar8 = (*(double *)(param_1 + 100) +
            (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x2c)) * dVar11) -
            (*(double *)(param_1 + 0x2c) + *(double *)(param_1 + 0x24)) * dVar12;
    dVar12 = *(double *)(param_1 + 0x60) + *(double *)(param_1 + 0x20) * dVar11 +
             *(double *)(param_1 + 0x24) * dVar12;
    uVar9 = FUN_0040c850(dVar8);
    uVar10 = FUN_0040c850(*(undefined8 *)(param_1 + 100));
    dVar7 = (double)FUN_00b90630(uVar9,uVar10,*(double *)(param_3 + 0x3c0) * dVar4);
    dVar4 = *(double *)(param_3 + 0x3c8);
    dVar5 = *(double *)(param_3 + 0x3d8);
    dVar11 = (double)FUN_0040c850(dVar8 - *(double *)(param_1 + 100));
    if (dVar11 <= dVar4 * dVar7 + dVar5) {
      uVar9 = FUN_0040c850(dVar12);
      uVar10 = FUN_0040c850(*(undefined8 *)(param_1 + 0x60));
      dVar6 = (double)FUN_00b90630(uVar9,uVar10,*(double *)(param_3 + 0x3c0) * dVar6);
      dVar4 = *(double *)(param_3 + 0x3c8);
      dVar5 = *(double *)(param_3 + 0x3e0);
      dVar7 = (double)FUN_0040c850(dVar12 - *(double *)(param_1 + 0x60));
      if (dVar4 * dVar6 + dVar5 < dVar7) {
        FUN_016e9f80(param_2,param_3,1,0xb);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return cVar3;
}

