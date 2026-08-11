/* Ghidra address: 0167a890 */
/* Ghidra symbol: FUN_0167a890 */


void FUN_0167a890(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 *param_6,double *param_7)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double local_138 [4];
  double local_118;
  undefined8 local_b0 [17];
  
  puVar4 = local_b0;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  pdVar5 = local_138;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar5 = *param_7;
    param_7 = param_7 + 1;
    pdVar5 = pdVar5 + 1;
  }
  cVar1 = FUN_016e9e80(param_1,2);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar3,param_3,param_4,1);
  if (local_118 == 0.0) {
    FUN_016ed320(param_1,cVar3,0,0x412e848000000000,0);
  }
  else {
    FUN_016ed320(param_1,cVar3,0,1.0 / (local_118 + 1e-06),0);
  }
  cVar1 = cVar1 + '\x02';
  FUN_016ebe60(param_1,cVar1,param_5,param_4,1);
  if (local_138[3] == 0.0) {
    FUN_016ed320(param_1,cVar1,0,0x412e848000000000,0);
  }
  else {
    FUN_016ed320(param_1,cVar1,0,1.0 / (local_138[3] + 1e-06),0);
  }
  return;
}

