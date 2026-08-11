/* Ghidra address: 00af72b0 */
/* Ghidra symbol: FUN_00af72b0 */


void FUN_00af72b0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong *param_8,
                 undefined4 param_9)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_70;
  uint local_60;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_70 = auStack_c8;
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_30 = FUN_005ffa40(param_2);
  if (local_30 != 0) {
    local_40 = thunk_FUN_0418f5de(local_30,*(undefined8 *)PTR_DAT_020036e8,0);
    thunk_FUN_03a5de49(local_30);
    local_59 = (*(byte *)(*(longlong *)(param_1 + 0x100) + 0x2c8) & 2) != 0;
    if (((bool)local_59) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar3 = FUN_00781840();
      local_60 = FUN_007793c0(uVar3,param_9);
    }
    else {
      local_60 = param_9;
    }
    local_60 = FUN_005fbf20(local_60);
    FUN_005fdab0(param_2[0x10],local_60 | *(uint *)PTR_DAT_02005078);
    uVar3 = FUN_005fdb10(param_2[0x10]);
    local_38 = thunk_FUN_041a19a1(local_30,uVar3);
    local_44 = thunk_FUN_03e3a7dc(local_30,0xffffff);
    local_48 = thunk_FUN_0412a071(local_30,0);
    (**(code **)(*param_2 + 0xa8))(param_2,&local_58);
    if (param_8 != (longlong *)0x0) {
      uVar2 = (**(code **)(*param_8 + 0x18))(param_8);
      local_90 = (**(code **)(*param_8 + 0x10))(param_8);
      local_a8 = param_6;
      local_a0 = param_7;
      local_88 = param_9;
      local_98 = uVar2;
      (**(code **)(*param_8 + 0x70))(param_8,param_2,param_4,param_5);
    }
    thunk_FUN_041a19a1(local_30,local_38);
    thunk_FUN_0418f5de(local_30,local_40,0);
    thunk_FUN_03a5de49(local_30);
    thunk_FUN_03e3a7dc(local_30,local_44);
    thunk_FUN_0412a071(local_30,local_48);
    return;
  }
  return;
}

