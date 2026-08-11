/* Ghidra address: 00de8b50 */
/* Ghidra symbol: FUN_00de8b50 */


undefined8
FUN_00de8b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00de7660(local_20,local_res10,local_res18,param_5);
  FUN_00415dd0(&local_28,local_res20,0);
  FUN_00b0d0c0(&local_10,local_20[0],local_28);
  FUN_00b0d1f0(&local_30,local_10,&DAT_00de8db0,&DAT_00de8dbc);
  FUN_00414be0(&local_10,local_30);
  FUN_00b0d1f0(&local_38,local_10,&DAT_00de8dc4,0);
  FUN_00414be0(&local_10,local_38);
  FUN_00b0d1f0(&local_40,local_10,&DAT_00de8dbc,&DAT_00de8dc4);
  FUN_00414be0(&local_10,local_40);
  FUN_00b0d1f0(&local_48,local_10,&DAT_00de8dcc,0);
  FUN_00414be0(&local_10,local_48);
  FUN_004168b0(&local_58,local_10);
  FUN_0043ea00(&local_50,local_58);
  FUN_004168e0(param_1,local_50);
  FUN_00414560(&local_58,2);
  FUN_004145c0(&local_48,4);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  FUN_00414520(&local_10);
  FUN_00414560(&local_res10,4);
  return param_1;
}

