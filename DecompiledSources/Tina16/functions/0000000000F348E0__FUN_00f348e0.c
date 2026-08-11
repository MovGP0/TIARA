/* Ghidra address: 00f348e0 */
/* Ghidra symbol: FUN_00f348e0 */


void FUN_00f348e0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,local_20);
  FUN_00453060(param_2,local_20[0]);
  FUN_00414480(local_20);
  return;
}

