/* Ghidra address: 00f56a30 */
/* Ghidra symbol: FUN_00f56a30 */


void FUN_00f56a30(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,char param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,int param_11,char *param_12)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = FUN_00b90620(param_9,1.0 / *(double *)(param_2 + 0x440));
  dVar4 = (double)FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  uVar3 = FUN_00b90620(param_10,1.0 / *(double *)(param_2 + 0x440));
  dVar5 = (double)FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  *(undefined8 *)(param_12 + 8) = param_7;
  uVar3 = FUN_00b90620(param_8,0x3e112e0be826d695);
  *(undefined8 *)(param_12 + 0x10) = uVar3;
  *(double *)(param_12 + 0x20) = 1.0 / dVar4;
  *(double *)(param_12 + 0x18) = 1.0 / dVar5;
  cVar1 = FUN_016e9e80(param_1,3);
  *param_12 = cVar1;
  param_12[1] = param_5;
  param_12[2] = param_6;
  param_12[3] = (char)param_3;
  param_12[4] = (char)param_4;
  param_12[0x31] = param_11 != -1;
  if (param_11 != -1) {
    param_12[0x30] = (char)param_11;
  }
  else {
    param_12[0x30] = '\0';
  }
  uVar2 = FUN_016ea1b0(param_1,1);
  *(undefined2 *)(param_12 + 0x32) = uVar2;
  FUN_016ebe60(param_1,*param_12 + '\x01',param_3,param_4,0);
  FUN_016ec850(param_1,*param_12 + '\x02',param_5,param_6,*param_12 + '\x01');
  FUN_016ed1a0(param_1,*param_12 + '\x03',param_3,param_4);
  uVar2 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)(param_12 + 0x34) = uVar2;
  return;
}

