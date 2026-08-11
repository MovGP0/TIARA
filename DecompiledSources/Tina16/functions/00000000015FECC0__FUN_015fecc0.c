/* Ghidra address: 015fecc0 */
/* Ghidra symbol: FUN_015fecc0 */


undefined8 FUN_015fecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00416cd0(&local_10,3,local_res10,L"\\Wow6432Node",local_res18);
  cVar1 = FUN_005ea880(param_4,local_10,0);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_10,local_res10,local_res18);
    FUN_00414ad0(param_1,local_10);
  }
  else {
    FUN_00414ad0(param_1,local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return param_1;
}

