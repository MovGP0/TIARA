/* Ghidra address: 00e7c120 */
/* Ghidra symbol: FUN_00e7c120 */


void FUN_00e7c120(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,
                 undefined1 param_6,undefined1 param_7,double *param_8,double *param_9,
                 char *param_10)

{
  char cVar1;
  char *pcVar2;
  double *pdVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 in_stack_fffffffffffffea8;
  ulonglong uVar14;
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffeb8;
  double local_128 [4];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  
  local_88 = *param_8;
  local_80 = param_8[1];
  pdVar3 = local_128;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar3 = *param_9;
    param_9 = param_9 + 1;
    pdVar3 = pdVar3 + 1;
  }
  param_10[1] = local_80._0_1_;
  param_10[4] = param_4;
  param_10[3] = param_3;
  param_10[5] = param_5;
  cVar1 = FUN_016ea1b0(param_1,6);
  param_10[0x170] = cVar1;
  cVar1 = FUN_016e9e80(param_1,0x18);
  *param_10 = cVar1;
  cVar1 = FUN_016e9d10(param_1,8);
  param_10[2] = cVar1 + '\x01';
  param_10[9] = cVar1 + '\x02';
  param_10[10] = cVar1 + '\x03';
  param_10[8] = cVar1 + '\x04';
  param_10[0xb] = cVar1 + '\x05';
  param_10[0xc] = cVar1 + '\x06';
  param_10[6] = cVar1 + '\a';
  param_10[7] = cVar1 + '\b';
  iVar5 = 3;
  pcVar2 = param_10 + 0x48;
  do {
    puVar6 = (undefined8 *)PTR_DAT_020016b0;
    pcVar7 = pcVar2;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pcVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pcVar7 = pcVar7 + 8;
    }
    pcVar2 = pcVar2 + 0x50;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar8 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffea8 >> 8),1);
  FUN_016ebe60(param_1,*param_10 + '\x01',param_10[2],param_10[4],uVar8);
  FUN_016ec1c0(param_1,*param_10 + '\x02',param_10[4],0);
  FUN_016ec1c0(param_1,*param_10 + '\x03',param_10[2],0);
  FUN_016ec240(param_1,*param_10 + '\x04',param_10[2],param_10[3]);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_016ebe60(param_1,*param_10 + '\x05',param_10[9],param_10[8],uVar8);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_016ebfa0(param_1,*param_10 + '\x06',param_10[9],param_10[8],uVar8);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),param_10[8]);
  uVar15 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb0 >> 8),param_10[9]);
  FUN_016ec2d0(param_1,*param_10 + '\a',param_10[2],param_10[4],uVar8,uVar15,
               in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_016ebe60(param_1,*param_10 + '\b',param_10[10],param_10[8],uVar8);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_016ebfa0(param_1,*param_10 + '\t',param_10[10],param_10[8],uVar8);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),param_10[8]);
  uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),param_10[10]);
  FUN_016ec2d0(param_1,*param_10 + '\n',param_10[9],param_10[8],uVar8,uVar15,1);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_016ebe60(param_1,*param_10 + '\v',param_10[5],param_10[8],uVar8);
  uVar14 = CONCAT71((int7)((ulonglong)uVar8 >> 8),param_10[8]);
  uVar16 = CONCAT71((int7)((ulonglong)uVar15 >> 8),param_10[5]);
  FUN_016ec2d0(param_1,*param_10 + '\f',param_10[10],param_10[8],uVar14,uVar16,1);
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_10 + '\r',param_7,param_6,uVar14);
  param_10[0x48] = *param_10 + '\r';
  param_10[0x4a] = param_10[7];
  param_10[0x4b] = param_10[6];
  uVar8 = CONCAT71((int7)(uVar14 >> 8),1);
  FUN_016ebdd0(param_1,*param_10 + '\x0e',param_10[8],0,uVar8);
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),*param_10 + '\x0e');
  FUN_016ec970(param_1,*param_10 + '\x0f',param_10[6],0,uVar8);
  uVar14 = CONCAT71((int7)((ulonglong)uVar8 >> 8),*param_10 + '\x0e');
  FUN_016ec970(param_1,*param_10 + '\x10',param_10[7],0,uVar14);
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_10 + '\x11',param_10[9],param_10[0xb],uVar14);
  param_10[0x98] = *param_10 + '\x11';
  param_10[0x9a] = param_10[9];
  param_10[0x9b] = param_10[0xb];
  FUN_016ebe60(param_1,*param_10 + '\x12',param_10[0xc],param_10[9],uVar14 & 0xffffffffffffff00);
  param_10[0xe8] = *param_10 + '\x12';
  param_10[0xea] = param_10[0xc];
  param_10[0xeb] = param_10[9];
  FUN_016ec240(param_1,*param_10 + '\x13',param_10[6],param_10[0xb]);
  FUN_016ec240(param_1,*param_10 + '\x14',param_10[0xc],param_10[7]);
  FUN_016ebe60(param_1,*param_10 + '\x15',param_7,param_6,1);
  FUN_016ebe60(param_1,*param_10 + '\x16',param_10[4],param_10[8],1);
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_016ec420(param_1,*param_10 + '\x17',param_6,0,param_10[6],uVar16,1);
  FUN_016ec420(param_1,*param_10 + '\x18',param_7,0,param_10[7],uVar16 & 0xffffffffffffff00,1);
  cVar1 = FUN_016e9e80(param_1,3);
  FUN_016ebe60(param_1,cVar1 + '\x01',param_6,0,1);
  FUN_016ebe60(param_1,cVar1 + '\x02',param_7,0,1);
  FUN_016ebe60(param_1,cVar1 + '\x03',param_10[4],param_10[8],1);
  FUN_016ed320(param_1,cVar1 + '\x01',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ed320(param_1,cVar1 + '\x02',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ed320(param_1,cVar1 + '\x03',0,*(undefined8 *)(param_2 + 0x430),0);
  *(undefined8 *)(param_10 + 0x138) = local_c0;
  *(undefined8 *)(param_10 + 0x140) = local_b8;
  *(undefined8 *)(param_10 + 0x148) = local_b0;
  *(undefined8 *)(param_10 + 0x150) = local_a8;
  *(undefined8 *)(param_10 + 0x158) = local_a0;
  *(undefined8 *)(param_10 + 0x160) = local_98;
  *(undefined8 *)(param_10 + 0x168) = local_90;
  if (local_128[1] < 1.0) {
    local_128[1] = 1.0;
  }
  uVar8 = FUN_00b90620(local_128[2],0x3ff0000000000000);
  *(undefined8 *)(param_10 + 0x40) = uVar8;
  if (local_108 < 0.001) {
    local_108 = 0.001;
  }
  if (local_100 < 0.001) {
    local_100 = 0.001;
  }
  dVar12 = local_88 - 300.15;
  dVar9 = (double)FUN_00c42670(0x4000000000000000,dVar12 / local_d8);
  *(double *)(param_10 + 0x10) = local_128[3];
  *(double *)(param_10 + 0x38) = 1.0 / *(double *)(param_10 + 0x40);
  param_10[0x30] = '{';
  param_10[0x31] = '\x14';
  param_10[0x32] = -0x52;
  param_10[0x33] = 'G';
  param_10[0x34] = -0x1f;
  param_10[0x35] = 'z';
  param_10[0x36] = -0x7c;
  param_10[0x37] = '?';
  *(double *)(param_10 + 0x18) =
       (15.0 / *(double *)(param_10 + 0x40)) / *(double *)(param_10 + 0x10);
  *(double *)(param_10 + 0x20) =
       1.0 / (*(double *)(param_10 + 0x18) * 6.283185307179586 * local_108);
  *(double *)(param_10 + 0x28) = local_128[0] / *(double *)(param_10 + 0x20);
  dVar10 = local_100 * 628.3185307179587;
  dVar13 = (local_88 * 1.3806226e-23) / 1.6021917e-19;
  dVar11 = (double)FUN_0040c760(0x4000000000000000);
  dVar11 = (double)FUN_0040c2f0(dVar13 / (dVar11 * 8e-16));
  iVar5 = 3;
  pdVar3 = (double *)(param_10 + 0x80);
  do {
    *pdVar3 = dVar13 * dVar11;
    pdVar3[-1] = dVar13;
    pdVar3[-2] = 8e-16;
    pdVar3[-3] = dVar13 * dVar11;
    pdVar3 = pdVar3 + 10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  dVar11 = (double)FUN_0040c2f0((*(double *)(param_10 + 0x10) * *(double *)(param_10 + 0x18)) /
                                8e-16 + 1.0);
  dVar13 = dVar13 * dVar11;
  local_d0 = (double)FUN_00b90620(dVar13 + local_d0,dVar13);
  local_c8 = (double)FUN_00b90620(dVar13 + local_c8,dVar13);
  FUN_016ed320(param_1,*param_10 + '\x01',0,1.0 / local_128[1],0);
  FUN_016ed5d0(param_1,*param_10 + '\x02',local_f0 * dVar9 - local_e8 * dVar9,0,0,0,0);
  FUN_016ed5d0(param_1,*param_10 + '\x03',local_f0 * dVar9,0,0,0,0);
  FUN_016ed5d0(param_1,*param_10 + '\x04',local_f8 + dVar12 * local_e0,0,0,0,0);
  FUN_016ed320(param_1,*param_10 + '\x05',0,1.0 / *(double *)(param_10 + 0x20),0);
  FUN_016ed220(param_1,*param_10 + '\x06',*(undefined8 *)(param_10 + 0x18),0);
  FUN_016ed320(param_1,*param_10 + '\a',0,*(undefined8 *)(param_10 + 0x28),0);
  FUN_016ed320(param_1,*param_10 + '\b',0,0x3f847ae147ae147b,0);
  FUN_016ed220(param_1,*param_10 + '\t',1.0 / dVar10,0);
  FUN_016ed320(param_1,*param_10 + '\n',0,*(undefined8 *)(param_10 + 0x30),0);
  FUN_016ed320(param_1,*param_10 + '\v',0,1.0 / *(double *)(param_10 + 0x40),0);
  FUN_016ed320(param_1,*param_10 + '\f',0,*(undefined8 *)(param_10 + 0x38),0);
  FUN_016ed320(param_1,*param_10 + '\x0e',0,0,0);
  FUN_016ed220(param_1,*param_10 + '\x0f',0x3fe0000000000000,0);
  FUN_016ed220(param_1,*param_10 + '\x10',0x3fe0000000000000,0);
  FUN_016ed5d0(param_1,*param_10 + '\x13',local_d0,0,0,0,0);
  FUN_016ed5d0(param_1,*param_10 + '\x14',local_c8,0,0,0,0);
  FUN_016ed320(param_1,*param_10 + '\x15',0,0x3f1179ec9cbd821e,0);
  FUN_016ed320(param_1,*param_10 + '\x16',0,*(double *)(param_2 + 0x430) * 1000.0,0);
  FUN_016ed320(param_1,*param_10 + '\x17',0,0x3ff0000000000000,0);
  FUN_016ed320(param_1,*param_10 + '\x18',0,0x3ff0000000000000,0);
  return;
}

