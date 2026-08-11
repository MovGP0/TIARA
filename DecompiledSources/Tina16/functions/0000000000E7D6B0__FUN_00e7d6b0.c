/* Ghidra address: 00e7d6b0 */
/* Ghidra symbol: FUN_00e7d6b0 */


void FUN_00e7d6b0(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,longlong param_7,char param_8)

{
  char cVar1;
  double local_40;
  double local_38;
  
  local_40 = *(double *)(param_7 + 8);
  local_38 = *(double *)(param_7 + 0x10);
  cVar1 = FUN_016e9e80(param_1,3);
  FUN_016ebe60(param_1,cVar1 + '\x01',param_2,param_3,1);
  if (param_8 == '\x01') {
    FUN_016ebe60(param_1,cVar1 + '\x02',param_4,param_5,1);
  }
  else if (param_8 == '\x02') {
    FUN_016ebe60(param_1,cVar1 + '\x02',param_4,param_6,1);
  }
  FUN_016ebe60(param_1,cVar1 + '\x03',param_5,param_6,1);
  if (local_40 < 1.0) {
    local_40 = 1.0;
  }
  if (local_38 < 1.0) {
    local_38 = 1.0;
  }
  FUN_016ed320(param_1,cVar1 + '\x01',0,1.0 / local_40,0);
  FUN_016ed320(param_1,cVar1 + '\x02',0,1.0 / local_38,0);
  FUN_016ed320(param_1,cVar1 + '\x03',0,0x3f1179ec9cbd821e,0);
  return;
}

