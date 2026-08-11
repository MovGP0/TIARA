/* Ghidra address: 01d47520 */
/* Ghidra symbol: FUN_01d47520 */


void FUN_01d47520(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  undefined8 unaff_R13;
  ulonglong uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  
  bVar6 = (char)param_4 - 8;
  if (bVar6 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar6 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (!bVar10) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
      return;
    }
    dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[10],param_1[0x10]
                                  ,0);
    dVar12 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[9],param_1[0x10],
                                  0);
    dVar13 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[5],param_1[0xe],0
                                 );
    FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],param_1[0x10],0);
    dVar14 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x198) + 1,0);
    if (dVar14 <= 0.5) {
      uVar9 = 0;
    }
    else {
      uVar9 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    }
    uVar3 = FUN_00dd56d0(dVar11 + *(double *)PTR_DAT_02003be8,1);
    uVar4 = FUN_00dd56d0(dVar12 + *(double *)PTR_DAT_02003be8,1);
    uVar5 = FUN_00dd56d0((dVar13 - *(double *)(param_1 + 0x28)) + *(double *)PTR_DAT_02003be8,1);
    cVar2 = FUN_01d474f0(uVar3,uVar4,uVar5,uVar9 & 0xffffffff);
    if (cVar2 == '\0') {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x3ff0000000000000;
    }
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x198) + 1,uVar15,0);
    if (((char)param_4 == '\x06') && ((*(byte *)(param_3 + 0x88) & 0x40) != 0)) {
      sVar1 = *(short *)(param_1 + 0x198);
      uVar15 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,sVar1 + 1,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,1,sVar1 + 1,uVar15,0);
    }
    dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xd],param_1[0xe]
                                  ,0);
    if (cVar2 == '\x01') {
      dVar12 = *(double *)(param_1 + 0x18);
    }
    else {
      dVar12 = -*(double *)(param_1 + 0x20);
    }
    FUN_016ed320(param_2,*param_1 + '\t',dVar12 * dVar11,0,0);
    dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[6],param_1[0xf],0
                                 );
    if (-0.1 <= dVar11) {
      if (dVar11 <= 0.1) {
        dVar11 = (dVar11 - -0.1) *
                 ((*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x68)) / 0.2) +
                 *(double *)(param_1 + 0x68);
      }
      else {
        dVar11 = *(double *)(param_1 + 0x60);
      }
    }
    else {
      dVar11 = *(double *)(param_1 + 0x68);
    }
    FUN_016ed320(param_2,*param_1 + '\r',0,dVar11,0);
    dVar11 = *(double *)(param_1 + 0x28) - 0.1;
    dVar12 = *(double *)(param_1 + 0x28) + 0.1;
    dVar14 = (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x58)) / (dVar12 - dVar11);
    if (dVar11 <= dVar13) {
      if (dVar13 <= dVar12) {
        dVar11 = (dVar13 - dVar11) * dVar14 + *(double *)(param_1 + 0x58);
      }
      else {
        dVar11 = *(double *)(param_1 + 0x50);
        dVar14 = 0.0;
      }
    }
    else {
      dVar11 = *(double *)(param_1 + 0x58);
      dVar14 = 0.0;
    }
    dVar14 = dVar11 + (dVar13 - dVar12) * dVar14;
    FUN_016ed320(param_2,*param_1 + '\x06',(dVar13 - dVar12) * dVar11 - dVar14 * dVar13,dVar14,0);
  }
  iVar8 = 2;
  pcVar7 = param_1 + 0x70;
  do {
    FUN_00db21b0(pcVar7,param_2,param_3,param_4);
    pcVar7 = pcVar7 + 0x50;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_00f560e0(param_1 + 0x110,param_2,param_3,param_4);
  return;
}

