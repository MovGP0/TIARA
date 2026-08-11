/* Ghidra address: 01853a30 */
/* Ghidra symbol: FUN_01853a30 */


void FUN_01853a30(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 *local_60;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = auStack_c8;
  local_48 = *param_2;
  local_40 = param_2[1];
  local_30 = thunk_FUN_04137b5f(param_1);
  uVar5 = (**(code **)(*param_3 + 0xe8))(param_3);
  local_38 = thunk_FUN_041a19a1(local_30,uVar5);
  local_4c = thunk_FUN_041e8c78(param_1,4);
  uVar2 = local_48;
  iVar1 = (int)local_48;
  iVar3 = local_48._4_4_;
  uVar4 = (**(code **)(*param_3 + 0x60))(param_3);
  local_80 = (**(code **)(*param_3 + 0x48))(param_3);
  local_a8 = local_40._4_4_ - iVar3;
  local_a0 = local_30;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0xcc0020;
  local_88 = uVar4;
  thunk_FUN_03c1ffbb(param_1,uVar2 & 0xffffffff,iVar3,(int)local_40 - iVar1);
  thunk_FUN_041e8c78(param_1,local_4c);
  thunk_FUN_041a19a1(local_30,local_38);
  thunk_FUN_041a2fd8(local_30);
  return;
}

