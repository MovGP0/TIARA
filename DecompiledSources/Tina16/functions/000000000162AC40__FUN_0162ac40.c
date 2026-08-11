/* Ghidra address: 0162ac40 */
/* Ghidra symbol: FUN_0162ac40 */


undefined8 FUN_0162ac40(byte *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_1 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_1;
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return 0;
}

