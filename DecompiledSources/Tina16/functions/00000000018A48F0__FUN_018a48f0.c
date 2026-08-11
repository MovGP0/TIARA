/* Ghidra address: 018a48f0 */
/* Ghidra symbol: FUN_018a48f0 */


undefined8 FUN_018a48f0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int local_res18;
  int local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_14 = FUN_00414cb0(param_2);
  local_res20 = local_14;
  if (param_3 + param_4 + 10 <= local_14) {
    local_res20 = param_4 + 10;
  }
  if (param_3 < 10) {
    local_res20 = local_res20 + param_3;
    local_res18 = 1;
  }
  else {
    local_res18 = param_3 + -10;
    local_res20 = local_res20 + 10;
  }
  FUN_00414480(&local_10);
  FUN_00416dc0(&local_10,param_2,(longlong)local_res18,(longlong)local_res20);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

