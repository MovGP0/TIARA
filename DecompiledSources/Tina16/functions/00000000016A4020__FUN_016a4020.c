/* Ghidra address: 016a4020 */
/* Ghidra symbol: FUN_016a4020 */


void FUN_016a4020(longlong param_1,byte param_2,byte *param_3,undefined4 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00de8980(&local_120,param_2 + 0x4c0,*(undefined8 *)(param_1 + 0x238));
  FUN_016a3c50(param_1,local_120,local_118,param_4);
  FUN_00414480(&local_120);
  return;
}

