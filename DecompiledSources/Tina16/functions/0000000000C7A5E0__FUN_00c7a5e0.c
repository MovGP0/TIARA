/* Ghidra address: 00c7a5e0 */
/* Ghidra symbol: FUN_00c7a5e0 */


void FUN_00c7a5e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    (**(code **)(param_1 + 0x378))(*(undefined8 *)(param_1 + 0x380),param_1,param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return;
}

