/* Ghidra address: 01276cb0 */
/* Ghidra symbol: FUN_01276cb0 */


undefined8 FUN_01276cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01276bf0(param_1,local_20,local_res18[0]);
  if (local_20[0] == (longlong *)0x0) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*local_20[0] + 0x100))(local_20[0],param_2,L"value");
  }
  FUN_0041b800(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

