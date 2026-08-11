/* Ghidra address: 00e7d4e0 */
/* Ghidra symbol: FUN_00e7d4e0 */


void FUN_00e7d4e0(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 *param_7,double *param_8)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  double local_d8 [20];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_7;
  local_30 = param_7[1];
  pdVar3 = local_d8;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_8;
    param_8 = param_8 + 1;
    pdVar3 = pdVar3 + 1;
  }
  cVar1 = FUN_016e9e80(param_1,3);
  FUN_016ebe60(param_1,cVar1 + '\x01',param_2,param_3,1);
  if ((char)local_30 == '\x01') {
    FUN_016ebe60(param_1,cVar1 + '\x02',param_4,param_5,1);
  }
  else if ((char)local_30 == '\x02') {
    FUN_016ebe60(param_1,cVar1 + '\x02',param_4,param_6,1);
  }
  FUN_016ebe60(param_1,cVar1 + '\x03',param_5,param_6,1);
  if (local_d8[1] < 1.0) {
    local_d8[1] = 1.0;
  }
  if (local_d8[2] < 1.0) {
    local_d8[2] = 1.0;
  }
  FUN_016ed320(param_1,cVar1 + '\x01',0,1.0 / local_d8[1],0);
  FUN_016ed320(param_1,cVar1 + '\x02',0,1.0 / local_d8[2],0);
  FUN_016ed320(param_1,cVar1 + '\x03',0,0x3f1179ec9cbd821e,0);
  return;
}

