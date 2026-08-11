/* Ghidra address: 010d2e70 */
/* Ghidra symbol: FUN_010d2e70 */


void FUN_010d2e70(longlong *param_1,byte *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_418 [32];
  undefined1 local_318;
  undefined4 local_314;
  undefined1 local_300 [88];
  undefined1 local_2a8;
  undefined4 local_2a0;
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_314 = 0;
  local_318 = 0xe;
  local_418[0] = 0x32746c7573657207;
  FUN_00415020(local_300,local_128,0x50);
  local_2a8 = 3;
  local_2a0 = param_3;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

