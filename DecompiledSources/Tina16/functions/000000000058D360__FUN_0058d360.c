/* Ghidra address: 0058d360 */
/* Ghidra symbol: FUN_0058d360 */


undefined8 FUN_0058d360(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  cVar1 = **(char **)*param_3;
  if (cVar1 == '\x05') {
    FUN_0058d0b0(param_1,param_2,param_3);
  }
  else if (cVar1 == '\n') {
    FUN_00591060(&DAT_0058e088,param_1,param_2,param_3);
  }
  else if (cVar1 == '\v') {
    FUN_0058d190(&local_10,param_2,param_3);
    FUN_00415530(param_1,local_10,0);
  }
  else if (cVar1 == '\x12') {
    FUN_005911d0(&DAT_0058e2c8,&local_18,param_2,param_3);
    FUN_00415dd0(param_1,local_18,0);
  }
  else {
    FUN_004144d0(param_1);
  }
  FUN_00414480(&local_18);
  FUN_00414520(&local_10);
  return param_1;
}

