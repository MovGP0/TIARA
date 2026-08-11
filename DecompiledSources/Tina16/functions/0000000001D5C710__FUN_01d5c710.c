/* Ghidra address: 01d5c710 */
/* Ghidra symbol: FUN_01d5c710 */


void FUN_01d5c710(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                 undefined1 param_5,undefined8 *param_6,undefined8 *param_7,char *param_8)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int local_4bc;
  undefined8 local_4b8;
  undefined1 local_4b0 [392];
  undefined1 local_328 [24];
  undefined8 local_310;
  double local_308;
  undefined8 local_300;
  undefined1 local_1f8 [48];
  undefined8 local_1c8 [9];
  double local_180;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  undefined8 local_80 [6];
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar4 = local_80;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1c8;
  for (lVar3 = 0x29; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_7;
    param_7 = param_7 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_8 + 0x2c8) = local_40;
  *(undefined8 *)(param_8 + 0x2b0) = local_48;
  *(undefined8 *)(param_8 + 0x2b8) = local_98;
  *(undefined8 *)(param_8 + 0x2c0) = local_90;
  FUN_00409a70(local_80,local_1f8,0x30);
  FUN_00409a70(local_1c8,local_328,0x130);
  dVar1 = local_308;
  local_300 = 0;
  local_308 = 0.0;
  local_310 = 0;
  cVar2 = FUN_016e9e80(param_1,3);
  *param_8 = cVar2;
  if (param_4 == -1) {
    cVar2 = FUN_016e9d10(param_1,2);
    param_4 = cVar2 + '\x02';
  }
  else {
    cVar2 = FUN_016e9d10(param_1,1);
  }
  cVar2 = cVar2 + '\x01';
  FUN_016ec1c0(param_1,*param_8 + '\x01',cVar2,param_4);
  FUN_016ebe60(param_1,*param_8 + '\x02',cVar2,param_4,1);
  FUN_016ebe60(param_1,*param_8 + '\x03',cVar2,param_5,1);
  FUN_016905a0(local_328,local_4b0,&local_4b8,&local_4bc);
  FUN_0168d1c0(param_1,param_2,1,param_3,param_4,cVar2,0xff,local_1f8,local_4b0,local_4b8,
               param_8 + 8);
  FUN_004095f0(local_4b8,(longlong)local_4bc);
  if (*(longlong *)(param_8 + 0x2c8) == 0) {
    local_180 = (*(double *)(param_8 + 0x2b8) * *(double *)(param_8 + 0x2c0) * local_50) / 100.0;
  }
  else {
    local_180 = 0.0;
  }
  FUN_016ed5d0(param_1,*param_8 + '\x01',local_180,0,0,0,0);
  FUN_016ed320(param_1,*param_8 + '\x02',0,1.0 / local_88,0);
  FUN_016ed320(param_1,*param_8 + '\x03',0,1.0 / dVar1,0);
  return;
}

