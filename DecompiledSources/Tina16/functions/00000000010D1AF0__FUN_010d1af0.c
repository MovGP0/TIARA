/* Ghidra address: 010d1af0 */
/* Ghidra symbol: FUN_010d1af0 */


void FUN_010d1af0(longlong *param_1,byte *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 local_418 [256];
  undefined1 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_308;
  undefined1 local_300 [88];
  undefined1 local_2a8;
  undefined1 local_188;
  int local_180;
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_314 = param_4;
  FUN_00414ff0(local_418,local_128);
  local_318 = 0;
  local_310 = 0x104;
  local_308 = 1;
  FUN_00415020(local_300,local_128,0x50);
  local_2a8 = 5;
  local_188 = 3;
  local_180 = *(int *)(param_3 + 0x10) + -1;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

