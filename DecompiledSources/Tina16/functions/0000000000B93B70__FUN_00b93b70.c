/* Ghidra address: 00b93b70 */
/* Ghidra symbol: FUN_00b93b70 */


undefined1 * FUN_00b93b70(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [256];
  byte local_118 [256];
  
  local_228 = 0;
  local_220 = 0;
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_00b93860(local_218,local_118,0xff);
  FUN_004169a0(&local_220,local_118);
  iVar1 = FUN_004170c0(&LAB_00b93c78,local_220,1);
  if (iVar1 < 1) {
    *param_1 = 0;
  }
  else {
    FUN_004169a0(&local_228,local_118);
    uVar2 = FUN_004170c0(&LAB_00b93c78,local_228,1);
    FUN_004151b0(param_1,local_118,uVar2,4);
  }
  FUN_00414560(&local_228,2);
  return param_1;
}

