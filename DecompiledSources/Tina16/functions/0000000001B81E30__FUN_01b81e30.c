/* Ghidra address: 01b81e30 */
/* Ghidra symbol: FUN_01b81e30 */


undefined8 FUN_01b81e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  char local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e1a0(&local_10,local_res18[0]);
  FUN_01b81c80(param_1,param_2,local_10,&local_11);
  if (local_11 != '\0') {
    FUN_00414b50(&local_10,local_res18[0]);
    FUN_01b81c80(param_1,param_2,local_10,&local_11);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

