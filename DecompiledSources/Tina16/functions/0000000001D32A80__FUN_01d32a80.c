/* Ghidra address: 01d32a80 */
/* Ghidra symbol: FUN_01d32a80 */


void FUN_01d32a80(undefined8 param_1,longlong *param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_01d32990(param_1,local_20);
  (**(code **)(*param_2 + 0x60))(param_2,local_20[0]);
  FUN_00414480(local_20);
  return;
}

