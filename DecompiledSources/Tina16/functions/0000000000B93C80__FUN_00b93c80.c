/* Ghidra address: 00b93c80 */
/* Ghidra symbol: FUN_00b93c80 */


undefined8 FUN_00b93c80(undefined8 param_1,byte *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [264];
  undefined8 local_120;
  byte local_118 [256];
  
  local_230 = 0;
  local_240 = 0;
  local_238 = 0;
  local_120 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00b93860(local_228,local_118,0xff);
  FUN_004169a0(&local_120,local_228);
  FUN_004169a0(&local_238,local_118);
  FUN_00441a10(&local_230,local_238);
  FUN_004169a0(&local_240,local_118);
  uVar1 = FUN_004170c0(local_230,local_240,1);
  FUN_00415260(local_118,0xff,uVar1,0xff);
  FUN_00414ff0(param_1,local_118);
  FUN_00414560(&local_240,3);
  FUN_00414480(&local_120);
  return param_1;
}

