/* Ghidra address: 01869320 */
/* Ghidra symbol: FUN_01869320 */


void FUN_01869320(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = (**(code **)(param_1 + 0x48))(param_1,param_2,param_3,param_4);
  (**(code **)(*param_2 + 0x10))(param_2,local_20);
  FUN_00410f20(local_20);
  return;
}

