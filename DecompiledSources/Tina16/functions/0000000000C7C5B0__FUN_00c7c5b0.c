/* Ghidra address: 00c7c5b0 */
/* Ghidra symbol: FUN_00c7c5b0 */


undefined8 *
FUN_00c7c5b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  cVar1 = FUN_00c7c3f0(local_res10,local_res18,param_1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1,local_res20);
  }
  else {
    FUN_0043ea00(&local_10,*param_1);
    FUN_00414ad0(param_1,local_10);
  }
  FUN_00414480(&local_10);
  FUN_0041b800(&local_res10);
  FUN_00414560(&local_res18,2);
  return param_1;
}

