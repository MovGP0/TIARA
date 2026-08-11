/* Ghidra address: 004b3cf0 */
/* Ghidra symbol: FUN_004b3cf0 */


undefined8 FUN_004b3cf0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,local_20,param_3);
  FUN_004b3700(param_1,param_2,local_20[0],0);
  FUN_00414480(local_20);
  return param_2;
}

