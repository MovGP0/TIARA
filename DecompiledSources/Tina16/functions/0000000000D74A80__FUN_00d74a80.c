/* Ghidra address: 00d74a80 */
/* Ghidra symbol: FUN_00d74a80 */


void FUN_00d74a80(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_2 + 0x20))(param_2,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378 + 0xd,0xd);
  local_20 = FUN_00628460(&PTR_FUN_00626df0,1,2,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,local_20);
  FUN_00410f20(local_20);
  return;
}

