/* Ghidra address: 00600290 */
/* Ghidra symbol: FUN_00600290 */


undefined1
FUN_00600290(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10,
            undefined8 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined1 local_21;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = auStack_a8;
  local_21 = 1;
  iVar1 = FUN_0044f060();
  if (((iVar1 == 2) && (param_9 == param_4)) && (param_10 == param_5)) {
    uVar2 = thunk_FUN_04181813(param_6,1,1);
    local_10 = FUN_005fffe0(uVar2);
    local_68 = thunk_FUN_041a19a1(param_11,local_10);
    local_88 = param_5;
    local_80 = param_6;
    local_78 = param_7;
    local_70 = param_8;
    local_60 = param_12;
    local_58 = param_13;
    local_50 = 0xccaa0029;
    local_10 = local_68;
    thunk_FUN_039bb681(param_1,param_2,param_3,param_4);
    local_10 = thunk_FUN_041a19a1(param_11,local_10);
    thunk_FUN_0416f828(local_10);
  }
  else {
    local_18 = 0;
    uVar2 = thunk_FUN_04137b5f(0);
    local_20 = FUN_005fffe0(uVar2);
    uVar2 = thunk_FUN_04181813(param_6,param_9,param_10);
    local_10 = FUN_005fffe0(uVar2);
    local_30 = thunk_FUN_041a19a1(local_20,local_10);
    local_18 = thunk_FUN_0418f5de(param_6,DAT_02011fa0,0);
    thunk_FUN_0418f5de(param_6,local_18,0);
    if (local_18 == 0) {
      local_18 = thunk_FUN_0418f5de(local_20,DAT_02011fa0,0xffffffff);
    }
    else {
      local_18 = thunk_FUN_0418f5de(local_20,local_18,0xffffffff);
    }
    thunk_FUN_03a5de49(local_20);
    local_88 = param_10;
    local_80 = param_11;
    local_78 = param_12;
    local_70 = param_13;
    local_68._0_4_ = param_9;
    local_60 = param_10;
    local_58 = 0xcc0020;
    thunk_FUN_03c1ffbb(local_20,0,0,param_9);
    local_88 = param_10;
    local_80 = param_6;
    local_78 = param_7;
    local_70 = param_8;
    local_68._0_4_ = param_9;
    local_60 = param_10;
    local_58 = 0x440328;
    thunk_FUN_03c1ffbb(local_20,0,0,param_9);
    local_34 = thunk_FUN_0412a071(param_1,0);
    local_38 = thunk_FUN_03e3a7dc(param_1,0xffffff);
    local_88 = param_5;
    local_80 = param_11;
    local_78 = param_12;
    local_70 = param_13;
    local_68._0_4_ = param_9;
    local_60 = param_10;
    local_58 = 0x8800c6;
    thunk_FUN_03c1ffbb(param_1,param_2,param_3,param_4);
    local_88 = param_5;
    local_80 = local_20;
    local_78 = 0;
    local_70 = 0;
    local_68 = CONCAT44(local_68._4_4_,param_9);
    local_60 = param_10;
    local_58 = 0x660046;
    thunk_FUN_03c1ffbb(param_1,param_2,param_3,param_4);
    thunk_FUN_0412a071(param_1,local_34);
    thunk_FUN_03e3a7dc(param_1,local_38);
    if (local_30 != 0) {
      thunk_FUN_041a19a1(local_20,local_30);
    }
    thunk_FUN_0416f828(local_10);
    if (local_18 != 0) {
      thunk_FUN_0418f5de(local_20,local_18,0);
    }
    thunk_FUN_041a2fd8(local_20);
  }
  return local_21;
}

