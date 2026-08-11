/* Ghidra address: 018537d0 */
/* Ghidra symbol: FUN_018537d0 */


void FUN_018537d0(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 *local_80;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_80 = auStack_f8;
  local_48 = *param_2;
  local_40 = param_2[1];
  uVar2 = (**(code **)(*param_3 + 0xe8))(param_3);
  FUN_00601800(uVar2,&local_54,&local_64);
  local_38 = thunk_FUN_0412a7bb(0x2002,local_54);
  local_50 = thunk_FUN_0416a623(local_38);
  local_30 = thunk_FUN_0412a7bb(0x2002,local_64);
  local_60 = thunk_FUN_0416a623(local_30);
  uVar2 = (**(code **)(*param_3 + 0xe8))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x50))(param_3);
  lVar1 = local_50;
  FUN_00601960(uVar2,uVar3,local_50,local_60);
  local_70 = lVar1;
  local_68 = thunk_FUN_041e8c78(param_1,4);
  local_d8 = local_40._4_4_ - local_48._4_4_;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = *(undefined4 *)(local_70 + 4);
  local_b8 = *(undefined4 *)(local_70 + 8);
  local_b0 = local_60;
  local_a8 = lVar1;
  local_a0 = 0;
  local_98 = 0xcc0020;
  thunk_FUN_03cc01a5(param_1,local_48 & 0xffffffff,local_48._4_4_,(int)local_40 - (int)local_48);
  thunk_FUN_041e8c78(param_1,local_68);
  thunk_FUN_04172795(local_30);
  thunk_FUN_03d5bf3d(local_30);
  thunk_FUN_04172795(local_38);
  thunk_FUN_03d5bf3d(local_38);
  return;
}

