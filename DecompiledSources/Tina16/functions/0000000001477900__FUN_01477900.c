/* Ghidra address: 01477900 */
/* Ghidra symbol: FUN_01477900 */


undefined8 FUN_01477900(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00416cd0(&local_10,3,local_res10,&DAT_014779f8,local_res18);
  if (local_res20 != 0) {
    FUN_00416cd0(&local_10,3,local_10,&LAB_01477a08,local_res20);
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,3);
  return param_1;
}

