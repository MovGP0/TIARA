/* Ghidra address: 00edbed0 */
/* Ghidra symbol: FUN_00edbed0 */


byte FUN_00edbed0(undefined8 param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  if (local_118[0] < param_3) {
    bVar1 = 0;
  }
  else {
    bVar1 = local_118[param_3];
  }
  return bVar1;
}

