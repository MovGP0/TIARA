/* Ghidra address: 016bbb50 */
/* Ghidra symbol: FUN_016bbb50 */


void FUN_016bbb50(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00b95ce0(param_2);
  FUN_00b95c80(local_118);
  return;
}

