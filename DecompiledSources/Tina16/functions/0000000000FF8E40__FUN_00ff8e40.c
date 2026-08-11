/* Ghidra address: 00ff8e40 */
/* Ghidra symbol: FUN_00ff8e40 */


void FUN_00ff8e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_01025bf0(param_1,local_res20);
  FUN_00416cd0(&local_10,3,local_res18,local_res20,param_5);
  FUN_00f787d0(param_1,param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res18,3);
  return;
}

