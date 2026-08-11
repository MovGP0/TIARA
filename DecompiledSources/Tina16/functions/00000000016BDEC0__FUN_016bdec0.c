/* Ghidra address: 016bdec0 */
/* Ghidra symbol: FUN_016bdec0 */


void FUN_016bdec0(undefined8 param_1,byte *param_2,byte *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_218 [256];
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_218;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_016bdb60(param_1,local_118,local_218,0,1);
  return;
}

