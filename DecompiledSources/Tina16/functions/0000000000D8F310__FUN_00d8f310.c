/* Ghidra address: 00d8f310 */
/* Ghidra symbol: FUN_00d8f310 */


char FUN_00d8f310(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_1e [13];
  char local_11;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x18))(param_2,local_1e,0xd);
  iVar1 = FUN_00414f50(local_1e,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378 + 0xd,0xd);
  if (iVar1 != 0) {
    iVar1 = FUN_00414f50(local_1e,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378,0xd);
    if (iVar1 != 0) {
      local_11 = '\0';
      goto LAB_00d8f3b2;
    }
  }
  local_11 = '\x01';
LAB_00d8f3b2:
  if ((local_11 != '\0') && (param_3 != 0)) {
    local_10 = FUN_00628b20(&PTR_FUN_00627390,1,param_2);
    FUN_00d57480(&local_38,local_10);
    FUN_00414ad0(param_3,local_38);
    FUN_00d57480(&local_40,local_10);
    FUN_00414ad0(param_3 + 0x20,local_40);
    FUN_00d57480(&local_48,local_10);
    FUN_00414ad0(param_3 + 8,local_48);
    FUN_00d57480(&local_50,local_10);
    FUN_00414ad0(param_3 + 0x10,local_50);
    FUN_00d57480(&local_58,local_10);
    FUN_00414ad0(param_3 + 0x18,local_58);
    FUN_00410f20(local_10);
  }
  FUN_00414560(&local_58,5);
  return local_11;
}

