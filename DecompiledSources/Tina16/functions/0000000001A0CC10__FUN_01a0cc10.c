/* Ghidra address: 01a0cc10 */
/* Ghidra symbol: FUN_01a0cc10 */


undefined8 FUN_01a0cc10(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_128;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  local_128 = 0;
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_004169a0(&local_128,local_118);
  FUN_00450070(&local_120,local_128,&DAT_01a0ccd8,&DAT_01a0cce8,0);
  FUN_00416910(param_2,local_120,0xff);
  FUN_00414560(&local_128,2);
  return param_2;
}

