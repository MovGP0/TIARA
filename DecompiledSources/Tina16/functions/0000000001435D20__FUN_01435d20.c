/* Ghidra address: 01435d20 */
/* Ghidra symbol: FUN_01435d20 */


undefined8 FUN_01435d20(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x38))(param_1,local_20);
  FUN_00ea9ef0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

