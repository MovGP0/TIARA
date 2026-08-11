/* Ghidra address: 00e76710 */
/* Ghidra symbol: FUN_00e76710 */


void FUN_00e76710(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 *param_6,double *param_7)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double local_100 [4];
  double local_e0;
  undefined8 local_58 [6];
  
  puVar4 = local_58;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  pdVar5 = local_100;
  for (lVar2 = 0x15; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar5 = *param_7;
    param_7 = param_7 + 1;
    pdVar5 = pdVar5 + 1;
  }
  cVar1 = FUN_016e9e80(param_1,2);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar3,param_3,param_4,1);
  if (local_e0 == 0.0) {
    FUN_016ed320(param_1,cVar3,0,0x412e848000000000,0);
  }
  else {
    FUN_016ed320(param_1,cVar3,0,1.0 / (local_e0 + 1e-06),0);
  }
  cVar1 = cVar1 + '\x02';
  FUN_016ebe60(param_1,cVar1,param_5,param_4,1);
  if (local_100[3] == 0.0) {
    FUN_016ed320(param_1,cVar1,0,0x412e848000000000,0);
  }
  else {
    FUN_016ed320(param_1,cVar1,0,1.0 / (local_100[3] + 1e-06),0);
  }
  return;
}

