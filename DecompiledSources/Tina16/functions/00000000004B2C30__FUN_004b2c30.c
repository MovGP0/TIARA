/* Ghidra address: 004b2c30 */
/* Ghidra symbol: FUN_004b2c30 */


longlong * FUN_004b2c30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00416780(&local_18,(short)param_1[6]);
  FUN_00416cd0(&local_10,3,param_2,local_18,param_3);
  (**(code **)(*param_1 + 0x78))(param_1,local_10);
  FUN_00414560(&local_18,2);
  return param_1;
}

