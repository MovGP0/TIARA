/* Ghidra address: 010d1fb0 */
/* Ghidra symbol: FUN_010d1fb0 */


void FUN_010d1fb0(longlong *param_1,byte *param_2,undefined4 param_3,longlong param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined2 local_428;
  undefined1 uStack_426;
  undefined1 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined1 local_318;
  undefined1 local_310 [88];
  undefined1 local_2b8;
  undefined4 local_2b0;
  undefined1 local_198;
  int local_190;
  byte local_138 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_138;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_324 = param_5;
  local_328 = 0;
  local_428 = 0x3a02;
  uStack_426 = 0x3d;
  local_320 = 0x108;
  local_318 = 1;
  FUN_00415020(local_310,local_138,0x50);
  local_2b8 = 3;
  local_198 = 3;
  local_190 = *(int *)(param_4 + 0x10) + -1;
  local_2b0 = param_3;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_428);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

