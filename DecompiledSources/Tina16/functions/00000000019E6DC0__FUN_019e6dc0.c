/* Ghidra address: 019e6dc0 */
/* Ghidra symbol: FUN_019e6dc0 */


void FUN_019e6dc0(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,char param_5
                 ,undefined8 *param_6,double *param_7,char *param_8)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 in_stack_fffffffffffffe58;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong in_stack_fffffffffffffe68;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double local_128 [5];
  undefined8 local_100;
  undefined8 local_f8;
  double local_90 [4];
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_6;
  uStack_30 = param_6[1];
  pdVar3 = local_90;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_7;
    param_7 = param_7 + 1;
    pdVar3 = pdVar3 + 1;
  }
  param_8[1] = param_3;
  param_8[2] = param_5;
  local_60 = (double)FUN_00b90620(local_60,0x3fe4d4fdf3b645a2);
  local_40 = (double)FUN_00b90620(local_40,0x3d719799812dea11);
  local_48 = (double)FUN_00b90620(local_48,0x3d719799812dea11);
  local_58 = (double)FUN_00b90620(local_58,0x3f50624dd2f1a9fc);
  local_50 = (double)FUN_00b90620(local_50,0x3eb0c6f7a0b5ed8d);
  local_90[3] = (double)FUN_00b90620(local_90[3],0x3eb0c6f7a0b5ed8d);
  *(undefined8 *)(param_8 + 8) = local_70;
  *(double *)(param_8 + 0x10) = local_60 - 0.65;
  *(double *)(param_8 + 0x18) = local_68;
  *(double *)(param_8 + 0x20) = local_58;
  *(double *)(param_8 + 0x28) = local_90[3];
  cVar1 = FUN_016e9e80(param_1,0xf);
  *param_8 = cVar1;
  cVar1 = FUN_016e9d10(param_1,10);
  param_8[3] = cVar1;
  uVar5 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe58 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x01',param_4,cVar1 + '\x01',uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x02',param_8[3] + '\x01',param_8[2],uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x03',param_4,param_8[2],uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebdd0(param_1,*param_8 + '\x04',param_8[3] + '\x04',param_8[2],uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x05',param_8[3] + '\x05',param_8[2],uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebfa0(param_1,*param_8 + '\x06',param_8[3] + '\x06',param_8[3] + '\x05',uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),param_8[3] + '\x06');
  FUN_016ec420(param_1,*param_8 + '\a',param_8[1],param_8[2],uVar5,
               in_stack_fffffffffffffe60 & 0xffffffffffffff00,
               in_stack_fffffffffffffe68 & 0xffffffffffffff00);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\b',param_8[3] + '\b',param_8[3] + '\n',uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\t',param_8[3] + '\b',param_8[3] + '\t',uVar5);
  uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebfa0(param_1,*param_8 + '\n',param_8[3] + '\a',0,uVar6);
  FUN_016ebdd0(param_1,*param_8 + '\v',param_8[3] + '\b',0,uVar6 & 0xffffffffffffff00);
  FUN_016ec970(param_1,*param_8 + '\f',param_8[1],param_8[2],*param_8 + '\v');
  FUN_016ec970(param_1,*param_8 + '\r',param_8[3] + '\x01',param_8[2],*param_8 + '\v');
  cVar1 = *param_8;
  FUN_016ecbf0(param_1,cVar1 + '\x0e',cVar1 + '\x04',cVar1 + '\v');
  FUN_016ec970(param_1,*param_8 + '\x0f',param_8[3] + '\x05',param_8[2],*param_8 + '\v');
  uStack_148 = *(undefined8 *)(PTR_DAT_02002bc8 + 8);
  uStack_140 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x10);
  uStack_138 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x18);
  uStack_130 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x20);
  local_150 = local_38;
  pdVar3 = (double *)PTR_DAT_02001fe0;
  pdVar4 = local_128;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_128[0] = 4e-11;
  local_f8 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\x03',param_8[3] + '\x04',&local_150,local_128,
               param_8 + 0x30);
  pdVar3 = (double *)PTR_DAT_02001fe0;
  pdVar4 = local_128;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_128[0] = 1e-10;
  local_f8 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_8[2],param_8[3] + '\x03',&local_150,local_128,param_8 + 0x148);
  pdVar3 = (double *)PTR_DAT_02001fe0;
  pdVar4 = local_128;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_128[2] = local_90[1] * 1.1;
  local_128[3] = 1.0;
  local_f8 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_8[1],param_8[3] + '\x02',&local_150,local_128,param_8 + 0x260);
  pdVar3 = (double *)PTR_DAT_02001fe0;
  pdVar4 = local_128;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_128[0] = 1e-14;
  local_128[2] = local_90[0] * 2.0;
  FUN_00db6bb0(param_1,param_2,param_8[2],param_8[3] + '\x02',&local_150,local_128,param_8 + 0x378);
  pdVar3 = (double *)PTR_DAT_02001fe0;
  pdVar4 = local_128;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_128[0] = 1e-16;
  local_f8 = 0x3dcb7cdfd9d7bdbb;
  local_100 = 0x4014000000000000;
  FUN_00db6bb0(param_1,param_2,param_4,param_8[3] + '\x01',&local_150,local_128,param_8 + 0x490);
  pdVar3 = (double *)PTR_DAT_02001fe0;
  pdVar4 = local_128;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_128[0] = 1e-12;
  local_f8 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\t',param_8[3] + '\a',&local_150,local_128,
               param_8 + 0x5a8);
  pdVar3 = local_128;
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\a',param_8[3] + '\n',&local_150,pdVar3,param_8 + 0x6c0
              );
  FUN_00f56f20(param_1,param_2,param_8[1],param_8[3] + '\x03',param_8[3] + '\a',
               (ulonglong)pdVar3 & 0xffffffffffffff00,0x3ff8000000000000,0x4014000000000000,
               (local_90[0] * local_90[0]) / (local_58 * local_90[3]),(local_58 - 0.7) / local_50,
               param_8 + 0x7d8);
  FUN_016ed320(param_1,*param_8 + '\x01',0,local_68 / 0.65,0);
  FUN_016ed320(param_1,*param_8 + '\x02',0,local_68 / *(double *)(param_8 + 0x10),0);
  FUN_016ed320(param_1,*param_8 + '\x03',0,0x3ddb7cdfd9d7bdbb,0);
  FUN_016ed320(param_1,*param_8 + '\x04',0,0,0);
  FUN_016ed320(param_1,*param_8 + '\x05',0,0x3f50624dd2f1a9fc,0);
  FUN_016ed220(param_1,*param_8 + '\x06',0x3ddb7cdfd9d7bdbb,0);
  FUN_016ed320(param_1,*param_8 + '\b',0,local_48 / (local_40 * 290.0),0);
  FUN_016ed320(param_1,*param_8 + '\t',0,0x3f53dc013dc013dc,0);
  FUN_016ed220(param_1,*param_8 + '\n',local_48 / 454.0,0);
  return;
}

