/* Ghidra address: 004d7210 */
/* Ghidra symbol: FUN_004d7210 */


void FUN_004d7210(longlong *param_1,undefined2 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  FUN_00414480(local_20);
  FUN_00417320(local_20,param_2,param_3);
  (**(code **)(*param_1 + 0x58))(param_1,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_20);
  return;
}

