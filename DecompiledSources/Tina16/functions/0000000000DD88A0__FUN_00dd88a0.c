/* Ghidra address: 00dd88a0 */
/* Ghidra symbol: FUN_00dd88a0 */


void FUN_00dd88a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00dd8750(local_20,param_1);
  (**(code **)(*local_20[0] + 0x20))(local_20[0],local_res10[0]);
  FUN_0041b800(local_20);
  FUN_0041b800(local_res10);
  return;
}

