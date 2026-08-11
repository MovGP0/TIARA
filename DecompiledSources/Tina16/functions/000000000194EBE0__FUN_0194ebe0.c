/* Ghidra address: 0194ebe0 */
/* Ghidra symbol: FUN_0194ebe0 */


undefined8 FUN_0194ebe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0046f180(param_2);
  if (*(longlong *)(param_1 + 0x240) != 0) {
    (**(code **)(param_1 + 0x240))(*(undefined8 *)(param_1 + 0x248),local_res18[0],param_2);
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    (**(code **)(param_1 + 0x250))(*(undefined8 *)(param_1 + 600),param_1,local_res18[0],param_2);
  }
  FUN_00414480(local_res18);
  return param_2;
}

