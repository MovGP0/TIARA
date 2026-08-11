/* Ghidra address: 0171b840 */
/* Ghidra symbol: FUN_0171b840 */


undefined8 FUN_0171b840(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_0171afa0(param_1,local_118,param_3,0,0,&local_120,&local_128,local_148,local_150,
                       &local_130,&local_138,&local_140,param_4);
  FUN_00414560(&local_140,5);
  return uVar1;
}

