/* Ghidra address: 019e9a40 */
/* Ghidra symbol: FUN_019e9a40 */


void FUN_019e9a40(undefined8 param_1,undefined8 param_2,char param_3,char param_4,
                 undefined8 *param_5,double *param_6,char *param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong in_stack_fffffffffffffe98;
  undefined8 local_130 [6];
  undefined8 local_100;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double local_70 [4];
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_5;
  uStack_30 = param_5[1];
  pdVar4 = local_70;
  for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *param_6;
    param_6 = param_6 + 1;
    pdVar4 = pdVar4 + 1;
  }
  param_7[1] = param_4;
  param_7[2] = param_3;
  local_40 = (double)FUN_00b90620(local_40,0x3d719799812dea11);
  local_48 = (double)FUN_00b90620(local_48,0x3eb0c6f7a0b5ed8d);
  local_70[1] = (double)FUN_00b90620(local_70[1],0x3eb0c6f7a0b5ed8d);
  *(double *)(param_7 + 8) = local_70[3];
  *(double *)(param_7 + 0x10) = local_70[2];
  *(double *)(param_7 + 0x18) = local_50;
  *(double *)(param_7 + 0x20) = local_48;
  *(double *)(param_7 + 0x28) = local_70[0];
  cVar1 = FUN_016e9e80(param_1,0x13);
  *param_7 = cVar1;
  cVar1 = FUN_016e9d10(param_1,0xe);
  param_7[3] = cVar1;
  uVar6 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe88 >> 8),1);
  FUN_016ebdd0(param_1,*param_7 + '\x01',cVar1 + '\x02',param_7[1],uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebdd0(param_1,*param_7 + '\x02',param_7[1],param_7[3] + '\x04',uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebe60(param_1,*param_7 + '\x03',param_7[1],param_7[3] + '\x0e',uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebfa0(param_1,*param_7 + '\x04',param_7[3] + '\x0e',param_7[3] + '\r',uVar6);
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),param_7[3] + '\r');
  FUN_016ec420(param_1,*param_7 + '\x05',param_7[2],param_7[1],uVar7,
               in_stack_fffffffffffffe90 & 0xffffffffffffff00,
               in_stack_fffffffffffffe98 & 0xffffffffffffff00);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_016ebdd0(param_1,*param_7 + '\x06',param_7[3] + '\a',0,uVar7);
  uVar6 = CONCAT71((int7)(uVar7 >> 8),*param_7 + '\x06');
  FUN_016ec970(param_1,*param_7 + '\a',param_7[2],param_7[1],uVar6);
  cVar1 = *param_7;
  FUN_016ecbf0(param_1,cVar1 + '\b',cVar1 + '\x01',cVar1 + '\x06');
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),*param_7 + '\x06');
  FUN_016ec970(param_1,*param_7 + '\t',param_7[3] + '\x0e',param_7[1],uVar7);
  FUN_016ebdd0(param_1,*param_7 + '\n',param_7[3] + '\v',0,uVar7 & 0xffffffffffffff00);
  FUN_016ec970(param_1,*param_7 + '\v',param_7[1],param_7[2],*param_7 + '\n');
  cVar1 = *param_7;
  FUN_016ecbf0(param_1,cVar1 + '\f',cVar1 + '\x02',cVar1 + '\n');
  FUN_016ec970(param_1,*param_7 + '\r',param_7[3] + '\x0e',param_7[1],*param_7 + '\n');
  FUN_016ebe60(param_1,*param_7 + '\x0e',param_7[3] + '\a',param_7[3] + '\x05',1);
  FUN_016ebe60(param_1,*param_7 + '\x0f',param_7[3] + '\x06',param_7[3] + '\a',1);
  FUN_016ebfa0(param_1,*param_7 + '\x10',param_7[3] + '\b',0,1);
  FUN_016ebe60(param_1,*param_7 + '\x11',param_7[3] + '\v',param_7[3] + '\t',1);
  FUN_016ebe60(param_1,*param_7 + '\x12',param_7[3] + '\n',param_7[3] + '\v',1);
  FUN_016ebfa0(param_1,*param_7 + '\x13',param_7[3] + '\f',0,1);
  uStack_90 = *(undefined8 *)(PTR_DAT_02002bc8 + 8);
  uStack_88 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x10);
  uStack_80 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x18);
  uStack_78 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x20);
  local_98 = local_38;
  puVar3 = (undefined8 *)PTR_DAT_02001fe0;
  puVar5 = local_130;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_130[0] = 0x3dc5fd7fe1796495;
  local_100 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_7[3] + '\x01',param_7[3] + '\x02',&local_98,local_130,
               param_7 + 0x30);
  FUN_00db6bb0(param_1,param_2,param_7[3] + '\x04',param_7[3] + '\x03',&local_98,local_130,
               param_7 + 0x148);
  puVar3 = (undefined8 *)PTR_DAT_02001fe0;
  puVar5 = local_130;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_130[0] = 0x3d719799812dea11;
  local_100 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_7[3] + '\x05',param_7[3] + '\b',&local_98,local_130,
               param_7 + 0x260);
  FUN_00db6bb0(param_1,param_2,param_7[3] + '\b',param_7[3] + '\x06',&local_98,local_130,
               param_7 + 0x378);
  FUN_00db6bb0(param_1,param_2,param_7[3] + '\t',param_7[3] + '\f',&local_98,local_130,
               param_7 + 0x490);
  puVar3 = local_130;
  FUN_00db6bb0(param_1,param_2,param_7[3] + '\f',param_7[3] + '\n',&local_98,puVar3,param_7 + 0x5a8)
  ;
  uVar7 = (ulonglong)puVar3 & 0xffffffffffffff00;
  FUN_00f56f20(param_1,param_2,param_7[2],param_7[3] + '\x01',param_7[3] + '\b',uVar7,
               0x3ff8000000000000,0x4014000000000000,local_70[0] / local_70[1],
               (local_50 - 0.7) / local_48,param_7 + 0x6c0);
  FUN_00f56f20(param_1,param_2,param_7[2],param_7[3] + '\x03',param_7[3] + '\f',
               uVar7 & 0xffffffffffffff00,0x3ff8000000000000,0x4014000000000000,
               local_70[0] / local_70[1],(local_50 - 0.7) / local_48,param_7 + 0x748);
  FUN_016ed320(param_1,*param_7 + '\x01',0,0,0);
  FUN_016ed320(param_1,*param_7 + '\x02',0,0,0);
  FUN_016ed320(param_1,*param_7 + '\x03',0,0x3f50624dd2f1a9fc,0);
  FUN_016ed220(param_1,*param_7 + '\x04',0x3ddb7cdfd9d7bdbb,0);
  FUN_016ed320(param_1,*param_7 + '\x0e',0,0x3f53dc013dc013dc,0);
  FUN_016ed320(param_1,*param_7 + '\x0f',0,local_40 / 0.0029,0);
  FUN_016ed220(param_1,*param_7 + '\x10',local_40 / 454.0,0);
  FUN_016ed320(param_1,*param_7 + '\x11',0,0x3f53dc013dc013dc,0);
  FUN_016ed320(param_1,*param_7 + '\x12',0,local_40 / 0.0029,0);
  FUN_016ed220(param_1,*param_7 + '\x13',local_40 / 454.0,0);
  return;
}

