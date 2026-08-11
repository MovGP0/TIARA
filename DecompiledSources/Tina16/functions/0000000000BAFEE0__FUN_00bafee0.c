/* Ghidra address: 00bafee0 */
/* Ghidra symbol: FUN_00bafee0 */


undefined8 FUN_00bafee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  FUN_00baff70(param_1,local_20,param_3);
  if (local_20[0] == (longlong *)0x0) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*local_20[0] + 0x108))(local_20[0],param_2);
  }
  FUN_0041b800(local_20);
  return param_2;
}

