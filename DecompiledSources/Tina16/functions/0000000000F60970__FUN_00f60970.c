/* Ghidra address: 00f60970 */
/* Ghidra symbol: FUN_00f60970 */


void FUN_00f60970(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (param_3 < 0x6f) {
    FUN_01b20fc0(&local_18,param_1);
    FUN_00416880(param_2,local_18);
  }
  else {
    FUN_01b20f00(&local_10,param_1);
    FUN_004168b0(param_2,local_10);
  }
  FUN_004144d0(&local_18);
  FUN_00414520(&local_10);
  return;
}

