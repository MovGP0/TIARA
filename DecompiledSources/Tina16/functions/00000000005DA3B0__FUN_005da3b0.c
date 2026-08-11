/* Ghidra address: 005da3b0 */
/* Ghidra symbol: FUN_005da3b0 */


void FUN_005da3b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0043f750(local_20,param_4);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,local_20[0]);
  FUN_00414480(local_20);
  return;
}

