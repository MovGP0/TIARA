/* Ghidra address: 0180c8f0 */
/* Ghidra symbol: FUN_0180c8f0 */


void FUN_0180c8f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_2c = thunk_FUN_03b57162(param_1);
  local_58 = &DAT_01fa84e4;
  local_10 = thunk_FUN_03c9ff5e(8,8,1,1);
  local_28 = thunk_FUN_04055c26(local_10);
  thunk_FUN_0416f828(local_10);
  local_18 = thunk_FUN_041a19a1(param_1,local_28);
  uVar2 = thunk_FUN_041715dd(8);
  local_20 = thunk_FUN_041a19a1(param_1,uVar2);
  thunk_FUN_03f297b0(param_1,9);
  uVar1 = FUN_0042a2a0(0xff,0xff,0xff);
  thunk_FUN_03e3a7dc(param_1,uVar1);
  uVar1 = FUN_0042a2a0(0,0,0);
  thunk_FUN_0412a071(param_1,uVar1);
  local_58._0_4_ = param_5;
  thunk_FUN_041cd445(param_1,param_2,param_3,param_4);
  thunk_FUN_03f297b0(param_1,0xf);
  uVar1 = FUN_0042a2a0(0,0,0);
  thunk_FUN_03e3a7dc(param_1,uVar1);
  thunk_FUN_0412a071(param_1,param_6);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,param_5);
  thunk_FUN_041cd445(param_1,param_2,param_3,param_4);
  thunk_FUN_041a19a1(param_1,local_18);
  thunk_FUN_041a19a1(param_1,local_20);
  thunk_FUN_0416f828(local_28);
  thunk_FUN_0402759f(param_1,local_2c);
  return;
}

