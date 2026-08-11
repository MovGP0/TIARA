/* Ghidra address: 00d838d0 */
/* Ghidra symbol: FUN_00d838d0 */


undefined8 FUN_00d838d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 local_25 [13];
  
  (**(code **)(*param_2 + 0x18))(param_2,local_25,0xd);
  iVar1 = FUN_00414f50(local_25,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378 + 0xd,0xd);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00414f50(local_25,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378,0xd), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

