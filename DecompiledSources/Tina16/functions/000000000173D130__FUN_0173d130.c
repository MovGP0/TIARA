/* Ghidra address: 0173d130 */
/* Ghidra symbol: FUN_0173d130 */


void FUN_0173d130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  (**(code **)*param_1)(param_1,0,local_res10,local_res18[0],param_4,param_5);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  return;
}

