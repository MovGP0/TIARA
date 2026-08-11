/* Ghidra address: 00d749b0 */
/* Ghidra symbol: FUN_00d749b0 */


void FUN_00d749b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_2 + 0x18))(param_2,param_1 + 2,0xd);
  iVar1 = FUN_00414f50(param_1 + 2,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378 + 0xd,0xd);
  if (iVar1 != 0) {
    iVar1 = FUN_00414f50(param_1 + 2,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378,0xd);
    if (iVar1 != 0) {
      return;
    }
  }
  local_20 = FUN_00628b20(&PTR_FUN_00627390,1,param_2);
  (**(code **)(*param_1 + 0x18))(param_1,local_20);
  FUN_00410f20(local_20);
  return;
}

