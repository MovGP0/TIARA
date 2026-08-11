/* Ghidra address: 01d47ae0 */
/* Ghidra symbol: FUN_01d47ae0 */


void FUN_01d47ae0(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,char param_7,char param_8,char param_9,char param_10,double *param_11,
                 char param_12,char *param_13)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  double *pdVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char cVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 in_stack_fffffffffffffe58;
  ulonglong uVar20;
  undefined8 in_stack_fffffffffffffe60;
  undefined8 uVar21;
  ulonglong uVar22;
  double local_130 [4];
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  
  pdVar4 = local_130;
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar4 = *param_11;
    param_11 = param_11 + 1;
    pdVar4 = pdVar4 + 1;
  }
  param_13[2] = param_3;
  param_13[3] = param_4;
  param_13[4] = param_5;
  param_13[5] = param_6;
  param_13[7] = param_7;
  param_13[8] = param_8;
  param_13[0xd] = param_9;
  param_13[0xe] = param_10;
  param_13[1] = param_12;
  cVar1 = FUN_016e9e80(param_1,0x18);
  *param_13 = cVar1;
  cVar1 = FUN_016e9d10(param_1,0xb);
  cVar9 = cVar1 + '\x01';
  param_13[9] = cVar1 + '\x02';
  param_13[10] = cVar1 + '\x03';
  param_13[0xc] = cVar1 + '\x04';
  param_13[0x10] = cVar1 + '\x05';
  param_13[6] = cVar1 + '\x06';
  param_13[0x12] = param_13[6] + '\x01';
  param_13[0x11] = param_13[0x12] + '\x01';
  param_13[0xd] = param_13[0x11] + '\x01';
  param_13[0xe] = param_13[0xd] + '\x01';
  param_13[0xf] = param_13[0xe] + '\x01';
  iVar6 = 2;
  pcVar3 = param_13 + 0x70;
  do {
    puVar7 = (undefined8 *)PTR_DAT_020016b0;
    pcVar8 = pcVar3;
    for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pcVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pcVar8 = pcVar8 + 8;
    }
    pcVar3 = pcVar3 + 0x50;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar11 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe58 >> 8),1);
  FUN_016ebdd0(param_1,*param_13 + '\x01',param_9,param_13[3],uVar11);
  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  FUN_016ebdd0(param_1,*param_13 + '\x02',param_13[3],cVar9,uVar11);
  uVar20 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  FUN_016ebdd0(param_1,*param_13 + '\x03',cVar9,param_10,uVar20);
  FUN_016ec1c0(param_1,*param_13 + '\x04',param_13[2],param_10);
  FUN_016ec1c0(param_1,*param_13 + '\x05',param_13[4],param_10);
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\x06',param_13[5],param_10,uVar20);
  uVar11 = CONCAT71((int7)(uVar20 >> 8),param_13[9]);
  uVar21 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe60 >> 8),param_13[0x10]);
  FUN_016ec420(param_1,*param_13 + '\a',param_13[3],param_13[2],uVar11,uVar21,1);
  uVar20 = CONCAT71((int7)((ulonglong)uVar11 >> 8),param_13[10]);
  uVar21 = CONCAT71((int7)((ulonglong)uVar21 >> 8),param_13[0x10]);
  FUN_016ec420(param_1,*param_13 + '\b',param_13[4],cVar9,uVar20,uVar21,1);
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\t',param_13[0x10],param_13[0xc],uVar20);
  uVar11 = CONCAT71((int7)(uVar20 >> 8),1);
  FUN_016ebe60(param_1,*param_13 + '\n',param_13[0xc],param_13[0x10],uVar11);
  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  FUN_016ebfa0(param_1,*param_13 + '\v',param_13[0xc],param_13[0x10],uVar11);
  uVar20 = CONCAT71((int7)((ulonglong)uVar11 >> 8),param_13[6]);
  uVar22 = CONCAT71((int7)((ulonglong)uVar21 >> 8),param_13[0xf]);
  FUN_016ec420(param_1,*param_13 + '\f',param_13[0xc],param_13[0x10],uVar20,uVar22,1);
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\r',param_13[6],param_13[7],uVar20);
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\x0e',param_13[0xc],param_13[0x12],uVar20);
  FUN_016ebe60(param_1,*param_13 + '\x0f',param_13[0x11],param_13[0xc],uVar20 & 0xffffffffffffff00);
  param_13[0x70] = *param_13 + '\x0e';
  param_13[0x72] = param_13[0xc];
  param_13[0x73] = param_13[0x12];
  param_13[0xc0] = *param_13 + '\x0f';
  param_13[0xc2] = param_13[0x11];
  param_13[0xc3] = param_13[0xc];
  FUN_016ec240(param_1,*param_13 + '\x10',param_13[0xd],param_13[0x12]);
  FUN_016ec240(param_1,*param_13 + '\x11',param_13[0x11],param_13[0xe]);
  FUN_016ebdd0(param_1,*param_13 + '\x12',param_13[0x10],0,1);
  FUN_016ec970(param_1,*param_13 + '\x13',param_13[0xd],0,*param_13 + '\x12');
  FUN_016ec970(param_1,*param_13 + '\x14',param_13[0xe],0,*param_13 + '\x12');
  uVar22 = uVar22 & 0xffffffffffffff00;
  FUN_016ec420(param_1,*param_13 + '\x15',param_9,0,param_13[0xd],uVar22,1);
  FUN_016ec420(param_1,*param_13 + '\x16',param_10,0,param_13[0xe],uVar22 & 0xffffffffffffff00,1);
  FUN_016ebdd0(param_1,*param_13 + '\x17',param_13[0xf],param_10,1);
  FUN_016ec970(param_1,*param_13 + '\x18',param_9,param_10,*param_13 + '\x17');
  cVar1 = FUN_016e9e80(param_1,4);
  FUN_016ebe60(param_1,cVar1 + '\x01',param_9,0,1);
  FUN_016ebe60(param_1,cVar1 + '\x02',param_10,0,1);
  FUN_016ebe60(param_1,cVar1 + '\x03',param_13[2],param_13[3],1);
  FUN_016ebe60(param_1,cVar1 + '\x04',param_13[4],cVar9,1);
  FUN_016ed320(param_1,cVar1 + '\x01',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ed320(param_1,cVar1 + '\x02',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ed320(param_1,cVar1 + '\x03',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ed320(param_1,cVar1 + '\x04',0,*(undefined8 *)(param_2 + 0x430),0);
  *(double *)(param_13 + 0x28) = local_130[3];
  if (*(double *)(param_13 + 0x28) <= 0.01 && *(double *)(param_13 + 0x28) != 0.01) {
    param_13[0x28] = '{';
    param_13[0x29] = '\x14';
    param_13[0x2a] = -0x52;
    param_13[0x2b] = 'G';
    param_13[0x2c] = -0x1f;
    param_13[0x2d] = 'z';
    param_13[0x2e] = -0x7c;
    param_13[0x2f] = '?';
  }
  if (14.99 < *(double *)(param_13 + 0x28)) {
    param_13[0x28] = '{';
    param_13[0x29] = '\x14';
    param_13[0x2a] = -0x52;
    param_13[0x2b] = 'G';
    param_13[0x2c] = -0x1f;
    param_13[0x2d] = -6;
    param_13[0x2e] = '-';
    param_13[0x2f] = '@';
  }
  if ((local_110 < 0.0) || (0.0 <= local_108)) {
    dVar10 = (double)FUN_0040c850(local_110);
    dVar19 = (double)FUN_0040c850(local_108);
    *(double *)(param_13 + 0x50) = (dVar10 + dVar19) / 30.0;
    *(undefined8 *)(param_13 + 0x58) = *(undefined8 *)(param_13 + 0x50);
  }
  else {
    *(double *)(param_13 + 0x50) = local_110 / (15.0 - *(double *)(param_13 + 0x28));
    *(double *)(param_13 + 0x58) = -local_108 / *(double *)(param_13 + 0x28);
  }
  dVar10 = (double)FUN_016ed770(param_2);
  dVar19 = ((dVar10 + 273.15) * 1.3806226e-23) / 1.6021917e-18;
  dVar10 = (double)FUN_0040c760(0x4000000000000000);
  dVar10 = (double)FUN_0040c2f0(dVar19 / (dVar10 * 4e-13));
  iVar6 = 2;
  pdVar4 = (double *)(param_13 + 0xa8);
  do {
    *pdVar4 = dVar19 * dVar10;
    pdVar4[-1] = dVar19;
    pdVar4[-2] = 4e-13;
    pdVar4 = pdVar4 + 10;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  dVar10 = (double)FUN_016ed770(param_2);
  dVar10 = (double)FUN_00c42670(0x4000000000000000,(dVar10 - 27.0) / local_c0);
  if (local_c8 < 1e-12) {
    local_c8 = 1e-12;
  }
  dVar18 = local_d0;
  if (local_d0 < 1e-12) {
    dVar18 = 1e-12;
  }
  uVar11 = FUN_00b90620(local_130[0] / 100.0,0x3fb999999999999a);
  dVar12 = (double)FUN_00b90650(uVar11,0x3fdf5c28f5c28f5c);
  dVar12 = dVar12 * 15000.0;
  uVar11 = FUN_00b90620(local_f8 / 100.0,0x3fe051eb851eb852);
  dVar13 = (double)FUN_00b90650(uVar11,0x3feccccccccccccd);
  dVar14 = dVar13 * 15000.0 - dVar12;
  dVar13 = (double)FUN_00b90620(local_e8,0x3f50624dd2f1a9fc);
  *(double *)(param_13 + 0x60) = 1.0 / dVar13;
  uVar11 = FUN_00b90620(local_f0 - 0.001 / *(double *)(param_13 + 0x60),0);
  *(undefined8 *)(param_13 + 0x40) = uVar11;
  dVar13 = (double)FUN_00b90620(local_d8,0x3f50624dd2f1a9fc);
  *(double *)(param_13 + 0x68) = 1.0 / dVar13;
  uVar11 = FUN_00b90620(local_e0 - 0.001 / *(double *)(param_13 + 0x68),0);
  *(undefined8 *)(param_13 + 0x48) = uVar11;
  dVar15 = (double)FUN_00b90620(local_100,0x3c32725dd1d243ac);
  dVar13 = *(double *)(param_13 + 0x68);
  param_13[0x18] = '{';
  param_13[0x19] = '\x14';
  param_13[0x1a] = -0x52;
  param_13[0x1b] = 'G';
  param_13[0x1c] = -0x1f;
  param_13[0x1d] = 'z';
  param_13[0x1e] = -0x7c;
  param_13[0x1f] = '?';
  *(double *)(param_13 + 0x20) = (dVar18 * 0.01) / local_c8;
  dVar16 = (double)FUN_0040c2f0(0x4254bc89e6a04000);
  dVar17 = (double)FUN_0040c2f0((((dVar18 * 10.0) / local_c8 - 0.5) * 0.015) / 4e-13 + 1.0);
  uVar2 = FUN_016ea1b0(param_1,1);
  *(undefined2 *)(param_13 + 0x198) = uVar2;
  FUN_016ed320(param_1,*param_13 + '\x01',0,15000.0 - (dVar14 + dVar12),0);
  FUN_016ed320(param_1,*param_13 + '\x02',0,dVar14,0);
  FUN_016ed320(param_1,*param_13 + '\x03',0,dVar12,0);
  FUN_016ed5d0(param_1,*param_13 + '\x04',local_130[2] * dVar10,0,0,0,0);
  FUN_016ed5d0(param_1,*param_13 + '\x05',local_130[1] * dVar10,0,0,0,0);
  FUN_016ed320(param_1,*param_13 + '\a',0,0x408f400000000000,0);
  FUN_016ed320(param_1,*param_13 + '\b',0,0x408f400000000000,0);
  FUN_016ed320(param_1,*param_13 + '\n',0,0x3f50624dd2f1a9fc,0);
  FUN_016ed220(param_1,*param_13 + '\v',dVar18 * 0.012,0);
  FUN_016ed320(param_1,*param_13 + '\f',0,0x3ff0000000000000,0);
  FUN_016ed5d0(param_1,*param_13 + '\x10',*(double *)(param_13 + 0x40) + dVar19 * dVar16,0,0,0,0);
  FUN_016ed5d0(param_1,*param_13 + '\x11',*(double *)(param_13 + 0x48) + dVar19 * dVar17,0,0,0,0);
  FUN_016ed320(param_1,*param_13 + '\x12',0,0,0);
  FUN_016ed220(param_1,*param_13 + '\x13',0x3fe0000000000000,0);
  FUN_016ed220(param_1,*param_13 + '\x14',0x3fe0000000000000,0);
  FUN_016ed320(param_1,*param_13 + '\x15',0,0x3ff0000000000000,0);
  FUN_016ed320(param_1,*param_13 + '\x16',0,0x3ff0000000000000,0);
  FUN_016ed320(param_1,*param_13 + '\x17',0,0,0);
  FUN_016ed220(param_1,*param_13 + '\x18',0x3fe0000000000000,0);
  FUN_00f56f20(param_1,param_2,param_13[8],param_10,param_13[0xc],param_13[0x10],0x3fc999999999999a,
               0x3fb999999999999a,15.0 / (dVar15 * dVar10),1.0 / dVar13,param_13 + 0x110);
  return;
}

