/* Ghidra address: 00d596a0 */
/* Ghidra symbol: FUN_00d596a0 */


void FUN_00d596a0(longlong param_1,longlong *param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00d57480(&local_10,param_2);
  FUN_00414ad0(param_1 + 0x20,local_10);
  (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x10,0x10);
  FUN_00414480(&local_10);
  return;
}

