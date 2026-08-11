/* Ghidra address: 010d2610 */
/* Ghidra symbol: FUN_010d2610 */


void FUN_010d2610(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 local_418;
  undefined1 uStack_414;
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
  local_318 = 5;
  local_418 = 0x746f6704;
  uStack_414 = 0x6f;
  FUN_00415020(local_300,local_128,0x50);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

