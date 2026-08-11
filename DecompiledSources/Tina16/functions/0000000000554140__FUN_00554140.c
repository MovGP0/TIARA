/* Ghidra address: 00554140 */
/* Ghidra symbol: FUN_00554140 */


undefined8 FUN_00554140(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (param_1[6] == 0) {
    FUN_00414480(local_20);
  }
  else {
    (**(code **)(*(longlong *)param_1[6] + -0x60))((longlong *)param_1[6],local_20);
  }
  lVar1 = FUN_005540b0(param_1);
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,local_30);
    FUN_00416cd0(param_2,3,local_30[0],L" = procedure",local_20[0]);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,&local_38);
    FUN_00416cd0(param_2,3,local_38,L" = function",local_20[0]);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return param_2;
}

