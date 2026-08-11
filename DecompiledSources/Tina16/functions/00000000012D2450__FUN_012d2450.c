/* Ghidra address: 012d2450 */
/* Ghidra symbol: FUN_012d2450 */


undefined8 FUN_012d2450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00450070(&local_10,local_res18[0],&DAT_012d2514,&DAT_012d2524,1);
  FUN_00414b50(local_res18,local_10);
  FUN_00416ba0(param_2,L"file://",local_res18[0]);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

