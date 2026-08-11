/* Ghidra address: 01d5b570 */
/* Ghidra symbol: FUN_01d5b570 */


void FUN_01d5b570(undefined8 param_1,char param_2,undefined4 param_3,char param_4,
                 undefined8 *param_5,undefined8 *param_6,char *param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong uVar5;
  undefined8 local_a0 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = *param_5;
  puVar3 = local_a0;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_6;
    param_6 = param_6 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_7 + 0x10) = local_a0[0];
  *(undefined8 *)(param_7 + 0x18) = local_a0[1];
  *(undefined8 *)(param_7 + 0x20) = local_a0[2];
  *(undefined8 *)(param_7 + 0x28) = local_a0[3];
  *(undefined8 *)(param_7 + 0x30) = local_80;
  *(undefined8 *)(param_7 + 0x38) = local_78;
  *(undefined8 *)(param_7 + 0x40) = local_70;
  *(undefined8 *)(param_7 + 0x48) = local_68;
  *(undefined8 *)(param_7 + 0x50) = local_60;
  *(undefined8 *)(param_7 + 0x58) = local_58;
  *(undefined8 *)(param_7 + 0x60) = local_50;
  *(undefined8 *)(param_7 + 0x68) = local_48;
  *(undefined8 *)(param_7 + 8) = local_30;
  param_7[0x70] = '\0';
  param_7[0x71] = '\0';
  param_7[0x72] = '\0';
  param_7[0x73] = '\0';
  param_7[0x74] = '\0';
  param_7[0x75] = '\0';
  param_7[0x76] = '\0';
  param_7[0x77] = '\0';
  cVar1 = FUN_016e9e80(param_1,0xf);
  *param_7 = cVar1;
  if (param_4 == -1) {
    cVar1 = FUN_016e9d10(param_1,4);
    param_7[3] = cVar1 + '\x01';
    param_7[4] = cVar1 + '\x02';
  }
  else {
    param_7[3] = param_4;
    cVar1 = FUN_016e9d10(param_1,3);
    param_7[4] = cVar1 + '\x01';
  }
  param_7[5] = param_7[4] + '\x01';
  param_7[6] = param_7[4] + '\x02';
  param_7[1] = param_2;
  param_7[2] = (char)param_3;
  in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_7 + '\x01',param_2,param_7[5],in_stack_ffffffffffffff28);
  in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
  FUN_016ebdd0(param_1,*param_7 + '\x02',param_7[5],param_3,in_stack_ffffffffffffff28);
  uVar4 = CONCAT71((int7)(in_stack_ffffffffffffff28 >> 8),1);
  FUN_016ebfa0(param_1,*param_7 + '\x03',param_2,param_7[5],uVar4);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebfa0(param_1,*param_7 + '\x04',param_7[5],param_3,uVar5);
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*param_7 + '\x05',0,param_7[3],uVar5);
  uVar4 = CONCAT71((int7)(uVar5 >> 8),1);
  FUN_016ebe60(param_1,*param_7 + '\x06',param_7[3],param_7[4],uVar4);
  FUN_016ec240(param_1,*param_7 + '\a',param_7[4],0);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebfa0(param_1,*param_7 + '\b',param_7[3],0,uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*param_7 + '\x02');
  FUN_016ec970(param_1,*param_7 + '\t',param_7[3],0,uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*param_7 + '\x05');
  FUN_016ec850(param_1,*param_7 + '\n',param_2,param_3,uVar4);
  cVar1 = *param_7;
  FUN_016eca70(param_1,cVar1 + '\v',cVar1 + '\x02',cVar1 + '\x05');
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*param_7 + '\x01');
  FUN_016ec850(param_1,*param_7 + '\f',param_7[3],0,uVar4);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*param_7 + '\x01');
  FUN_016ec850(param_1,*param_7 + '\r',param_7[6],0,uVar5);
  FUN_016ebdd0(param_1,*param_7 + '\x0e',param_7[6],0,uVar5 & 0xffffffffffffff00);
  FUN_016ec970(param_1,*param_7 + '\x0f',param_7[3],0,*param_7 + '\x0e');
  uVar4 = FUN_00b90620(*(undefined8 *)(param_7 + 8),0x406be00000000000);
  uVar4 = FUN_00b90650(uVar4,0x4080580000000000);
  *(undefined8 *)(param_7 + 8) = uVar4;
  FUN_016ed5d0(param_1,*param_7 + '\a',*(undefined8 *)(param_7 + 8),0,0,0,0);
  FUN_016ed320(param_1,*param_7 + '\x06',0,1.0 / local_40,0);
  FUN_016ed220(param_1,*param_7 + '\b',local_38,0);
  FUN_016ed220(param_1,*param_7 + '\x04',*(undefined8 *)(param_7 + 0x68),0);
  return;
}

