/* Ghidra address: 00d94450 */
/* Ghidra symbol: FUN_00d94450 */


undefined1
FUN_00d94450(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
            undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 *local_70;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  longlong local_20;
  
  local_70 = auStack_c8;
  local_30 = *param_3;
  local_28 = (undefined4)param_3[1];
  local_50 = *param_7;
  uStack_48 = param_7[1];
  uStack_40 = param_7[2];
  uStack_38 = param_7[3];
  uVar2 = FUN_0060f550(param_6);
  local_54 = FUN_0060f500(uVar2);
  if ((local_54 & 0x400) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18 + (local_30 & 0xff) * 8);
    if (lVar1 == 0) {
      local_a8 = param_5;
      local_a0 = CONCAT44(local_a0._4_4_,param_6);
      local_98 = CONCAT44(local_98._4_4_,local_50._4_4_);
      local_90 = param_8;
      local_21 = FUN_00d94670(param_1,param_2,&local_30,param_4);
    }
    else {
      local_a8 = CONCAT44(local_a8._4_4_,local_28);
      local_98 = param_5;
      local_90 = param_6;
      local_88 = &local_50;
      local_80 = param_8;
      local_a0 = param_4;
      local_21 = (**(code **)(lVar1 + 0x18))(lVar1,param_1,param_2,local_30._4_4_);
    }
  }
  else {
    local_20 = FUN_00d8ecd0(param_2);
    local_60 = FUN_005ffa40(*(undefined8 *)(local_20 + 8));
    local_58 = 0;
    if (param_4 != 0) {
      local_58 = *(undefined4 *)(param_4 + -4);
    }
    uVar3 = FUN_00416740(param_4);
    local_a8 = CONCAT44(local_a8._4_4_,local_54);
    thunk_FUN_041a24be(local_60,uVar3,local_58,param_5);
    FUN_00410f20(local_20);
    local_21 = 1;
  }
  return local_21;
}

