/* Ghidra address: 00cf3270 */
/* Ghidra symbol: FUN_00cf3270 */


undefined8
FUN_00cf3270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  ushort local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  ushort local_44;
  undefined2 local_42;
  int local_40;
  ushort local_3c;
  undefined2 local_3a;
  int local_38;
  ushort local_34;
  undefined2 local_32;
  int local_30;
  ushort local_2c;
  undefined2 local_2a;
  int local_28;
  undefined2 local_24;
  undefined2 local_22;
  int local_20;
  undefined4 local_1c;
  
  local_b0 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_00cf2cc0(&local_68,param_5,param_6);
  FUN_00cf2eb0(&local_70,param_5,param_6);
  FUN_0043e130(&local_90,param_2);
  uVar1 = local_90;
  FUN_00874790(&local_98);
  (**(code **)(*local_98 + 0x70))(local_98,&local_78,uVar1);
  FUN_0043e130(&local_a0,param_3);
  uVar1 = local_a0;
  FUN_00874790(&local_a8);
  (**(code **)(*local_a8 + 0x70))(local_a8,&local_80,uVar1);
  FUN_00874790(&local_b0);
  (**(code **)(*local_b0 + 0x70))(local_b0,&local_88,param_4);
  FUN_00409a70(s_NTLMSSP_01eb2214,local_58,8);
  local_50 = 3;
  local_4c = 0;
  if (local_68 != 0) {
    local_4c = (ushort)*(undefined8 *)(local_68 + -8);
  }
  local_48 = 0x40;
  local_44 = 0;
  if (local_70 != 0) {
    local_44 = (ushort)*(undefined8 *)(local_70 + -8);
  }
  local_40 = local_4c + 0x40;
  local_3c = 0;
  if (local_78 != 0) {
    local_3c = (ushort)*(undefined8 *)(local_78 + -8);
  }
  local_38 = local_40 + (uint)local_44;
  local_34 = 0;
  if (local_88 != 0) {
    local_34 = (ushort)*(undefined8 *)(local_88 + -8);
  }
  local_30 = local_38 + (uint)local_3c;
  local_2c = 0;
  if (local_80 != 0) {
    local_2c = (ushort)*(undefined8 *)(local_80 + -8);
  }
  local_28 = local_30 + (uint)local_34;
  local_24 = 0;
  local_20 = (uint)local_34 + (uint)local_2c;
  local_1c = DAT_01eb2210;
  local_50 = FUN_00874ac0(3);
  local_4c = FUN_00874ab0(local_4c);
  local_4a = local_4c;
  local_48 = FUN_00874ac0(local_48);
  local_44 = FUN_00874ab0(local_44);
  local_42 = local_44;
  local_40 = FUN_00874ac0(local_40);
  local_3c = FUN_00874ab0(local_3c);
  local_3a = local_3c;
  local_38 = FUN_00874ac0(local_38);
  local_34 = FUN_00874ab0(local_34);
  local_32 = local_34;
  local_30 = FUN_00874ac0(local_30);
  local_2c = FUN_00874ab0(local_2c);
  local_2a = local_2c;
  local_28 = FUN_00874ac0(local_28);
  local_24 = FUN_00874ab0(local_24);
  local_22 = local_24;
  local_20 = FUN_00874ac0(local_20);
  local_1c = FUN_00874ac0(local_1c);
  FUN_00878310(&local_60,local_58,0x40);
  FUN_00878d40(&local_60,local_68,0,0xffffffff);
  FUN_00878d40(&local_60,local_70,0,0xffffffff);
  FUN_00878d40(&local_60,local_78,0,0xffffffff);
  FUN_00878d40(&local_60,local_88,0,0xffffffff);
  FUN_00878d40(&local_60,local_80,0,0xffffffff);
  FUN_00cdb4b0(&PTR_FUN_00cdc838,param_1,local_60);
  FUN_00417840(&local_b0,&DAT_0086ea00,2);
  FUN_00414480(&local_a0);
  FUN_0041b800(&local_98);
  FUN_00414480(&local_90);
  FUN_00417840(&local_88,&DAT_0086e978,6);
  return param_1;
}

