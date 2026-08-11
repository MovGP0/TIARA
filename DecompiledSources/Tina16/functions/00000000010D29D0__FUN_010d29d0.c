/* Ghidra address: 010d29d0 */
/* Ghidra symbol: FUN_010d29d0 */


void FUN_010d29d0(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 local_418 [64];
  undefined1 local_318;
  undefined4 local_314;
  undefined1 local_300 [472];
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_314 = 0;
  local_318 = 0x10;
  local_418[0] = 0x636e6903;
  FUN_00415020(local_300,local_128,0x50);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

