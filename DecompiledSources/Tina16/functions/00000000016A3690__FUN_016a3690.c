/* Ghidra address: 016a3690 */
/* Ghidra symbol: FUN_016a3690 */


void FUN_016a3690(longlong param_1,byte *param_2)

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
  FUN_00414ff0(param_1 + 0x18,local_118);
  return;
}

