/* Ghidra address: 00f8c0d0 */
/* Ghidra symbol: FUN_00f8c0d0 */


void FUN_00f8c0d0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  (**(code **)(*param_2 + 0x180))(param_2);
  FUN_00414560(&local_res18,3);
  return;
}

