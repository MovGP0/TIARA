/* Ghidra address: 017e8020 */
/* Ghidra symbol: FUN_017e8020 */


undefined8 FUN_017e8020(longlong param_1,byte *param_2,undefined8 *param_3)

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
  FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_118,local_148);
  return 1;
}

