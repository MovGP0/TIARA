/* Ghidra address: 010d2f10 */
/* Ghidra symbol: FUN_010d2f10 */


void FUN_010d2f10(longlong *param_1,byte *param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_518 [32];
  undefined1 local_418;
  undefined4 local_414;
  undefined1 local_400 [96];
  undefined1 local_3a0 [88];
  undefined1 local_348;
  undefined4 local_340;
  undefined1 local_2e8;
  undefined4 local_2e0;
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
  local_414 = 0;
  local_418 = 0xf;
  local_518[0] = 0x32746c7573657207;
  FUN_00415020(local_400,local_128,0x50);
  FUN_00415020(local_3a0,local_228,0x50);
  local_348 = 3;
  local_2e8 = 3;
  local_2e0 = param_5;
  local_340 = param_4;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_518);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

