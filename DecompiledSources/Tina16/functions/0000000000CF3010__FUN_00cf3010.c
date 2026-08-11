/* Ghidra address: 00cf3010 */
/* Ghidra symbol: FUN_00cf3010 */


undefined8 FUN_00cf3010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28;
  undefined2 local_24;
  ushort local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  undefined8 local_10;
  
  local_58 = 0;
  local_50 = 0;
  local_10 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_008745f0(&local_10);
  FUN_0043e130(&local_50,param_2);
  FUN_00877e10(&local_38,local_50,local_10);
  FUN_0043e130(&local_58,param_3);
  FUN_00877e10(&local_40,local_58,local_10);
  FUN_0041b800(&local_10);
  FUN_0040d200(local_30,0x20,0);
  FUN_00409a70(s_NTLMSSP_01eb2214,local_30,8);
  local_28 = 1;
  local_24 = DAT_01eb220c;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = (ushort)*(undefined8 *)(local_38 + -8);
  }
  local_1c = 0x20;
  local_18 = 0;
  if (local_40 != 0) {
    local_18 = (undefined2)*(undefined8 *)(local_40 + -8);
  }
  local_14 = local_20 + 0x20;
  local_28 = FUN_00874ab0(CONCAT22((short)((uint)local_14 >> 0x10),1));
  local_24 = FUN_00874ab0(local_24);
  local_20 = FUN_00874ab0(local_20);
  local_1e = local_20;
  local_1c = FUN_00874ac0(local_1c);
  local_18 = FUN_00874ab0(local_18);
  local_16 = local_18;
  local_14 = FUN_00874ac0(local_14);
  FUN_00878310(&local_48,local_30,0x20);
  FUN_00878d40(&local_48,local_38,0,0xffffffff);
  FUN_00878d40(&local_48,local_40,0,0xffffffff);
  FUN_00cdb4b0(&PTR_FUN_00cdc838,param_1,local_48);
  FUN_00414560(&local_58,2);
  FUN_00417840(&local_48,&DAT_0086e978,3);
  FUN_0041b800(&local_10);
  return param_1;
}

