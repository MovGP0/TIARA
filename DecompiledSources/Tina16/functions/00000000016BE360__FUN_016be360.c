/* Ghidra address: 016be360 */
/* Ghidra symbol: FUN_016be360 */


void FUN_016be360(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_130;
  byte local_128 [264];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  local_130 = FUN_016bade0(param_1);
  FUN_016bdb60(param_1,local_128,&local_130,0,3);
  return;
}

