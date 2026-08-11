/* Ghidra address: 01d6e9a0 */
/* Ghidra symbol: FUN_01d6e9a0 */


void FUN_01d6e9a0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 double *param_5)

{
  char cVar1;
  double local_30;
  
  local_30 = *param_5;
  cVar1 = FUN_016e9e80(param_1,1);
  if (local_30 == 0.0) {
    FUN_016ebdd0(param_1,cVar1 + '\x01',param_3,param_4,1);
    FUN_016ed320(param_1,cVar1 + '\x01',0,local_30,0);
  }
  else {
    FUN_016ebe60(param_1,cVar1 + '\x01',param_3,param_4,1);
    if (1.0 / *(double *)(param_2 + 0x430) < local_30) {
      local_30 = 1.0 / *(double *)(param_2 + 0x430);
    }
    FUN_016ed320(param_1,cVar1 + '\x01',0,1.0 / local_30,0);
  }
  return;
}

