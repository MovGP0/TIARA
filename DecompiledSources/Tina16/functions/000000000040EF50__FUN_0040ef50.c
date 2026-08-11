/* Ghidra address: 0040ef50 */
/* Ghidra symbol: FUN_0040ef50 */


void FUN_0040ef50(undefined8 param_1,byte *param_2)

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
  FUN_0040ef90(param_1,local_118,0);
  return;
}

