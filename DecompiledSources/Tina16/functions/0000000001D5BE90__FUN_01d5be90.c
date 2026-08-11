/* Ghidra address: 01d5be90 */
/* Ghidra symbol: FUN_01d5be90 */


void FUN_01d5be90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,char *param_7)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 local_200 [40];
  double local_1d8;
  undefined1 local_168 [40];
  undefined8 local_140 [19];
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90 [6];
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  puVar4 = local_90;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_5;
    param_5 = param_5 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_140;
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_7 + 0x138) = local_50;
  *(undefined8 *)(param_7 + 0x120) = local_58;
  *(undefined8 *)(param_7 + 0x128) = local_a8;
  *(undefined8 *)(param_7 + 0x130) = local_a0;
  FUN_00409a70(local_90,local_168,0x28);
  FUN_00409a70(local_140,local_200,0x98);
  dVar1 = local_1d8;
  local_1d8 = 0.0;
  cVar2 = FUN_016e9e80(param_1,3);
  *param_7 = cVar2;
  cVar2 = FUN_016e9d10(param_1,1);
  cVar2 = cVar2 + '\x01';
  FUN_016ec1c0(param_1,*param_7 + '\x01',cVar2,param_3);
  FUN_016ebe60(param_1,*param_7 + '\x02',cVar2,param_3,1);
  FUN_016ebe60(param_1,*param_7 + '\x03',cVar2,param_4,1);
  FUN_00db6bb0(param_1,param_2,param_3,cVar2,local_168,local_200,param_7 + 8);
  if (*(longlong *)(param_7 + 0x138) == 0) {
    dVar5 = (*(double *)(param_7 + 0x128) * *(double *)(param_7 + 0x130) * local_60) / 100.0;
  }
  else {
    dVar5 = 0.0;
  }
  FUN_016ed5d0(param_1,*param_7 + '\x01',dVar5,0,0,0,0);
  FUN_016ed320(param_1,*param_7 + '\x02',0,1.0 / local_98,0);
  FUN_016ed320(param_1,*param_7 + '\x03',0,1.0 / dVar1,0);
  return;
}

