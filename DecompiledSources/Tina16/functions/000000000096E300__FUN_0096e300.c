/* Ghidra address: 0096e300 */
/* Ghidra symbol: FUN_0096e300 */


undefined8
FUN_0096e300(undefined8 param_1,char param_2,undefined1 param_3,longlong *param_4,undefined8 param_5
            ,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_108;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_108;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (param_4 == (longlong *)0x0) {
    local_e8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    local_d8 = 0xffffffffffffffff;
    local_d0 = 0xffffffffffffffff;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0xffffffffffffffff;
    local_a8 = 0xffffffffffffffff;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = param_5;
    local_80 = param_6;
    FUN_0096e0b0(local_res8,0,param_3,0xffffffffffffffff);
  }
  else {
    local_48 = (**(code **)(*param_4 + 0x50))(param_4);
    local_70 = (**(code **)(*param_4 + 0x58))(param_4);
    local_68 = (**(code **)(*param_4 + 0x60))(param_4);
    local_60 = (**(code **)(*param_4 + 0x68))(param_4);
    local_58 = (**(code **)(*param_4 + 0x70))(param_4);
    local_50 = (**(code **)(*param_4 + 0x18))(param_4);
    local_40 = (**(code **)(*param_4 + 0x20))(param_4);
    uVar2 = (**(code **)(*param_4 + 0x28))(param_4);
    uVar3 = (**(code **)(*param_4 + 0x30))(param_4);
    uVar4 = (**(code **)(*param_4 + 0x38))(param_4);
    (**(code **)(*param_4 + 0x78))(param_4,&local_38);
    uVar5 = (**(code **)(*param_4 + 0x40))(param_4);
    local_90 = (**(code **)(*param_4 + 0x48))(param_4);
    local_e8 = local_70;
    local_e0 = local_68;
    local_d8 = local_60;
    local_d0 = local_58;
    local_c8 = local_50;
    local_c0 = local_40;
    local_a0 = local_38;
    local_88 = param_5;
    local_80 = param_6;
    local_b8 = uVar2;
    local_b0 = uVar3;
    local_a8 = uVar4;
    local_98 = uVar5;
    FUN_0096e0b0(local_res8,0,param_3,local_48);
  }
  FUN_00414520(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

