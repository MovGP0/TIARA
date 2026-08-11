/* Ghidra address: 00957750 */
/* Ghidra symbol: FUN_00957750 */


undefined8 FUN_00957750(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 *local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  (**(code **)*param_2)(param_2,local_30);
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_30[0]);
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)*param_2)(param_2,&local_38);
    local_40 = (**(code **)(*param_1 + 8))(param_1,local_38);
  }
  local_20[0] = param_2;
  FUN_00597e50(param_1[1] + 8,local_20);
  FUN_004145c0(&local_38,2);
  return local_40;
}

