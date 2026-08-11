/* Ghidra address: 00d250b0 */
/* Ghidra symbol: FUN_00d250b0 */


void FUN_00d250b0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  FUN_00409a70(param_2,param_1[0xd],(longlong)local_res18[0]);
  FUN_00d24f60(param_1,(int)param_1[0xf]);
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

