/* Ghidra address: 00e74e70 */
/* Ghidra symbol: FUN_00e74e70 */


char FUN_00e74e70(short *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int unaff_EDI;
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  byte local_a9 [129];
  
  cVar1 = '\0';
  *param_5 = 0x3ff0000000000000;
  dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                               (char)param_1[4],0);
  dVar2 = (double)(int)*param_1 * dVar2;
  dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                               *(undefined1 *)((longlong)param_1 + 5),0);
  dVar3 = (double)(int)*param_1 * dVar3;
  dVar4 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),(char)param_1[3],
                               (char)param_1[4]);
  dVar4 = (double)(int)*param_1 * dVar4;
  dVar5 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),(char)param_1[3],
                               *(undefined1 *)((longlong)param_1 + 5));
  dVar5 = (double)(int)*param_1 * dVar5;
  dVar9 = dVar2 - dVar4;
  dVar10 = dVar3 - dVar5;
  if (*(char *)(param_3 + 0x329) != '\0') {
    dVar6 = (double)FUN_00c42ff0(dVar2,*(undefined8 *)(param_1 + 0x2c),
                                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),
                                 local_a9);
    if (local_a9[0] != 0) {
      cVar1 = '\x01';
      if (*(double *)(param_3 + 0x3d0) <= dVar9 && dVar9 != *(double *)(param_3 + 0x3d0)) {
        uVar7 = FUN_0040c850((dVar6 - dVar4) / dVar9);
        *param_5 = uVar7;
      }
      unaff_EDI = 100;
      dVar2 = dVar6;
    }
    dVar6 = (double)FUN_00c42ff0(dVar3,*(undefined8 *)(param_1 + 0x30),
                                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),
                                 local_a9);
    if (local_a9[0] != 0) {
      cVar1 = '\x01';
      if (*(double *)(param_3 + 0x3d0) <= dVar10 && dVar10 != *(double *)(param_3 + 0x3d0)) {
        uVar7 = FUN_0040c850((dVar6 - dVar5) / dVar10);
        uVar7 = FUN_00b90650(*param_5,uVar7);
        *param_5 = uVar7;
      }
      unaff_EDI = unaff_EDI + 1;
      dVar3 = dVar6;
    }
    dVar2 = (double)FUN_00c432f0(dVar2,*(undefined8 *)(param_1 + 0x2c),
                                 *(undefined8 *)(param_1 + 0x34),local_a9);
    if (local_a9[0] != 0) {
      cVar1 = '\x01';
      if (*(double *)(param_3 + 0x3d0) <= dVar9 && dVar9 != *(double *)(param_3 + 0x3d0)) {
        uVar7 = FUN_0040c850((dVar2 - dVar4) / dVar9);
        uVar7 = FUN_00b90650(*param_5,uVar7);
        *param_5 = uVar7;
      }
      unaff_EDI = unaff_EDI + 2;
    }
    dVar3 = (double)FUN_00c432f0(dVar3,*(undefined8 *)(param_1 + 0x30),
                                 *(undefined8 *)(param_1 + 0x34),local_a9);
    if (local_a9[0] != 0) {
      cVar1 = '\x01';
      if (*(double *)(param_3 + 0x3d0) <= dVar10 && dVar10 != *(double *)(param_3 + 0x3d0)) {
        uVar7 = FUN_0040c850((dVar3 - dVar5) / dVar10);
        uVar7 = FUN_00b90650(*param_5,uVar7);
        *param_5 = uVar7;
      }
      unaff_EDI = unaff_EDI + 4;
    }
    if (cVar1 != '\0') {
      FUN_016e9f80(param_2,param_3,local_a9[0],unaff_EDI);
    }
  }
  if ((*(char *)(param_3 + 0x331) == '\0') &&
     (((char)param_1[0x88] == '\0' || ((*(byte *)(param_3 + 0x88) & 8) != 0)))) {
    dVar6 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x28) * dVar10 +
            *(double *)(param_1 + 0x24) * dVar9;
    dVar5 = (*(double *)(param_1 + 0xc) + *(double *)(param_1 + 0x1c) * dVar9 +
            *(double *)(param_1 + 0x20) * (dVar9 - dVar10)) - *(double *)(param_1 + 0x28) * dVar10;
    uVar7 = FUN_0040c850(dVar5);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0xc));
    dVar4 = (double)FUN_00b90620(uVar7,uVar8);
    dVar3 = *(double *)(param_3 + 0x6c0);
    dVar2 = *(double *)(param_3 + 0x6a8);
    dVar5 = (double)FUN_0040c850(dVar5 - *(double *)(param_1 + 0xc));
    if (dVar5 < dVar3 * dVar4 + dVar2) {
      uVar7 = FUN_0040c850(dVar6);
      uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0x10));
      dVar4 = (double)FUN_00b90620(uVar7,uVar8);
      dVar3 = *(double *)(param_3 + 0x6c0);
      dVar2 = *(double *)(param_3 + 0x6a8);
      dVar5 = (double)FUN_0040c850(dVar6 - *(double *)(param_1 + 0x10));
      if (dVar3 * dVar4 + dVar2 < dVar5) {
        FUN_016e9f80(param_2,param_3,1,0xb);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return cVar1;
}

