/* Ghidra address: 00daee70 */
/* Ghidra symbol: FUN_00daee70 */


void FUN_00daee70(undefined8 param_1,undefined8 param_2,byte *param_3)

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
  lVar1 = FUN_01d347d0(param_1);
  FUN_00414ff0(lVar1 + 0x18,local_118);
  return;
}

