/* Ghidra address: 00e753c0 */
/* Ghidra symbol: FUN_00e753c0 */


void FUN_00e753c0(short *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  undefined8 in_RAX;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_69;
  undefined1 local_68 [8];
  undefined1 local_60 [56];
  
  bVar3 = (byte)param_4;
  if ((byte)(bVar3 - 8) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar3 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (bVar3 == 0xc) {
      dVar5 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
      if (dVar5 == 0.0) {
        uVar7 = 0;
      }
      else {
        dVar12 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x1c));
        dVar5 = (double)FUN_00c42670(dVar5,*(undefined8 *)(param_1 + 0x5c));
        dVar11 = (double)FUN_016ed7f0(param_3,param_4);
        uVar7 = FUN_0040c760((*(double *)(param_1 + 100) * 1.10449808e-22 * dVar12) / 3.0 +
                             (*(double *)(param_1 + 0x58) * dVar5) / dVar11);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\a',uVar7,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 4) == 0) || ((char)param_1[0x88] == '\0')) {
        dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                     (char)param_1[4],0);
        sVar1 = *param_1;
        dVar12 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                      *(undefined1 *)((longlong)param_1 + 5),0);
        sVar2 = *param_1;
        uVar7 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x8a] + 1,0);
        *(undefined8 *)(param_1 + 0x2c) = uVar7;
        uVar7 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x8a] + 2,0);
        *(undefined8 *)(param_1 + 0x30) = uVar7;
        uVar7 = FUN_00c42ff0((double)(int)sVar1 * dVar5,*(undefined8 *)(param_1 + 0x2c),
                             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),
                             &local_69);
        FUN_016e9f80(param_2,param_3,local_69,100);
        uVar6 = FUN_00c42ff0((double)(int)sVar2 * dVar12,*(undefined8 *)(param_1 + 0x30),
                             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),
                             &local_69);
        FUN_016e9f80(param_2,param_3,local_69,0x65);
        dVar5 = (double)FUN_00c432f0(uVar7,*(undefined8 *)(param_1 + 0x2c),
                                     *(undefined8 *)(param_1 + 0x34),&local_69);
        FUN_016e9f80(param_2,param_3,local_69,0x66);
        dVar12 = (double)FUN_00c432f0(uVar6,*(undefined8 *)(param_1 + 0x30),
                                      *(undefined8 *)(param_1 + 0x34),&local_69);
        FUN_016e9f80(param_2,param_3,local_69,0x67);
      }
      else {
        dVar5 = 0.0;
        dVar12 = 0.0;
      }
    }
    else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if ((char)param_1[0x88] == '\0') {
        dVar5 = -1.0;
        dVar12 = -1.0;
      }
      else {
        dVar5 = 0.0;
        dVar12 = 0.0;
      }
    }
    else {
      dVar5 = (double)(int)*param_1 * *(double *)(param_1 + 0x84);
      dVar12 = dVar5 - (double)(int)*param_1 * *(double *)(param_1 + 0x80);
    }
    *(double *)(param_1 + 0x2c) = dVar5;
    *(double *)(param_1 + 0x30) = dVar12;
    dVar11 = dVar5 - dVar12;
    uVar7 = FUN_00c42b60(dVar5,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x44),
                         0x3ff0000000000000,*(undefined8 *)(param_3 + 0x430),param_1 + 0x24,local_68
                        );
    *(undefined8 *)(param_1 + 0x14) = uVar7;
    uVar7 = FUN_00c42b60(dVar12,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x44),
                         0x3ff0000000000000,*(undefined8 *)(param_3 + 0x430),param_1 + 0x28,local_60
                        );
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x14) + *(double *)(param_1 + 0x18);
    if (dVar11 < 0.0) {
      dVar8 = dVar12 - *(double *)(param_1 + 0x34);
      if (0.0 < dVar8) {
        dVar9 = *(double *)(param_1 + 0x38) * (1.0 - *(double *)(param_1 + 0x3c) * dVar11);
        dVar10 = dVar9 + dVar9;
        if (-dVar11 < dVar8) {
          *(double *)(param_1 + 8) = dVar9 * dVar11 * (dVar8 + dVar8 + dVar11);
          *(double *)(param_1 + 0x1c) = dVar10 * dVar11;
          *(double *)(param_1 + 0x20) =
               dVar10 * dVar8 -
               *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0x38) * dVar11 *
               (dVar8 + dVar8 + dVar11);
        }
        else {
          *(double *)(param_1 + 8) = -dVar9 * dVar8 * dVar8;
          *(double *)(param_1 + 0x1c) = -dVar10 * dVar8;
          *(double *)(param_1 + 0x20) =
               *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0x38) * dVar8 * dVar8 -
               *(double *)(param_1 + 0x1c);
        }
      }
      else {
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
      }
    }
    else {
      dVar8 = dVar5 - *(double *)(param_1 + 0x34);
      if (0.0 < dVar8) {
        dVar9 = *(double *)(param_1 + 0x38) * (*(double *)(param_1 + 0x3c) * dVar11 + 1.0);
        dVar10 = dVar9 + dVar9;
        if (dVar11 < dVar8) {
          *(double *)(param_1 + 8) = dVar9 * dVar11 * ((dVar8 + dVar8) - dVar11);
          *(double *)(param_1 + 0x1c) = dVar10 * dVar11;
          *(double *)(param_1 + 0x20) =
               dVar10 * (dVar8 - dVar11) +
               *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0x38) * dVar11 *
               ((dVar8 + dVar8) - dVar11);
        }
        else {
          *(double *)(param_1 + 8) = dVar9 * dVar8 * dVar8;
          *(double *)(param_1 + 0x1c) = dVar10 * dVar8;
          *(double *)(param_1 + 0x20) =
               *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0x38) * dVar8 * dVar8;
        }
      }
      else {
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
      }
    }
    *(double *)(param_1 + 0xc) = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x18);
    FUN_016ed320(param_2,(char)param_1[1] + '\x01',
                 (double)(int)*param_1 *
                 ((*(double *)(param_1 + 8) - *(double *)(param_1 + 0x20) * dVar11) -
                 *(double *)(param_1 + 0x1c) * dVar5),
                 *(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x430),0);
    FUN_016ed220(param_2,(char)param_1[1] + '\x02',*(undefined8 *)(param_1 + 0x1c),0);
    FUN_016ed320(param_2,(char)param_1[1] + '\x03',
                 (double)(int)*param_1 *
                 (*(double *)(param_1 + 0x14) - *(double *)(param_1 + 0x24) * dVar5),
                 *(undefined8 *)(param_1 + 0x24),0);
    uVar7 = FUN_016ed320(param_2,(char)param_1[1] + '\x04',
                         (double)(int)*param_1 *
                         (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x28) * dVar12),
                         *(undefined8 *)(param_1 + 0x28),0);
    if (bVar3 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (bVar3 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(char *)(param_3 + 0x330) != '\0')) {
      uVar7 = FUN_00c42840(dVar5,*(undefined8 *)(param_1 + 0x4c),*(undefined8 *)(param_1 + 0x50),
                           *(undefined8 *)(param_1 + 0x54));
      FUN_016ed220(param_2,(char)param_1[1] + '\x05',uVar7,0);
      uVar7 = FUN_00c42840(dVar12,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                           *(undefined8 *)(param_1 + 0x54));
      FUN_016ed220(param_2,(char)param_1[1] + '\x06',uVar7,0);
    }
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x8a] + 1,dVar5,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x8a] + 2,dVar12,0);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x111) == '\0') {
      dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[2],
                                   *(undefined1 *)((longlong)param_1 + 7),0);
      *(double *)(param_1 + 0x80) = (double)(int)*param_1 * dVar5;
    }
    if ((char)param_1[0x89] == '\0') {
      dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                   *(undefined1 *)((longlong)param_1 + 7),0);
      *(double *)(param_1 + 0x84) = (double)(int)*param_1 * dVar5;
    }
  }
  return;
}

