/* Ghidra address: 006019b0 */
/* Ghidra symbol: FUN_006019b0 */


void FUN_006019b0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 *local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  short local_9e;
  int local_98;
  undefined4 local_94;
  undefined1 local_8e [2];
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  
  local_c0 = auStack_f8;
  FUN_0040d200(local_8e,6,0);
  FUN_0040d200(&local_a0,0x10,0);
  uVar5 = thunk_FUN_03ea2ad7(param_2,local_88);
  FUN_00601990(uVar5);
  FUN_00601790(local_78,&local_54,&local_64,2);
  FUN_00601790(local_70,&local_34,&local_44,0xffffffff);
  local_50 = 0;
  local_60 = 0;
  local_30 = 0;
  local_40 = 0;
  local_50 = FUN_00409570(local_54);
  local_60 = FUN_00409570(local_64);
  local_30 = FUN_00409570(local_34);
  local_40 = FUN_00409570(local_44);
  uVar1 = local_60;
  local_d8 = 2;
  FUN_00601820(local_78,0,local_50,local_60);
  lVar3 = local_30;
  uVar2 = local_40;
  local_d8 = 0xffffffff;
  FUN_00601820(local_70,0,local_30,local_40);
  if (param_3 != '\0') {
    local_a4 = local_34 + local_44 + local_64 + 0x16;
    (**(code **)(*param_1 + 0x20))(param_1,&local_a4,4);
  }
  local_8c = 1;
  local_8a = 1;
  (**(code **)(*param_1 + 0x20))(param_1,local_8e,6);
  lVar4 = local_30;
  local_b0 = local_30;
  local_a0 = *(undefined1 *)(local_30 + 4);
  local_9f = *(undefined1 *)(local_30 + 8);
  local_9e = *(short *)(local_30 + 0xc) * *(short *)(local_30 + 0xe);
  local_98 = local_34 + local_44 + local_64;
  local_94 = 0x16;
  (**(code **)(*param_1 + 0x20))(param_1,&local_a0,0x10);
  local_b8 = lVar4;
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + *(int *)(lVar4 + 8);
  (**(code **)(*param_1 + 0x20))(param_1,lVar3,local_34);
  (**(code **)(*param_1 + 0x20))(param_1,uVar2,local_44);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1,local_64);
  FUN_004095f0(local_30,local_34);
  FUN_004095f0(local_40,local_44);
  FUN_004095f0(local_50,local_54);
  FUN_004095f0(local_60,local_64);
  thunk_FUN_0416f828(local_70);
  thunk_FUN_0416f828(local_78);
  return;
}

