/* Ghidra address: 011641a0 */
/* Ghidra symbol: FUN_011641a0 */


void FUN_011641a0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined8 in_RAX;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((byte)param_4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << ((byte)param_4 & 0x1f) & 0xe2U) != 0
    ;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) && ((*(byte *)(param_3 + 0x88) & 0x20) == 0)) {
    dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)(param_1 + 0xaa),*(undefined1 *)(param_1 + 0xa9),0);
    dVar12 = (dVar6 / *(double *)(param_1 + 0x18)) * *(double *)(param_1 + 0x28);
    FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*(char *)(param_1 + 0xac) + '\x01',1,0);
    FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 0xab),
                 *(undefined1 *)(param_1 + 0xa9),0);
    dVar7 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0xb0) + 1,0);
    dVar13 = *(double *)(param_1 + 0x48) * dVar7 + dVar12;
    dVar6 = (double)FUN_0040c850(dVar13);
    dVar11 = 1.0 / (dVar6 + *(double *)(param_1 + 0x30));
    dVar10 = *(double *)(param_1 + 0x50) * dVar13 * dVar11;
    dVar8 = (double)FUN_0040c850(dVar13);
    dVar6 = *(double *)(param_1 + 0x50);
    *(double *)(*(longlong *)(param_1 + 0xc0) + 0x10) = dVar13;
    FUN_016e3840(*(undefined8 *)(param_1 + 0xc0),param_4);
    iVar4 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8));
    *(double *)(param_1 + 0x58) = (double)iVar4;
    if (*(double *)(param_1 + 0x58) == 0.0) {
      uVar9 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0xb0) + 3,0);
      *(undefined8 *)(param_1 + 0x58) = uVar9;
      if (*(double *)(param_1 + 0x58) == 0.0) {
        *(undefined8 *)(param_1 + 0x58) = 0x3ff0000000000000;
      }
    }
    dVar7 = (dVar10 - dVar7) * *(double *)(*(longlong *)(param_1 + 0xc0) + 8);
    dVar13 = 1.0;
    if (dVar7 < 0.0) {
      dVar13 = 0.0;
    }
    dVar1 = *(double *)(param_1 + 0x58);
    dVar2 = *(double *)(param_1 + 0x40);
    *(double *)(*(longlong *)(param_1 + 200) + 0x10) = dVar10;
    FUN_016e3840(*(undefined8 *)(param_1 + 200),param_4);
    *(double *)(*(longlong *)(param_1 + 0xb8) + 0x10) =
         (*(double *)(param_1 + 0x38) / (*(double *)(param_1 + 0x38) + 1.0)) *
         *(double *)(*(longlong *)(param_1 + 200) + 8) +
         (1.0 / (*(double *)(param_1 + 0x38) + 1.0)) * ((dVar13 * dVar1) / dVar2) * dVar7;
    lVar3 = *(longlong *)(param_1 + 0xb8);
    *(double *)(lVar3 + 0x80) = dVar10;
    FUN_016e31e0(lVar3,param_4);
    dVar7 = *(double *)(*(longlong *)(param_1 + 0xb8) + 8);
    *(double *)(param_1 + 0xa0) =
         ((1.0 / (*(double *)(param_1 + 0x38) + 1.0)) * dVar13 * (dVar10 - dVar7)) /
         (*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x58) -
         *(double *)(param_1 + 0x48) * (dVar10 - dVar7)) +
         (*(double *)(param_1 + 0x38) / (*(double *)(param_1 + 0x38) + 1.0)) *
         dVar6 * dVar11 * (1.0 - dVar8 * dVar11);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0xb0) + 1,dVar7,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0xb0) + 2,
                 *(undefined8 *)(param_1 + 0xa0),0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0xb0) + 4,dVar12,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0xb0) + 3,
                 *(undefined8 *)(param_1 + 0x58),0);
    FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*(char *)(param_1 + 0xac) + '\x01',1,0);
    FUN_016ed320(param_2,*(char *)(param_1 + 0xac) + '\x03',
                 -(dVar7 - *(double *)(param_1 + 0xa0) * dVar12) * *(double *)(param_1 + 0x18),0,0);
    FUN_016ed220(param_2,*(char *)(param_1 + 0xac) + '\x04',
                 *(ulonglong *)(param_1 + 0xa0) ^ 0x8000000000000000,0);
  }
  return;
}

