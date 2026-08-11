/* Ghidra address: 010d2180 */
/* Ghidra symbol: FUN_010d2180 */


void FUN_010d2180(longlong *param_1,byte *param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined2 local_618;
  undefined1 uStack_616;
  undefined1 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined1 local_508;
  undefined1 local_500 [88];
  undefined1 local_4a8;
  undefined1 local_4a0 [88];
  undefined1 local_448;
  undefined1 local_440 [280];
  byte local_328 [256];
  byte local_228 [256];
  byte local_128 [264];
  
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
  lVar2 = (ulonglong)*param_4 + 1;
  pbVar3 = local_328;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_4;
    param_4 = param_4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_514 = param_5;
  local_518 = 0;
  local_618 = 0x3a02;
  uStack_616 = 0x3d;
  local_510 = 0x108;
  local_508 = 2;
  FUN_00415020(local_500,local_128,0x50);
  local_4a8 = 2;
  FUN_00415020(local_4a0,local_228,0x50);
  local_448 = 1;
  FUN_00415020(local_440,local_328,0x50);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_618);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

