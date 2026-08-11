/* Ghidra address: 016912c0 */
/* Ghidra symbol: FUN_016912c0 */


void FUN_016912c0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 local_148 [6];
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  puVar3 = local_148;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_013b3b70(*(undefined8 *)(param_1 + 0x1d8),local_118,*(undefined8 *)(param_1 + 0x1d0));
  return;
}

