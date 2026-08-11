/* Ghidra address: 00b41690 */
/* Ghidra symbol: FUN_00b41690 */


void FUN_00b41690(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004b6dc0(param_1,0);
  if ((param_3 == 2) || (param_3 == 3)) {
    lVar1 = (**(code **)*param_1)(param_1);
    if (lVar1 < 0x34) {
      uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
      FUN_004134c0(uVar2);
    }
    else {
      FUN_004b6dc0(param_1,0x34);
    }
    if (param_3 == 2) {
      FUN_00b25870(param_1,0x88b1f);
      FUN_00b25870(param_1,0);
      FUN_00b25840(param_1,0xb00);
      FUN_004b6dc0(param_1,0x34);
    }
  }
  if (param_3 == 7) {
    local_24 = FUN_00b258c0(param_1);
    FUN_004b6dc0(param_1,2);
    FUN_00b25870(param_1,local_24);
    FUN_004b6dc0(param_1,10);
    FUN_00b25870(param_1,0x36);
    FUN_004b6dc0(param_1,0);
  }
  FUN_00416880(&local_38,param_2);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
  lVar1 = FUN_004b6da0(param_1);
  lVar3 = (**(code **)*param_1)(param_1);
  lVar4 = FUN_004b6da0(param_1);
  FUN_004b89e0(local_20,param_1[1] + lVar1,lVar3 - lVar4);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

