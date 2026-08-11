/* Ghidra address: 00d23950 */
/* Ghidra symbol: FUN_00d23950 */


void FUN_00d23950(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  FUN_00409a70(param_2,param_1[0xd],(longlong)local_res18[0]);
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

