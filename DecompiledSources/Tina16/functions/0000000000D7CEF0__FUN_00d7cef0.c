/* Ghidra address: 00d7cef0 */
/* Ghidra symbol: FUN_00d7cef0 */


void FUN_00d7cef0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  longlong local_58;
  code *local_50;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_90 = auStack_f8;
  if ((((param_1 != (longlong *)0x0) && (param_1[0xf] != 0)) && (0 < (int)param_1[0x13])) &&
     (0 < *(int *)((longlong)param_1 + 0x9c))) {
    local_3c = thunk_FUN_03b57162(param_2);
    local_44 = (**(code **)(*param_1 + 0xd8))(param_1);
    uVar4 = FUN_0065b870(param_1[0xf]);
    thunk_FUN_0417e313(uVar4,&local_44);
    FUN_0064ae10(param_2,-(int)local_44,-local_44._4_4_);
    local_50 = (code *)FUN_00d7ce10(param_1[0xf]);
    if (local_50 == (code *)0x0) {
      local_2c = *(undefined4 *)((longlong)param_1 + 0xa4);
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x80;
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_00642b80);
      if (cVar1 == '\0') {
        FUN_0064fca0(param_1[0xf],0x14,param_2,1);
        FUN_0064fca0(param_1[0xf],0xf,param_2,1);
      }
      else {
        local_88 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        (**(code **)(*local_88 + 0x88))(local_88,(int)param_1[0x13]);
        (**(code **)(*local_88 + 0x70))(local_88,*(undefined4 *)((longlong)param_1 + 0x9c));
        uVar4 = FUN_00609e10(local_88);
        uVar4 = FUN_005ffa40(uVar4);
        FUN_0064ae10(uVar4,-(int)local_44,-local_44._4_4_);
        uVar4 = FUN_00609e10(local_88);
        uVar4 = FUN_005ffa40(uVar4);
        FUN_0064fca0(param_1[0xf],0x14,uVar4,1);
        uVar4 = FUN_00609e10(local_88);
        uVar4 = FUN_005ffa40(uVar4);
        FUN_0064fca0(param_1[0xf],0xf,uVar4,1);
        uVar4 = FUN_00609e10(local_88);
        uVar4 = FUN_005ffa40(uVar4);
        FUN_0064ae10(uVar4,local_44 & 0xffffffff,local_44._4_4_);
        uVar2 = (**(code **)(*local_88 + 0x60))(local_88);
        uVar3 = (**(code **)(*local_88 + 0x48))(local_88);
        uVar4 = FUN_00609e10(local_88);
        local_d0 = FUN_005ffa40(uVar4);
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0xcc0020;
        local_d8 = uVar3;
        thunk_FUN_0415fcd2(param_2,local_44 & 0xffffffff,local_44._4_4_,uVar2);
        FUN_00410f20(local_88);
      }
      *(undefined4 *)((longlong)param_1 + 0xa4) = local_2c;
    }
    else {
      FUN_0064d000(param_1,&local_a0);
      local_80 = local_a0;
      uStack_78 = uStack_98;
      FUN_0064d000(param_1,&local_a0);
      local_70 = local_a0;
      uStack_68 = uStack_98;
      local_58 = param_1[0xf];
      local_60 = param_1;
      local_38 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      FUN_005ffb10(local_38,param_2);
      local_2c = *(undefined4 *)((longlong)param_1 + 0xa4);
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x80;
      (*local_50)(local_38,&local_80);
      *(undefined4 *)((longlong)param_1 + 0xa4) = local_2c;
      FUN_005ffb10(local_38,0);
      FUN_00410f20(local_38);
    }
    FUN_0064ae10(param_2,local_44 & 0xffffffff,local_44._4_4_);
    thunk_FUN_0402759f(param_2,local_3c);
  }
  return;
}

