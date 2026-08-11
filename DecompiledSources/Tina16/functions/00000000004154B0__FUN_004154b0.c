/* Ghidra address: 004154b0 */
/* Ghidra symbol: FUN_004154b0 */


void FUN_004154b0(undefined8 param_1,byte *param_2,undefined4 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_004147f0(param_1,local_118 + 1,local_118[0],param_3);
  return;
}

