/* Ghidra address: 00c84170 */
/* Ghidra symbol: FUN_00c84170 */


undefined8
FUN_00c84170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_c [4];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00c83750(param_1,param_2,local_res18,local_res20,param_5,local_c);
  FUN_00414560(&local_res18,3);
  return param_2;
}

