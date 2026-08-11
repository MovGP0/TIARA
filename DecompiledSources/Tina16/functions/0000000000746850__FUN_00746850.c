/* Ghidra address: 00746850 */
/* Ghidra symbol: FUN_00746850 */


undefined8 FUN_00746850(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_3 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002108);
    local_18 = 0;
    local_20[0] = param_4;
    FUN_00442f70(param_2,local_10,local_20,0);
  }
  else {
    FUN_007463c0(param_1,param_2,param_3,param_4);
  }
  FUN_00414480(&local_10);
  return param_2;
}

