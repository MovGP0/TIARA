/* Ghidra address: 00f57990 */
/* Ghidra symbol: FUN_00f57990 */


void FUN_00f57990(undefined8 param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                 double param_5,double param_6,undefined8 param_7,undefined8 param_8,char *param_9)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  uint uVar6;
  undefined1 local_48 [40];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_00b90620(param_7,1.0 / *(double *)(param_2 + 0x440));
  uVar2 = FUN_00b90650(uVar2,*(undefined8 *)(param_2 + 0x440));
  uVar3 = FUN_00b90620(param_8,1.0 / *(double *)(param_2 + 0x440));
  uVar3 = FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  if (param_6 <= param_5) {
    *(double *)(param_9 + 0x28) = param_6;
    uVar4 = FUN_00b90620(param_5,param_6 + 1e-09);
    *(undefined8 *)(param_9 + 0x30) = uVar4;
    *(undefined8 *)(param_9 + 0x38) = uVar3;
    *(undefined8 *)(param_9 + 0x40) = uVar2;
  }
  else {
    *(double *)(param_9 + 0x28) = param_5;
    uVar4 = FUN_00b90620(param_6,param_5 + 1e-09);
    *(undefined8 *)(param_9 + 0x30) = uVar4;
    *(undefined8 *)(param_9 + 0x38) = uVar2;
    *(undefined8 *)(param_9 + 0x40) = uVar3;
  }
  dVar5 = (double)FUN_0040c2f0(*(double *)(param_9 + 0x40) * *(double *)(param_9 + 0x38));
  *(double *)(param_9 + 8) = dVar5 * 0.5;
  uVar2 = FUN_0040c2f0(*(double *)(param_9 + 0x40) / *(double *)(param_9 + 0x38));
  *(undefined8 *)(param_9 + 0x10) = uVar2;
  *(double *)(param_9 + 0x18) = (*(double *)(param_9 + 0x30) + *(double *)(param_9 + 0x28)) * 0.5;
  *(double *)(param_9 + 0x20) = *(double *)(param_9 + 0x30) - *(double *)(param_9 + 0x28);
  FUN_016ea450(local_48,param_1,5);
  FUN_004169a0(local_20,local_48);
  uVar2 = FUN_016ebdc0(param_1);
  uVar6 = 0;
  uVar2 = FUN_01b07f10(param_2,uVar2,local_20[0],&DAT_01eff16a,1,1);
  cVar1 = FUN_016e9e80(param_1,3);
  *param_9 = cVar1;
  FUN_016ebdd0(param_1,cVar1 + '\x01',param_3,param_4,uVar6 & 0xffffff00);
  FUN_016ed0a0(param_1,*param_9 + '\x02',uVar2,1,*param_9 + '\x01');
  FUN_016ed1a0(param_1,*param_9 + '\x03',param_3,param_4);
  FUN_00414480(local_20);
  return;
}

