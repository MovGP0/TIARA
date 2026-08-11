/* Ghidra address: 01854900 */
/* Ghidra symbol: FUN_01854900 */


void FUN_01854900(undefined8 param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                 undefined4 param_5,char param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_a0 = auStack_118;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_2c = 4;
  local_48 = 0;
  local_34._0_4_ = (int)uVar2;
  local_3c._0_4_ = (int)uVar1;
  local_40 = (int)local_34 - (int)local_3c;
  local_34._4_4_ = (int)(uVar2 >> 0x20);
  local_3c._4_4_ = (int)(uVar1 >> 0x20);
  local_44 = local_34._4_4_ - local_3c._4_4_;
  local_80 = 0;
  local_3c = uVar1;
  local_34 = uVar2;
  cVar3 = FUN_00609f90(param_3);
  if (cVar3 == '\x01') {
    local_2c = 1;
  }
  else if ((byte)(cVar3 - 2U) < 4) {
    local_48 = 1;
  }
  if (param_6 != '\0') {
    local_f8 = &local_90;
    local_f0 = &local_98;
    FUN_01854600(auStack_118,param_3,&local_80,&local_88);
  }
  uVar6 = FUN_005ffa40(param_1);
  local_74 = thunk_FUN_041e8c78(uVar6,local_2c);
  uVar6 = FUN_005ffa40(param_1);
  local_50 = thunk_FUN_04137b5f(uVar6);
  uVar6 = (**(code **)(*param_3 + 0xe8))(param_3);
  thunk_FUN_041a19a1(local_50,uVar6);
  FUN_018547c0(auStack_118,local_80,local_90);
  if (param_4 == (longlong *)0x0) {
    uVar6 = FUN_005ffa40(param_1);
    uVar4 = (**(code **)(*param_3 + 0x60))(param_3);
    uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,local_44);
    local_f0 = (undefined8 *)local_50;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,uVar5);
    local_c8 = CONCAT44(local_c8._4_4_,param_5);
    local_d8 = uVar4;
    local_c0 = param_4;
    FUN_01854110(uVar6,local_3c & 0xffffffff,local_3c._4_4_,local_40);
  }
  else {
    local_f8 = &local_68;
    local_f0 = &local_70;
    FUN_01854600(auStack_118,param_4,&local_58,&local_60);
    uVar6 = FUN_005ffa40(param_1);
    uVar4 = (**(code **)(*param_4 + 0x60))(param_4);
    local_d8 = (**(code **)(*param_4 + 0x48))(param_4);
    local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,local_44);
    local_f0 = (undefined8 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_e8 = 0;
    local_d0 = local_68;
    local_c8 = local_58;
    local_c0 = (longlong *)CONCAT44(local_c0._4_4_,local_48);
    local_b8 = 0x8800c6;
    local_e0 = uVar4;
    thunk_FUN_03cc01a5(uVar6,local_3c & 0xffffffff,local_3c._4_4_,local_40);
    local_f8 = (undefined8 *)local_70;
    FUN_01854780(auStack_118,local_58,local_60,local_68);
  }
  FUN_018547c0(auStack_118,local_80,local_90);
  thunk_FUN_041a2fd8(local_50);
  uVar6 = FUN_005ffa40(param_1);
  thunk_FUN_041e8c78(uVar6,local_74);
  if (param_6 != '\0') {
    local_f8 = (undefined8 *)local_98;
    FUN_01854780(auStack_118,local_80,local_88,local_90);
  }
  return;
}

