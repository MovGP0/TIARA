/* Ghidra address: 00c7c340 */
/* Ghidra symbol: FUN_00c7c340 */


undefined8 FUN_00c7c340(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00c7bdb0(local_20,local_res10[0]);
  if (local_20[0] == (longlong *)0x0) {
    FUN_00414480(param_1);
  }
  else {
    (**(code **)(*local_20[0] + 0x50))(local_20[0],param_1);
  }
  FUN_0041b800(local_20);
  FUN_0041b800(local_res10);
  return param_1;
}

