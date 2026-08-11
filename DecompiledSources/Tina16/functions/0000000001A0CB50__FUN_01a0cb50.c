/* Ghidra address: 01a0cb50 */
/* Ghidra symbol: FUN_01a0cb50 */


undefined8 FUN_01a0cb50(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00414ff0(param_2,local_118);
  FUN_004169a0(&local_120,local_118);
  iVar1 = FUN_004413f0(&LAB_01a0cc04,local_120);
  if (0 < iVar1) {
    FUN_004151b0(param_2,local_118,1,iVar1 + -1);
  }
  FUN_00414480(&local_120);
  return param_2;
}

