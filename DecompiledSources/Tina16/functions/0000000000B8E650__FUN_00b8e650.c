/* Ghidra address: 00b8e650 */
/* Ghidra symbol: FUN_00b8e650 */


undefined8 FUN_00b8e650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00416ba0(&local_10,L"tina.exe.Strings.",local_res18);
  FUN_00b8a7d0(param_1,param_2,local_10,local_res20);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res18,2);
  return param_2;
}

