/* Ghidra address: 00600000 */
/* Ghidra symbol: FUN_00600000 */


longlong FUN_00600000(undefined8 param_1,ulonglong *param_2,char param_3)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_70;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_70 = auStack_d8;
  local_28 = *param_2;
  local_18 = thunk_FUN_04137b5f(0);
  local_20 = thunk_FUN_04137b5f(0);
  thunk_FUN_03d2c01a(param_1,0x20,local_60);
  if (param_3 == '\0') {
    local_10 = thunk_FUN_040ef593(0);
    if (local_10 == 0) {
      FUN_005fff20();
    }
    local_30 = thunk_FUN_04181813(local_10,local_28 & 0xffffffff,local_28._4_4_);
    if (local_30 == 0) {
      FUN_005fff20();
    }
    thunk_FUN_041a9b5c(0,local_10);
  }
  else {
    local_b8 = 0;
    local_30 = thunk_FUN_03c9ff5e(local_28 & 0xffffffff,local_28._4_4_,1,1);
  }
  if (local_30 != 0) {
    local_38 = thunk_FUN_041a19a1(local_18,param_1);
    local_40 = thunk_FUN_041a19a1(local_20,local_30);
    local_b8 = CONCAT44(local_b8._4_4_,local_28._4_4_);
    local_b0 = local_18;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = local_5c;
    local_90 = local_58;
    local_88 = 0xcc0020;
    thunk_FUN_03c1ffbb(local_20,0,0,local_28 & 0xffffffff);
    if (local_38 != 0) {
      thunk_FUN_041a19a1(local_18,local_38);
    }
    if (local_40 != 0) {
      thunk_FUN_041a19a1(local_20,local_40);
    }
  }
  thunk_FUN_041a2fd8(local_18);
  thunk_FUN_041a2fd8(local_20);
  return local_30;
}

