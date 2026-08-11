/* Ghidra address: 00e7e9e0 */
/* Ghidra symbol: FUN_00e7e9e0 */


void FUN_00e7e9e0(undefined8 param_1,undefined8 param_2,char param_3,char param_4,char param_5,
                 char param_6,char param_7,char param_8,char param_9,char param_10,double *param_11,
                 undefined8 *param_12,char *param_13)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  double *pdVar7;
  undefined8 *puVar8;
  char *pcVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined8 unaff_R13;
  ulonglong uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 in_stack_fffffffffffffe08;
  undefined8 in_stack_fffffffffffffe10;
  ulonglong uVar16;
  undefined8 *local_1a0;
  undefined8 local_198 [4];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68 [8];
  
  local_78 = *param_11;
  dStack_70 = param_11[1];
  puVar8 = local_198;
  for (lVar5 = 0x24; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *param_12;
    param_12 = param_12 + 1;
    puVar8 = puVar8 + 1;
  }
  param_13[0x1e9] = param_3;
  param_13[1] = param_4;
  param_13[2] = param_5;
  param_13[3] = param_6;
  param_13[4] = param_7;
  param_13[5] = param_8;
  param_13[6] = param_9;
  param_13[7] = param_10;
  dVar15 = (local_78 * 1.3806226e-23) / 1.6021917e-19;
  dVar13 = (double)FUN_0040c760(0x4000000000000000);
  dVar13 = (double)FUN_0040c2f0(dVar15 / (dVar13 * local_d0));
  *(undefined8 *)(param_13 + 0x1a0) = local_b0;
  *(undefined8 *)(param_13 + 0x1a8) = local_a8;
  *(undefined8 *)(param_13 + 0x1b0) = local_a0;
  *(undefined8 *)(param_13 + 0x1b8) = local_98;
  *(undefined8 *)(param_13 + 0x1c0) = local_90;
  *(undefined8 *)(param_13 + 0x1c8) = local_88;
  *(undefined8 *)(param_13 + 0x1d0) = local_80;
  iVar6 = 5;
  pcVar3 = param_13 + 0x10;
  do {
    puVar8 = (undefined8 *)PTR_DAT_020016b0;
    pcVar9 = pcVar3;
    for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pcVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pcVar9 = pcVar9 + 8;
    }
    *(double *)(pcVar3 + 0x38) = dVar15 * dVar13;
    *(double *)(pcVar3 + 0x30) = dVar15;
    *(double *)(pcVar3 + 0x28) = local_d0;
    pcVar3 = pcVar3 + 0x50;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_13[0x1e9] == '\x03') {
    cVar1 = FUN_016e9e80(param_1,0x20);
    *param_13 = cVar1;
    cVar1 = FUN_016e9d10(param_1,9);
    param_13[8] = cVar1;
  }
  else {
    cVar1 = FUN_016e9e80(param_1,0x22);
    *param_13 = cVar1;
    cVar1 = FUN_016e9d10(param_1,0xb);
    param_13[8] = cVar1;
  }
  cVar1 = FUN_016ea1b0(param_1,6);
  param_13[0x1e8] = cVar1;
  uVar12 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe08 >> 8),1);
  FUN_016ebe60(param_1,*param_13 + '\x01',param_13[4],param_13[5],uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\x02',param_13[5],param_13[4],uVar12);
  param_13[0x10] = *param_13 + '\x02';
  param_13[0x12] = param_13[5];
  param_13[0x13] = param_13[4];
  uVar14 = CONCAT71((int7)(uVar12 >> 8),1);
  FUN_016ebfa0(param_1,*param_13 + '\x03',param_13[8] + '\x04',param_13[8] + '\x03',uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  FUN_016ebe60(param_1,*param_13 + '\x04',param_13[8] + '\x04',param_13[8] + '\x03',uVar14);
  if (param_13[0x1e9] == '\x04') {
    FUN_016ec1c0(param_1,*param_13 + '\x05',param_13[8] + '\x04',param_13[5]);
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    FUN_016ebe60(param_1,*param_13 + '\x06',param_13[4],param_13[8] + '\x05',uVar14);
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    FUN_016ebe60(param_1,*param_13 + '\a',param_13[4],param_13[8] + '\x06',uVar14);
  }
  else {
    FUN_016ec1c0(param_1,*param_13 + '\x05',param_13[4],param_13[8] + '\x04');
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    FUN_016ebe60(param_1,*param_13 + '\x06',param_13[5],param_13[8] + '\x05',uVar14);
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    FUN_016ebe60(param_1,*param_13 + '\a',param_13[5],param_13[8] + '\x06',uVar14);
  }
  uVar12 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  FUN_016ebfa0(param_1,*param_13 + '\b',param_13[8] + '\x05',param_13[8] + '\x06',uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\t',param_13[3],param_13[8] + '\x01',uVar12);
  param_13[0x60] = *param_13 + '\t';
  param_13[0x62] = param_13[3];
  param_13[99] = param_13[8] + '\x01';
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\n',param_13[8] + '\x02',param_13[3],uVar12);
  param_13[0xb0] = *param_13 + '\n';
  param_13[0xb2] = param_13[8] + '\x02';
  param_13[0xb3] = param_13[3];
  uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
  FUN_016ebdd0(param_1,*param_13 + '\v',param_13[6],0,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar16 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe10 >> 8),param_13[6]);
  FUN_016ec2d0(param_1,*param_13 + '\f',param_13[8] + '\x04',param_13[8] + '\x03',uVar12,uVar16,1);
  uVar14 = CONCAT71((int7)(uVar12 >> 8),1);
  FUN_016ebdd0(param_1,*param_13 + '\r',param_13[8] + '\x03',0,uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),*param_13 + '\r');
  FUN_016ec970(param_1,*param_13 + '\x0e',param_13[4],0,uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),*param_13 + '\r');
  FUN_016ec970(param_1,*param_13 + '\x0f',param_13[5],0,uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),param_13[6]);
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_016ec2d0(param_1,*param_13 + '\x10',param_13[8] + '\x05',param_13[8] + '\x06',uVar14,uVar16,1)
  ;
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  FUN_016ebfa0(param_1,*param_13 + '\x11',param_13[6],param_13[7],uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  FUN_016ebe60(param_1,*param_13 + '\x12',param_13[7],param_13[8] + '\x03',uVar14);
  cVar1 = *param_13;
  FUN_016eca70(param_1,cVar1 + '\x13',cVar1 + '\v',cVar1 + '\x12');
  FUN_016ec240(param_1,*param_13 + '\x14',param_13[4],param_13[8] + '\x01');
  FUN_016ec240(param_1,*param_13 + '\x15',param_13[8] + '\x02',param_13[5]);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  FUN_016ebe60(param_1,*param_13 + '\x16',param_13[7],param_13[3],uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  FUN_016ebe60(param_1,*param_13 + '\x17',param_13[8] + '\x03',param_13[7],uVar14);
  cVar1 = *param_13;
  FUN_016eca70(param_1,cVar1 + '\x18',cVar1 + '\x14',cVar1 + '\x12');
  cVar1 = *param_13;
  FUN_016eca70(param_1,cVar1 + '\x19',cVar1 + '\x15',cVar1 + '\x12');
  uVar12 = CONCAT71((int7)((ulonglong)uVar14 >> 8),param_13[8] + '\a');
  FUN_016ec420(param_1,*param_13 + '\x1a',param_13[7],param_13[3],uVar12,uVar16 & 0xffffffffffffff00
               ,1);
  FUN_016ec240(param_1,*param_13 + '\x1b',param_13[8] + '\b',0);
  FUN_016ec240(param_1,*param_13 + '\x1c',0,param_13[8] + '\t');
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_13 + '\x1d',param_13[8] + '\a',param_13[8] + '\b',uVar12);
  param_13[0x100] = *param_13 + '\x1d';
  param_13[0x102] = param_13[8] + '\a';
  param_13[0x103] = param_13[8] + '\b';
  FUN_016ebe60(param_1,*param_13 + '\x1e',param_13[8] + '\t',param_13[8] + '\a',
               uVar12 & 0xffffffffffffff00);
  param_13[0x150] = *param_13 + '\x1e';
  param_13[0x152] = param_13[8] + '\t';
  param_13[0x153] = param_13[8] + '\a';
  cVar1 = *param_13;
  FUN_016eca70(param_1,cVar1 + '\x1f',cVar1 + '\x1b',cVar1 + '\x12');
  cVar1 = *param_13;
  FUN_016eca70(param_1,cVar1 + ' ',cVar1 + '\x1c',cVar1 + '\x12');
  if (param_13[0x1e9] != '\x03') {
    FUN_016ebe60(param_1,*param_13 + '!',param_13[8] + '\n',param_13[8] + '\x04',1);
    FUN_016ebe60(param_1,*param_13 + '\"',param_13[8] + '\v',param_13[8] + '\x04',1);
  }
  uVar14 = FUN_00b90620(0x3eb0c6f7a0b5ed8d,local_110);
  *(undefined8 *)(param_13 + 0x1d8) = uVar14;
  uVar14 = FUN_00b90620(0x3eb0c6f7a0b5ed8d,local_100);
  *(undefined8 *)(param_13 + 0x1e0) = uVar14;
  FUN_016ed320(param_1,*param_13 + '\x01',0,1.0 / *(double *)(param_13 + 0x1e0),0);
  FUN_016ed220(param_1,*param_13 + '\x03',local_198[2],0);
  FUN_016ed320(param_1,*param_13 + '\x04',0,1.0 / local_f8,0);
  FUN_016ed5d0(param_1,*param_13 + '\x05',local_148,0,0,0,0);
  FUN_016ed320(param_1,*param_13 + '\x06',0,1.0 / local_130,0);
  FUN_016ed320(param_1,*param_13 + '\a',0,1.0 / local_128,0);
  FUN_016ed220(param_1,*param_13 + '\b',local_198[0],0);
  FUN_016ed320(param_1,*param_13 + '\v',0,local_138,0);
  FUN_016ed320(param_1,*param_13 + '\f',0,local_150,0);
  FUN_016ed320(param_1,*param_13 + '\r',0,0,0);
  FUN_016ed220(param_1,*param_13 + '\x0e',0x3fe0000000000000,0);
  FUN_016ed220(param_1,*param_13 + '\x0f',0x3fe0000000000000,0);
  FUN_016ed320(param_1,*param_13 + '\x10',0,local_158,0);
  FUN_016ed220(param_1,*param_13 + '\x11',local_198[1],0);
  FUN_016ed320(param_1,*param_13 + '\x12',0,0,0);
  FUN_016ed220(param_1,*param_13 + '\x13',local_198[3],0);
  FUN_016ed5d0(param_1,*param_13 + '\x14',local_f0,0,0,0,0);
  FUN_016ed5d0(param_1,*param_13 + '\x15',local_e8,0,0,0,0);
  FUN_016ed320(param_1,*param_13 + '\x16',0,1.0 / *(double *)(param_13 + 0x1d8),0);
  FUN_016ed320(param_1,*param_13 + '\x17',0,1.0 / local_108,0);
  FUN_016ed220(param_1,*param_13 + '\x18',local_178,0);
  FUN_016ed220(param_1,*param_13 + '\x19',local_170,0);
  FUN_016ed320(param_1,*param_13 + '\x1a',0,local_140 / *(double *)(param_13 + 0x1d8),0);
  FUN_016ed5d0(param_1,*param_13 + '\x1b',local_e0,0,0,0,0);
  FUN_016ed5d0(param_1,*param_13 + '\x1c',local_d8,0,0,0,0);
  FUN_016ed220(param_1,*param_13 + '\x1f',local_168,0);
  FUN_016ed220(param_1,*param_13 + ' ',local_160,0);
  if (param_13[0x1e9] != '\x03') {
    FUN_016ed320(param_1,*param_13 + '!',0,1.0 / local_120,0);
    FUN_016ed320(param_1,*param_13 + '\"',0,1.0 / local_118,0);
  }
  local_1a0 = (undefined8 *)0x0;
  uVar2 = FUN_00b905e0(0xa8,0x188);
  FUN_00b909a0(&local_1a0,uVar2);
  if (local_1a0 != (undefined8 *)0x0) {
    if (param_13[0x1e9] == '\x03') {
      pdVar7 = (double *)PTR_DAT_020029b0;
      pdVar10 = local_68;
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pdVar10 = *pdVar7;
        pdVar7 = pdVar7 + 1;
        pdVar10 = pdVar10 + 1;
      }
      local_68[0] = local_78;
      puVar8 = (undefined8 *)PTR_DAT_020056b0;
      puVar11 = local_1a0;
      for (lVar5 = 0x15; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      local_1a0[9] = local_c8;
      local_1a0[1] = local_c0;
      *local_1a0 = local_b8;
      FUN_00e75cb0(param_1,0xffffffff,param_13[8] + '\x04',param_13[2],param_13[8] + '\x05',local_68
                   ,local_1a0,param_13 + 0x1f0);
      FUN_00e75cb0(param_1,0xffffffff,param_13[8] + '\x04',param_13[1],param_13[8] + '\x06',local_68
                   ,local_1a0,param_13 + 0x308);
    }
    else if ((byte)(param_13[0x1e9] - 4U) < 2) {
      if (param_13[0x1e9] == '\x04') {
        uVar12 = CONCAT62((int6)((ulonglong)unaff_R13 >> 0x10),1);
      }
      else {
        uVar12 = 0xffffffff;
      }
      pdVar7 = (double *)PTR_DAT_02003160;
      pdVar10 = local_68;
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pdVar10 = *pdVar7;
        pdVar7 = pdVar7 + 1;
        pdVar10 = pdVar10 + 1;
      }
      local_68[0] = local_78;
      puVar8 = (undefined8 *)PTR_DAT_02004cc8;
      puVar11 = local_1a0;
      for (lVar5 = 0x31; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar4 = (undefined1 *)FUN_004095c0(0x31);
      FUN_0040d200(puVar4,0x31,0);
      *local_1a0 = local_c8;
      *puVar4 = 1;
      local_1a0[1] = local_c0;
      puVar4[1] = 1;
      FUN_0168d1c0(param_1,param_2,uVar12 & 0xffffffff,param_13[8] + '\n',param_13[2],
                   param_13[8] + '\x05',0xff,local_68,local_1a0,puVar4,param_13 + 0x1f0);
      FUN_0168d1c0(param_1,param_2,uVar12 & 0xffffffff,param_13[8] + '\v',param_13[1],
                   param_13[8] + '\x06',0xff,local_68,local_1a0,puVar4,param_13 + 0x498);
      FUN_004095f0(puVar4,0x31);
    }
  }
  iVar6 = FUN_00b905e0(0xa8,0xc0);
  FUN_004095f0(local_1a0,(longlong)iVar6);
  return;
}

