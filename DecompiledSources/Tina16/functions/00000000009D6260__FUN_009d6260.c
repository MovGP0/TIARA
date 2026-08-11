/* Ghidra address: 009d6260 */
/* Ghidra symbol: FUN_009d6260 */


undefined4 FUN_009d6260(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004168e0(&local_28,local_res10[0]);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1a0))(*(longlong **)(param_1 + 0x18),local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  FUN_00414480(local_res10);
  return local_20;
}

