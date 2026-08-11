/* Ghidra address: 00dbc8c0 */
/* Ghidra symbol: FUN_00dbc8c0 */


void FUN_00dbc8c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 local_1c8 [12];
  double local_168;
  double local_160;
  undefined8 local_b0 [17];
  
  puVar4 = local_b0;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1c8;
  for (lVar2 = 0x23; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_7;
    param_7 = param_7 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_016e9e80(param_1,2);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar3,param_3,param_4,1);
  if (local_160 == 0.0) {
    FUN_016ed320(param_1,cVar3,0,0x412e848000000000,0);
  }
  else {
    FUN_016ed320(param_1,cVar3,0,1.0 / (local_160 + 1e-06),0);
  }
  cVar1 = cVar1 + '\x02';
  FUN_016ebe60(param_1,cVar1,param_5,param_4,1);
  if (local_168 == 0.0) {
    FUN_016ed320(param_1,cVar1,0,0x412e848000000000,0);
  }
  else {
    FUN_016ed320(param_1,cVar1,0,1.0 / (local_168 + 1e-06),0);
  }
  return;
}

