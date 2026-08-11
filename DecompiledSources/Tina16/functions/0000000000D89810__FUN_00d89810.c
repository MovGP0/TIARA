/* Ghidra address: 00d89810 */
/* Ghidra symbol: FUN_00d89810 */


void FUN_00d89810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  longlong *local_30;
  
  local_80 = auStack_d8;
  local_54 = *param_4;
  uStack_4c = param_4[1];
  local_44 = param_4[2];
  uStack_3c = param_4[3];
  local_34 = *(undefined4 *)(param_4 + 4);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  if (lVar1 != 0) {
    local_60 = (longlong *)FUN_00d77610(lVar1,L"Frame");
    if (local_60 == (longlong *)0x0) {
      local_60 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x40);
    }
    if (local_60 != (longlong *)0x0) {
      if ((char)local_34 == '\x01') {
        (**(code **)(*local_60 + 0x98))(local_60,8);
      }
      else {
        (**(code **)(*local_60 + 0x98))(local_60,0);
      }
      cVar2 = FUN_00423b30(&local_44);
      if (cVar2 == '\0') {
        local_70 = local_44;
        uStack_68 = uStack_3c;
        local_30 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
        uVar3 = FUN_004230a0(&local_70);
        uVar4 = FUN_004230c0(&local_70);
        (**(code **)(*local_30 + 0xe0))(local_30,uVar3,uVar4);
        uVar5 = FUN_00609e10(local_30);
        uVar5 = FUN_005ffa40(uVar5);
        uVar3 = (**(code **)(*local_30 + 0x60))(local_30);
        uVar4 = (**(code **)(*local_30 + 0x48))(local_30);
        local_b0 = FUN_005ffa40(param_3);
        local_a8 = (undefined4)local_70;
        local_a0 = local_70._4_4_;
        local_98 = 0xcc0020;
        local_b8 = uVar4;
        thunk_FUN_0415fcd2(uVar5,0,0,uVar3);
        FUN_00d77b90(local_60,&local_54);
        (**(code **)(*local_60 + 0xa8))(local_60,param_3,&DAT_01ecf394);
        uVar5 = FUN_005ffa40(param_3);
        uVar3 = (**(code **)(*local_30 + 0x60))(local_30);
        uVar4 = (**(code **)(*local_30 + 0x48))(local_30);
        uVar6 = FUN_00609e10(local_30);
        local_b0 = FUN_005ffa40(uVar6);
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xcc0020;
        local_b8 = uVar4;
        thunk_FUN_0415fcd2(uVar5,local_70 & 0xffffffff,local_70._4_4_,uVar3);
        FUN_00410f20(local_30);
      }
      else {
        FUN_00d77b90(local_60,&local_54);
        (**(code **)(*local_60 + 0xa8))(local_60,param_3,&DAT_01ecf394);
      }
    }
  }
  return;
}

