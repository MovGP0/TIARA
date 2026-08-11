/* Ghidra address: 0058ce80 */
/* Ghidra symbol: FUN_0058ce80 */


undefined8 FUN_0058ce80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar1 = **(char **)*param_3;
  if (cVar1 == '\x05') {
    FUN_0058d0b0(&local_10,param_2,param_3);
    FUN_00416880(param_1,local_10);
  }
  else if (cVar1 == '\n') {
    FUN_00591060(&DAT_0058e088,&local_20,param_2,param_3);
    FUN_00416880(param_1,local_20);
  }
  else if (cVar1 == '\v') {
    FUN_0058d190(&local_18,param_2,param_3);
    FUN_004168b0(param_1,local_18);
  }
  else if (cVar1 == '\x12') {
    FUN_005911d0(&DAT_0058e2c8,param_1,param_2,param_3);
  }
  else {
    FUN_00414480(param_1);
  }
  FUN_004144d0(&local_20);
  FUN_00414520(&local_18);
  FUN_004144d0(&local_10);
  return param_1;
}

