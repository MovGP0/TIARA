/* Ghidra address: 016ae190 */
/* Ghidra symbol: FUN_016ae190 */


void FUN_016ae190(longlong param_1,byte *param_2)

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
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
            (*(longlong **)(param_1 + 0x38),local_118,local_118[0] + 1);
  return;
}

