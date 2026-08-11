/* Ghidra address: 015f8f20 */
/* Ghidra symbol: FUN_015f8f20 */


undefined8 FUN_015f8f20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_004144d0(param_1);
  if (param_2 != 0) {
    uVar1 = _get_error_str(param_2);
    FUN_00415430(&local_20,uVar1,0);
    FUN_00416880(&local_10,local_20);
    FUN_00415dd0(param_1,local_10,0);
  }
  FUN_004144d0(&local_20);
  FUN_00414560(&local_18,2);
  return param_1;
}

