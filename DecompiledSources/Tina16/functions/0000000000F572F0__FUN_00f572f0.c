/* Ghidra address: 00f572f0 */
/* Ghidra symbol: FUN_00f572f0 */


void FUN_00f572f0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,char param_6,longlong param_7,char param_8,double param_9,
                 double param_10,undefined8 param_11,undefined8 param_12,char *param_13)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong in_stack_ffffffffffffffc8;
  
  uVar2 = FUN_00b90620(param_11,1.0 / *(double *)(param_2 + 0x440));
  uVar2 = FUN_00b90650(uVar2,*(undefined8 *)(param_2 + 0x440));
  uVar3 = FUN_00b90620(param_12,1.0 / *(double *)(param_2 + 0x440));
  uVar3 = FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  if (param_10 <= param_9) {
    *(double *)(param_13 + 0x40) = param_10;
    uVar4 = FUN_00b90620(param_9,param_10 + 1e-09);
    *(undefined8 *)(param_13 + 0x48) = uVar4;
    *(undefined8 *)(param_13 + 0x50) = uVar3;
    *(undefined8 *)(param_13 + 0x58) = uVar2;
  }
  else {
    *(double *)(param_13 + 0x40) = param_9;
    uVar4 = FUN_00b90620(param_10,param_9 + 1e-09);
    *(undefined8 *)(param_13 + 0x48) = uVar4;
    *(undefined8 *)(param_13 + 0x50) = uVar2;
    *(undefined8 *)(param_13 + 0x58) = uVar3;
  }
  dVar5 = (double)FUN_0040c2f0(*(double *)(param_13 + 0x58) * *(double *)(param_13 + 0x50));
  *(double *)(param_13 + 0x18) = dVar5 * 0.5;
  uVar3 = FUN_0040c2f0(*(double *)(param_13 + 0x58) / *(double *)(param_13 + 0x50));
  *(undefined8 *)(param_13 + 0x20) = uVar3;
  *(double *)(param_13 + 0x28) = (*(double *)(param_13 + 0x48) + *(double *)(param_13 + 0x40)) * 0.5
  ;
  *(double *)(param_13 + 0x30) = *(double *)(param_13 + 0x48) - *(double *)(param_13 + 0x40);
  if (param_7 == 0) {
    cVar1 = FUN_016e9e80(param_1,2);
    *param_13 = cVar1;
    FUN_016ebdd0(param_1,cVar1 + '\x01',param_3,param_4,1);
    FUN_016ed320(param_1,*param_13 + '\x01',0,uVar2,0);
    FUN_016ed1a0(param_1,*param_13 + '\x02',param_3,param_4);
    param_13[0x80] = param_8;
    uVar2 = FUN_016ebdc0(param_1);
    FUN_01d04b50(uVar2,param_13 + 0x80);
  }
  else {
    cVar1 = FUN_016e9e80(param_1,3);
    *param_13 = cVar1;
    param_13[1] = param_5;
    param_13[2] = param_6;
    FUN_016ebdd0(param_1,*param_13 + '\x01',param_3,param_4,
                 in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    FUN_016ece80(param_1,*param_13 + '\x02',param_7,param_13[1],param_13[2],*param_13 + '\x01');
    FUN_016ed1a0(param_1,*param_13 + '\x03',param_3,param_4);
    param_13[0x80] = param_8;
    uVar2 = FUN_016ebdc0(param_1);
    FUN_01d04b50(uVar2,param_13 + 0x80);
  }
  return;
}

