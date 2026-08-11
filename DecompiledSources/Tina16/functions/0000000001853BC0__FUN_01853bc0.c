/* Ghidra address: 01853bc0 */
/* Ghidra symbol: FUN_01853bc0 */


void FUN_01853bc0(longlong *param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_70 = auStack_d8;
  local_68 = 0xcc0020;
  if (param_4 != '\0') {
    local_68 = 0x330008;
  }
  uVar6 = thunk_FUN_040ef593(0);
  local_50 = thunk_FUN_04137b5f(uVar6);
  uVar6 = (**(code **)(*param_2 + 0xe8))(param_2);
  thunk_FUN_041a19a1(local_50,uVar6);
  uVar6 = thunk_FUN_040ef593(0);
  local_48 = thunk_FUN_04137b5f(uVar6);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  local_b8 = 0;
  local_58 = thunk_FUN_03c9ff5e(uVar1,uVar2,1,1);
  uVar6 = thunk_FUN_040ef593(0);
  local_40 = thunk_FUN_04137b5f(uVar6);
  uVar6 = (**(code **)(*param_1 + 0xe8))(param_1);
  thunk_FUN_041a19a1(local_40,uVar6);
  thunk_FUN_041a19a1(local_48,local_58);
  iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  if (iVar3 == iVar4) {
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar3 == iVar4) {
      uVar1 = FUN_005fbf20(param_3);
      local_64 = thunk_FUN_03e3a7dc(local_50,uVar1);
      uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      local_b8 = CONCAT44(local_b8._4_4_,uVar2);
      local_b0 = local_50;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = local_68;
      thunk_FUN_0415fcd2(local_48,0,0,uVar1);
      thunk_FUN_03e3a7dc(local_50,local_64);
      goto LAB_01853f96;
    }
  }
  local_38 = thunk_FUN_04137b5f(local_50);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  local_30 = thunk_FUN_04181813(local_50,uVar1,uVar2);
  thunk_FUN_041e8c78(local_38,4);
  thunk_FUN_041a19a1(local_38,local_30);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar5 = (**(code **)(*param_2 + 0x60))(param_2);
  local_90 = (**(code **)(*param_2 + 0x48))(param_2);
  local_b0 = local_50;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0xcc0020;
  local_98 = uVar5;
  local_b8._0_4_ = uVar2;
  thunk_FUN_03c1ffbb(local_38,0,0,uVar1);
  uVar1 = FUN_005fbf20(param_3);
  thunk_FUN_03e3a7dc(local_38,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  local_b8 = CONCAT44(local_b8._4_4_,uVar2);
  local_b0 = local_38;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = local_68;
  thunk_FUN_0415fcd2(local_48,0,0,uVar1);
  thunk_FUN_0416f828(local_30);
  thunk_FUN_041a2fd8(local_38);
LAB_01853f96:
  local_5c = thunk_FUN_0412a071(local_40,0);
  uVar1 = FUN_0042a2a0(0xff,0xff,0xff);
  local_60 = thunk_FUN_03e3a7dc(local_40,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  local_b8 = CONCAT44(local_b8._4_4_,uVar2);
  local_b0 = local_48;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0x8800c6;
  thunk_FUN_0415fcd2(local_40,0,0,uVar1);
  thunk_FUN_0412a071(local_40,local_5c);
  thunk_FUN_03e3a7dc(local_40,local_60);
  thunk_FUN_041a2fd8(local_40);
  thunk_FUN_041a2fd8(local_48);
  thunk_FUN_041a2fd8(local_50);
  thunk_FUN_0416f828(local_58);
  return;
}

