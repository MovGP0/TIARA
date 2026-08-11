/* Ghidra address: 00caed30 */
/* Ghidra symbol: FUN_00caed30 */


void FUN_00caed30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00416ba0(local_20,param_2,&LAB_00caedd4);
  (**(code **)(*param_1 + 0x148))(param_1,local_20[0],local_res18[0]);
  FUN_00414480(local_20);
  FUN_0041b800(local_res18);
  return;
}

