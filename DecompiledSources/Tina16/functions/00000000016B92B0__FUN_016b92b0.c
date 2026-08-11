/* Ghidra address: 016b92b0 */
/* Ghidra symbol: FUN_016b92b0 */


undefined8 FUN_016b92b0(undefined8 param_1,byte *param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_004169a0(&local_120,local_118);
  bVar1 = FUN_004170c0(&LAB_016b9394,local_120,1);
  if (bVar1 == 0) {
    FUN_00414ff0(param_1,local_118);
  }
  else if (param_3 == '\0') {
    FUN_004151b0(param_1,local_118,bVar1 + 1,local_118[0]);
  }
  else {
    FUN_004151b0(param_1,local_118,1,bVar1 - 1);
  }
  FUN_00414480(&local_120);
  return param_1;
}

