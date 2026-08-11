/* Ghidra address: 015f8c10 */
/* Ghidra symbol: FUN_015f8c10 */


undefined8 FUN_015f8c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004167d0(&local_10,param_3);
  uVar1 = _get_digital_node_value_real_processname(param_1,param_2,local_10);
  FUN_00414480(&local_10);
  return uVar1;
}

