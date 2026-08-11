/* Ghidra address: 01685210 */
/* Ghidra symbol: FUN_01685210 */


void FUN_01685210(short *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  undefined8 in_RAX;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_99;
  undefined1 local_98 [8];
  double local_90;
  undefined1 local_88 [8];
  double local_80 [11];
  
  bVar1 = (byte)param_4;
  if ((byte)(bVar1 - 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar1 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (bVar1 == 0xc) {
      dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
      if (dVar4 == 0.0) {
        uVar3 = 0;
      }
      else {
        dVar6 = (double)FUN_00c42670(dVar4,*(undefined8 *)(param_1 + 0x90));
        dVar5 = (double)FUN_016ed7f0(param_3,param_4);
        uVar3 = FUN_0040c760(dVar4 * 3.2043834e-19 + (*(double *)(param_1 + 0x8c) * dVar6) / dVar5);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\b',uVar3,0);
      dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x14));
      if (dVar4 == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0040c760(dVar4 * 3.2043834e-19);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\t',uVar3,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 4) == 0) || ((char)param_1[2] == '\0')) {
        dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                     *(undefined1 *)((longlong)param_1 + 7),0);
        dVar4 = (double)FUN_00c42ff0((double)(int)*param_1 * dVar4,*(undefined8 *)(param_1 + 0x30),
                                     *(undefined8 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x38)
                                     ,&local_99);
        FUN_016e9f80(param_2,param_3,local_99,0);
        dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                     *(undefined1 *)((longlong)param_1 + 9),0);
        dVar6 = (double)FUN_00c42ff0((double)(int)*param_1 * dVar6,*(undefined8 *)(param_1 + 0x34),
                                     *(undefined8 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x38)
                                     ,&local_99);
        FUN_016e9f80(param_2,param_3,local_99,0);
      }
      else {
        dVar4 = 0.0;
        dVar6 = 0.0;
      }
    }
    else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if ((char)param_1[2] == '\0') {
        dVar4 = *(double *)(param_1 + 0x38);
        dVar6 = 0.0;
      }
      else {
        dVar4 = 0.0;
        dVar6 = 0.0;
      }
    }
    else {
      dVar4 = *(double *)(param_1 + 0x98);
      dVar6 = dVar4 - *(double *)(param_1 + 0x9c);
    }
    *(double *)(param_1 + 0x30) = dVar4;
    *(double *)(param_1 + 0x34) = dVar6;
    uVar3 = FUN_00c42b60(dVar4,*(undefined8 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x40),
                         0x3ff0000000000000,*(undefined8 *)(param_3 + 0x430),local_80,local_88);
    *(undefined8 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_00c42b60(dVar6,*(undefined8 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x40),
                         0x3ff0000000000000,*(undefined8 *)(param_3 + 0x430),&local_90,local_98);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    dVar5 = 1.0 - (dVar4 + dVar6) * *(double *)(param_1 + 0x68);
    dVar7 = dVar5 * (*(double *)(param_1 + 0xc) - *(double *)(param_1 + 0x10)) +
            (dVar4 - dVar6) * *(double *)(param_3 + 0x430);
    dVar8 = (local_80[0] * dVar5 -
            (*(double *)(param_1 + 0xc) - *(double *)(param_1 + 0x10)) * *(double *)(param_1 + 0x68)
            ) + *(double *)(param_3 + 0x430);
    dVar5 = (-local_90 * dVar5 -
            (*(double *)(param_1 + 0xc) - *(double *)(param_1 + 0x10)) * *(double *)(param_1 + 0x68)
            ) - *(double *)(param_3 + 0x430);
    *(double *)(param_1 + 8) =
         *(double *)(param_1 + 0xc) / *(double *)(param_1 + 0x60) +
         *(double *)(param_1 + 0x10) / *(double *)(param_1 + 100);
    *(double *)(param_1 + 0x14) = dVar7 - *(double *)(param_1 + 0x10) / *(double *)(param_1 + 100);
    *(double *)(param_1 + 0x20) = local_80[0] / *(double *)(param_1 + 0x60);
    *(double *)(param_1 + 0x24) = local_90 / *(double *)(param_1 + 100);
    *(double *)(param_1 + 0x2c) = -dVar5;
    *(double *)(param_1 + 0x28) = dVar8 - *(double *)(param_1 + 0x2c);
    *(double *)(param_1 + 0xc) = *(double *)(param_1 + 0xc) - dVar4 * local_80[0];
    *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) - dVar6 * local_90;
    FUN_016ed320(param_2,(char)param_1[1] + '\x01',
                 ((double)(int)*param_1 * *(double *)(param_1 + 0xc)) / *(double *)(param_1 + 0x60),
                 local_80[0] / *(double *)(param_1 + 0x60),0);
    FUN_016ed320(param_2,(char)param_1[1] + '\x03',
                 ((double)(int)*param_1 * *(double *)(param_1 + 0x10)) / *(double *)(param_1 + 100),
                 local_90 / *(double *)(param_1 + 100),0);
    FUN_016ed320(param_2,(char)param_1[1] + '\x05',
                 (double)(int)*param_1 * ((dVar7 - dVar4 * dVar8) - dVar6 * dVar5),0,0);
    FUN_016ed220(param_2,(char)param_1[1] + '\x06',dVar8,0);
    uVar3 = FUN_016ed220(param_2,(char)param_1[1] + '\a',dVar5,0);
    if (bVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (bVar1 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (*(char *)(param_3 + 0x330) != '\0')) {
      dVar5 = (double)FUN_00c42840(dVar4,*(undefined8 *)(param_1 + 0x6c),
                                   *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x74));
      dVar4 = (double)FUN_00c42830(dVar4,local_80[0],*(undefined8 *)(param_1 + 0x78));
      FUN_016ed220(param_2,(char)param_1[1] + '\x02',dVar5 + dVar4,0);
      dVar4 = (double)FUN_00c42840(dVar6,*(undefined8 *)(param_1 + 0x7c),
                                   *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x84));
      dVar6 = (double)FUN_00c42830(dVar6,local_90,*(undefined8 *)(param_1 + 0x88));
      FUN_016ed220(param_2,(char)param_1[1] + '\x04',dVar4 + dVar6,0);
    }
  }
  else {
    if ((char)param_1[0x94] == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 5),
                           *(undefined1 *)((longlong)param_1 + 7),0);
      *(undefined8 *)(param_1 + 0x98) = uVar3;
    }
    if (*(char *)((longlong)param_1 + 0x129) == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                           *(undefined1 *)((longlong)param_1 + 7),0);
      *(undefined8 *)(param_1 + 0x9c) = uVar3;
    }
  }
  return;
}

