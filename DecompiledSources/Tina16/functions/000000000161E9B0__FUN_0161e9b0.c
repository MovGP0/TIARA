/* Ghidra address: 0161e9b0 */
/* Ghidra symbol: FUN_0161e9b0 */


undefined4 FUN_0161e9b0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_res18 [2];
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(&local_120);
  FUN_00414480(local_res18);
  return 0;
}

