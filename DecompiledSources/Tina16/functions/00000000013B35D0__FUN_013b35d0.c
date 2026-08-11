/* Ghidra address: 013b35d0 */
/* Ghidra symbol: FUN_013b35d0 */


void FUN_013b35d0(longlong *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 local_3c8;
  undefined1 local_3c7 [551];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  byte local_138 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_138;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00414ff0(local_3c7,local_138);
  local_190 = param_5;
  local_188 = param_6;
  local_3c8 = 8;
  local_1a0 = param_3;
  local_198 = param_4;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,&local_3c8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

