/* Ghidra address: 0096fb60 */
/* Ghidra symbol: FUN_0096fb60 */


longlong * FUN_0096fb60(longlong *param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_f8;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_f8;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  if (param_4 == (longlong *)0x0) {
    local_d8 = 0xffffffffffffffff;
    local_d0 = 0xffffffffffffffff;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0xffffffffffffffff;
    local_a8 = 0xffffffffffffffff;
    local_a0 = 0xffffffffffffffff;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    (**(code **)*local_res8)(local_res8,param_3,0xffffffffffffffff,0xffffffffffffffff);
  }
  else {
    local_48 = (**(code **)(*param_4 + 0x50))(param_4);
    local_40 = (**(code **)(*param_4 + 0x58))(param_4);
    local_70 = (**(code **)(*param_4 + 0x60))(param_4);
    local_68 = (**(code **)(*param_4 + 0x68))(param_4);
    local_60 = (**(code **)(*param_4 + 0x70))(param_4);
    local_58 = (**(code **)(*param_4 + 0x18))(param_4);
    local_50 = (**(code **)(*param_4 + 0x20))(param_4);
    uVar2 = (**(code **)(*param_4 + 0x28))(param_4);
    uVar3 = (**(code **)(*param_4 + 0x30))(param_4);
    uVar4 = (**(code **)(*param_4 + 0x38))(param_4);
    (**(code **)(*param_4 + 0x78))(param_4,&local_38);
    uVar5 = (**(code **)(*local_res8 + 0x30))(local_res8);
    local_88 = (**(code **)(*local_res8 + 0x38))(local_res8);
    local_d8 = local_70;
    local_d0 = local_68;
    local_c8 = local_60;
    local_c0 = local_58;
    local_b8 = local_50;
    local_98 = local_38;
    local_b0 = uVar2;
    local_a8 = uVar3;
    local_a0 = uVar4;
    local_90 = uVar5;
    (**(code **)*local_res8)(local_res8,param_3,local_48,local_40);
  }
  FUN_00414520(&local_38);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

