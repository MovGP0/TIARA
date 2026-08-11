/* Ghidra address: 019e84b0 */
/* Ghidra symbol: FUN_019e84b0 */


void FUN_019e84b0(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,char param_5
                 ,undefined8 *param_6,double *param_7,char *param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 in_stack_fffffffffffffe68;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffe70;
  ulonglong in_stack_fffffffffffffe78;
  undefined8 local_140 [5];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double local_80 [4];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_6;
  uStack_30 = param_6[1];
  pdVar4 = local_80;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *param_7;
    param_7 = param_7 + 1;
    pdVar4 = pdVar4 + 1;
  }
  param_8[1] = param_5;
  param_8[2] = param_3;
  local_58 = (double)FUN_00b90620(local_58,0x3fe4d4fdf3b645a2);
  local_40 = (double)FUN_00b90620(local_40,0x3d719799812dea11);
  local_48 = (double)FUN_00b90620(local_48,0x3eb0c6f7a0b5ed8d);
  local_80[1] = (double)FUN_00b90620(local_80[1],0x3eb0c6f7a0b5ed8d);
  *(double *)(param_8 + 8) = local_80[3];
  *(double *)(param_8 + 0x10) = local_58 - 0.65;
  *(double *)(param_8 + 0x18) = local_60;
  *(double *)(param_8 + 0x20) = local_80[2];
  *(double *)(param_8 + 0x28) = local_50;
  *(double *)(param_8 + 0x30) = local_48;
  *(double *)(param_8 + 0x38) = local_80[0];
  cVar1 = FUN_016e9e80(param_1,0x18);
  *param_8 = cVar1;
  cVar1 = FUN_016e9d10(param_1,0xf);
  param_8[3] = cVar1;
  uVar6 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe68 >> 8),1);
  FUN_016ebdd0(param_1,*param_8 + '\x01',cVar1 + '\x02',param_8[1],uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebdd0(param_1,*param_8 + '\x02',param_8[1],param_8[3] + '\x04',uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x03',param_8[1],param_8[3] + '\x0f',uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebfa0(param_1,*param_8 + '\x04',param_8[3] + '\x0f',param_8[3] + '\x0e',uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),param_8[3] + '\x0e');
  FUN_016ec420(param_1,*param_8 + '\x05',param_8[2],param_8[1],uVar6,
               in_stack_fffffffffffffe70 & 0xffffffffffffff00,
               in_stack_fffffffffffffe78 & 0xffffffffffffff00);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x06',param_8[3] + '\x05',param_8[1],uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\a',param_4,param_8[3] + '\x05',uVar6);
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\b',param_4,param_8[1],uVar7);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_016ebdd0(param_1,*param_8 + '\t',param_8[3] + '\b',0,uVar7);
  uVar6 = CONCAT71((int7)(uVar7 >> 8),*param_8 + '\t');
  FUN_016ec970(param_1,*param_8 + '\n',param_8[2],param_8[1],uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),*param_8 + '\t');
  FUN_016ec970(param_1,*param_8 + '\v',param_8[3] + '\x05',param_8[1],uVar6);
  cVar1 = *param_8;
  FUN_016ecbf0(param_1,cVar1 + '\f',cVar1 + '\x01',cVar1 + '\t');
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),*param_8 + '\t');
  FUN_016ec970(param_1,*param_8 + '\r',param_8[3] + '\x0f',param_8[1],uVar7);
  FUN_016ebdd0(param_1,*param_8 + '\x0e',param_8[3] + '\f',0,uVar7 & 0xffffffffffffff00);
  FUN_016ec970(param_1,*param_8 + '\x0f',param_8[1],param_8[2],*param_8 + '\x0e');
  FUN_016ec970(param_1,*param_8 + '\x10',param_8[3] + '\x05',param_8[1],*param_8 + '\x0e');
  cVar1 = *param_8;
  FUN_016ecbf0(param_1,cVar1 + '\x11',cVar1 + '\x02',cVar1 + '\x0e');
  FUN_016ec970(param_1,*param_8 + '\x12',param_8[3] + '\x0f',param_8[1],*param_8 + '\x0e');
  FUN_016ebe60(param_1,*param_8 + '\x13',param_8[3] + '\b',param_8[3] + '\x06',1);
  FUN_016ebe60(param_1,*param_8 + '\x14',param_8[3] + '\a',param_8[3] + '\b',1);
  FUN_016ebfa0(param_1,*param_8 + '\x15',param_8[3] + '\t',0,1);
  FUN_016ebe60(param_1,*param_8 + '\x16',param_8[3] + '\f',param_8[3] + '\n',1);
  FUN_016ebe60(param_1,*param_8 + '\x17',param_8[3] + '\v',param_8[3] + '\f',1);
  FUN_016ebfa0(param_1,*param_8 + '\x18',param_8[3] + '\r',0,1);
  uStack_a0 = *(undefined8 *)(PTR_DAT_02002bc8 + 8);
  uStack_98 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x10);
  uStack_90 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x18);
  uStack_88 = *(undefined8 *)(PTR_DAT_02002bc8 + 0x20);
  local_a8 = local_38;
  puVar3 = (undefined8 *)PTR_DAT_02001fe0;
  puVar5 = local_140;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_140[0] = 0x3dc5fd7fe1796495;
  local_110 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\x01',param_8[3] + '\x02',&local_a8,local_140,
               param_8 + 0x40);
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\x04',param_8[3] + '\x03',&local_a8,local_140,
               param_8 + 0x158);
  puVar3 = (undefined8 *)PTR_DAT_02001fe0;
  puVar5 = local_140;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_140[0] = 0x3c9cd2b297d889bc;
  local_110 = 0x3dcb7cdfd9d7bdbb;
  local_118 = 0x4014000000000000;
  FUN_00db6bb0(param_1,param_2,param_4,param_8[3] + '\x05',&local_a8,local_140,param_8 + 0x270);
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\x05',param_4,&local_a8,local_140,param_8 + 0x388);
  puVar3 = (undefined8 *)PTR_DAT_02001fe0;
  puVar5 = local_140;
  for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_140[0] = 0x3d719799812dea11;
  local_110 = 0x3d95fd7fe1796495;
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\x06',param_8[3] + '\t',&local_a8,local_140,
               param_8 + 0x4a0);
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\t',param_8[3] + '\a',&local_a8,local_140,
               param_8 + 0x5b8);
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\n',param_8[3] + '\r',&local_a8,local_140,
               param_8 + 0x6d0);
  puVar3 = local_140;
  FUN_00db6bb0(param_1,param_2,param_8[3] + '\r',param_8[3] + '\v',&local_a8,puVar3,param_8 + 0x7e8)
  ;
  uVar7 = (ulonglong)puVar3 & 0xffffffffffffff00;
  FUN_00f56f20(param_1,param_2,param_8[2],param_8[3] + '\x01',param_8[3] + '\t',uVar7,
               0x3ff8000000000000,0x4014000000000000,(local_80[0] * 0.00175) / local_80[1],
               (local_50 - 0.7) / local_48,param_8 + 0x900);
  FUN_00f56f20(param_1,param_2,param_8[2],param_8[3] + '\x03',param_8[3] + '\r',
               uVar7 & 0xffffffffffffff00,0x3ff8000000000000,0x4014000000000000,
               (local_80[0] * 0.00175) / local_80[1],(local_50 - 0.7) / local_48,param_8 + 0x988);
  FUN_016ed320(param_1,*param_8 + '\x01',0,0,0);
  FUN_016ed320(param_1,*param_8 + '\x02',0,0,0);
  FUN_016ed320(param_1,*param_8 + '\x03',0,0x3f50624dd2f1a9fc,0);
  FUN_016ed220(param_1,*param_8 + '\x04',0x3ddb7cdfd9d7bdbb,0);
  FUN_016ed320(param_1,*param_8 + '\x06',0,local_60 / *(double *)(param_8 + 0x10),0);
  FUN_016ed320(param_1,*param_8 + '\a',0,local_60 / 0.65,0);
  FUN_016ed320(param_1,*param_8 + '\t',0,0x3ddb7cdfd9d7bdbb,0);
  FUN_016ed320(param_1,*param_8 + '\x13',0,0x3f53dc013dc013dc,0);
  FUN_016ed320(param_1,*param_8 + '\x14',0,local_40 / 0.0029,0);
  FUN_016ed220(param_1,*param_8 + '\x15',local_40 / 454.0,0);
  FUN_016ed320(param_1,*param_8 + '\x16',0,0x3f53dc013dc013dc,0);
  FUN_016ed320(param_1,*param_8 + '\x17',0,local_40 / 0.0029,0);
  FUN_016ed220(param_1,*param_8 + '\x18',local_40 / 454.0,0);
  return;
}

