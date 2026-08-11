/* Ghidra address: 00c2c0f0 */
/* Ghidra symbol: FUN_00c2c0f0 */


undefined1
FUN_00c2c0f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10,
            undefined8 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_41;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_60 = auStack_c8;
  local_41 = 1;
  iVar1 = FUN_0044f060();
  if (((iVar1 == 2) && (param_9 == param_4)) && (param_10 == param_5)) {
    uVar2 = thunk_FUN_04181813(param_6,1,1);
    local_10 = FUN_00c1a300(uVar2);
    local_88 = thunk_FUN_041a19a1(param_11,local_10);
    local_a8 = CONCAT44(local_a8._4_4_,param_5);
    local_a0 = param_6;
    local_98 = param_7;
    local_90 = param_8;
    local_80 = param_12;
    local_78 = param_13;
    local_70 = 0xccaa0029;
    local_10 = local_88;
    thunk_FUN_039bb681(param_1,param_2,param_3,param_4);
    local_10 = thunk_FUN_041a19a1(param_11,local_10);
    thunk_FUN_0416f828(local_10);
  }
  else {
    local_40 = 0;
    uVar2 = thunk_FUN_04137b5f(param_1);
    local_38 = FUN_00c1a300(uVar2);
    uVar2 = thunk_FUN_04181813(param_1,param_9,param_10);
    local_10 = FUN_00c1a300(uVar2);
    local_30 = thunk_FUN_041a19a1(local_38,local_10);
    uVar2 = thunk_FUN_04137b5f(param_1);
    local_20 = FUN_00c1a300(uVar2);
    local_a8 = 0;
    uVar2 = thunk_FUN_03c9ff5e(param_9,param_10,1,1);
    local_28 = FUN_00c1a300(uVar2);
    local_18 = thunk_FUN_041a19a1(local_20,local_28);
    local_a8 = CONCAT44(local_a8._4_4_,param_10);
    local_a0 = param_11;
    local_98 = param_7;
    local_90 = param_8;
    local_88 = CONCAT44(local_88._4_4_,0x330008);
    thunk_FUN_0415fcd2(local_20,param_7,param_8,param_9);
    local_40 = thunk_FUN_0418f5de(param_6,*(undefined8 *)PTR_DAT_02001d50,0);
    thunk_FUN_0418f5de(param_6,local_40,0);
    if (local_40 == 0) {
      local_40 = thunk_FUN_0418f5de(local_38,*(undefined8 *)PTR_DAT_02001d50,0xffffffff);
    }
    else {
      local_40 = thunk_FUN_0418f5de(local_38,local_40,0xffffffff);
    }
    thunk_FUN_03a5de49(local_38);
    local_a8._0_4_ = param_10;
    local_a0 = local_20;
    local_98 = param_7;
    local_90 = param_8;
    local_88._0_4_ = 0xcc0020;
    thunk_FUN_0415fcd2(local_38,param_7,param_8,param_9);
    local_a8 = CONCAT44(local_a8._4_4_,param_10);
    local_a0 = param_6;
    local_98 = param_7;
    local_90 = param_8;
    local_88 = CONCAT44(local_88._4_4_,0x8800c6);
    thunk_FUN_0415fcd2(local_38,param_7,param_8,param_9);
    if (local_18 != 0) {
      thunk_FUN_041a19a1(local_20,local_18);
    }
    thunk_FUN_0416f828(local_28);
    thunk_FUN_041a2fd8(local_20);
    local_48 = thunk_FUN_0412a071(param_1,0);
    local_4c = thunk_FUN_03e3a7dc(param_1,0xffffff);
    local_a8._0_4_ = param_5;
    local_a0 = param_11;
    local_98 = param_7;
    local_90 = param_8;
    local_88._0_4_ = param_9;
    local_80 = param_10;
    local_78 = 0x8800c6;
    thunk_FUN_03c1ffbb(param_1,param_2,param_3,param_4);
    local_a8 = CONCAT44(local_a8._4_4_,param_5);
    local_a0 = local_38;
    local_98 = param_7;
    local_90 = param_8;
    local_88 = CONCAT44(local_88._4_4_,param_9);
    local_80 = param_10;
    local_78 = 0xee0086;
    thunk_FUN_03c1ffbb(param_1,param_2,param_3,param_4);
    thunk_FUN_0412a071(param_1,local_48);
    thunk_FUN_0412a071(param_1,local_4c);
    if (local_30 != 0) {
      thunk_FUN_041a19a1(local_38,local_30);
    }
    thunk_FUN_0416f828(local_10);
    if (local_40 != 0) {
      thunk_FUN_0418f5de(local_38,local_40,0);
    }
    thunk_FUN_041a2fd8(local_38);
  }
  return local_41;
}

