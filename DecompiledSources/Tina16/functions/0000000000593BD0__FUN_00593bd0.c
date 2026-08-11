/* Ghidra address: 00593bd0 */
/* Ghidra symbol: FUN_00593bd0 */


bool FUN_00593bd0(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_218 [256];
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_218;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  iVar1 = FUN_00414f50(local_118,local_218,(ulonglong)local_118[0] + 1);
  return iVar1 == 0;
}

