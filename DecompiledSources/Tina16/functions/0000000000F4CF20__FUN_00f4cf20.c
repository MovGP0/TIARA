/* Ghidra address: 00f4cf20 */
/* Ghidra symbol: FUN_00f4cf20 */


void FUN_00f4cf20(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),0,param_2,local_res18);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,param_2,local_res20);
  FUN_00414560(&local_res18,2);
  return;
}

