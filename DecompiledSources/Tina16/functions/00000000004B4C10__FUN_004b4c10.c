/* Ghidra address: 004b4c10 */
/* Ghidra symbol: FUN_004b4c10 */


void FUN_004b4c10(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_004167d0(local_20,param_2);
  (**(code **)(*param_1 + 0x60))(param_1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

