/* Ghidra address: 00b3b310 */
/* Ghidra symbol: FUN_00b3b310 */


undefined8 FUN_00b3b310(undefined8 param_1,uint param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0043fba0(&local_10,param_2 & 0xff,2);
  FUN_00415dd0(&local_18,local_10,0);
  FUN_0043fba0(&local_20,(param_2 & 0xff00) >> 8,2);
  FUN_00415dd0(&local_28,local_20,0);
  FUN_0043fba0(&local_30,(param_2 & 0xff0000) >> 0x10,2);
  FUN_00415dd0(&local_38,local_30,0);
  FUN_00415980(param_1,4,&LAB_00b3b498,local_18,local_28,local_38);
  FUN_004144d0(&local_38);
  FUN_00414480(&local_30);
  FUN_004144d0(&local_28);
  FUN_00414480(&local_20);
  FUN_004144d0(&local_18);
  FUN_00414480(&local_10);
  return param_1;
}

