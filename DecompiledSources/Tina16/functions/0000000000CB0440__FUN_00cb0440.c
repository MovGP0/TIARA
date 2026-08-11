/* Ghidra address: 00cb0440 */
/* Ghidra symbol: FUN_00cb0440 */


void FUN_00cb0440(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 local_res18 [2];
  undefined1 local_1c [12];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0041b910(param_5);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,local_1c,&LAB_00cb0518,param_4,param_5);
  FUN_00414480(local_res18);
  FUN_0041b800(&param_5);
  return;
}

