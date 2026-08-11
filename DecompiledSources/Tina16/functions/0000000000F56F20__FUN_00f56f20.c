/* Ghidra address: 00f56f20 */
/* Ghidra symbol: FUN_00f56f20 */


void FUN_00f56f20(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,char param_6,double param_7,double param_8,undefined8 param_9,
                 undefined8 param_10,char *param_11)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar3 = FUN_00b90620(param_9,1.0 / *(double *)(param_2 + 0x440));
  uVar3 = FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  uVar4 = FUN_00b90620(param_10,1.0 / *(double *)(param_2 + 0x440));
  uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(param_2 + 0x440));
  if (param_8 <= param_7) {
    *(double *)(param_11 + 0x40) = param_8;
    uVar5 = FUN_00b90620(param_7,param_8 + 1e-09);
    *(undefined8 *)(param_11 + 0x48) = uVar5;
    *(undefined8 *)(param_11 + 0x50) = uVar4;
    *(undefined8 *)(param_11 + 0x58) = uVar3;
  }
  else {
    *(double *)(param_11 + 0x40) = param_7;
    uVar5 = FUN_00b90620(param_8,param_7 + 1e-09);
    *(undefined8 *)(param_11 + 0x48) = uVar5;
    *(undefined8 *)(param_11 + 0x50) = uVar3;
    *(undefined8 *)(param_11 + 0x58) = uVar4;
  }
  *(double *)(param_11 + 0x68) = 1.0 / *(double *)(param_11 + 0x58);
  *(double *)(param_11 + 0x60) = 1.0 / *(double *)(param_11 + 0x50);
  dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x68) * *(double *)(param_11 + 0x60));
  *(double *)(param_11 + 0x18) = dVar6 * 0.5;
  uVar3 = FUN_0040c2f0(*(double *)(param_11 + 0x68) / *(double *)(param_11 + 0x60));
  *(undefined8 *)(param_11 + 0x20) = uVar3;
  *(double *)(param_11 + 0x28) = (*(double *)(param_11 + 0x48) + *(double *)(param_11 + 0x40)) * 0.5
  ;
  *(double *)(param_11 + 0x30) = *(double *)(param_11 + 0x48) - *(double *)(param_11 + 0x40);
  *(double *)(param_11 + 0x38) = 1.0 / *(double *)(param_11 + 0x30);
  cVar1 = FUN_016e9e80(param_1,3);
  *param_11 = cVar1;
  param_11[1] = param_5;
  param_11[2] = param_6;
  param_11[3] = (char)param_3;
  param_11[4] = (char)param_4;
  param_11[0x80] = '\0';
  param_11[8] = -1;
  param_11[9] = -1;
  param_11[10] = -1;
  param_11[0xb] = -1;
  param_11[0xc] = -1;
  param_11[0xd] = -1;
  param_11[0xe] = -1;
  param_11[0xf] = -1;
  param_11[0x10] = -1;
  param_11[0x11] = -1;
  param_11[0x12] = -1;
  param_11[0x13] = -1;
  param_11[0x14] = -1;
  param_11[0x15] = -1;
  param_11[0x16] = -1;
  param_11[0x17] = -1;
  FUN_016ebe60(param_1,*param_11 + '\x01',param_3,param_4,0);
  FUN_016ec850(param_1,*param_11 + '\x02',param_5,param_6,*param_11 + '\x01');
  FUN_016ed1a0(param_1,*param_11 + '\x03',param_3,param_4);
  uVar2 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)(param_11 + 0x82) = uVar2;
  return;
}

