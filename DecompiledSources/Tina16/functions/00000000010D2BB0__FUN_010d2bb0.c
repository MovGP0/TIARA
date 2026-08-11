/* Ghidra address: 010d2bb0 */
/* Ghidra symbol: FUN_010d2bb0 */


void FUN_010d2bb0(longlong *param_1,byte *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_418;
  undefined2 uStack_410;
  undefined1 local_318;
  undefined4 local_314;
  undefined1 local_300 [376];
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
  local_318 = 10;
  local_418 = 0x746e657761726409;
  uStack_410 = 0x7972;
  local_314 = param_4;
  FUN_00415020(local_300,local_128,0x50);
  local_188 = 3;
  local_180 = *(int *)(param_3 + 0x10) + -1;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_418);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

