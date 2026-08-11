/* Ghidra address: 0171afa0 */
/* Ghidra symbol: FUN_0171afa0 */


void FUN_0171afa0(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_128 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_0424eff7();
  return;
}

