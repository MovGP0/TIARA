/* Ghidra address: 004b1ca0 */
/* Ghidra symbol: FUN_004b1ca0 */


undefined8 FUN_004b1ca0(longlong *param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = (**(code **)(param_1[1] + 0x38))(param_1[1],1,param_1);
  (**(code **)(*param_1 + 0x18))(param_1,local_20);
  return local_20[0];
}

