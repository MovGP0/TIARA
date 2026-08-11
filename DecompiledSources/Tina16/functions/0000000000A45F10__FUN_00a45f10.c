/* Ghidra address: 00a45f10 */
/* Ghidra symbol: FUN_00a45f10 */


void FUN_00a45f10(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,longlong *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_60 = auStack_a8;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_30 = FUN_005ffa40(param_1);
  if (local_30 != 0) {
    local_40 = thunk_FUN_0418f5de(local_30,*(undefined8 *)PTR_DAT_020036e8,0);
    thunk_FUN_03a5de49(local_30);
    FUN_005fdab0(param_1[0x10],param_10);
    uVar1 = FUN_005fdb10(param_1[0x10]);
    local_38 = thunk_FUN_041a19a1(local_30,uVar1);
    local_44 = thunk_FUN_03e3a7dc(local_30,0xffffff);
    local_48 = thunk_FUN_0412a071(local_30,0);
    (**(code **)(*param_1 + 0xa8))(param_1,&local_58);
    if (param_7 != (longlong *)0x0) {
      local_88 = param_5;
      local_80 = param_6;
      local_78 = param_8;
      local_70 = param_9;
      (**(code **)(*param_7 + 0x68))(param_7,param_1,param_3,param_4);
    }
    thunk_FUN_041a19a1(local_30,local_38);
    thunk_FUN_0418f5de(local_30,local_40,0);
    thunk_FUN_03a5de49(local_30);
    thunk_FUN_03e3a7dc(local_30,local_44);
    thunk_FUN_0412a071(local_30,local_48);
  }
  return;
}

