/* Ghidra address: 0041dc50 */
/* Ghidra symbol: FUN_0041dc50 */


undefined8 FUN_0041dc50(undefined8 param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_00414480(param_1);
  if (local_128[0] != 0) {
    FUN_004169f0(&local_130,local_128[0]);
    uVar2 = FUN_00416740(local_130);
    iVar1 = FUN_0041d770(uVar2,local_128[0] + 1,local_128 + 1,local_128[0]);
    if (iVar1 < 1) {
      FUN_00414480(&local_130);
    }
    else {
      FUN_004169f0(&local_130,iVar1 + -1);
    }
    FUN_00414ad0(param_1,local_130);
  }
  FUN_00414480(&local_130);
  return param_1;
}

