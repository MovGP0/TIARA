/* Ghidra address: 00d21df0 */
/* Ghidra symbol: FUN_00d21df0 */


void FUN_00d21df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  if (*(byte *)(param_1 + 0x28) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x28) & 0x1f)
            & 0xe0U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    local_20 = auStack_98;
    FUN_00416880(&local_28,param_2);
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_28,0x40);
    local_10 = local_18;
  }
  else {
    FUN_00416880(&local_30,param_2);
    FUN_00416880(&local_38,param_3);
    iVar1 = FUN_0043e6d0(local_30,local_38);
    if (iVar1 != 0) {
      FUN_00416880(&local_48,param_3);
      FUN_0043ea00(&local_40,local_48);
      if (local_40 != 0) {
        FUN_00416880(&local_50,param_2);
        local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,local_50,0x40);
        FUN_00416880(&local_58,param_3);
        local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_58,0xff00);
        goto LAB_00d21fd1;
      }
    }
    FUN_00416880(&local_60,param_2);
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_60,2);
    local_10 = local_18;
  }
LAB_00d21fd1:
  local_78 = param_4;
  FUN_00d21af0(param_1,local_10,local_18,0xffffffff);
  FUN_00410f20(local_10);
  if (local_10 != local_18) {
    uVar2 = FUN_004b6da0(local_18);
    FUN_004b6e40(local_18,uVar2);
    FUN_00410f20(local_18);
  }
  FUN_00414560(&local_60,8);
  return;
}

