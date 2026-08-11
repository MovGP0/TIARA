/* Ghidra address: 010d1d70 */
/* Ghidra symbol: FUN_010d1d70 */


void FUN_010d1d70(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte *param_6,longlong param_7,undefined4 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 local_418 [256];
  undefined1 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_308;
  undefined4 local_300;
  undefined1 local_2a8;
  undefined4 local_2a0;
  undefined1 local_248;
  undefined4 local_240;
  undefined1 local_1e8;
  undefined1 local_1e0 [88];
  undefined1 local_188;
  int local_180;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_6 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_6;
    param_6 = param_6 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_314 = param_8;
  local_318 = 0;
  local_308 = 3;
  local_2a8 = 3;
  local_248 = 3;
  local_240 = param_5;
  local_1e8 = 1;
  local_310 = param_2;
  local_300 = param_3;
  local_2a0 = param_4;
  FUN_00415020(local_1e0,local_128,0x50);
  local_188 = 3;
  local_180 = *(int *)(param_7 + 0x10) + -1;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

