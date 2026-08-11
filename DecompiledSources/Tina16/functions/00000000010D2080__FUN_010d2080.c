/* Ghidra address: 010d2080 */
/* Ghidra symbol: FUN_010d2080 */


void FUN_010d2080(longlong *param_1,byte *param_2,byte *param_3,undefined4 param_4,longlong param_5,
                 undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined2 local_518;
  undefined1 uStack_516;
  undefined1 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined1 local_408;
  undefined1 local_400 [88];
  undefined1 local_3a8;
  undefined1 local_3a0 [88];
  undefined1 local_348;
  undefined4 local_340;
  undefined1 local_288;
  int local_280;
  byte local_228 [256];
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_228;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_414 = param_6;
  local_418 = 0;
  local_518 = 0x3a02;
  uStack_516 = 0x3d;
  local_410 = 0x108;
  local_408 = 2;
  FUN_00415020(local_400,local_128,0x50);
  local_3a8 = 2;
  FUN_00415020(local_3a0,local_228,0x50);
  local_348 = 3;
  local_288 = 3;
  local_280 = *(int *)(param_5 + 0x10) + -1;
  local_340 = param_4;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_518);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

