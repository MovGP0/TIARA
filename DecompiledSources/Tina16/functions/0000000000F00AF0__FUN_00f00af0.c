/* Ghidra address: 00f00af0 */
/* Ghidra symbol: FUN_00f00af0 */


void FUN_00f00af0(longlong param_1,undefined8 *param_2,int param_3,int param_4,longlong param_5,
                 byte param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  longlong *local_68;
  int local_60;
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = auStack_d8;
  local_38 = *param_2;
  local_30 = param_2[1];
  uVar1 = FUN_005fdaa0(*(undefined8 *)(param_1 + 0x80));
  local_5c = FUN_005fbf20(uVar1);
  uVar4 = FUN_005ffa40(param_1);
  uVar2 = thunk_FUN_039850ab(uVar4,local_5c);
  if ((ulonglong)uVar2 == (longlong)local_5c) {
    iVar3 = (int)local_38;
    if (param_6 == 0) {
      local_60 = (int)local_38 + param_3;
    }
    else if (param_6 == 1) {
      iVar3 = FUN_005fdff0(param_1,param_5);
      local_60 = ((int)local_30 - iVar3) + -3;
    }
    else {
      uVar2 = FUN_005fdff0(param_1,param_5);
      local_60 = (iVar3 + ((uint)((int)local_30 - iVar3) >> 1)) - (uVar2 >> 1);
    }
    local_78 = FUN_005ffa40(param_1);
    local_6c = 0;
    if (param_5 != 0) {
      local_6c = *(undefined4 *)(param_5 + -4);
    }
    local_b0 = FUN_00416740(param_5);
    local_b8 = &local_38;
    local_a8 = local_6c;
    local_a0 = 0;
    thunk_FUN_03e58493(local_78,local_60,local_38._4_4_ + param_4,6);
  }
  else {
    uVar4 = FUN_00609e10(DAT_0202eb00);
    FUN_005fdf10(uVar4);
    uVar1 = FUN_004230a0(&local_38);
    uVar1 = FUN_00f00a90(uVar1,(int)local_30 - (int)local_38);
    FUN_00423090(&local_38,uVar1);
    uVar1 = FUN_004230c0(&local_38);
    uVar1 = FUN_00f00a90(uVar1,local_30._4_4_ - local_38._4_4_);
    FUN_004230b0(&local_38,uVar1);
    local_b8._0_4_ = (local_30._4_4_ - local_38._4_4_) + -1;
    FUN_00498350(local_58,param_3,param_4,((int)local_30 - (int)local_38) + -1);
    local_b8._0_4_ = local_30._4_4_ - local_38._4_4_;
    FUN_00498350(local_48,0,0,(int)local_30 - (int)local_38);
    local_68 = (longlong *)FUN_00609e10(DAT_0202eb00);
    FUN_005ff880(local_68,*(undefined8 *)(param_1 + 0x70));
    FUN_005fc860(local_68[0xe],*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x28));
    FUN_005ff8c0(local_68,*(undefined8 *)(param_1 + 0x80));
    FUN_005fdcb0(local_68[0x10],0);
    (**(code **)(*local_68 + 0xa8))(local_68,local_48);
    uVar4 = FUN_005ffa40(local_68);
    thunk_FUN_03b994b9(uVar4,1);
    local_88 = FUN_005ffa40(local_68);
    local_7c = 0;
    if (param_5 != 0) {
      local_7c = *(undefined4 *)(param_5 + -4);
    }
    uVar4 = FUN_00416740(param_5);
    local_b8 = (undefined8 *)
               CONCAT44(local_b8._4_4_,*(undefined4 *)(&DAT_01ef9990 + (ulonglong)param_6 * 4));
    thunk_FUN_041a24be(local_88,uVar4,local_7c,local_58);
    uVar4 = FUN_00609e10(DAT_0202eb00);
    FUN_005fead0(param_1,&local_38,uVar4,local_48);
    uVar4 = FUN_00609e10(DAT_0202eb00);
    FUN_005fe090(uVar4);
  }
  return;
}

