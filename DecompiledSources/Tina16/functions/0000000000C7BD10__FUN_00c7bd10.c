/* Ghidra address: 00c7bd10 */
/* Ghidra symbol: FUN_00c7bd10 */


undefined8 FUN_00c7bd10(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00c7bc70(local_20,local_res10[0]);
  (**(code **)(*local_20[0] + 0x100))(local_20[0],param_1);
  FUN_0041b800(local_20);
  FUN_0041b800(local_res10);
  return param_1;
}

