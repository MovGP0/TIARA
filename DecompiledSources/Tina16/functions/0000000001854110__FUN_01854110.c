/* Ghidra address: 01854110 */
/* Ghidra symbol: FUN_01854110 */


void FUN_01854110(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10,
                 undefined4 param_11,longlong param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  int local_78;
  int local_70;
  undefined4 local_68;
  undefined1 *local_50;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_b8;
  local_28 = thunk_FUN_04137b5f(param_1);
  local_98 = 0;
  local_20 = thunk_FUN_03c9ff5e(param_4,param_5,1,1);
  thunk_FUN_041a19a1(local_28,local_20);
  local_30 = param_6;
  if (param_12 != 0) {
    uVar2 = FUN_00609e10(param_12);
    local_30 = FUN_005ffa40(uVar2);
    param_11 = 0;
  }
  if ((param_9 == param_4) && (param_10 == param_5)) {
    uVar1 = FUN_005fbf20(param_11);
    local_3c = thunk_FUN_03e3a7dc(local_30,uVar1);
    local_98 = CONCAT44(local_98._4_4_,param_5);
    local_90 = local_30;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xcc0020;
    thunk_FUN_0415fcd2(local_28,0,0,param_4);
    thunk_FUN_03e3a7dc(local_30,local_3c);
  }
  else {
    local_18 = thunk_FUN_04137b5f(local_30);
    local_10 = thunk_FUN_04181813(local_30,param_4,param_5);
    thunk_FUN_041a19a1(local_18,local_10);
    local_98._0_4_ = param_5;
    local_90 = local_30;
    local_88 = param_7;
    local_80 = param_8;
    local_78 = param_9;
    local_70 = param_10;
    local_68 = 0xcc0020;
    thunk_FUN_03c1ffbb(local_18,0,0,param_4);
    uVar1 = FUN_005fbf20(param_11);
    thunk_FUN_03e3a7dc(local_18,uVar1);
    local_98 = CONCAT44(local_98._4_4_,param_5);
    local_90 = local_18;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xcc0020;
    thunk_FUN_0415fcd2(local_28,0,0,param_4);
    thunk_FUN_0416f828(local_10);
    thunk_FUN_041a2fd8(local_18);
  }
  local_34 = thunk_FUN_0412a071(param_1,0);
  uVar1 = FUN_0042a2a0(0xff,0xff,0xff);
  local_38 = thunk_FUN_03e3a7dc(param_1,uVar1);
  local_98 = CONCAT44(local_98._4_4_,param_5);
  local_90 = local_28;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0x8800c6;
  thunk_FUN_0415fcd2(param_1,param_2,param_3,param_4);
  thunk_FUN_0412a071(param_1,local_34);
  thunk_FUN_03e3a7dc(param_1,local_38);
  thunk_FUN_0416f828(local_20);
  thunk_FUN_041a2fd8(local_28);
  return;
}

