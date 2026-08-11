/* Ghidra address: 01d5a570 */
/* Ghidra symbol: FUN_01d5a570 */


void FUN_01d5a570(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,undefined8 *param_6,undefined8 *param_7,char *param_8)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong in_stack_ffffffffffffff78;
  
  uVar1 = *param_6;
  uVar4 = param_7[1];
  uVar5 = param_7[2];
  uVar6 = param_7[3];
  uVar3 = FUN_00b90620(*param_7,*(undefined8 *)(param_2 + 0x430));
  uVar3 = FUN_00b90650(uVar3,1.0 / *(double *)(param_2 + 0x430));
  uVar4 = FUN_00b90620(uVar4,0);
  uVar4 = FUN_00b90650(uVar4,0x412e848000000000);
  uVar5 = FUN_00b90620(uVar5,0);
  uVar5 = FUN_00b90650(uVar5,0x412e848000000000);
  uVar6 = FUN_00b90620(uVar6,*(undefined8 *)(param_2 + 0x430));
  uVar6 = FUN_00b90650(uVar6,1.0 / *(double *)(param_2 + 0x430));
  *(undefined8 *)(param_8 + 0x10) = uVar3;
  *(undefined8 *)(param_8 + 0x18) = uVar4;
  *(undefined8 *)(param_8 + 0x20) = uVar5;
  *(undefined8 *)(param_8 + 0x28) = uVar6;
  param_8[1] = (char)param_3;
  param_8[2] = (char)param_4;
  *(undefined8 *)(param_8 + 8) = uVar1;
  cVar2 = FUN_016e9e80(param_1,8);
  *param_8 = cVar2;
  if (param_5 == -1) {
    cVar2 = FUN_016e9d10(param_1,2);
    param_8[3] = cVar2 + '\x01';
    param_8[4] = cVar2 + '\x02';
  }
  else {
    param_8[3] = param_5;
    cVar2 = FUN_016e9d10(param_1,1);
    param_8[4] = cVar2 + '\x01';
  }
  in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
  FUN_016ebdd0(param_1,*param_8 + '\x01',param_3,param_4,in_stack_ffffffffffffff78);
  FUN_016ebe60(param_1,*param_8 + '\x02',0,param_8[3],in_stack_ffffffffffffff78 & 0xffffffffffffff00
              );
  FUN_016ebe60(param_1,*param_8 + '\x03',param_8[3],param_8[4],1);
  FUN_016ec240(param_1,*param_8 + '\x04',param_8[4],0);
  FUN_016ebfa0(param_1,*param_8 + '\x05',param_8[3],0,1);
  FUN_016ec970(param_1,*param_8 + '\x06',param_8[3],0,*param_8 + '\x01');
  FUN_016ec850(param_1,*param_8 + '\a',param_3,param_4,*param_8 + '\x02');
  cVar2 = *param_8;
  FUN_016eca70(param_1,cVar2 + '\b',cVar2 + '\x01',cVar2 + '\x02');
  uVar4 = FUN_00b90620(*(undefined8 *)(param_8 + 8),0x406be00000000000);
  uVar4 = FUN_00b90650(uVar4,0x4080580000000000);
  *(undefined8 *)(param_8 + 8) = uVar4;
  FUN_016ed5d0(param_1,*param_8 + '\x04',*(undefined8 *)(param_8 + 8),0,0,0,0);
  FUN_016ed320(param_1,*param_8 + '\x03',0,*(double *)(param_8 + 0x28) * 0.001,0);
  FUN_016ed220(param_1,*param_8 + '\x05',
               *(double *)(param_8 + 0x28) * 0.001 * *(double *)(param_8 + 0x20),0);
  return;
}

