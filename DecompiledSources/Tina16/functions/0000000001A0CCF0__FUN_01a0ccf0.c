/* Ghidra address: 01a0ccf0 */
/* Ghidra symbol: FUN_01a0ccf0 */


undefined8 FUN_01a0ccf0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_238;
  undefined1 local_230 [256];
  undefined8 local_130 [2];
  undefined8 local_120;
  byte local_118 [256];
  
  local_238 = 0;
  local_130[0] = 0;
  local_120 = 0;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00414ff0(param_2,local_118);
  FUN_004169a0(local_130,local_118);
  iVar1 = FUN_004413f0(&LAB_01a0ce40,local_130[0]);
  if (0 < iVar1) {
    FUN_004151b0(local_230,local_118,iVar1 + 1,local_118[0]);
    FUN_004169a0(&local_120,local_230);
    iVar1 = FUN_0043fc00(local_120);
    FUN_0043f750(&local_238,iVar1 + 1);
    FUN_00416910(param_2,local_238,0xff);
  }
  FUN_00414480(&local_238);
  FUN_00414480(local_130);
  FUN_00414480(&local_120);
  return param_2;
}

