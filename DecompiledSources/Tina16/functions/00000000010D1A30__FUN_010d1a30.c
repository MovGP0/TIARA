/* Ghidra address: 010d1a30 */
/* Ghidra symbol: FUN_010d1a30 */


void FUN_010d1a30(longlong *param_1,undefined8 param_2,byte *param_3,longlong param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_420;
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
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_314 = param_5;
  local_318 = 0;
  local_310 = 0x105;
  local_308 = 0;
  FUN_010ccd90(param_2,local_128,&local_420);
  FUN_010c7a40(local_300,local_420);
  local_2a8 = 5;
  local_188 = 3;
  local_180 = *(int *)(param_4 + 0x10) + -1;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

