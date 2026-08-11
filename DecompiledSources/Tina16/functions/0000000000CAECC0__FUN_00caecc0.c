/* Ghidra address: 00caecc0 */
/* Ghidra symbol: FUN_00caecc0 */


void FUN_00caecc0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  (**(code **)(*param_1 + 0x150))(param_1,0,local_res10[0]);
  FUN_0041b800(local_res10);
  return;
}

