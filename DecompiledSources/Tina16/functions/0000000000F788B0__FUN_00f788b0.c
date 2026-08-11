/* Ghidra address: 00f788b0 */
/* Ghidra symbol: FUN_00f788b0 */


void FUN_00f788b0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e130(&local_10,local_res18[0]);
  (**(code **)(*param_2 + 0x78))(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

