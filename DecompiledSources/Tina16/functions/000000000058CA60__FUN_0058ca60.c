/* Ghidra address: 0058ca60 */
/* Ghidra symbol: FUN_0058ca60 */


void FUN_0058ca60(undefined8 param_1,undefined8 param_2,byte *param_3)

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
  FUN_00590e20(&DAT_0058dc18,param_1,param_2,local_118);
  return;
}

