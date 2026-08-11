/* Ghidra address: 01435d90 */
/* Ghidra symbol: FUN_01435d90 */


void FUN_01435d90(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00ea9d30(local_20,param_2);
  (**(code **)(*param_1 + 0x40))(param_1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

