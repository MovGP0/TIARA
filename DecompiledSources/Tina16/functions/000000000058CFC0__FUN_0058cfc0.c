/* Ghidra address: 0058cfc0 */
/* Ghidra symbol: FUN_0058cfc0 */


void FUN_0058cfc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_110;
  undefined1 local_108 [256];
  
  local_110 = 0;
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_00416910(local_108,param_3,0xff);
    FUN_0058ca60(param_1,param_2,local_108);
  }
  else if (cVar1 == '\n') {
    FUN_0058cda0(param_1,param_2,param_3);
  }
  else if (cVar1 == '\v') {
    FUN_004168e0(&local_110,param_3);
    FUN_0058d280(param_1,param_2,local_110);
  }
  else if (cVar1 == '\x12') {
    FUN_00591290(&DAT_0058e2c8,param_1,param_2,param_3);
  }
  FUN_00414520(&local_110);
  return;
}

