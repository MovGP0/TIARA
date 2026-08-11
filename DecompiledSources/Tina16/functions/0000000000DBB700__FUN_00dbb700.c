/* Ghidra address: 00dbb700 */
/* Ghidra symbol: FUN_00dbb700 */


void FUN_00dbb700(int *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

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
  double dVar9;
  undefined1 local_99;
  double local_98;
  double local_90 [13];
  
  bVar1 = (byte)param_4;
  if ((byte)(bVar1 - 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar1 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (bVar1 == 0xc) {
      uVar3 = FUN_0040c850(*(undefined8 *)(param_1 + 0x18));
      dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x1a));
      if (*(double *)(param_1 + 0x18) == 0.0) {
        dVar4 = 0.0;
      }
      else {
        dVar7 = (double)FUN_00c42670(uVar3,*(undefined8 *)(param_1 + 0x66));
        dVar5 = (double)FUN_016ed7f0(param_3,param_4);
        dVar4 = (double)FUN_0040c760((*(double *)(param_1 + 0x68) * 1.10449808e-22 * dVar4) / 3.0 +
                                     (*(double *)(param_1 + 100) * dVar7) / dVar5);
      }
      FUN_016ed220(param_2,(char)param_1[2] + '\r',dVar4 * *(double *)(param_1 + 0x70),0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 4) == 0) || (*(char *)((longlong)param_1 + 10) == '\0')) {
        dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0x12),(char)param_1[4],0);
        dVar4 = (double)*param_1 * dVar4;
        dVar7 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0);
        dVar7 = (double)*param_1 * dVar7;
        dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
        dVar5 = (double)*param_1 * dVar5;
        dVar8 = dVar4 - dVar5;
        dVar9 = dVar7 - dVar5;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 1,0);
        *(undefined8 *)(param_1 + 6) = uVar3;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 2,0);
        *(undefined8 *)(param_1 + 8) = uVar3;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 3,0);
        *(undefined8 *)(param_1 + 10) = uVar3;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 4,0);
        *(undefined8 *)(param_1 + 0xc) = uVar3;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 5,0);
        *(undefined8 *)(param_1 + 0xe) = uVar3;
        if (*(char *)(param_3 + 0x329) == '\0') {
          if (*(double *)(param_1 + 0xe) < 0.0) {
            dVar9 = (double)FUN_00c432f0(dVar9,*(undefined8 *)(param_1 + 8),
                                         *(undefined8 *)(param_1 + 0x5e),&local_99);
            dVar5 = dVar7 - dVar9;
            dVar7 = dVar9 + dVar5;
          }
          else {
            dVar7 = (double)FUN_00c432f0(dVar7,*(undefined8 *)(param_1 + 6),
                                         *(undefined8 *)(param_1 + 0x5e),&local_99);
            dVar5 = (double)FUN_00c43230(dVar7 - dVar9,*(undefined8 *)(param_1 + 0xe),&local_99);
          }
          if (dVar5 < 0.0) {
            dVar4 = (double)FUN_00c42ff0(dVar8,*(undefined8 *)(param_1 + 0xc),
                                         *(double *)(param_1 + 0x56) * *(double *)(param_1 + 0x38),
                                         *(undefined8 *)(param_1 + 0x62),&local_99);
            FUN_016e9f80(param_2,param_3,local_99,0);
            dVar4 = dVar4 + dVar5;
          }
          else {
            dVar4 = (double)FUN_00c42ff0(dVar4,*(undefined8 *)(param_1 + 10),
                                         *(double *)(param_1 + 0x56) * *(double *)(param_1 + 0x38),
                                         *(undefined8 *)(param_1 + 0x62),&local_99);
            FUN_016e9f80(param_2,param_3,local_99,0);
          }
        }
      }
      else {
        dVar4 = 0.0;
        dVar7 = 0.0;
        dVar5 = 0.0;
      }
    }
    else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        dVar4 = -1.0;
        dVar7 = (double)*param_1 * *(double *)(param_1 + 0x60);
        dVar5 = 0.0;
      }
      else {
        dVar4 = 0.0;
        dVar7 = 0.0;
        dVar5 = 0.0;
      }
    }
    else {
      dVar4 = *(double *)(param_1 + 0x6e);
      dVar7 = *(double *)(param_1 + 0x6c);
      dVar5 = *(double *)(param_1 + 0x6a);
    }
    dVar8 = dVar4 - dVar5;
    dVar9 = dVar7 - dVar5;
    *(double *)(param_1 + 6) = dVar7;
    *(double *)(param_1 + 8) = dVar9;
    *(double *)(param_1 + 10) = dVar4;
    *(double *)(param_1 + 0xc) = dVar8;
    *(double *)(param_1 + 0xe) = dVar5;
    FUN_01674680(param_3,dVar4,*(double *)(param_1 + 0x56) * *(double *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x3a),param_1 + 0x10,param_1 + 0x12,local_90);
    uVar3 = FUN_016ed320(param_2,(char)param_1[2] + '\a',
                         (double)*param_1 *
                         (*(double *)(param_1 + 0x10) -
                         dVar4 * (*(double *)(param_1 + 0x12) - *(double *)(param_3 + 0x430))) *
                         *(double *)(param_1 + 0x70),
                         *(double *)(param_1 + 0x12) * *(double *)(param_1 + 0x70),0);
    if (bVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (bVar1 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (*(char *)(param_3 + 0x330) != '\0')) {
      dVar6 = (double)FUN_00c42830(dVar4,*(undefined8 *)(param_1 + 0x12),
                                   *(undefined8 *)(param_1 + 0x5a));
      local_90[0] = (double)FUN_00c42840(dVar4,*(undefined8 *)(param_1 + 0x42),
                                         *(undefined8 *)(param_1 + 0x3c),
                                         *(undefined8 *)(param_1 + 0x58));
      local_90[0] = dVar6 + local_90[0];
      FUN_016ed220(param_2,(char)param_1[2] + '\v',local_90[0] * *(double *)(param_1 + 0x70),0);
    }
    FUN_01674680(param_3,dVar8,*(double *)(param_1 + 0x56) * *(double *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x3a),param_1 + 0x14,param_1 + 0x16,&local_98);
    uVar3 = FUN_016ed320(param_2,(char)param_1[2] + '\x06',
                         (double)*param_1 *
                         (*(double *)(param_1 + 0x14) -
                         dVar8 * (*(double *)(param_1 + 0x16) - *(double *)(param_3 + 0x430))) *
                         *(double *)(param_1 + 0x70),
                         *(double *)(param_1 + 0x16) * *(double *)(param_1 + 0x70),0);
    if (bVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (bVar1 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (*(char *)(param_3 + 0x330) != '\0')) {
      dVar6 = (double)FUN_00c42830(dVar8,*(undefined8 *)(param_1 + 0x16),
                                   *(undefined8 *)(param_1 + 0x5a));
      local_98 = (double)FUN_00c42840(dVar8,*(undefined8 *)(param_1 + 0x40),
                                      *(undefined8 *)(param_1 + 0x3c),
                                      *(undefined8 *)(param_1 + 0x58));
      local_98 = dVar6 + local_98;
      FUN_016ed220(param_2,(char)param_1[2] + '\f',local_98 * *(double *)(param_1 + 0x70),0);
    }
    if (dVar5 < 0.0) {
      param_1[1] = -1;
    }
    else {
      param_1[1] = 1;
    }
    if (param_1[1] == 1) {
      FUN_00dbaed0(dVar5,dVar4,dVar7,param_1 + 0x18,param_1 + 0x1a,param_1 + 0x1c,param_1 + 0x1e,
                   param_1);
      FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                   (double)*param_1 *
                   (((*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1c) * dVar5) -
                    *(double *)(param_1 + 0x1a) * dVar7) - *(double *)(param_1 + 0x1e) * dVar4) *
                   *(double *)(param_1 + 0x70),
                   (*(double *)(param_1 + 0x1c) + *(double *)(param_1 + 0x5c)) *
                   *(double *)(param_1 + 0x70),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x02',
                   *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x70),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x03',
                   *(double *)(param_1 + 0x1e) * *(double *)(param_1 + 0x70),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x04',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x05',0,0);
    }
    else {
      FUN_00dbaed0(-dVar5,dVar8,dVar9,param_1 + 0x18,param_1 + 0x1a,param_1 + 0x1c,param_1 + 0x1e,
                   param_1);
      FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                   (double)-*param_1 *
                   (((*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1c) * -dVar5) -
                    *(double *)(param_1 + 0x1a) * dVar9) - *(double *)(param_1 + 0x1e) * dVar8) *
                   *(double *)(param_1 + 0x70),
                   (*(double *)(param_1 + 0x1c) + *(double *)(param_1 + 0x5c)) *
                   *(double *)(param_1 + 0x70),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x02',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x03',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x04',
                   -*(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x70),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x05',
                   -*(double *)(param_1 + 0x1e) * *(double *)(param_1 + 0x70),0);
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x18);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 1,dVar7,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 2,dVar9,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 3,dVar4,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 4,dVar8,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x36] + 5,dVar5,0);
  }
  else {
    if ((char)param_1[0x72] == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x6a) = uVar3;
    }
    if (*(char *)((longlong)param_1 + 0x1c9) == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x6c) = uVar3;
    }
    if (*(char *)((longlong)param_1 + 0x1ca) == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x6e) = uVar3;
    }
  }
  return;
}

